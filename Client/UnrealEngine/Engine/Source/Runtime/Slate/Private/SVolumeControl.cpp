// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// Construct @ 14290c410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SVolumeControl::Construct(SVolumeControl *this,FArguments *param_1)

{
  byte *pbVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SImage *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FSlot *pFVar15;
  FSizeParam *pFVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FButtonStyle *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget,1> *pTVar21;
  ulong64 uVar22;
  FArguments *pFVar23;
  TSharedRef<SWidget_const_,1> *pTVar24;
  TSharedRef<SImage,1> *pTVar25;
  TSharedRef<SButton,1> *pTVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  SSlider *pSVar29;
  SSlider *pSVar30;
  FArguments *pFVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  FSlot *pFVar33;
  SVolumeControl *pSVar34;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1338;
  T0RequiredArgs local_1337 [3];
  FLLMScope local_1334;
  FLLMScope local_1330;
  FLLMScope local_132c;
  FLLMScope local_1328 [2];
  FName local_1320;
  undefined4 uStack_1318;
  undefined4 uStack_1314;
  FArguments *local_1310;
  undefined4 uStack_1308;
  undefined4 uStack_1304;
  FArguments *local_1300;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_12f8;
  SWidget *local_12e0;
  TReferenceControllerBase<1> *pTStack_12d8;
  undefined8 local_12d0;
  FSharedReferencer<1> local_12c8;
  TSharedRef<SImage,1> local_12c0;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined1 local_12a0;
  undefined1 local_1298 [8];
  ForAnyElementType FStack_1290;
  ulonglong local_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined1 local_1270;
  undefined1 local_1268 [8];
  ForAnyElementType FStack_1260;
  ulonglong local_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined1 local_1240;
  undefined1 local_1238 [8];
  ForAnyElementType FStack_1230;
  ulonglong local_1228;
  undefined8 local_1220;
  FSharedReferencer<1> local_1218;
  FName local_1210;
  FName local_1208;
  FMemScope local_1200;
  FName local_11f8;
  FMemScope local_11f0;
  FSlot *local_11e8;
  FMemScope local_11e0;
  FSlotArguments *local_11d8;
  FName local_11d0;
  FMemScope local_11c8;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_11c0;
  TAttribute<float> local_11b8;
  TSharedRef<SWidget,1> local_1198;
  FDestructionSentinel local_1188;
  FDestructionSentinel local_1170;
  FDestructionSentinel local_1158;
  FDestructionSentinel local_1140;
  undefined1 *local_1128;
  FDestructionSentinel local_1120;
  undefined1 *local_1108;
  FDestructionSentinel local_1100;
  undefined1 *local_10e8;
  FDestructionSentinel local_10e0;
  undefined1 *local_10c8;
  TAttribute<FMargin> local_10c0;
  TSharedRef<SWidget,1> local_1090;
  SSlider *local_1080;
  TReferenceControllerBase<1> *pTStack_1078;
  TSharedRef<SHorizontalBox,1> local_1070;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1060;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1048;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1030;
  TSharedRef<SWidget,1> local_1018;
  TSharedRef<SButton,1> local_1008;
  TSharedRef<SWidget_const_,1> local_ff8;
  TSharedRef<SWidget_const_,1> local_fe8;
  undefined1 local_fd8 [16];
  undefined1 local_fc8 [32];
  undefined1 local_fa8 [24];
  undefined1 local_f90 [16];
  FSharedReferencer<1> local_f80 [3];
  undefined1 local_f68;
  TDelegateBase<FNotThreadSafeDelegateMode> local_f60;
  TOptional<FSizeParam> local_f38;
  FSlotArguments local_ea8;
  FArguments local_dc0;
  FArguments local_bb8;
  FArguments local_910;
  FArguments local_590;
  undefined8 uStack_48;
  
  uStack_48 = 0x14290c438;
  pFVar33 = (FSlot *)0x0;
  local_res18[0] = 0;
  if ((param_1->_Style == (FVolumeControlStyle *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDeclaration._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVolumeControl.cpp"
                          ,0x11,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->SpeakerIcons[0] = &param_1->_Style->HighVolumeImage;
  this->SpeakerIcons[1] = &param_1->_Style->MidVolumeImage;
  this->SpeakerIcons[2] = &param_1->_Style->LowVolumeImage;
  this->SpeakerIcons[3] = &param_1->_Style->NoVolumeImage;
  this->SpeakerIcons[4] = &param_1->_Style->MutedImage;
  (this->MutedAttribute).Value = (param_1->_Muted).Value;
  (this->MutedAttribute).bIsSet = (param_1->_Muted).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MutedAttribute).Getter,&(param_1->_Muted).Getter);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMutedChanged,&param_1->_OnMuteChanged);
  (this->VolumeAttribute).Value = (param_1->_Volume).Value;
  (this->VolumeAttribute).bIsSet = (param_1->_Volume).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->VolumeAttribute).Getter,&(param_1->_Volume).Getter);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnVolumeChanged,&param_1->_OnVolumeChanged);
  local_10c0.bIsSet = true;
  local_10c0.Getter._16_8_ = 0;
  local_10c0.Value.Left = ___xmm_3f800000400000003f80000040000000;
  local_10c0.Value.Top = _UNK_1509579e4;
  local_10c0.Value.Right = _UNK_1509579e8;
  local_10c0.Value.Bottom = _UNK_1509579ec;
  local_10c0.Getter._0_8_ = 0;
  local_10c0.Getter._8_8_ = 0;
  local_11c0 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)&this->_padding_,&local_10c0);
  local_1300 = SHorizontalBox::FArguments::FArguments(&local_dc0);
  pFVar15 = ::operator_new(0x58);
  local_11e8 = pFVar33;
  if (pFVar15 != (FSlot *)0x0) {
    *(undefined8 *)pFVar15 = 0;
    *(undefined8 *)&pFVar15->field_0x8 = 0;
    *(undefined8 *)&pFVar15->field_0x10 = 0;
    *(undefined8 *)&pFVar15->field_0x18 = 0;
    *(undefined8 *)&pFVar15->field_0x20 = 0;
    *(undefined8 *)&pFVar15->field_0x28 = 0;
    *(undefined8 *)&pFVar15->field_0x30 = 0;
    *(undefined8 *)&pFVar15->field_0x38 = 0;
    *(undefined8 *)&pFVar15->field_0x40 = 0;
    *(undefined8 *)&pFVar15->field_0x48 = 0;
    *(undefined8 *)&pFVar15->field_0x50 = 0;
    local_11e8 = SHorizontalBox::FSlot::FSlot(pFVar15);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_f90,(FSlot *)&local_11e8);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_fd8);
  TOptional<FSizeParam>::operator=(&local_f38,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa8);
  if ((void *)local_fa8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_fa8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fa8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fc8);
  if ((void *)local_fc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_fc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fc8);
  local_1240 = 1;
  local_1228 = 0;
  local_1250 = ___xmm_400000003f800000400000003f800000;
  uStack_1248 = _UNK_150971c38;
  local_f68 = 1;
  local_1238 = (undefined1  [8])0x0;
  FStack_1230.Data = (FScriptContainerElement *)0x0;
  local_f80[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_400000003f800000400000003f800000;
  local_f80[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150971c38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_f60,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1238);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1238,
             (FWriteAccessScope *)&local_1188);
  if (((int)local_1228 != 0) && (FStack_1230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1230,0,0,0x10);
    local_1228 = local_1228 & 0xffffffff00000000;
  }
  if (local_1188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1188.Accessor,&local_1188);
  }
  if (FStack_1230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1238);
  pFVar17 = SButton::FArguments::FArguments(&local_590);
  ::FName::FName(&local_1210,"NoBorder");
  pIVar18 = FAppStyle::Get();
  pFVar19 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,local_1210,0,1);
  if (pFVar19 == (FButtonStyle *)0x0) {
    pFVar19 = FButtonStyle::GetDefault();
  }
  pFVar17->_ButtonStyle = pFVar19;
  local_12a0 = 1;
  local_1288 = 0;
  local_12b0 = 0;
  uStack_12a8 = 0;
  local_1298 = (undefined1  [8])0x0;
  FStack_1290.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_ContentPadding).Value.Left = 0.0;
  (pFVar17->_ContentPadding).Value.Top = 0.0;
  (pFVar17->_ContentPadding).Value.Right = 0.0;
  (pFVar17->_ContentPadding).Value.Bottom = 0.0;
  (pFVar17->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1298,
             (FWriteAccessScope *)&local_1170);
  if (((int)local_1288 != 0) && (FStack_1290.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1290.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1290,0,0,0x10);
    local_1288 = local_1288 & 0xffffffff00000000;
  }
  if (local_1170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1170.Accessor,&local_1170);
  }
  if (FStack_1290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1290.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnClicked,
             (FWriteAccessScope *)&local_1140);
  local_1128 = &(pFVar17->_OnClicked).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1128);
  pSVar34 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1304 = local_12c0.SharedReferenceCount.ReferenceController._4_4_;
    local_1310 = (FArguments *)OnMuteClicked;
    uStack_1308 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1018);
    pSVar34 = (SVolumeControl *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar21->Object;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSVolumeControl___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar2;
    puVar20[4] = pSVar34;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    pFVar33 = (FSlot *)&DAT_00000007;
    puVar20[5] = local_1310;
    puVar20[6] = CONCAT44(uStack_1304,uStack_1308);
  }
  if (((ulonglong)pFVar33 & 4) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (((ulonglong)pFVar33 & 2) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (((ulonglong)pFVar33 & 1) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1018.SharedReferenceCount.ReferenceController);
  }
  if (local_1140.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1140.Accessor,&local_1140);
  }
  pFVar23 = SImage::FArguments::FArguments(&local_bb8);
  (pFVar23->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Image).Getter,
             (FWriteAccessScope *)&local_1120);
  local_1108 = &(pFVar23->_Image).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1108);
  pSVar34 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1304 = local_12c0.SharedReferenceCount.ReferenceController._4_4_;
    local_1310 = (FArguments *)GetSpeakerImage;
    uStack_1308 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_fe8);
    pSVar34 = (SVolumeControl *)(pTVar24->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar24->Object;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 | 0x38);
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSVolumeControl___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar2;
    puVar20[4] = pSVar34;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar20[5] = local_1310;
    puVar20[6] = CONCAT44(uStack_1304,uStack_1308);
  }
  if (((ulonglong)pFVar33 & 0x20) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (((ulonglong)pFVar33 & 0x10) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (((ulonglong)pFVar33 & 8) != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_fe8.SharedReferenceCount.ReferenceController);
  }
  if (local_1120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1120.Accessor,&local_1120);
  }
  FLLMScope::FLLMScope(&local_1334,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1208 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1200,&local_1208,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1030,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVolumeControl.cpp"
             ,0x2b,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope(&local_1200);
  FLLMScope::~FLLMScope(&local_1334);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1030,&local_12c0,pFVar23);
  pTVar3 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar25->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_12e0 = (pFVar17->_Content).Widget.Object;
  pTStack_12d8 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_12d8);
  FLLMScope::FLLMScope(&local_1330,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_11f0,&local_11f8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1048,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVolumeControl.cpp"
             ,0x26,local_res20);
  FMemScope::~FMemScope(&local_11f0);
  FLLMScope::~FLLMScope(&local_1330);
  pTVar26 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1048,&local_1008,pFVar17);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_f90._8_8_ = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1220 = 0;
  local_1218.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_f90 + 0x10),&local_1218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1218.ReferenceController);
  local_1310 = SHorizontalBox::FArguments::operator+(local_1300,(FSlotArguments *)local_f90);
  pFVar15 = ::operator_new(0x58);
  pFVar27 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlot *)0x0) {
    *(undefined8 *)pFVar15 = 0;
    *(undefined8 *)&pFVar15->field_0x8 = 0;
    *(undefined8 *)&pFVar15->field_0x10 = 0;
    *(undefined8 *)&pFVar15->field_0x18 = 0;
    *(undefined8 *)&pFVar15->field_0x20 = 0;
    *(undefined8 *)&pFVar15->field_0x28 = 0;
    *(undefined8 *)&pFVar15->field_0x30 = 0;
    *(undefined8 *)&pFVar15->field_0x38 = 0;
    *(undefined8 *)&pFVar15->field_0x40 = 0;
    *(undefined8 *)&pFVar15->field_0x48 = 0;
    *(undefined8 *)&pFVar15->field_0x50 = 0;
    pFVar27 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar15);
  }
  local_1300 = (FArguments *)pFVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_ea8,(FSlot *)&local_1300);
  local_11b8.Value = 1.0;
  local_11b8.Getter._16_8_ = 0;
  local_11b8.bIsSet = true;
  local_11b8.Getter._0_8_ = 0;
  local_11b8.Getter._8_8_ = 0;
  pFVar27 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_ea8,&local_11b8);
  uVar10 = _UNK_150971c48;
  local_1270 = 1;
  local_1280 = ___xmm_400000003f8000004000000041000000;
  uStack_1278 = _UNK_150971c48;
  local_1258 = 0;
  local_1268 = (undefined1  [8])0x0;
  FStack_1260.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar27->field_0x18 = ___xmm_400000003f8000004000000041000000;
  *(undefined8 *)&pFVar27->field_0x20 = uVar10;
  pFVar27->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar27->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1268);
  local_11d8 = (FSlotArguments *)0x0;
  if (&pFVar27->field_0x18 != (undefined1 *)0x0) {
    local_11d8 = pFVar27;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1268,
             (FWriteAccessScope *)&local_1158);
  if (((int)local_1258 != 0) && (FStack_1260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1260,0,0,0x10);
    local_1258 = local_1258 & 0xffffffff00000000;
  }
  if (local_1158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1158.Accessor,&local_1158);
  }
  if (FStack_1260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1268);
  pFVar28 = SSlider::FArguments::FArguments(&local_910);
  pFVar28->_Style = &param_1->_Style->SliderStyle;
  (pFVar28->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Value).Getter,
             (FWriteAccessScope *)&local_1100);
  local_10e8 = &(pFVar28->_Value).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10e8);
  pSVar34 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1314 = local_12c0.SharedReferenceCount.ReferenceController._4_4_;
    local_1320 = (FName)GetSliderPosition;
    uStack_1318 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ff8);
    pSVar34 = (SVolumeControl *)(pTVar24->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar24->Object;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 | 0x1c0);
    *puVar20 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSVolumeControl___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar2;
    puVar20[4] = pSVar34;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_1320;
    puVar20[6] = CONCAT44(uStack_1314,uStack_1318);
  }
  if ((uint)pFVar33 >> 8 != 0) {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if ((char)pFVar33 < '\0') {
    pFVar33 = (FSlot *)(ulonglong)((uint)pFVar33 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (((ulonglong)pFVar33 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ff8.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar12 = false;
  if (local_1100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1100.Accessor,&local_1100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnValueChanged,
             (FWriteAccessScope *)&local_10e0);
  local_10c8 = &(pFVar28->_OnValueChanged).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10c8);
  pSVar34 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1314 = local_12c0.SharedReferenceCount.ReferenceController._4_4_;
    local_1320 = (FName)OnWriteValue;
    uStack_1318 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1090);
    pSVar34 = (SVolumeControl *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar21->Object;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar12 = true;
    *puVar20 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSVolumeControl___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar2;
    puVar20[4] = pSVar34;
    if (pSVar34 != (SVolumeControl *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_1320;
    puVar20[6] = CONCAT44(uStack_1314,uStack_1318);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1090.SharedReferenceCount.ReferenceController);
  }
  if (local_10e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10e0.Accessor,&local_10e0);
  }
  FLLMScope::FLLMScope(&local_132c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1320 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_11e0,&local_1320,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&local_12f8,"SSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVolumeControl.cpp"
             ,0x33,&local_1338);
  FMemScope::~FMemScope(&local_11e0);
  FLLMScope::~FLLMScope(&local_132c);
  if (local_12f8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_12f8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_12f8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1080 = (this->Slider).Object;
  pTStack_1078 = (this->Slider).SharedReferenceCount.ReferenceController;
  (this->Slider).Object = local_12f8._Widget.Object;
  (this->Slider).SharedReferenceCount.ReferenceController =
       local_12f8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1078);
  pSVar29 = TSharedPtr<SSlider,1>::operator->(&local_12f8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar29,(FSlateBaseNamedArgs *)pFVar28);
  pSVar29 = local_12f8._Widget.Object;
  SSlider::Construct(local_12f8._Widget.Object,pFVar28);
  pSVar30 = TSharedPtr<SSlider,1>::operator->(&local_12f8._Widget);
  if ((pSVar30->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)(pSVar30->_padding_ + 0x228))(pSVar30);
    bVar14 = 0;
    if (cVar13 == '\0') goto LAB_14290d118;
  }
  bVar14 = 0x20;
LAB_14290d118:
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ & 0xdf;
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ | bVar14;
  pSVar30 = TSharedPtr<SSlider,1>::operator->(&local_12f8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar30->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_12f8._Widget.Object == (SSlider *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar11.ReferenceController = local_12f8._Widget.SharedReferenceCount.ReferenceController;
  local_12f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_12f8._Widget.Object = (SSlider *)0x0;
  if ((pSVar29 == (SSlider *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar27 = local_11d8;
  local_12c8.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&local_11d8->field_0x8 != &local_12d0) {
    *(SSlider **)&local_11d8->field_0x8 = pSVar29;
    local_12d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_11d8->field_0x10,&local_12c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12c8.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+(local_1310,pFVar27);
  FLLMScope::FLLMScope(local_1328,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_11c8,&local_11d0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1060,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SVolumeControl.cpp"
             ,0x21,local_1337);
  FMemScope::~FMemScope(&local_11c8);
  FLLMScope::~FLLMScope(local_1328);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1060,&local_1070,pFVar31);
  pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1198.Object = (SWidget *)pTVar32->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1198.SharedReferenceCount.ReferenceController = pTVar6;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_11c0,&local_1198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1070.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1060._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SSlider::FArguments::~FArguments(&local_910);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ea8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1048._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_12c0.SharedReferenceCount.ReferenceController._4_4_,
                      local_12c0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1030._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_bb8);
  SButton::FArguments::~FArguments(&local_590);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_f90);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_dc0._Slots.AllocatorInstance.Data,local_dc0._Slots.ArrayNum);
  if ((FSlotArguments *)local_dc0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_dc0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_dc0);
  return;
}

// GetSliderPosition @ 142948de0

float __thiscall SVolumeControl::GetSliderPosition(SVolumeControl *this)

{
  bool *pbVar1;
  float *pfVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->MutedAttribute);
  if (*pbVar1 != false) {
    return 0.0;
  }
  pfVar2 = TAttribute<float>::Get(&this->VolumeAttribute);
  return *pfVar2;
}

// GetSpeakerImage @ 142949440

FSlateBrush * __thiscall SVolumeControl::GetSpeakerImage(SVolumeControl *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  code *pcVar2;
  bool bVar3;
  FSlateBrush *pFVar4;
  bool *pbVar5;
  longlong lVar6;
  
  if ((this->Slider).Object == (SSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar2)();
      return pFVar4;
    }
  }
  TVar1 = ((this->Slider).Object)->ValueSlateAttribute;
  pbVar5 = TAttribute<bool>::Get(&this->MutedAttribute);
  if (*pbVar5 != false) {
    return this->SpeakerIcons[4];
  }
  if (__real_3f2b851f < (float)TVar1) {
    return this->SpeakerIcons[0];
  }
  if (__real_3ea8f5c3 < (float)TVar1) {
    return this->SpeakerIcons[1];
  }
  lVar6 = 0x340;
  if (__real_3c23d70a < (float)TVar1) {
    lVar6 = 0x338;
  }
  return *(FSlateBrush **)((longlong)&this->_padding_ + lVar6);
}

// OnMuteClicked @ 142978180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVolumeControl::OnMuteClicked(SVolumeControl *this,FReply *__return_storage_ptr__)

{
  TAttribute<bool> *this_00;
  bool bVar1;
  bool *pbVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FReadAccessScope local_28;
  
  this_00 = &this->MutedAttribute;
  pbVar2 = TAttribute<bool>::Get(this_00);
  if (*pbVar2 == false) {
    bVar1 = TAttribute<bool>::IsBound(this_00);
    if (!bVar1) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MutedAttribute).Getter);
      this_00->Value = true;
      this_00->bIsSet = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMutedChanged,
               &local_28);
    if ((*(int *)&(this->OnMutedChanged).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(this->OnMutedChanged).field_0x8, plVar3 == (longlong *)0x0))
    goto LAB_142978232;
    uVar4 = 1;
  }
  else {
    bVar1 = TAttribute<bool>::IsBound(this_00);
    if (!bVar1) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MutedAttribute).Getter);
      this_00->Value = false;
      this_00->bIsSet = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMutedChanged,
               &local_28);
    if ((*(int *)&(this->OnMutedChanged).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(this->OnMutedChanged).field_0x8, plVar3 == (longlong *)0x0))
    goto LAB_142978232;
    uVar4 = 0;
  }
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar4);
LAB_142978232:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnWriteValue @ 142984210

void __thiscall SVolumeControl::OnWriteValue(SVolumeControl *this,float param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool *pbVar4;
  FReadAccessScope local_38 [2];
  
  if (0.0 < param_1) {
    pbVar4 = TAttribute<bool>::Get(&this->MutedAttribute);
    if (*pbVar4 != false) {
      bVar2 = TAttribute<bool>::IsBound(&this->MutedAttribute);
      if (!bVar2) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MutedAttribute).Getter);
        (this->MutedAttribute).Value = false;
        (this->MutedAttribute).bIsSet = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMutedChanged,
                 local_38);
      if ((*(int *)&(this->OnMutedChanged).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnMutedChanged).field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->VolumeAttribute).Getter,local_38);
  if ((*(int *)&(this->VolumeAttribute).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->VolumeAttribute).Getter.field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      goto LAB_1429842fc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VolumeAttribute).Getter);
  (this->VolumeAttribute).Value = param_1;
  (this->VolumeAttribute).bIsSet = true;
LAB_1429842fc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVolumeChanged,
             local_38);
  if ((*(int *)&(this->OnVolumeChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnVolumeChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

