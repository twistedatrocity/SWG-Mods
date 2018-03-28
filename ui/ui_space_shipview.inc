	<Page
		Location='28,35'
		MinimumSize='375,650'
		Name='ShipView'
		ScrollExtent='503,650'
		Size='503,650'
		UserMovable='true'
		UserResizable='true'
		Visible='false'
	>
		<Data
			buttonclose='bg.mmc.close'
			buttonGroup='components.compVert.buttons.buttonGroup'
			buttonLaunch='components.compVert.buttons.buttonLaunch'
			buttonManage='components.compVert.buttons.buttonManage'
			buttonTravel='components.compvert.buttons.buttontravel'
			Name='CodeData'
			scroll='components.compvert.stats.text.scroll'
			shipViewer='components.compVert.viewer.viewer'
			statsattribs='components.compVert.stats.text.text.textAttribs'
			statsvalues='components.compVert.stats.text.text.textValues'
			title='components.compVert.stats.title.name'
		/>
		<Page
			Activated='true'
			Location='10,29'
			Name='components'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='484,611'
			Size='484,611'
		>
			<Composite
				Location='0,1'
				Name='compVert'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='483,606'
				Size='483,606'
				Spacing='5'
				SpacingType='Fill'
				vendor.visible='false'
			>
				<Page
					AbsorbsInput='false'
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.70'
					BackgroundTint='#1CFFFF'
					Name='viewer'
					PackLocation='nfn,cfc'
					PackSize='a,f'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='483,282'
					Size='483,282'
				>
					<CuiWidget3dObjectListViewer
						BackgroundTint='#00D6FB'
						cameralookatcenter='true'
						CameraPitch='0.5'
						cameratransformtoobj='true'
						camerayaw='90'
						dragpitchok='true'
						dragyawok='true'
						fieldofview='60'
						Location='0,-2'
						Name='viewer'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						paused='true'
						RStyleDefault='/Styles.New.viewer.rs_default'
						ScrollExtent='483,282'
						Size='483,282'
					/>
					<DataSource
						Name='vds'
					>
						<Data
							appearanceTemplate='appearance/pt_ui_sparkly2.prt'
							Name='d'
						/>
					</DataSource>
					<Image
						Color='#00D6FB'
						Location='150,46'
						Name='New Image'
						Opacity='0.40'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						PalColor='back1'
						RStyleDefault='/Styles.Gambling.slotFrame.rs_default'
						ScrollExtent='178,180'
						Size='178,180'
						SourceRect='0,0,256,256'
						SourceResource='ui_viewer_back'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.60'
						BackgroundTint='#00D6FB'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.viewer.rs_default'
						ScrollExtent='483,282'
						Size='483,282'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.60'
						BackgroundTint='#00D6FB'
						Location='15,21'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.pill_lrg.rs_default'
						ScrollExtent='454,243'
						Size='454,243'
					/>
				</Page>
				<Composite
					BackgroundOpacity='0.50'
					BackgroundTint='#1CFFFF'
					Location='0,287'
					Name='stats'
					OnDisableEffector='/effectors.opacity.fast.fadeout'
					OnEnableEffector='/effectors.opacity.fast.fadefull'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					Padding='Both'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='482,282'
					Size='482,282'
					Spacing='1'
					SpacingType='Fill'
					UserDragScrollable='true'
				>
					<Page
						BackgroundTint='#1CFFFF'
						GetsInput='false'
						Location='8,0'
						MaximumSize='16384,35'
						MinimumSize='0,19'
						Name='title'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						PalBgTint='line1'
						ScrollExtent='468,35'
						Selectable='true'
						Size='468,35'
					>
						<Text
							Font='bold_18'
							LocalText='XXX'
							Location='0,3'
							Margin='4,4,4,4'
							MaximumSize='16384,37'
							Name='name'
							PackLocation='nfn,nfn'
							PackSize='p,f'
							PalText='text1'
							RStyleDefault='/Styles.New.whitebox.rs_default'
							ScrollExtent='468,34'
							Size='468,34'
							TextColor='#96F4FC'
						>XXX</Text>
					</Page>
					<Page
						BackgroundTint='#1CFFFF'
						Location='0,36'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						PalBgTint='line1'
						ScrollExtent='482,245'
						Selectable='true'
						Size='482,245'
					>
						<Page
							Location='6,9'
							Name='text'
							PackSize='a,a'
							ScrollExtent='457,229'
							Size='457,229'
						>
							<Text
								Font='bold_16'
								LocalText='xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here


'
								Margin='4,4,4,4'
								Name='textAttribs'
								PackSize='f,a'
								PalText='text1'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='235,331'
								Size='235,230'
								TextColor='#96F4FC'
							>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here


</Text>
							<Text
								Font='bold_16'
								LocalText='100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%


'
								Location='233,0'
								Margin='4,4,4,4'
								Name='textValues'
								PackSize='a,a'
								PalText='text1'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='223,331'
								Size='223,230'
								TextColor='#96F4FC'
							>100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%
100%


</Text>
						</Page>
						<Scrollbar
							Control='text.textAttribs'
							Location='467,7'
							Name='Scroll'
							OnSliderChange='parent.ScrollValues.value=value'
							Opacity='0.90'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='11,228'
							Size='11,228'
							Style='/Styles.scrollbar.default.vHud4.style'
							Visible='false'
						>
						</Scrollbar>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.30'
							BackgroundTint='#00D6FB'
							Location='4,6'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='473,235'
							Size='473,235'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.30'
							BackgroundTint='#00D6FB'
							Location='4,6'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='473,235'
							Size='473,235'
						/>
					</Page>
				</Composite>
				<Page
					BackgroundTint='#1CFFFF'
					Location='4,574'
					MaximumSize='16384,32'
					Name='buttons'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalBgTint='line1'
					ScrollExtent='475,32'
					Selectable='true'
					Size='475,32'
				>
					<Button
						LocalText='[@ui_shipview:manage]'
						Location='4,0'
						MinimumSize='0,19'
						Name='buttonManage'
						PackLocation='cpc,fff'
						PackSize='p,f'
						ScrollExtent='106,30'
						Size='106,30'
						Style='/Styles.New.buttons.hud.style'
					>@ui_shipview:manage</Button>
					<Button
						LocalText='[@ui_shipview:group]'
						Location='124,0'
						MinimumSize='0,19'
						Name='buttonGroup'
						PackLocation='cpc,fff'
						PackSize='p,f'
						ScrollExtent='106,30'
						Size='106,30'
						Style='/Styles.New.buttons.hud.style'
					>@ui_shipview:group</Button>
					<Button
						LocalText='[@ui_shipview:launch]'
						Location='244,0'
						MinimumSize='0,19'
						Name='buttonLaunch'
						PackLocation='cpc,fff'
						PackSize='p,f'
						ScrollExtent='106,30'
						Size='106,30'
						Style='/Styles.New.buttons.hud.style'
					>@ui_shipview:launch</Button>
					<Button
						LocalText='[@ui_shipview:travel]'
						Location='363,0'
						MinimumSize='0,19'
						Name='buttonTravel'
						PackLocation='cpc,fff'
						PackSize='p,f'
						ScrollExtent='106,30'
						Size='106,30'
						Style='/Styles.New.buttons.hud.style'
					>@ui_shipview:travel</Button>
				</Page>
			</Composite>
		</Page>
		<Page
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='503,650'
			Size='503,650'
		>
			<Page
				Location='493,8'
				Name='mmc'
				PackLocation='fff,nfn'
				PackSize='f,f'
				RStyleDefault='/Styles.New.thin_mmc.rs_default'
				ScrollExtent='12,10'
				Size='12,10'
			>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.80'
					IsCancelButton='true'
					Location='-4,-3'
					Name='close'
					PackLocation='fff,cfc'
					PackSize='f,f'
					ScrollExtent='16,16'
					Size='16,16'
					Style='/Styles.Frame.buttonClose.style'
				></Button>
			</Page>
			<Page
				MinimumSize='0,19'
				Name='caption'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				ScrollExtent='318,19'
				Size='318,19'
			>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='[@UI_SHIPVIEW:CPT]'
					Margin='6,-2,0,0'
					MaxLines='1'
					MinimumSize='0,19'
					Name='LBLTitle'
					PackSize='a,f'
					PalText='titletext'
					ScrollExtent='318,19'
					Size='318,19'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>@ui_shipview:cpt</Text>
			</Page>
			<Page
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='1,0'
				Name='frame'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='baselight'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='502,650'
				Selectable='true'
				Size='502,650'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Location='1,0'
					Name='lines'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='502,650'
					Size='502,650'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,628'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='393,22'
						Size='393,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
							ScrollExtent='393,9'
							Size='393,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='141,628'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='361,22'
						Size='361,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
							ScrollExtent='361,9'
							Size='361,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='141,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='361,22'
						Size='361,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
							ScrollExtent='361,9'
							Size='361,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='outlineTL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='393,22'
						Size='393,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
							ScrollExtent='393,9'
							Size='393,9'
						/>
					</Page>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					Location='-1,0'
					Name='top'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_TR.rs_default'
					ScrollExtent='503,29'
					Size='503,29'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='0,627'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_BR.rs_default'
					ScrollExtent='502,23'
					Size='502,23'
				/>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='0,5'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='503,642'
				Selectable='true'
				Size='503,642'
			/>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.space.spaceglow.rs_default'
				ScrollExtent='503,650'
				Selectable='true'
				Size='503,650'
			/>
		</Page>
	</Page>
