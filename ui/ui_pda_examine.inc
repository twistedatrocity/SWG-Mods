	<Page
		comp.eq.visible='parent.comp.eq.visible'
		Location='178,202'
		MinimumSize='875,525'
		Name='examine'
		ScrollExtent='875,525'
		Size='875,525'
		UserMovable='true'
		UserResizable='true'
	>
		<Data
			buttonclose='bg.mmc.close'
			info='info'
			Name='CodeData'
			StartSize='366,213'
		/>
		<Button
			DragType='uicommand'
			IsDefaultButton='true'
			Location='9,23'
			Name='buttonInfo'
			oldDetailsVisible='false'
			oldDetailsVisibleTmp='false'
			OnPress='olddetailsVisibleTmp=parent.info.comp.details.visible
parent.info.comp.details.visible=olddetailsVisible
olddetailsVisible=olddetailsVisibleTmp
parent.info.comp.pack=t'
			PackLocation='nfn,nfn'
			PackSize='f,f'
			ScrollExtent='28,8'
			Size='28,8'
			Style='/Styles.New.buttons.pane_arrow.style'
		></Button>
		<Page
			Location='11,32'
			Name='info'
			PackSize='a,a'
			RStyleDefault='/Styles.New.whiteOutline.rs_default'
			ScrollExtent='854,477'
			Selectable='true'
			Size='854,477'
		>
			<Data
				buttonCollections='comp.page.details.content.buttonPage.buttonCollections'
				checkHideAppearance='comp.right.viewerpage.checkHideAppearance'
				content='comp.page.details.content'
				Label='bg.caption.text'
				Name='CodeData'
				noTrade='comp.page.details.content.restrictions.comp.noTrade'
				showBadgeText='false'
				textAttribs='comp.page.details.content.textAttribs'
				textDesc='comp.page.details.content.textDesc'
				Tier='comp.page.details.content.restrictions.comp.Tier'
				unique='comp.page.details.content.restrictions.comp.unique'
				viewer='comp.right.viewerpage.viewer'
			/>
			<Composite
				Name='comp'
				Orientation='Horizontal'
				PackSize='a,a'
				ScrollExtent='854,477'
				Selectable='true'
				Size='854,477'
				SpacingType='Fill'
			>
				<Page
					MaximumSize='300,16384'
					MinimumSize='300,0'
					Name='page'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackLocation='nfn,nfn'
					PackSize='f,a'
					RStyleDefault='rs'
					ScrollExtent='300,477'
					Size='300,477'
				>
					<Page
						AbsorbsInput='false'
						MaximumSize='300,16384'
						MinimumSize='300,0'
						Name='details'
						OnHide='parent.pack=t'
						OnShow='parent.pack=t'
						PackLocation='nfn,nfn'
						PackSize='f,a'
						RStyleDefault='rs'
						ScrollExtent='300,477'
						Size='300,477'
					>
						<Composite
							Location='4,8'
							MaximumSize='343,16384'
							Name='content'
							OnDisableEffector='/effectors.opacity.fast.fadeout'
							OnEnableEffector='/effectors.opacity.fast.fadefull'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							ScrollExtent='277,2551'
							Size='277,465'
							Spacing='10'
							SpacingType='Constant'
							UserDragScrollable='true'
						>
							<Page
								GetsInput='false'
								MaximumSize='16384,16'
								MinimumSize='0,16'
								Name='restrictions'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								ScrollExtent='277,16'
								Size='277,16'
							>
								<Composite
									Name='comp'
									Orientation='Horizontal'
									ScrollExtent='375,16'
									Size='277,16'
								>
									<Text
										Font='bold_14'
										LocalText='[@object_usability:tier_unknown]'
										MaximumSize='125,16384'
										MaxLines='1'
										MinimumSize='76,0'
										Name='Tier'
										OpacityRelativeMin='0.20'
										PackSize='a,a'
										ScrollExtent='125,16'
										Size='125,16'
										TextAlignment='Right'
									>@object_usability:tier_unknown</Text>
									<Text
										Font='bold_14'
										LocalText='[@object_usability:unique]'
										Location='125,0'
										MaximumSize='125,16384'
										MaxLines='1'
										MinimumSize='45,0'
										Name='Unique'
										OpacityRelativeMin='0.20'
										PackSize='a,a'
										ScrollExtent='125,16'
										Size='125,16'
										TextAlignment='Right'
										TextColor='#FF0000'
									>@object_usability:unique</Text>
									<Text
										ColorSelection='#FF0000'
										Font='bold_14'
										LocalText='[@object_usability:no_trade]'
										Location='250,0'
										MaximumSize='125,16384'
										MaxLines='1'
										MinimumSize='81,0'
										Name='noTrade'
										OpacityRelativeMin='0.20'
										PackSize='a,a'
										ScrollExtent='125,16'
										Size='125,16'
										TextColor='#FF0000'
									>@object_usability:no_trade</Text>
								</Composite>
							</Page>
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
'
								Location='0,26'
								Margin='4,4,4,4'
								Name='textAttribs'
								PackSize='a,f'
								PalText='text1'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='277,161'
								Size='277,161'
								TextColor='#96F4FC'
							>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
</Text>
							<Page
								Location='0,161'
								MaximumSize='16384,46'
								MinimumSize='0,46'
								Name='buttonPage'
								PackSize='a'
								ScrollExtent='277,46'
								Size='277,46'
								Visible='false'
							>
								<Button
									LocalText='[@ui:show_collections]'
									Location='39,13'
									MaximumSize='150,19'
									MinimumSize='0,19'
									Name='buttonCollections'
									PackLocation='cfc,nfn'
									PackSize='f,f'
									ScrollExtent='150,19'
									Size='150,19'
									Style='/Styles.New.buttons.hud.style'
									TextColor='#000000'
								>@ui:show_collections</Button>
							</Page>
							<Text
								Font='bold_16'
								LocalText='xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.'
								Location='0,197'
								Margin='4,4,4,4'
								Name='textDesc'
								PackLocation='nfn,fff'
								PackSize='a,f'
								PalText='text1'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='277,2354'
								Size='277,2354'
								TextColor='#96F4FC'
								TruncateElipsis='false'
							>xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.
xxx Description goes into this field with all the other text ok you can stop now.</Text>
						</Composite>
					</Page>
					<Scrollbar
						Control='details.content'
						Location='283,5'
						Name='Scroll'
						Opacity='0.90'
						PackLocation='fff,nfn'
						PackSize='f,a'
						ScrollExtent='11,467'
						Size='11,467'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<Page
						BackgroundTint='#1CFFFF'
						GetsInput='false'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						ScrollExtent='298,477'
						Selectable='true'
						Size='298,477'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							BackgroundTint='#1CFFFF'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='298,477'
							Size='298,477'
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
							ScrollExtent='278,467'
							Size='278,467'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.60'
							BackgroundTint='#00D6FB'
							Name='inFrame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
							ScrollExtent='296,477'
							Size='296,477'
						/>
					</Page>
				</Page>
				<Page
					Location='300,0'
					MinimumSize='148,0'
					Name='right'
					PackLocation='nfn,nfn'
					PackSize='f,a'
					RStyleDefault='rs_default'
					ScrollExtent='554,477'
					Size='554,477'
				>
					<Page
						Name='ViewerPage'
						PackSize='a,a'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						ScrollExtent='554,477'
						Size='554,477'
					>
						<Checkbox
							Checked='true'
							Color='#96F4FC'
							LocalTooltip='[@ui_appearance:tooltip_check_hide_appearance]'
							Location='4,456'
							MaxLines='-1'
							MinimumSize='0,19'
							Name='checkHideAppearance'
							PackLocation='nfn,fff'
							PackSize='a,f'
							PalColor='text1'
							RStyleDefault='rs_default'
							ScrollExtent='507,19'
							Size='507,19'
							Style='/Styles.New.Checkbox.Style2'
							Tooltip='@ui_appearance:tooltip_check_hide_appearance'
						>@ui_appearance:check_hide_appearance</Checkbox>
						<CuiWidget3dObjectListViewer
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.60'
							BackgroundTint='#00D6FB'
							CameraPitch='0.2'
							Dragable='true'
							dragpitchok='true'
							Location='4,4'
							Name='Viewer'
							PackLocation='fff,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.viewer.rs_default'
							ScrollExtent='547,469'
							Size='547,469'
						/>
						<Image
							Color='#00D6FB'
							Location='212,171'
							Name='New Image'
							PackLocation='cfc,cfc'
							PackSize='f,f'
							PalColor='back1'
							ScrollExtent='127,127'
							Size='127,127'
							SourceRect='266,0,512,252'
							SourceResource='ui_viewer_back'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.50'
							BackgroundTint='#00D6FB'
							Location='8,12'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.pill_lrg.rs_default'
							ScrollExtent='539,442'
							Size='539,442'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.50'
							BackgroundTint='#00D6FB'
							Name='bg_viewer'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.fatFrameInside.rs_default'
							ScrollExtent='554,477'
							Size='554,477'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.60'
								BackgroundTint='#03546B'
								Location='3,4'
								Name='box'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back3'
								RStyleDefault='/Styles.New.whitebox_palW.rs_default'
								ScrollExtent='547,468'
								Size='547,468'
								Visible='false'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.80'
								BackgroundTint='#1CFFFF'
								Name='outline'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.New.whiteOutline.rs_default'
								ScrollExtent='554,477'
								Size='554,477'
							/>
						</Page>
					</Page>
				</Page>
			</Composite>
		</Page>
		<Page
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='875,525'
			Size='875,525'
		>
			<Page
				Location='864,8'
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
					Location='-3,-3'
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
				ScrollExtent='738,19'
				Size='738,19'
			>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='XXX ITEM NAME'
					Margin='6,-2,0,0'
					MaxLines='1'
					MinimumSize='0,19'
					Name='text'
					PackSize='a,f'
					PalText='titletext'
					ScrollExtent='738,19'
					Size='738,19'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>xxx item name</Text>
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
				ScrollExtent='874,525'
				Selectable='true'
				Size='874,525'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Location='1,0'
					Name='lines'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='874,525'
					Size='874,525'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,503'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='686,22'
						Size='686,22'
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
							ScrollExtent='686,9'
							Size='686,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='242,503'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='632,22'
						Size='632,22'
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
							ScrollExtent='632,9'
							Size='632,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='242,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='632,22'
						Size='632,22'
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
							ScrollExtent='632,9'
							Size='632,9'
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
						ScrollExtent='686,22'
						Size='686,22'
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
							ScrollExtent='686,9'
							Size='686,9'
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
					ScrollExtent='875,29'
					Size='875,29'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='0,502'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_BR.rs_default'
					ScrollExtent='874,23'
					Size='874,23'
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
				ScrollExtent='875,517'
				Selectable='true'
				Size='875,517'
			/>
			<Page
				BackgroundOpacity='0.80'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.space.spaceglow.rs_default'
				ScrollExtent='875,525'
				Selectable='true'
				Size='875,525'
			/>
		</Page>
	</Page>
