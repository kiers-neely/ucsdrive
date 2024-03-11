from setuptools import setup

package_name = 'face_rec_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kneely',
    maintainer_email='kneely@ucsd.edu',
    description='TODO: Package description',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
              'face_publisher = face_rec_pkg.face_publisher:main',
              'ride_match_publisher = face_rec_pkg.ride_match_publisher:main',
        ],
    },
)