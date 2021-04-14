

# Team 25 Submission to Wolf Hacks 21 -- 2nd Place Winner

<img src="https://challengepost-s3-challengepost.netdna-ssl.com/photos/production/software_photos/001/480/133/datas/gallery.jpg">

## Inspiration
A good environment and sustainability are absolutely necessary for human survival, however, without any organization, a fully sustainable planet wouldn't be able to survive. Our group, Team 25, were motivated to create a product that would manage all of the systems on Planet Howler. 

## What it does
Our product, Howler Heart, condenses all of the information from the various systems into a single, primary dashboard. We've managed to create a single analytics page that shows live updates of the weather, generated power, and agriculture. By using wireless technologies, we are able to seamlessly transfer data from various locations into Howler Heart, providing insightful data about the sustainability on the planet.

## How we built it
By using various sensors attached to an Arduino, we are able to collect a lot of data on the sustainability on planet Howler. C++ is able to parse the data coming from the Arduino and store it as data to transfer wirelessly. Then, Figma was used to create the final Howler Heart dashboard and provide live updates about the various systems on the planet. A typescript API was also created for surveillance of greenhouses.

## Challenges we ran into
A challenge we came across was creating a software using C++ using SFML. Since SFML wasn't meant to prototype analytics C++ software, we attempted to use QT, another C++ API. However, our lack of knowledge with QT made it difficult to create a viable solution. This is why we decided to create a frontend analytics board with Figma.

Another challenge we faced was working collaboratively through an online interface. While the entirety of our group got along very well, completing online group work was very difficult, especially when creating 3D models and creating the physical Arduino prototype. However, we managed to overcome this challenge and ended up creating fairly good work.

Our final challenge was serial communication between the Arduino and the computer. To fix this, we implemented an external C++ library to make the Arduino function.

Check us out https://devpost.com/software/howler-heart?ref_content=user-portfolio&ref_feature=in_progress
Demo @ https://www.figma.com/proto/JTQjF38vPDt4dh2QsdEpF9/Howler-Heart?node-id=13%3A3&scaling=min-zoom&page-id=0%3A1
