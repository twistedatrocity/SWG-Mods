		<Page
			altRadarBg.enabled='true'
			background.enabled='false'
			DropToParent='true'
			Location='1,629'
			MinimumSize='166,137'
			Name='spaceradar'
			OnDisable='compass.enabled=true
altRadarFg.enabled=false
radarwidget.enabled=false'
			OnEnable='compass.enabled=false
altRadarFg.enabled=true
radarwidget.enabled=true'
			PackLocation='nfn,fff'
			PackLocationProp='0001/0001,-002/0001'
			PackSize='f,f'
			PackSizeProp='0002/0003,0002/0003'
			ScrollExtent='166,137'
			Size='166,137'
			SizeIncrementLocked='true'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
			Visible='false'
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
				radarwidget='inner.square.spaceradarwidget'
				rangeindicator='inner.square.range'
				square='inner.square'
				textHeight='coord.height.text'
				textLat='coord.lat.text'
				textLong='coord.long.text'
				waypointarrow='inner.square.blips.waypointarrow'
				zoombottom='altradarfg.zoombottom'
				zoomtop='altradarfg.zoomtop'
			/>
			<Page
				Name='altRadarFg'
				OnDisableEffector='/effectors.fadeout'
				OnEnableEffector='/effectors.fadefull'
				PackSize='1,1'
				PackSizeProp='0002/0003,0002/0003'
				ScrollExtent='166,137'
				Size='166,137'
			>
				<Button
					BackgroundOpacity='0.00'
					BackgroundTint='#338000'
					cmdName='CMD_uiRadarRangeDecrease'
					Dragable='true'
					DragType='command'
					Icon='/Styles.Icon.UI.CMD_uiRadarRangeDecrease'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Location='137,5'
					Name='ZoomTop'
					Opacity='0.60'
					OpacityRelativeMin='0.60'
					PackLocation='fff,nfn'
					PackLocationProp='-008/0001,0005/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					ScrollExtent='21,17'
					Size='21,17'
					Style='/Styles.buttons.buttonBar.all.style'
				></Button>
				<Button
					BackgroundOpacity='0.00'
					BackgroundTint='#338000'
					cmdname='CMD_uiRadarRangeIncrease'
					Dragable='true'
					DragType='command'
					Icon='/Styles.Icon.UI.CMD_uiRadarRangeIncrease'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Location='137,99'
					Name='ZoomBottom'
					Opacity='0.60'
					OpacityRelativeMin='0.60'
					PackLocation='fff,fff'
					PackLocationProp='-008/0001,-021/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					ScrollExtent='21,17'
					Size='21,17'
					Style='/Styles.buttons.buttonBar.all.style'
				></Button>
				<Page
					BackgroundOpacity='1.00'
					Location='0,97'
					Name='corner_BR'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,fff'
					PackLocationProp='0000/0001,-016/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					RStyleDefault='/Styles.New.corner_chatBL.rs_default'
					ScrollExtent='50,24'
					Size='50,24'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='118,72'
					Name='corner_BL'
					OpacityRelativeMin='0.50'
					PackLocation='fff,fff'
					PackLocationProp='0000/0001,-016/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					RStyleDefault='/Styles.New.corner_chatBR.rs_default'
					ScrollExtent='48,49'
					Size='48,49'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='116,0'
					Name='corner_TR'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackLocationProp='0000/0001,0000/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					RStyleDefault='/Styles.New.corner_chatTR.rs_default'
					ScrollExtent='50,40'
					Size='50,40'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='102,0'
					Name='mmc'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackLocationProp='-016/0001,0000/0001'
					PackSize='f,f'
					PackSizeProp='0002/0003,0002/0003'
					RStyleDefault='/Styles.window.chat.mmc_hud.rs_default'
					ScrollExtent='48,19'
					Size='48,19'
					Visible='false'
				>
					<Button
						DragType='uicommand'
						Location='6,1'
						Name='min'
						PackLocation='fff,nfn'
						PackLocationProp='-030/0001,0001/0001'
						ScrollExtent='12,12'
						Size='12,12'
						Style='/Styles.Frame.buttonMinimize.style'
						TextColor='#000000'
						Visible='false'
					></Button>
					<Button
						DragType='uicommand'
						Location='31,1'
						Name='close'
						PackLocation='fff,nfn'
						PackLocationProp='-007/0001,0001/0001'
						ScrollExtent='10,11'
						Size='10,11'
						Style='/Styles.Frame.buttonClose.style'
						TextColor='#000000'
					></Button>
					<Button
						DragType='uicommand'
						Location='19,1'
						Name='max'
						PackLocation='fff,nfn'
						PackLocationProp='-019/0001,0001/0001'
						ScrollExtent='10,11'
						Size='10,11'
						Style='/Styles.Frame.buttonMaximize.style'
						TextColor='#000000'
					></Button>
				</Page>
			</Page>
			<Page
				Location='19,0'
				Name='inner'
				PackSize='a,a'
				PackSizeProp='0038/0001,0009/0001'
				ScrollExtent='128,128'
				Size='128,128'
			>
				<Page
					Name='square'
					ScrollExtent='128,128'
					Size='128,128'
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
						PackSizeProp='0128/0128,0128/0128'
						PalColor='radar'
						ScrollExtent='133,128'
						Size='128,128'
						SourceRect='31,37,206,212'
						SourceResource='ui_radar_2'
					/>
					<Page
						Name='blips'
						OpacityRelativeMin='1.00'
						PackSize='a,a'
						PackSizeProp='0000/0001,0000/0001'
						ScrollExtent='128,128'
						Size='128,128'
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
							Location='56,0'
							Name='arrowBracket'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackLocationProp='0000/0001,0000/0128'
							PackSize='p,p'
							PackSizeProp='0016/0128,0019/0128'
							ScrollExtent='16,19'
							Size='16,19'
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
							Location='55,0'
							Name='arrowWaypoint'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackLocationProp='0000/0001,0000/0128'
							PackSize='p,p'
							PackSizeProp='0018/0128,0007/0128'
							Rotation='-0.25'
							ScrollExtent='18,7'
							Size='18,7'
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
							Location='62,0'
							Name='arrow'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackLocationProp='0000/0001,0000/0128'
							PackSize='p,p'
							PackSizeProp='0005/0128,0019/0128'
							ScrollExtent='5,19'
							Size='5,19'
							Style='images.arrows.default_small'
							UserResizable='true'
							VisualEditLock='true'
						/>
					</Page>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_12'
						LocalText='[@radar_range]'
						Location='0,90'
						Name='Range'
						PackLocation='nfn,fff'
						PackLocationProp='0000/0001,-021/0001'
						PackSize='a,f'
						PackSizeProp='0000/0001,0002/0003'
						PalText='contrast1'
						ScrollExtent='128,17'
						Size='128,17'
						TextAlignment='Center'
						TextColor='#62FF15'
					>@radar_range</Text>
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
						PackSizeProp='0128/0128,0128/0128'
						PalColor='radar'
						ScrollExtent='133,128'
						Size='128,128'
						SourceRect='31,37,206,212'
						SourceResource='ui_radar_2'
					/>
					<Image
						Name='bg'
						Opacity='0.75'
						OpacityRelativeMin='0.75'
						PackSize='a,a'
						PackSizeProp='0000/0001,0000/0001'
						ScrollExtent='128,128'
						Size='128,128'
						SourceRect='0,0,128,128'
						SourceResource='ui_radar_mask'
					/>
				</Page>
			</Page>
			<Page
				Location='0,124'
				Name='Coord'
				PackLocation='cfc,fff'
				PackLocationProp='0000/0001,0000/0001'
				ScrollExtent='166,13'
				Size='166,13'
			>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					Name='long'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,nfn'
					PackLocationProp='0000/0001,0000/0001'
					PackSize='a,f'
					PackSizeProp='0116/0001,0002/0003'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='50,13'
					Size='50,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackLocationProp='0000/0001,0000/0001'
						PackSize='f,f'
						PackSizeProp='0002/0003,0002/0003'
						PalText='text1'
						ScrollExtent='50,26'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#C4F9FD'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					Location='59,0'
					Name='height'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,nfn'
					PackLocationProp='0059/0001,0000/0001'
					PackSize='a,f'
					PackSizeProp='0116/0001,0002/0003'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='50,13'
					Size='50,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackLocationProp='0000/0001,0000/0001'
						PackSize='f,f'
						PackSizeProp='0002/0003,0002/0003'
						PalText='text1'
						ScrollExtent='50,26'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#C4F9FD'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					Location='116,0'
					Name='lat'
					OpacityRelativeMin='0.50'
					PackLocation='nfn,nfn'
					PackLocationProp='0116/0001,0000/0001'
					PackSize='a,f'
					PackSizeProp='0116/0001,0002/0003'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
					ScrollExtent='50,13'
					Size='50,13'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						PackLocation='nfn,cfc'
						PackLocationProp='0000/0001,0000/0001'
						PackSize='f,f'
						PackSizeProp='0002/0003,0002/0003'
						PalText='text1'
						ScrollExtent='50,26'
						Size='50,13'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#C4F9FD'
					>xxx,xxx\"</Text>
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
