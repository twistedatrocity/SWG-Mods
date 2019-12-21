	<Page
		Location='13,13'
		MinimumSize='883,612'
		Name='ShipComponents'
		ScrollExtent='950,702'
		Size='950,702'
		UserMovable='true'
		UserResizable='true'
		Visible='false'
	>
		<Data
			buttonclose='bg.mmc.close'
			buttonDone='components.buttonDone'
			buttonLoad='components.comphor.compVert.compHor.statsSelected.buttons.buttonLoad'
			buttonrepair='components.comphor.compVert.compHor.statsInstalled.buttons.buttonRepair'
			buttonrepairchassis='components.comphor.compvert.viewer.buttonrepair'
			buttonUnload='components.comphor.compVert.compHor.statsInstalled.buttons.buttonUnload'
			chassistext='components.comphor.compvert.viewer.textitems.chassis'
			energytext='components.comphor.compvert.viewer.textitems.energy'
			installedcomponentname='components.comphor.compvert.comphor.statsinstalled.compname'
			installedobjecttext='components.comphor.compvert.compHor.statsInstalled.text.textattribs'
			masstext='components.comphor.compvert.viewer.textitems.mass'
			Name='CodeData'
			notcertifiedforshiptext='components.comphor.compvert.viewer.notcertified'
			pagenotnearterminal='components.comphor.compvert.notnearterminal'
			powertext='components.comphor.compvert.viewer.textitems.power'
			selectedcomponentname='components.comphor.compvert.comphor.statsselected.compname'
			selectedobjecttext='components.comphor.compvert.compHor.statsSelected.text.textattribs'
			shipViewer='components.compHor.compVert.viewer.viewer'
			treeInventory='components.comphor.compvertleft.treebg.tree'
		/>
		<Page
			Activated='true'
			Location='10,25'
			Name='components'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='929,667'
			Size='929,667'
		>
			<Button
				LocalText='[@done]'
				Location='553,642'
				MaximumSize='16384,30'
				MinimumSize='0,19'
				Name='buttonDone'
				OpacityRelativeMin='0.60'
				PackLocation='cpc,fff'
				PackSize='p,f'
				ScrollExtent='184,25'
				Size='184,25'
				Style='/Styles.New.buttons.hud.style'
			>@done</Button>
			<Composite
				BackgroundColor='#FFFFFF'
				BackgroundTint='#1CFFFF'
				Location='-3,0'
				Name='compHor'
				Orientation='Horizontal'
				PackLocation='fff,nfn'
				PackSize='a,a'
				Padding='Both'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				ScrollExtent='932,667'
				Selectable='true'
				Size='932,667'
				Spacing='5'
				SpacingType='Fill'
			>
				<Composite
					Location='2,0'
					MaximumSize='350,16384'
					Name='compVertLeft'
					PackSize='a,a'
					ScrollExtent='350,642'
					Size='350,642'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#1CFFFF'
						Location='3,0'
						MaximumSize='397,705'
						MinimumSize='217,0'
						Name='treebg'
						OnDisableEffector='/effectors.opacity.fast.fadequarter'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						ScrollExtent='347,642'
						Size='347,642'
					>
						<DataSourceContainer
							Name='dataTree'
						>
							<DataSourceContainer
								Expanded='true'
								Name='misc'
								Text='xxx'
							>
								<DataSourceContainer
									Expanded='true'
									Name='misc_ammunition'
									Text='yyy'
									Tooltip='hi'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_chemical'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_clothing'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_component'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_container'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_crafting_station'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='misc_'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='true'
								Name='installation'
								Text='xxx armor'
							>
								<DataSourceContainer
									Expanded='false'
									Name='installation_factory'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='installation_generator'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='installation_harvester'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='installation_turret'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='true'
								Name='data'
								Text='xxx armor'
							>
								<DataSourceContainer
									Expanded='true'
									Name='data_manufacturing_schematic'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='true'
								Name='creature'
								Text='xxx armor'
							>
								<DataSourceContainer
									Expanded='true'
									Name='creature_droid'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='creature_monster'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='true'
								Name='building'
								Text='xxx'
							>
								<DataSourceContainer
									Expanded='true'
									Name='building_municipal'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='building_player'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='false'
								Name='none'
								Text='xxx all'
							/>
							<DataSourceContainer
								Expanded='true'
								Name='armor'
								Text='xxx armor'
							>
								<DataSourceContainer
									Expanded='true'
									Name='armor_body'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='armor_head'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='true'
									Name='armor_misc'
									Text='xxx'
								/>
							</DataSourceContainer>
						</DataSourceContainer>
						<Scrollbar
							BackgroundColor='#FFFFFF'
							Control='tree'
							Enabled='false'
							Location='334,5'
							Name='scrollTree'
							OpacityRelativeMin='0.40'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='11,631'
							Size='11,631'
							Style='/Styles.scrollbar.default.vHud4.style'
						>
						</Scrollbar>
						<TreeView
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.00'
							DataSourceContainer='dataTree'
							Location='6,6'
							MinimumScrollExtent='328,759'
							MinimumSize='217,0'
							Name='tree'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							ScrollExtent='328,759'
							SelectedRow='15'
							SelectedRowCount='1'
							SelectionAllowedMultiRow='false'
							ShowIcon='true'
							Size='328,627'
							Style='/Styles.tree.style'
							TextOpacityRelativeMin='0.70'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.50'
							BackgroundTint='#00D6FB'
							Location='4,5'
							Name='whiteBox'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.pill_lrg.rs_default'
							ScrollExtent='330,631'
							Size='330,631'
						/>
					</Page>
				</Composite>
				<Composite
					Location='357,0'
					Name='compVert'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='572,640'
					Size='572,640'
					Spacing='5'
					SpacingType='Fill'
					vendor.visible='false'
				>
					<Composite
						MinimumSize='0,274'
						Name='compHor'
						Orientation='Horizontal'
						PackSize='a,a'
						ScrollExtent='572,337'
						Size='572,337'
						SpacingType='Fill'
					>
						<Composite
							BackgroundOpacity='0.70'
							BackgroundTint='#1CFFFF'
							MinimumSize='200,200'
							Name='statsSelected'
							OnDisableEffector='/effectors.opacity.fast.fadeout'
							OnEnableEffector='/effectors.opacity.fast.fadefull'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							Padding='Both'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='286,334'
							Size='286,334'
							Spacing='4'
							SpacingType='Fill'
							UserDragScrollable='true'
						>
							<Page
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,2'
								MaximumSize='16384,36'
								Name='title'
								PackLocation='nfn,nfn'
								PackSize='a,f'
								PalBgTint='line1'
								ScrollExtent='281,36'
								Selectable='true'
								Size='281,36'
							>
								<Text
									Font='bold_18'
									LocalText='[@ui_shipcomponents:selectedcomponent]'
									Margin='4,4,4,4'
									MaxLines='1'
									MinimumSize='0,19'
									Name='Slot'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,nfn'
									PackSize='p,f'
									PalText='text1'
									RStyleDefault='/Styles.New.whitebox.rs_default'
									ScrollExtent='281,27'
									Size='281,23'
									TextAlignment='Center'
									TextColor='#96F4FC'
								>@ui_shipcomponents:selectedcomponent</Text>
							</Page>
							<Text
								Font='bold_16'
								LocalText='xxx component'
								Location='8,42'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,19'
								Name='compName'
								OpacityRelativeMin='0.70'
								PackSize='p,p'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='257,19'
								Size='257,19'
								TextColor='#96F4FC'
							>xxx component</Text>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,65'
								Name='text'
								PackLocation='nfn,nfn'
								PackSize='a,f'
								PalBgTint='line1'
								ScrollExtent='270,215'
								Selectable='true'
								Size='270,215'
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
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
									Location='8,2'
									Margin='4,4,4,4'
									Name='textAttribs'
									OpacityRelativeMin='0.70'
									PackSize='a,a'
									PalText='text1'
									RStyleDefault='/Styles.New.whitebox.rs_default'
									ScrollExtent='243,365'
									Size='243,214'
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
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
								<Scrollbar
									Control='textAttribs'
									Enabled='false'
									Location='258,7'
									Name='Scroll'
									Opacity='0.90'
									OpacityRelativeMin='0.40'
									PackLocation='fff,nfn'
									PackSize='f,a'
									ScrollExtent='11,198'
									Size='11,198'
									Style='/Styles.scrollbar.default.vHud4.style'
								>
								</Scrollbar>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='0.30'
									BackgroundTint='#00D6FB'
									Location='4,0'
									Name='box'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									PalBgTint='back1'
									RStyleDefault='/Styles.New.whitebox_palW.rs_default'
									ScrollExtent='250,215'
									Size='250,215'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='0.30'
									BackgroundTint='#00D6FB'
									Location='4,0'
									Name='box'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									PalBgTint='back1'
									RStyleDefault='/Styles.New.whitebox_palW.rs_default'
									ScrollExtent='250,215'
									Size='250,215'
								/>
							</Page>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,284'
								MaximumSize='16384,5'
								MinimumSize='0,5'
								Name='space'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,5'
								Selectable='true'
								Size='269,5'
							/>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,293'
								MaximumSize='16384,30'
								Name='buttons'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,30'
								Selectable='true'
								Size='269,30'
							>
								<Button
									LocalText='[@ui_shipcomponents:load]'
									Location='0,2'
									MaximumSize='16384,30'
									MinimumSize='0,19'
									Name='buttonLoad'
									OpacityRelativeMin='0.60'
									PackLocation='cpc,fff'
									PackSize='p,p'
									ScrollExtent='120,28'
									Size='120,28'
									Style='/Styles.New.buttons.hud.style'
								>@ui_shipcomponents:load</Button>
							</Page>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,327'
								MaximumSize='16384,5'
								MinimumSize='0,5'
								Name='space'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,5'
								Selectable='true'
								Size='269,5'
							/>
						</Composite>
						<Composite
							BackgroundOpacity='0.70'
							BackgroundTint='#1CFFFF'
							Location='286,0'
							MinimumSize='200,200'
							Name='statsInstalled'
							OnDisableEffector='/effectors.opacity.fast.fadeout'
							OnEnableEffector='/effectors.opacity.fast.fadefull'
							PackLocation='fff,fff'
							PackSize='a,a'
							Padding='Both'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='286,334'
							Size='286,334'
							Spacing='4'
							SpacingType='Fill'
							UserDragScrollable='true'
						>
							<Page
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,2'
								MaximumSize='16384,36'
								Name='title'
								PackLocation='nfn,nfn'
								PackSize='a,f'
								PalBgTint='line1'
								ScrollExtent='281,36'
								Selectable='true'
								Size='281,36'
							>
								<Text
									Font='bold_18'
									LocalText='[@ui_shipcomponents:installedcomponent]'
									Margin='4,4,4,4'
									MaxLines='1'
									MinimumSize='0,19'
									Name='Slot'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,nfn'
									PackSize='p,f'
									PalText='text1'
									RStyleDefault='/Styles.New.whitebox.rs_default'
									ScrollExtent='281,27'
									Size='281,23'
									TextAlignment='Center'
									TextColor='#96F4FC'
								>@ui_shipcomponents:installedcomponent</Text>
							</Page>
							<Text
								Font='bold_16'
								LocalText='xxx component name'
								Location='8,42'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,19'
								Name='compName'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='265,19'
								Size='265,19'
								TextColor='#96F4FC'
							>xxx component name</Text>
							<Page
								BackgroundTint='#1CFFFF'
								Location='8,65'
								Name='text'
								PackLocation='nfn,nfn'
								PackSize='a,f'
								PalBgTint='line1'
								ScrollExtent='273,215'
								Selectable='true'
								Size='273,215'
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
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
									Location='8,2'
									Margin='4,4,4,4'
									Name='textAttribs'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalText='text1'
									RStyleDefault='/Styles.New.whitebox.rs_default'
									ScrollExtent='246,348'
									Size='246,214'
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
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
								<Scrollbar
									Control='textAttribs'
									Enabled='false'
									Location='261,7'
									Name='Scroll'
									Opacity='0.90'
									OpacityRelativeMin='0.40'
									PackLocation='fff,nfn'
									PackSize='f,a'
									ScrollExtent='11,198'
									Size='11,198'
									Style='/Styles.scrollbar.default.vHud4.style'
								>
								</Scrollbar>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='0.30'
									BackgroundTint='#00D6FB'
									Name='box'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									PalBgTint='back1'
									RStyleDefault='/Styles.New.whitebox_palW.rs_default'
									ScrollExtent='253,215'
									Size='253,215'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='0.30'
									BackgroundTint='#00D6FB'
									Name='box'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									PalBgTint='back1'
									RStyleDefault='/Styles.New.whitebox_palW.rs_default'
									ScrollExtent='253,215'
									Size='253,215'
								/>
							</Page>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,284'
								MaximumSize='16384,5'
								MinimumSize='0,5'
								Name='space'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,5'
								Selectable='true'
								Size='269,5'
							/>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,293'
								MaximumSize='16384,30'
								Name='buttons'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,30'
								Selectable='true'
								Size='269,30'
							>
								<Button
									LocalText='[@ui_shipcomponents:unload]'
									Location='0,2'
									MaximumSize='16384,30'
									MinimumSize='0,19'
									Name='buttonUnload'
									OpacityRelativeMin='0.60'
									PackLocation='cpc,fff'
									PackSize='p,p'
									ScrollExtent='120,28'
									Size='120,28'
									Style='/Styles.New.buttons.hud.style'
								>@ui_shipcomponents:unload</Button>
								<Button
									LocalText='[@ui_shipcomponents:repair]'
									Location='149,2'
									MaximumSize='16384,30'
									MinimumSize='0,19'
									Name='buttonRepair'
									OpacityRelativeMin='0.60'
									PackLocation='cpc,fff'
									PackSize='p,p'
									ScrollExtent='120,28'
									Size='120,28'
									Style='/Styles.New.buttons.hud.style'
								>@ui_shipcomponents:repair</Button>
							</Page>
							<Page
								BackgroundTint='#1CFFFF'
								Location='9,327'
								MaximumSize='16384,5'
								MinimumSize='0,5'
								Name='space'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line1'
								ScrollExtent='269,5'
								Selectable='true'
								Size='269,5'
							/>
						</Composite>
					</Composite>
					<Page
						AbsorbsInput='false'
						BackgroundColor='#FFFFFF'
						BackgroundTint='#1CFFFF'
						Location='0,342'
						MaximumSize='16384,20'
						MinimumSize='0,19'
						Name='notnearterminal'
						OpacityRelativeMin='0.70'
						PackLocation='nfn,cfc'
						PackSize='a,f'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='572,20'
						Size='572,20'
					>
						<Text
							Font='bold_16'
							LocalText='[@ui_shipcomponents:not_near_terminal]'
							Location='7,1'
							MaximumSize='16384,50'
							MaxLines='2'
							MinimumSize='0,18'
							Name='notCertified'
							PackSize='p,p'
							PalText='text1'
							RStyleDefault='rs_default'
							ScrollExtent='559,18'
							Size='559,18'
							TextColor='#96F4FC'
						>@ui_shipcomponents:not_near_terminal</Text>
					</Page>
					<Page
						AbsorbsInput='false'
						BackgroundColor='#FFFFFF'
						BackgroundTint='#1CFFFF'
						Location='0,367'
						MaximumSize='16384,400'
						Name='viewer'
						PackLocation='nfn,cfc'
						PackSize='a,f'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='572,273'
						Size='572,273'
					>
						<Button
							LocalText='[@ui_shipcomponents:repair_chassis]'
							Location='412,230'
							MaximumSize='16384,28'
							MinimumSize='0,19'
							Name='buttonRepair'
							OpacityRelativeMin='0.60'
							PackLocation='fff,fff'
							PackSize='p,f'
							ScrollExtent='142,28'
							Size='142,28'
							Style='/Styles.New.buttons.hud.style'
						>@ui_shipcomponents:repair_chassis</Button>
						<Text
							Font='bold_16'
							LocalText='[@ui_shipcomponents:notcertifiedforship]'
							Location='106,2'
							MaximumSize='16384,19'
							MaxLines='1'
							MinimumSize='0,19'
							Name='notCertified'
							OpacityRelativeMin='0.70'
							PackLocation='cfc,nfn'
							PackSize='p,f'
							PalText='text1'
							RStyleDefault='rs_default'
							ScrollExtent='361,19'
							Size='361,19'
							TextAlignment='Center'
							TextAlignmentVertical='Center'
							TextColor='#96F4FC'
						>@ui_shipcomponents:notcertifiedforship</Text>
						<Page
							Location='20,191'
							Name='textItems'
							OpacityRelativeMin='0.70'
							PackLocation='nfn,fff'
							ScrollExtent='394,71'
							Size='394,71'
						>
							<Text
								Font='bold_16'
								LocalText='[@ui_shipcomponents:mass]'
								Location='0,-3'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='massLabel'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,p'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='160,19'
								Size='160,19'
								TextColor='#96F4FC'
							>@ui_shipcomponents:mass</Text>
							<Text
								Font='bold_16'
								LocalText='[@ui_shipcomponents:energy]'
								Location='0,19'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='energyLabel'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,p'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='160,19'
								Size='160,19'
								TextColor='#96F4FC'
							>@ui_shipcomponents:energy</Text>
							<Text
								Font='bold_16'
								LocalText='[@ui_shipcomponents:power]'
								Location='0,28'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='powerLabel'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,p'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='160,19'
								Size='160,19'
								TextColor='#96F4FC'
								Visible='false'
							>@ui_shipcomponents:power</Text>
							<Text
								Font='bold_16'
								LocalText='[@ui_shipcomponents:chassis]'
								Location='0,42'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='chassisLabel'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,p'
								PalText='text1'
								RStyleDefault='rs_default'
								ScrollExtent='160,19'
								Size='160,19'
								TextColor='#96F4FC'
							>@ui_shipcomponents:chassis</Text>
							<Text
								Font='bold_16'
								LocalText='xxx'
								Location='159,0'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='mass'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,p'
								PalText='text1'
								PreLocalized='true'
								RStyleDefault='rs_default'
								ScrollExtent='235,19'
								Size='235,19'
								TextAlignment='Right'
								TextColor='#96F4FC'
							></Text>
							<Text
								Font='bold_16'
								LocalText='xxx'
								Location='159,21'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='energy'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,p'
								PalText='text1'
								PreLocalized='true'
								RStyleDefault='rs_default'
								ScrollExtent='235,19'
								Size='235,19'
								TextAlignment='Right'
								TextColor='#96F4FC'
							></Text>
							<Text
								Font='bold_16'
								LocalText='xxx'
								Location='159,28'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,18'
								Name='power'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,p'
								PalText='text1'
								PreLocalized='true'
								RStyleDefault='rs_default'
								ScrollExtent='235,19'
								Size='235,19'
								TextAlignment='Right'
								TextColor='#96F4FC'
								Visible='false'
							></Text>
							<Text
								Font='bold_16'
								LocalText='xxx'
								Location='159,42'
								MaximumSize='16384,19'
								MaxLines='1'
								MinimumSize='0,19'
								Name='chassis'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,p'
								PalText='text1'
								PreLocalized='true'
								RStyleDefault='rs_default'
								ScrollExtent='235,19'
								Size='235,19'
								TextAlignment='Right'
								TextColor='#96F4FC'
							></Text>
						</Page>
						<CuiWidget3dObjectListViewer
							BackgroundTint='#00D6FB'
							cameralookatcenter='true'
							CameraPitch='0.5'
							cameratransformtoobj='true'
							camerayaw='90'
							dragpitchok='true'
							dragyawok='true'
							fieldofview='60'
							Location='0,1'
							Name='viewer'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							paused='true'
							RStyleDefault='/Styles.New.viewer.rs_default'
							ScrollExtent='573,270'
							Size='573,270'
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
							Location='195,41'
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
							ScrollExtent='572,273'
							Size='572,273'
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
							ScrollExtent='543,234'
							Size='543,234'
						/>
					</Page>
				</Composite>
			</Composite>
		</Page>
		<Page
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='950,702'
			Size='950,702'
		>
			<Page
				Location='940,8'
				Name='mmc'
				OpacityRelativeMin='0.80'
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
					OpacityRelativeMin='0.80'
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
				ScrollExtent='765,19'
				Size='765,19'
			>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='[@UI_SHIPCOMPONENTS:CPT_SHIPCOMPONENT]'
					Margin='6,-2,0,0'
					MaxLines='1'
					MinimumSize='0,19'
					Name='LBLTitle'
					OpacityRelativeMin='0.70'
					PackSize='a,f'
					PalText='titletext'
					ScrollExtent='765,19'
					Size='765,19'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>@ui_shipcomponents:cpt_shipcomponent</Text>
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
				ScrollExtent='949,702'
				Selectable='true'
				Size='949,702'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Location='1,0'
					Name='lines'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='949,702'
					Size='949,702'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,680'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='746,22'
						Size='746,22'
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
							ScrollExtent='746,9'
							Size='746,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='262,680'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='687,22'
						Size='687,22'
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
							ScrollExtent='687,9'
							Size='687,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='262,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='687,22'
						Size='687,22'
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
							ScrollExtent='687,9'
							Size='687,9'
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
						ScrollExtent='746,22'
						Size='746,22'
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
							ScrollExtent='746,9'
							Size='746,9'
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
					ScrollExtent='950,29'
					Size='950,29'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='0,679'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_BR.rs_default'
					ScrollExtent='949,23'
					Size='949,23'
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
				ScrollExtent='950,694'
				Selectable='true'
				Size='950,694'
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
				ScrollExtent='950,702'
				Selectable='true'
				Size='950,702'
			/>
		</Page>
	</Page>
