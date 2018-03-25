			<Page
				altRadarBg.enabled='true'
				background.enabled='false'
				compass.enabled='false'
				DropToParent='true'
				MinimumSize='166,137'
				Name='radarSpherical'
				OnDisable='compass.enabled=true
altRadarFg.enabled=false
radarwidget.enabled=false'
				OnEnable='compass.enabled=false
altRadarFg.enabled=true
radarwidget.enabled=true'
				PackLocation='cfc,fff'
				PackLocationProp='0000/0001,0000/0001'
				PackSize='p,p'
				PackSizeProp='0196/0196,0198/0198'
				radarwidget.enabled='true'
				ScrollExtent='196,198'
				Size='196,198'
				SizeIncrementLocked='true'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.80'
			>
				<Data
					arrow='inner.square.blips.arrow'
					arrowBracket='inner.square.blips.arrowBracket'
					arrowGroup='inner.square.blips.arrowGroup'
					arrowWaypoint='inner.square.blips.arrowWaypoint'
					background='background'
					blipBracket='inner.square.blips.blip_bracket'
					blipCorpse='inner.square.blips.blip_corpse'
					blipDefault='inner.square.blips.blip_default'
					blipGroup='inner.square.blips.blip_group'
					blipStructure='inner.square.blips.blip_structure'
					blipWaypoint='inner.square.blips.blip_waypoint'
					effectorWaypoint='/effectors.color.cycle.bgtint.greyWhite'
					iconimage='iconImage'
					Name='CodeData'
					radarcompass='inner.square.compass'
					radarCompassTop='inner.square.compassTop'
					rangeindicator='inner.square.range'
					square='inner.square'
					waypointarrow='inner.square.blips.waypointarrow'
					zoombottom='altradarfg.zoombottom'
					zoomtop='altradarfg.zoomtop'
				/>
				<Page
					Location='9,0'
					Name='inner'
					PackSize='a,a'
					PackSizeProp='0017/0001,0019/0001'
					ScrollExtent='179,179'
					Size='179,179'
				>
					<Page
						Name='square'
						PackLocation='cfc'
						PackLocationProp='0000/0001,xxxx/xxxx'
						ScrollExtent='179,179'
						Size='179,179'
					>
						<Image
							Color='#018BA9'
							Enabled='false'
							GetsInput='true'
							MinimumScrollExtent='133,123'
							Name='compassTop'
							Opacity='0.30'
							OpacityRelativeMin='0.30'
							PackLocation='cfc,cfc'
							PackLocationProp='0000/0001,0000/0001'
							PackSize='p,p'
							PackSizeProp='0179/0179,0179/0179'
							PalColor='radar'
							ScrollExtent='179,179'
							Size='179,179'
							SourceRect='31,37,206,212'
							SourceResource='ui_radar_2'
						/>
						<Page
							Name='blips'
							OpacityRelativeMin='1.00'
							PackSize='a,a'
							PackSizeProp='0000/0001,0000/0001'
							ScrollExtent='179,179'
							Size='179,179'
						>
							<Image
								BackgroundColor='#FFFFFF'
								Location='55,0'
								Name='arrowGroup'
								OpacityRelativeMin='1.00'
								ScrollExtent='19,19'
								Size='19,19'
								Style='/Styles.Icon.Misc.star'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='82,40'
								Name='blip_group'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='/Styles.Icon.Misc.star'
							/>
							<Image
								Location='78,0'
								Name='arrowBracket'
								OpacityRelativeMin='1.00'
								PackLocation='cfc,npn'
								PackLocationProp='0000/0001,0000/0179'
								PackSize='p,p'
								PackSizeProp='0022/0179,0026/0179'
								ScrollExtent='22,26'
								Size='22,26'
								Style='images.arrows.bracket'
								TextOpacityRelativeApply='true'
								UserResizable='true'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='77,61'
								Name='blip_bracket'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='images.blips.bracket'
							/>
							<Image
								Location='77,0'
								Name='arrowWaypoint'
								OpacityRelativeMin='1.00'
								PackLocation='cfc,npn'
								PackLocationProp='0000/0001,0000/0179'
								PackSize='p,p'
								PackSizeProp='0025/0179,0009/0179'
								Rotation='-0.25'
								ScrollExtent='25,9'
								Size='25,9'
								SourceRect='476,317,508,326'
								SourceResource='ui_rebel_final'
								UserResizable='true'
								VisualEditLock='true'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='55,45'
								Name='blip_corpse'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='images.blips.corpse'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='72,15'
								Name='blip_waypoint'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='images.blips.waypoint'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='63,40'
								Name='blip_structure'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='images.blips.structure'
							/>
							<Image
								BackgroundColor='#FFFFFF'
								Location='29,39'
								Name='blip_default'
								OpacityRelativeMin='1.00'
								ScrollExtent='12,12'
								Size='12,12'
								Style='images.blips.default_small'
							/>
							<Image
								Location='86,0'
								Name='arrow'
								OpacityRelativeMin='1.00'
								PackLocation='cfc,npn'
								PackLocationProp='0000/0001,0000/0179'
								PackSize='p,p'
								PackSizeProp='0006/0179,0026/0179'
								ScrollExtent='6,26'
								Size='6,26'
								Style='images.arrows.default_small'
								UserResizable='true'
								VisualEditLock='true'
							/>
						</Page>
						<Image
							Color='#018BA9'
							Enabled='false'
							GetsInput='true'
							MinimumScrollExtent='133,123'
							Name='compass'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,cfc'
							PackLocationProp='0000/0001,0000/0001'
							PackSize='p,p'
							PackSizeProp='0179/0179,0179/0179'
							PalColor='radar'
							ScrollExtent='179,179'
							Size='179,179'
							SourceRect='31,37,206,212'
							SourceResource='ui_radar_2'
						/>
						<Image
							Name='bg'
							Opacity='0.75'
							OpacityRelativeMin='0.75'
							PackSize='a,a'
							PackSizeProp='0000/0001,0000/0001'
							ScrollExtent='179,179'
							Size='179,179'
							SourceRect='0,0,128,128'
							SourceResource='ui_radar_mask'
						/>
					</Page>
				</Page>
				<Image
					Location='26,4'
					Name='IconImage'
					OpacityRelativeMin='1.00'
					ScrollExtent='32,32'
					Size='32,32'
					SourceRect='10,9,56,55'
					SourceResource='ui_sm_radar_compass'
					Visible='false'
				/>
				<Namespace
					Name='images'
				>
					<Namespace
						Name='arrows'
					>
						<ImageStyle
							Name='bracket'
							Source='ui_rebel_final'
							SourceRect='398,83,409,95'
						/>
						<ImageStyle
							Name='arrow_waypoint'
							Source='ui_rebel_icons'
							SourceRect='34,325,48,334'
						/>
						<ImageStyle
							Name='default_small'
							Source='ui_rebel_final'
							SourceRect='474,283,487,304'
						/>
					</Namespace>
					<Namespace
						Name='blips'
					>
						<ImageStyle
							Name='bracket'
							Source='ui_rebel_final'
							SourceRect='399,99,408,107'
						/>
						<ImageStyle
							Name='waypoint'
							Source='ui_rebel_final'
							SourceRect='400,62,408,70'
						/>
						<ImageStyle
							Name='structure'
							Source='ui_rebel_final'
							SourceRect='401,47,409,54'
						/>
						<ImageStyle
							Name='corpse'
							Source='ui_rebel_final'
							SourceRect='400,55,408,62'
						/>
						<ImageStyle
							Name='default_small'
							Source='ui_rebel_final'
							SourceRect='400,39,408,46'
						/>
					</Namespace>
				</Namespace>
			</Page>
