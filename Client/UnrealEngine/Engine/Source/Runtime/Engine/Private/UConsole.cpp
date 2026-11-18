// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// StaticClass @ 1488f09d0

UClass * __cdecl UConsole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Console",&Z_Registration_Info_UClass_UConsole.InnerSingleton,
               StaticRegisterNativesUConsole,0x160,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Input",InternalConstructor<UConsole>,
               InternalVTableHelperCtorCaller<UConsole>,local_res8,UObject::StaticClass,
               UGameViewportClient::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsole.InnerSingleton;
}

// UConsole @ 14890aa30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConsole * __thiscall UConsole::UConsole(UConsole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  (this->ConsoleTargetPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  (this->DefaultTexture_Black).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DefaultTexture_White).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Scrollback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scrollback).ArrayNum = 0;
  (this->Scrollback).ArrayMax = 0;
  (this->HistoryBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistoryBuffer).ArrayNum = 0;
  (this->HistoryBuffer).ArrayMax = 0;
  (this->TypedStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedStr).Data.ArrayNum = 0;
  (this->TypedStr).Data.ArrayMax = 0;
  (this->PrecompletedInputLine).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecompletedInputLine).Data.ArrayNum = 0;
  (this->PrecompletedInputLine).Data.ArrayMax = 0;
  (this->LastAutoCompletedCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastAutoCompletedCommand).Data.ArrayNum = 0;
  (this->LastAutoCompletedCommand).Data.ArrayMax = 0;
  (this->AutoCompleteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteList).ArrayNum = 0;
  (this->AutoCompleteList).ArrayMax = 0;
  (this->ConsoleState).ComparisonIndex = 0;
  (this->ConsoleState).Number = 0;
  (this->AutoCompleteTree).AutoCompleteListIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutoCompleteTree).AutoCompleteListIndices.ArrayNum = 0;
  (this->AutoCompleteTree).AutoCompleteListIndices.ArrayMax = 0;
  (this->AutoCompleteTree).ChildNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteTree).ChildNodes.ArrayNum = 0;
  (this->AutoCompleteTree).ChildNodes.ArrayMax = 0;
  (this->AutoComplete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoComplete).ArrayNum = 0;
  (this->AutoComplete).ArrayMax = 0;
  (this->Selection).MousePosDown.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).MousePosUp.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).MousePos.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).bActive = false;
  (this->Selection).bCapture = false;
  (this->Selection).bMade = false;
  (this->Selection).Offset = 0.0;
  (this->PreviousFocusedWidget).Object = (SWidget *)0x0;
  (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AutoCompleteTree).IndexChar = -1;
  this->TextW = 15.0;
  this->TextH = 15.0;
  this->PreviousMouseCaptureMode = CapturePermanently;
  this->bDPIAwareStringMeasurement = true;
  return this;
}

// UConsole @ 14890ab60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConsole * __thiscall UConsole::UConsole(UConsole *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  UClass *this_00;
  ulonglong uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->TextW = 15.0;
  this->TextH = 15.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  (this->ConsoleTargetPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  (this->DefaultTexture_Black).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DefaultTexture_White).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Scrollback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scrollback).ArrayNum = 0;
  (this->Scrollback).ArrayMax = 0;
  (this->HistoryBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistoryBuffer).ArrayNum = 0;
  (this->HistoryBuffer).ArrayMax = 0;
  (this->TypedStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedStr).Data.ArrayNum = 0;
  (this->TypedStr).Data.ArrayMax = 0;
  (this->PrecompletedInputLine).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecompletedInputLine).Data.ArrayNum = 0;
  (this->PrecompletedInputLine).Data.ArrayMax = 0;
  (this->LastAutoCompletedCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastAutoCompletedCommand).Data.ArrayNum = 0;
  (this->LastAutoCompletedCommand).Data.ArrayMax = 0;
  (this->AutoCompleteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteList).ArrayNum = 0;
  (this->AutoCompleteList).ArrayMax = 0;
  (this->ConsoleState).ComparisonIndex = 0;
  (this->ConsoleState).Number = 0;
  (this->AutoCompleteTree).AutoCompleteListIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutoCompleteTree).AutoCompleteListIndices.ArrayNum = 0;
  (this->AutoCompleteTree).AutoCompleteListIndices.ArrayMax = 0;
  (this->AutoCompleteTree).ChildNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteTree).ChildNodes.ArrayNum = 0;
  (this->AutoCompleteTree).ChildNodes.ArrayMax = 0;
  (this->AutoCompleteTree).IndexChar = -1;
  (this->AutoComplete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoComplete).ArrayNum = 0;
  (this->AutoComplete).ArrayMax = 0;
  (this->Selection).MousePosDown.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).MousePosUp.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).MousePos.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Selection).bActive = false;
  (this->Selection).bCapture = false;
  (this->Selection).bMade = false;
  (this->Selection).Offset = 0.0;
  this_00 = Z_Construct_UClass_UConsoleSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  uVar2 = (ulonglong)_tls_index;
  this->ConsoleSettings = (UConsoleSettings *)(this_00->ClassDefaultObject).field0_0x0;
  pvVar1 = ThreadLocalStoragePointer;
  (this->PreviousFocusedWidget).Object = (SWidget *)0x0;
  (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->PreviousMouseCaptureMode = CapturePermanently;
  this->bDPIAwareStringMeasurement = true;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UTexture2D>::FObjectFinder<UTexture2D>
                (&::ConstructorStatics.BlackTexture,L"/Engine/EngineResources/Black",0);
      ConstructorHelpers::FObjectFinder<UTexture2D>::FObjectFinder<UTexture2D>
                (&::ConstructorStatics.WhiteSquareTexture,
                 L"/Engine/EngineResources/WhiteSquareTexture",0);
      atexit(`UConsole::UConsole'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.BlackTexture.Object.field0_0x0 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.BlackTexture.Object.field0_0x0);
  }
  (this->DefaultTexture_Black).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)::ConstructorStatics.BlackTexture.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0);
  }
  (this->DefaultTexture_White).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0;
  return this;
}

// ~UConsole @ 14890e690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::~UConsole(UConsole *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FOutputDeviceRedirector *pFVar5;
  FOutputDevice *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  pFVar5 = GetGlobalLogSingleton();
  if (pFVar5 != (FOutputDeviceRedirector *)0x0) {
    pFVar5 = GetGlobalLogSingleton();
    pFVar6 = (FOutputDevice *)&this->_padding_;
    if (this == (UConsole *)0x0) {
      pFVar6 = (FOutputDevice *)0x0;
    }
    FOutputDeviceRedirector::RemoveOutputDevice(pFVar5,pFVar6);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FEngineShowFlags::OnCustomShowFlagRegistered,this);
  pTVar3 = (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DestructItems<FAutoCompleteCommand,int>
            ((FAutoCompleteCommand *)(this->AutoComplete).AllocatorInstance.Data,
             (this->AutoComplete).ArrayNum);
  pFVar4 = (this->AutoComplete).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FAutoCompleteNode::~FAutoCompleteNode(&this->AutoCompleteTree);
  DestructItems<FAutoCompleteCommand,int>
            ((FAutoCompleteCommand *)(this->AutoCompleteList).AllocatorInstance.Data,
             (this->AutoCompleteList).ArrayNum);
  pFVar4 = (this->AutoCompleteList).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->LastAutoCompletedCommand).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->PrecompletedInputLine).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->TypedStr).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->HistoryBuffer).AllocatorInstance.Data,(this->HistoryBuffer).ArrayNum)
  ;
  pFVar4 = (this->HistoryBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->Scrollback).AllocatorInstance.Data,(this->Scrollback).ArrayNum);
  pFVar4 = (this->Scrollback).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148910aa0

void __thiscall `UConsole::InputKey_InputLine'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)this;
  if (0 < *(int *)(lVar1 + 0xd0)) {
    *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + -1;
    return;
  }
  if (0 < *(int *)(lVar1 + 0xcc)) {
    *(int *)(lVar1 + 0xcc) = *(int *)(lVar1 + 0xcc) + -1;
    *(uint *)(*(longlong *)this + 200) = *(uint *)(*(longlong *)this + 200) & 0xfffffffe;
    return;
  }
  iVar2 = *(int *)(lVar1 + 0x110) + -0x15;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(lVar1 + 0xcc) = iVar2;
  lVar1 = *(longlong *)this;
  if (*(uint *)(lVar1 + 0x110) < 0x15) {
    *(int *)(lVar1 + 0xd0) = *(int *)(lVar1 + 0xd0) + (*(uint *)(lVar1 + 0x110) - 1);
    *(uint *)(*(longlong *)this + 200) = *(uint *)(*(longlong *)this + 200) & 0xfffffffe;
    return;
  }
  *(int *)(lVar1 + 0xcc) = *(int *)(lVar1 + 0xcc) + 1;
  *(int *)(*(longlong *)this + 0xd0) = *(int *)(*(longlong *)this + 0xd0) + 0x13;
  *(uint *)(*(longlong *)this + 200) = *(uint *)(*(longlong *)this + 200) & 0xfffffffe;
  return;
}

// operator() @ 148911450

void __thiscall
`UConsole::PostRender_InputLine'::__l8::<lambda_1>::operator()
          (void *this,FAutoCompleteCommand *param_1,int param_2,int param_3)

{
  FString *pFVar1;
  float fVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  longlong lVar5;
  FCanvas *pFVar6;
  FColor_u_0 FVar7;
  int iVar8;
  FText *pFVar9;
  wchar_t *pwVar10;
  FAutoCompleteCommand *pFVar11;
  wchar_t *pwVar12;
  FColor_u_0 FVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res10 [2];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20;
  undefined1 local_98 [8];
  float fStack_90;
  undefined4 uStack_8c;
  
  local_res8[0] = *(float *)(*(longlong *)this + 0xd0);
  if (((uint)param_3 < 0x15) || (param_2 != param_3 + -1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pFVar1 = &param_1->Desc;
  pwVar12 = L"";
  if ((param_1->Desc).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_res10[0] = (float)FGenericPlatformStricmp::Stricmp(pwVar10,L">");
  local_res18[0] = (FColor_u_0)(param_1->Color).field0_0x0.Bits;
  FVar4 = (FColor_u_0)((FColor_u_0 *)(*(longlong *)(*(longlong *)this + 0x140) + 0x68))->Bits;
  local_res20 = FVar4;
  if ((float)param_2 == local_res8[0]) {
    fVar16 = **(float **)((longlong)this + 0x18);
    lVar5 = *(longlong *)((longlong)this + 8);
    *(double *)(lVar5 + 0x40) = (double)**(float **)((longlong)this + 0x10);
    *(double *)(lVar5 + 0x48) = (double)fVar16;
    local_98._4_4_ = FLinearColor::sRGBToLinearTable[0x32];
    local_98._0_4_ = FLinearColor::sRGBToLinearTable[0];
    uStack_8c = 0x3f800000;
    fStack_90 = FLinearColor::sRGBToLinearTable[0];
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
    *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x1c) = 0;
    pFVar6 = *(FCanvas **)(**(longlong **)((longlong)this + 0x20) + 0x2e8);
    (**(code **)(**(longlong **)((longlong)this + 8) + 8))
              (*(longlong **)((longlong)this + 8),pFVar6,
               (float)**(int **)((longlong)this + 0x28) + **(float **)((longlong)this + 0x30),
               **(undefined4 **)((longlong)this + 0x38));
    if (pFVar6->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar6,false);
    }
    local_res18[0] = ConsoleDefs::CursorColor.field0_0x0;
  }
  FVar13 = FVar4;
  FVar7 = local_res18[0];
  if (local_res10[0] == 0.0) {
    FVar13 = local_res18[0];
    FVar7 = FVar4;
    local_res20 = local_res18[0];
  }
  local_res18[0] = FVar7;
  FVar4 = local_res18[0];
  local_98 = (undefined1  [8])(param_1->Command).Data.AllocatorInstance.Data;
  iVar14 = (param_1->Command).Data.ArrayNum;
  fStack_90 = (float)(iVar14 + -1);
  if (iVar14 == 0) {
    fStack_90 = 0.0;
  }
  UCanvas::StrLen((UFont *)**(undefined8 **)((longlong)this + 0x40),(TStringView<wchar_t> *)local_98
                  ,local_res8,local_res10,*(bool *)(*(longlong *)this + 0x159),
                  *(FCanvas **)(**(longlong **)((longlong)this + 0x20) + 0x2e8));
  if (bVar3) {
    fVar16 = **(float **)((longlong)this + 0x10) * __real_3f000000 -
             (local_res8[0] / **(float **)((longlong)this + 0x48)) * __real_3f000000;
    fVar15 = **(float **)((longlong)this + 0x50) + __real_40c00000;
    if (fVar15 <= fVar16) {
      fVar16 = fVar15;
    }
    iVar14 = (int)fVar16;
  }
  else {
    iVar14 = 0;
  }
  lVar5 = *(longlong *)((longlong)this + 0x58);
  fVar16 = FLinearColor::sRGBToLinearTable[(byte)local_res18[0]._1_1_];
  fVar15 = FLinearColor::sRGBToLinearTable[FVar4.Bits & 0xff];
  *(float *)(lVar5 + 0x30) = FLinearColor::sRGBToLinearTable[(byte)local_res18[0]._2_1_];
  *(float *)(lVar5 + 0x34) = fVar16;
  *(float *)(lVar5 + 0x38) = fVar15;
  fVar16 = __real_3b808081;
  *(float *)(lVar5 + 0x3c) = (float)(local_res18[0].Bits >> 0x18) * __real_3b808081;
  if ((param_1->Desc).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Desc).Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,L">");
  pFVar11 = (FAutoCompleteCommand *)pFVar1;
  if (iVar8 != 0) {
    pFVar11 = param_1;
  }
  pFVar9 = FText::FromString((FText *)local_98,&pFVar11->Command);
  FText::operator=((FText *)(*(longlong *)((longlong)this + 0x58) + 0x208),pFVar9);
  if (local_98 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_98 + 0x10))();
  }
  pFVar6 = *(FCanvas **)(**(longlong **)((longlong)this + 0x20) + 0x2e8);
  (**(code **)(**(longlong **)((longlong)this + 0x58) + 8))
            (*(longlong **)((longlong)this + 0x58),pFVar6,
             (float)(**(int **)((longlong)this + 0x28) + iVar14) +
             **(float **)((longlong)this + 0x30),**(undefined4 **)((longlong)this + 0x38));
  if (pFVar6->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar6,false);
  }
  lVar5 = **(longlong **)((longlong)this + 0x20);
  bVar3 = *(bool *)(*(longlong *)this + 0x159);
  if ((param_1->Desc).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Desc).Data.AllocatorInstance.Data;
  }
  iVar14 = FGenericPlatformStricmp::Stricmp(pwVar10,L">");
  pFVar11 = param_1;
  if (iVar14 != 0) {
    pFVar11 = (FAutoCompleteCommand *)pFVar1;
  }
  local_98 = (undefined1  [8])(pFVar11->Command).Data.AllocatorInstance.Data;
  iVar8 = (pFVar11->Command).Data.ArrayNum;
  iVar14 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar14 = 0;
  }
  fStack_90 = (float)iVar14;
  UCanvas::StrLen((UFont *)**(undefined8 **)((longlong)this + 0x40),(TStringView<wchar_t> *)local_98
                  ,(float *)local_res18,local_res8,bVar3,*(FCanvas **)(lVar5 + 0x2e8));
  lVar5 = *(longlong *)((longlong)this + 0x58);
  fVar15 = FLinearColor::sRGBToLinearTable[(byte)local_res20._1_1_];
  fVar2 = FLinearColor::sRGBToLinearTable[FVar13.Bits & 0xff];
  *(float *)(lVar5 + 0x30) = FLinearColor::sRGBToLinearTable[(byte)local_res20._2_1_];
  *(float *)(lVar5 + 0x34) = fVar15;
  *(float *)(lVar5 + 0x38) = fVar2;
  *(float *)(lVar5 + 0x3c) = (float)(local_res20.Bits >> 0x18) * fVar16;
  if ((param_1->Desc).Data.ArrayNum != 0) {
    pwVar12 = (wchar_t *)(param_1->Desc).Data.AllocatorInstance.Data;
  }
  iVar14 = FGenericPlatformStricmp::Stricmp(pwVar12,L">");
  if (iVar14 != 0) {
    param_1 = (FAutoCompleteCommand *)pFVar1;
  }
  pFVar9 = FText::FromString((FText *)local_98,&param_1->Command);
  FText::operator=((FText *)(*(longlong *)((longlong)this + 0x58) + 0x208),pFVar9);
  if (local_98 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_98 + 0x10))();
  }
  pFVar6 = *(FCanvas **)(**(longlong **)((longlong)this + 0x20) + 0x2e8);
  (**(code **)(**(longlong **)((longlong)this + 0x58) + 8))();
  if (pFVar6->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar6,false);
  }
  **(float **)((longlong)this + 0x38) =
       **(float **)((longlong)this + 0x38) - **(float **)((longlong)this + 0x18);
  return;
}

// operator() @ 148912330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UConsole::BuildRuntimeAutoCompleteList'::__l29::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  FAssetData *this_00;
  FName FVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *this_01;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  FString *pFVar11;
  size_t sVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  wchar_t *pwVar16;
  FAssetData *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_1178 [32];
  undefined1 local_1148 [8];
  FAssetData *local_1140;
  undefined8 local_1138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1130;
  FString local_1120;
  FName local_1110;
  FString *local_1108;
  FName local_10f8;
  int iStack_10f0;
  undefined4 uStack_10ec;
  FString local_10e8;
  TStringView<wchar_t> local_10d8;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1178;
  local_1120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1120.Data.ArrayNum = 0;
  local_1120.Data.ArrayMax = 0;
  local_1108 = param_2;
  bVar4 = FPackageName::TryConvertFilenameToLongPackageName(param_2,&local_1120,(FString *)0x0,None)
  ;
  if (bVar4) {
    pFVar8 = ::FName::FName(&local_1110,L"AssetRegistry");
    FVar1 = *pFVar8;
    this_01 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModule(this_01,FVar1,None);
    if (pIVar9 != (IModuleInterface *)0x0) {
      local_1140 = (FAssetData *)0x0;
      local_1138 = 0;
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_1120.Data.ArrayNum != 0) {
        FVar14.Data = local_1120.Data.AllocatorInstance.Data;
      }
      pcVar2 = *(code **)(*plVar10 + 0x20);
      pFVar8 = ::FName::FName(&local_10f8,(wchar_t *)FVar14.Data);
      (*pcVar2)(plVar10,*pFVar8,&local_1140,1);
      uVar13 = (ulonglong)(int)(uint)local_1138;
      local_1110.ComparisonIndex.Value = (uint)local_1138;
      pFVar8 = &local_1140->AssetName;
      pFVar17 = local_1140 + uVar13;
LAB_148912460:
      do {
        if ((uint)local_1138 != (int)uVar13) {
          `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1148);
        }
        this_00 = (FAssetData *)(pFVar8 + -2);
        if (this_00 == pFVar17) goto LAB_148912614;
        if ((((pFVar8[4].Number & 0x20000) != 0) && (this_00->PackageName != (FName)0x0)) &&
           (*pFVar8 != (FName)0x0)) {
          local_888.Base = local_868;
          local_888.bIsDynamic = false;
          local_888.bIsExternal = false;
          local_888.CurPos = local_868;
          local_888.End = local_52;
          ::FName::ToString(pFVar8,&local_888);
          local_10c8.Base = local_10a8;
          local_10c8.bIsDynamic = false;
          local_10c8.bIsExternal = false;
          local_10c8.CurPos = local_10a8;
          local_10c8.End = local_892;
          ::FName::ToString((FName *)this_00,&local_10c8);
          pwVar3 = local_888.Base;
          pwVar16 = local_10c8.Base;
          lVar18 = (longlong)local_888.CurPos - (longlong)local_888.Base;
          iVar15 = (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1);
          local_10f8 = (FName)local_10c8.Base;
          local_10d8._12_4_ = uStack_10ec;
          local_10d8.Size = iVar15;
          local_10d8.DataPtr = local_10c8.Base;
          iStack_10f0 = iVar15;
          iVar5 = UE::String::FindLastChar(&local_10d8,L'/',CaseSensitive);
          iVar6 = iVar5 + 1;
          iVar7 = 0x7fffffff;
          if (iVar6 < 0) {
            iVar6 = 0;
            iVar7 = iVar5 + -0x80000000;
          }
          if (iVar15 < iVar6) {
            iVar6 = iVar15;
          }
          iVar5 = iVar15 - iVar6;
          if (iVar7 < iVar15 - iVar6) {
            iVar5 = iVar7;
          }
          iVar7 = 0;
          if (0 < iVar5) {
            iVar7 = iVar5;
          }
          iVar5 = (int)(lVar18 >> 1);
          if ((iVar7 == iVar5) &&
             ((((iVar7 == 0 || (iVar5 == 0)) ||
               (iVar6 = FGenericPlatformStricmp::Strnicmp
                                  ((wchar_t *)((longlong)pwVar16 + (longlong)iVar6 * 2),pwVar3,
                                   (longlong)iVar5), iVar6 == 0)) && (iVar7 == iVar5)))) {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
            pFVar11 = ::FName::ToString(pFVar8,&local_10e8);
            TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_1,pFVar11);
            if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
              uVar13 = (ulonglong)local_1110.ComparisonIndex.Value;
              pFVar8 = pFVar8 + 0xd;
              goto LAB_148912460;
            }
          }
          else {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
          }
        }
        uVar13 = (ulonglong)local_1110.ComparisonIndex.Value;
        pFVar8 = pFVar8 + 0xd;
      } while( true );
    }
  }
LAB_148912641:
  local_1130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1130.ArrayNum = 0;
  local_1130.ArrayMax = 0;
  FPackageName::FindPackagesInDirectory(&local_1130,param_2);
  iVar6 = local_1130.ArrayNum;
  pFVar19 = local_1130.AllocatorInstance.Data + (longlong)local_1130.ArrayNum * 0x10;
  FVar14.Data = local_1130.AllocatorInstance.Data;
  do {
    if (local_1130.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1148)
      ;
    }
    if (FVar14.Data == pFVar19) {
      DestructItems<FString,int>((FString *)local_1130.AllocatorInstance.Data,local_1130.ArrayNum);
      if (local_1130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1130.AllocatorInstance.Data);
      }
      if (local_1120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1120.Data.AllocatorInstance.Data);
      }
      return;
    }
    iVar7 = ::FString::Find((FString *)FVar14.Data,L"/",1,IgnoreCase,FromEnd,-1);
    pFVar11 = FPackageName::GetMapPackageExtension();
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar16 = L"";
LAB_1489126d5:
      sVar12 = wcslen(pwVar16);
      iVar5 = ::FString::Find((FString *)FVar14.Data,pwVar16,(int)sVar12,IgnoreCase,FromEnd,-1);
    }
    else {
      pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) goto LAB_1489126d5;
      iVar5 = -1;
    }
    if ((iVar7 != -1) && (iVar5 != -1)) {
      pFVar11 = ::FString::Mid((FString *)FVar14.Data,&local_10e8,iVar7 + 1,(iVar5 - iVar7) + -1);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_1,pFVar11);
      if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
      }
    }
    FVar14.Data = FVar14.Data + 0x10;
  } while( true );
LAB_148912614:
  DestructItems<FAssetData,int>(local_1140,(uint)local_1138);
  param_2 = local_1108;
  if (local_1140 != (FAssetData *)0x0) {
    FMemory::Free(local_1140);
    param_2 = local_1108;
  }
  goto LAB_148912641;
}

// operator() @ 1489127c0

bool __thiscall
`UConsole::UpdateCompleteIndices'::__l43::<lambda_1>::operator()
          (void *this,FAutoCompleteCommand *param_1,FAutoCompleteCommand *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pwVar6 = L"";
  iVar1 = *(int *)(*(longlong *)this + 0x80);
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(*(longlong *)this + 0x78);
  }
  bVar3 = ::FString::StartsWith(&param_1->Command,pwVar5,iVar4,IgnoreCase);
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x80);
  iVar4 = iVar1 + -1;
  if (bVar3) {
    if (iVar1 == 0) {
      iVar4 = 0;
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(lVar2 + 0x78);
    }
    bVar3 = ::FString::StartsWith(&param_2->Command,pwVar5,iVar4,IgnoreCase);
    if (!bVar3) {
      return true;
    }
  }
  else {
    if (iVar1 == 0) {
      iVar4 = 0;
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(lVar2 + 0x78);
    }
    bVar3 = ::FString::StartsWith(&param_2->Command,pwVar5,iVar4,IgnoreCase);
    if (bVar3) {
      return false;
    }
  }
  if ((param_2->Command).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Command).Data.AllocatorInstance.Data;
  }
  if ((param_1->Command).Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar5);
  return SUB41((uint)iVar4 >> 0x1f,0);
}

// AppendInputText @ 148918b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UConsole::AppendInputText(UConsole *this,FString *param_1)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FString *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_78.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar14 = (longlong)local_78.Data.ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
    iVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar2,lVar14 * 2);
    iVar13 = local_78.Data.ArrayNum;
  }
  while( true ) {
    iVar5 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar5 = 0;
    }
    uVar8 = 0;
    uVar17 = 0;
    if (iVar5 < 1) break;
    if (1 < iVar5) {
      iVar5 = 1;
    }
    iVar15 = 0;
    if (0 < iVar5) {
      iVar15 = iVar5;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (iVar13 != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar6.Data,iVar15);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    wVar1 = *(wchar_t *)FVar6.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::RemoveAt(&local_78,0,1,No);
    iVar13 = local_78.Data.ArrayNum;
    if (0x1f < (ushort)wVar1) {
      pcVar3 = *(code **)(this->_padding_ + 0x2b0);
      iVar13 = (this->TypedStr).Data.ArrayNum;
      uVar10 = iVar13 - 1U;
      if (iVar13 == 0) {
        uVar10 = uVar8;
      }
      uVar10 = uVar10 - this->TypedStrPos;
      if (iVar13 == 0) {
        pwVar11 = L"";
        uVar16 = uVar8;
      }
      else {
        pwVar11 = (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data;
        uVar16 = iVar13 - 1U;
      }
      uVar9 = uVar16;
      if ((int)uVar10 < (int)uVar16) {
        uVar9 = uVar10;
      }
      uVar10 = uVar17;
      if (0 < (int)uVar9) {
        uVar10 = uVar9;
      }
      ::FString::FString(&local_58,
                         (wchar_t *)
                         ((longlong)pwVar11 + ((longlong)(int)uVar16 - (longlong)(int)uVar10) * 2));
      iVar13 = (this->TypedStr).Data.ArrayNum;
      uVar10 = iVar13 - 1;
      if (iVar13 == 0) {
        uVar10 = uVar8;
      }
      if (this->TypedStrPos < (int)uVar10) {
        uVar10 = this->TypedStrPos;
      }
      if (0 < (int)uVar10) {
        uVar17 = uVar10;
      }
      if (iVar13 == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_68,pwVar11,uVar17);
      ::FString::PrintfImpl(&local_38,L"%s%s%s");
      (*pcVar3)(this,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x2b8))(this,this->TypedStrPos + 1);
      iVar13 = local_78.Data.ArrayNum;
    }
  }
  (**(code **)(this->_padding_ + 0x310))(this);
  iVar13 = (this->AutoComplete).ArrayNum;
  if (iVar13 < 1) {
    pFVar7 = ::FString::FString(&local_28,L"");
    pFVar12 = &this->PrecompletedInputLine;
    if (pFVar12 != pFVar7) {
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar12->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PrecompletedInputLine).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->PrecompletedInputLine).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar10 = this->AutoCompleteCursor;
    if (this->AutoCompleteCursor < 0) {
      uVar10 = uVar8;
    }
    uVar10 = this->AutoCompleteIndex + uVar10;
    if ((int)uVar10 < iVar13) {
      uVar17 = ~uVar10 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::operator=
              (&this->PrecompletedInputLine,
               (FString *)
               ((this->AutoComplete).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28));
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// AugmentRuntimeAutoCompleteList @ 148919200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsole::AugmentRuntimeAutoCompleteList
          (UConsole *this,TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// BeginState_Open @ 1489194b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::BeginState_Open(UConsole *this,FName param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  EMouseCaptureMode EVar5;
  longlong lVar6;
  UGameViewportClient *this_00;
  
  this->SBPos = 0;
  puVar2 = &this->field_0xb0;
  this->bCaptureKeyInput = 1;
  this->bShift = 0;
  this->bCtrl = 0;
  if (param_1 == (FName)0x0) {
    (**(code **)(this->_padding_ + 0x2e0))();
  }
  if ((this->_padding_ & 0x10) == 0) {
    lVar6 = this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8793431413794799546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                       ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = 0;
  }
  EVar5 = (**(code **)(*(longlong *)(lVar6 + 0x30) + 0x198))(lVar6 + 0x30);
  this->PreviousMouseCaptureMode = EVar5;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UGameViewportClient *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8793431413794799546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                       ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (UGameViewportClient *)0x0;
  }
  UGameViewportClient::SetMouseCaptureMode(this_00,CaptureDuringMouseDown);
  (this->Selection).bActive = false;
  (this->Selection).bCapture = false;
  (this->Selection).bMade = false;
  (this->Selection).Offset = 0.0;
  return;
}

// BeginState_Typing @ 1489195a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::BeginState_Typing(UConsole *this,FName param_1)

{
  if (param_1 == (FName)0x0) {
    (**(code **)(this->_padding_ + 0x2e0))();
    this->bCaptureKeyInput = 1;
    return;
  }
  this->bCaptureKeyInput = 1;
  return;
}

// BuildRuntimeAutoCompleteList @ 1489198b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UConsole::BuildRuntimeAutoCompleteList(UConsole *this,bool param_1)

{
  TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *pTVar1;
  ushort uVar2;
  FColor_u_0 FVar3;
  FAutoCompleteNode *this_00;
  FAutoCompleteCommand *pFVar4;
  UStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **ppTVar9;
  code *pcVar10;
  FField *pFVar11;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  EInternalObjectFlags EVar16;
  uint uVar17;
  int iVar18;
  IConsoleManager *pIVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  UClass *pUVar22;
  UClass *pUVar23;
  FString *pFVar24;
  FStatGroupGameThreadNotifier *pFVar25;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar26;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar27;
  ulonglong uVar28;
  int *piVar29;
  int iVar30;
  UConsoleSettings *pUVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 *puVar38;
  uint *puVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  TBitArray<FDefaultBitArrayAllocator> *pTVar42;
  uint uVar43;
  ulonglong uVar44;
  ForAnyElementType this_01;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffcc8;
  undefined4 uVar45;
  int *piVar46;
  uint local_308;
  undefined1 local_304 [4];
  FString local_300;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_2f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_2e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2e0;
  FLLMScope local_2d0 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c0;
  FDelegateAllocation local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TObjectIterator<UFunction> local_268;
  TFieldIterator<FProperty> local_250;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  int local_1e8;
  int local_1e4;
  FName local_1e0;
  FString local_1d8;
  FString local_1c8;
  FMemScope local_1b8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1b0;
  FIterSink local_1a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FString local_140;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FString local_e0;
  void *local_d0 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  piVar46 = (int *)&DAT_00000001;
  uVar28 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffcc8 >> 8),1);
  FLLMScope::FLLMScope(local_2d0,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_1b8,EngineMisc,true);
  if (param_1) {
    uVar36 = 0;
    uVar44 = uVar36;
    uVar33 = uVar36;
    if (0 < (this->AutoCompleteTree).ChildNodes.ArrayNum) {
      do {
        iVar30 = (this->AutoCompleteTree).ChildNodes.ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = (uint)uVar44;
        uVar17 = 0;
        if ((int)uVar40 < iVar30) {
          uVar17 = ~uVar40 >> 0x1f;
        }
        if (uVar17 == 0) {
          uVar28 = (ulonglong)(int)uVar40;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        this_00 = *(FAutoCompleteNode **)
                   ((this->AutoCompleteTree).ChildNodes.AllocatorInstance.Data + uVar33);
        if (this_00 != (FAutoCompleteNode *)0x0) {
          FAutoCompleteNode::~FAutoCompleteNode(this_00);
          ::operator_delete(this_00,0x28);
        }
        uVar44 = (ulonglong)(uVar40 + 1);
        uVar33 = uVar33 + 8;
      } while ((int)(uVar40 + 1) < (this->AutoCompleteTree).ChildNodes.ArrayNum);
    }
    piVar29 = &(this->AutoCompleteTree).ChildNodes.ArrayMax;
    iVar30 = *piVar29;
    (this->AutoCompleteTree).ChildNodes.ArrayNum = 0;
    if (iVar30 < 0) {
      uVar28 = uVar28 & 0xffffffff00000000;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AutoCompleteTree).ChildNodes.AllocatorInstance,0,piVar29);
      piVar46 = piVar29;
    }
    pTVar1 = &this->AutoCompleteList;
    piVar29 = &(this->AutoCompleteList).ArrayMax;
    pFVar4 = (FAutoCompleteCommand *)(pTVar1->AllocatorInstance).Data;
    iVar30 = (this->AutoCompleteList).ArrayNum;
    if (*piVar29 < 0) {
      DestructItems<FAutoCompleteCommand,int>(pFVar4,iVar30);
      (this->AutoCompleteList).ArrayNum = 0;
      if (*piVar29 != 0) {
        uVar28 = uVar28 & 0xffffffff00000000;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar29);
        piVar46 = piVar29;
      }
    }
    else {
      DestructItems<FAutoCompleteCommand,int>(pFVar4,iVar30);
      (this->AutoCompleteList).ArrayNum = 0;
    }
    TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>::AddDefaulted
              (pTVar1,(this->ConsoleSettings->ManualAutoCompleteList).ArrayNum);
    pUVar31 = this->ConsoleSettings;
    uVar44 = uVar36;
    if (0 < (pUVar31->ManualAutoCompleteList).ArrayNum) {
      do {
        iVar30 = (pUVar31->ManualAutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = (uint)uVar36;
        uVar43 = ~uVar40 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar40 < iVar30) {
          uVar17 = uVar43;
        }
        if (uVar17 == 0) {
          uVar28 = (ulonglong)(int)uVar40;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        pFVar41 = (pUVar31->ManualAutoCompleteList).AllocatorInstance.Data + uVar44;
        uVar17 = 0;
        if ((int)uVar40 < iVar30) {
          uVar17 = uVar43;
        }
        if (uVar17 == 0) {
          uVar28 = (ulonglong)(int)uVar40;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar32 = (pTVar1->AllocatorInstance).Data + uVar44;
        ::FString::operator=((FString *)pFVar32,(FString *)pFVar41);
        ::FString::operator=((FString *)(pFVar32 + 0x10),(FString *)(pFVar41 + 0x10));
        *(undefined4 *)&pFVar32[0x20].field_0x0 = *(undefined4 *)&pFVar41[0x20].field_0x0;
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar17 = 0;
        if ((int)uVar40 < iVar30) {
          uVar17 = uVar43;
        }
        FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
        if (uVar17 == 0) {
          uVar28 = (ulonglong)(int)uVar40;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        uVar36 = (ulonglong)(uVar40 + 1);
        *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + uVar44 + 0x20) = FVar3;
        pUVar31 = this->ConsoleSettings;
        uVar44 = uVar44 + 0x28;
      } while ((int)(uVar40 + 1) < (pUVar31->ManualAutoCompleteList).ArrayNum);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &RegisterConsoleAutoCompleteEntries,(FWriteAccessScope *)&local_130);
    uVar45 = (undefined4)(uVar28 >> 0x20);
    bVar13 = false;
    RegisterConsoleAutoCompleteEntries._28_4_ = RegisterConsoleAutoCompleteEntries._28_4_ + 1;
    iVar30 = RegisterConsoleAutoCompleteEntries._16_4_ + -1;
    if (-1 < iVar30) {
      uVar44 = (ulonglong)iVar30;
      lVar37 = uVar44 << 4;
      bVar13 = false;
      do {
        piVar29 = (int *)(longlong)(int)RegisterConsoleAutoCompleteEntries._16_4_;
        if (((int)RegisterConsoleAutoCompleteEntries._16_4_ <= iVar30) &&
           (uVar28 = uVar44,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , piVar46 = piVar29, bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (((*(int *)(RegisterConsoleAutoCompleteEntries._8_8_ + 8 + lVar37) == 0) ||
            (*(longlong **)(RegisterConsoleAutoCompleteEntries._8_8_ + lVar37) == (longlong *)0x0))
           || (cVar15 = (**(code **)(**(longlong **)
                                       (RegisterConsoleAutoCompleteEntries._8_8_ + lVar37) + 0x68))
                                  (), cVar15 == '\0')) {
          bVar13 = true;
        }
        uVar45 = (undefined4)(uVar28 >> 0x20);
        uVar44 = uVar44 - 1;
        lVar37 = lVar37 + -0x10;
        iVar30 = iVar30 + -1;
      } while (-1 < iVar30);
    }
    RegisterConsoleAutoCompleteEntries._28_4_ = RegisterConsoleAutoCompleteEntries._28_4_ + -1;
    if (bVar13) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &RegisterConsoleAutoCompleteEntries,false);
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    pIVar19 = IConsoleManager::Get();
    local_2c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_2b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2b8.DelegateSize = 0;
    pcVar10 = *(code **)((longlong)*pIVar19 + 0xd8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2c0,(FWriteAccessScope *)&local_100);
    local_e8 = &local_2b8;
    puVar20 = UE::Core::Private::DelegateAllocate(0x20,&local_2b8);
    if (puVar20 != (undefined8 *)0x0) {
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__PEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA_______6B_
      ;
      puVar20[1] = &this->AutoCompleteList;
      uVar21 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar21;
      *puVar20 = &
                 ___7__TBaseStaticDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__PEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA_______6B_
      ;
      puVar20[3] = FConsoleVariableAutoCompleteVisitor::OnConsoleVariable;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    (*pcVar10)(pIVar19,&local_2c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2c0,(FWriteAccessScope *)&local_118);
    if ((local_2b8.DelegateSize != 0) &&
       (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2b8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2b8,0,0,0x10);
      local_2b8.DelegateSize = 0;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2b8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
    local_268.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ObjectArray.ArrayNum = 0;
    local_268.ObjectArray.ArrayMax = 0;
    local_268.Index = 0xffffffff;
    EVar16 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar22 = Z_Construct_UClass_UFunction_NoRegister();
    uVar28 = CONCAT44(uVar45,EVar16) | 0x90020000;
    GetObjectsOfClass(pUVar22,&local_268.ObjectArray,true,RF_ClassDefaultObject,
                      (EInternalObjectFlags)uVar28);
    TObjectIterator<UFunction>::Advance(&local_268);
    pTVar1 = &this->AutoCompleteList;
    while( true ) {
      uVar33 = 0;
      uVar44 = (ulonglong)local_268.Index;
      if (local_268.Index < 0) break;
      piVar29 = (int *)(longlong)local_268.ObjectArray.ArrayNum;
      if (local_268.ObjectArray.ArrayNum <= local_268.Index) break;
      uVar17 = 0;
      if (local_268.Index < local_268.ObjectArray.ArrayNum) {
        uVar17 = (uint)~local_268.Index >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (uVar28 = uVar44,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar46 = piVar29, bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar5 = *(UStruct **)(local_268.ObjectArray.AllocatorInstance.Data + uVar44 * 8);
      pUVar22 = (UClass *)pUVar5->_padding_;
      if (pUVar22 == (UClass *)0x0) {
LAB_148919f33:
        pUVar22 = (UClass *)0x0;
LAB_148919f36:
        bVar13 = false;
      }
      else {
        pUVar23 = Z_Construct_UClass_UClass_NoRegister();
        iVar30 = (int)pUVar23->_padding_;
        if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar30) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
            &pUVar23->_padding_)) goto LAB_148919f33;
        pUVar23 = Z_Construct_UClass_ALevelScriptActor_NoRegister();
        if (pUVar23 == (UClass *)0x0) goto LAB_148919f36;
        iVar30 = (int)pUVar23->_padding_;
        if (((int)pUVar22->_padding_ < iVar30) ||
           ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar30 * 8) !=
            &pUVar23->_padding_)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if ((((!bVar13) ||
             (pUVar23 = Z_Construct_UClass_ALevelScriptActor_NoRegister(), pUVar22 == pUVar23)) ||
            ((short)pUVar5[1]._padding_ != -1)) ||
           ((pUVar5->SuperStruct).field0_0x0.DebugPtr != (UStruct *)0x0)) goto LAB_148919f36;
        bVar13 = true;
      }
      if ((((pUVar5[1]._padding_ & 0x200) != 0) &&
          (((pUVar5->SuperStruct).field0_0x0.DebugPtr == (UStruct *)0x0 ||
           (pUVar22 != (UClass *)0x0)))) || (bVar13)) {
        local_1e0 = (FName)pUVar5->_padding_;
        ::FName::ToString(&local_1e0,&local_300);
        bVar14 = FDefaultValueHelper::HasWhitespaces(&local_300);
        if (bVar14) {
          ::FString::PrintfImpl(&local_238,L"\"%s\"");
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          local_300.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
          local_300.Data.ArrayNum = local_238.Data.ArrayNum;
          local_300.Data.ArrayMax = local_238.Data.ArrayMax;
          local_238.Data.ArrayNum = 0;
          local_238.Data.ArrayMax = 0;
          local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (bVar13) {
          pFVar24 = ::FString::FString(&local_e0,L"ce ");
          ::FString::ConcatFF(&local_228,pFVar24,&local_300);
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
          local_300.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
          local_300.Data.ArrayNum = local_228.Data.ArrayNum;
          local_300.Data.ArrayMax = local_228.Data.ArrayMax;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        uVar44 = uVar33;
        if (0 < (this->AutoCompleteList).ArrayNum) {
          do {
            iVar30 = (this->AutoCompleteList).ArrayNum;
            piVar29 = (int *)(longlong)iVar30;
            uVar40 = (uint)uVar44;
            uVar17 = 0;
            if ((int)uVar40 < iVar30) {
              uVar17 = ~uVar40 >> 0x1f;
            }
            if (uVar17 == 0) {
              uVar28 = (ulonglong)(int)uVar40;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              piVar46 = piVar29;
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pFVar41 = (pTVar1->AllocatorInstance).Data;
            iVar30 = *(int *)(pFVar41 + uVar33 + 8);
            if (iVar30 == local_300.Data.ArrayNum) {
              if (iVar30 < 2) break;
              iVar30 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(pFVar41 + uVar33),
                                  (wchar_t *)local_300.Data.AllocatorInstance.Data);
              bVar13 = iVar30 == 0;
            }
            else {
              bVar13 = iVar30 + local_300.Data.ArrayNum == 1;
            }
            if (bVar13) break;
            uVar44 = (ulonglong)(uVar40 + 1);
            uVar33 = uVar33 + 0x28;
          } while ((int)(uVar40 + 1) < (this->AutoCompleteList).ArrayNum);
        }
        uVar17 = (uint)uVar44;
        if ((this->AutoCompleteList).ArrayNum <= (int)uVar17) {
          uVar17 = (this->AutoCompleteList).ArrayNum;
          if (uVar17 == (this->AutoCompleteList).ArrayMax) {
            uVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar1->AllocatorInstance,&(this->AutoCompleteList).ArrayMax)
            ;
          }
          (this->AutoCompleteList).ArrayNum = uVar17 + 1;
          DefaultConstructItems<FAutoCompleteCommand,int>
                    ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28,1);
        }
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = 0;
        if ((int)uVar17 < iVar30) {
          uVar40 = ~uVar17 >> 0x1f;
        }
        if (uVar40 == 0) {
          uVar28 = (ulonglong)(int)uVar17;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        uVar44 = (ulonglong)(int)uVar17;
        lVar37 = uVar44 * 0x28;
        if (local_300.Data.ArrayNum == 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = local_300.Data.ArrayNum + -1;
        }
        ::FString::AssignRange
                  ((FString *)((pTVar1->AllocatorInstance).Data + lVar37),
                   (wchar_t *)local_300.Data.AllocatorInstance.Data,iVar30);
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = 0;
        if ((int)uVar17 < iVar30) {
          uVar40 = ~uVar17 >> 0x1f;
        }
        FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
        if ((uVar40 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar28 = uVar44, piVar46 = piVar29, bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_250.InterfaceIndex = -1;
        local_250.bIncludeSuper = true;
        local_250.bIncludeDeprecated = true;
        *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + lVar37 + 0x20) = FVar3;
        local_250.Field = pUVar5->ChildProperties;
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        local_250.bIncludeInterface = false;
        local_250.Struct = pUVar5;
        TFieldIterator<FProperty>::IterateToNext(&local_250);
        pFVar11 = local_250.Field;
        while ((local_250.Field = pFVar11, pFVar11 != (FField *)0x0 &&
               (((ulonglong)pFVar11[1].ClassPrivate & 0x80) != 0))) {
          (**(code **)(pFVar11->_padding_ + 0x68))(pFVar11,local_d0,0,0,uVar28,piVar46);
          bVar13 = IsThisNotNull(pFVar11,"FField::GetName");
          if (bVar13) {
            ::FName::ToString(&pFVar11->NamePrivate,&local_1f8);
          }
          else {
            ::FString::FString(&local_1f8,L"None");
          }
          ::FString::PrintfImpl(&local_1d8,L"%s[%s] ");
          iVar30 = 0;
          if (local_1d8.Data.ArrayNum != 0) {
            iVar30 = local_1d8.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_208,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar30)
          ;
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_d0[0] != (void *)0x0) {
            FMemory::Free(local_d0[0]);
          }
          local_250.Field = pFVar11->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_250);
          pFVar11 = local_250.Field;
        }
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = 0;
        if ((int)uVar17 < iVar30) {
          uVar40 = ~uVar17 >> 0x1f;
        }
        if (uVar40 == 0) {
          uVar28 = (ulonglong)(int)uVar17;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        ::FString::ConcatFF(&local_2a8,&local_208,
                            (FString *)
                            ((pTVar1->AllocatorInstance).Data + ((longlong)(int)uVar17 * 5 + 2) * 8)
                           );
        iVar30 = (this->AutoCompleteList).ArrayNum;
        piVar29 = (int *)(longlong)iVar30;
        uVar40 = 0;
        if ((int)uVar17 < iVar30) {
          uVar40 = ~uVar17 >> 0x1f;
        }
        if (uVar40 == 0) {
          uVar28 = (ulonglong)(int)uVar17;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          piVar46 = piVar29;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar41 = (pTVar1->AllocatorInstance).Data + ((longlong)(int)uVar17 * 5 + 2) * 8;
        if (pFVar41 != (FScriptContainerElement *)&local_2a8) {
          if (*(void **)pFVar41 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar41);
          }
          *(FScriptContainerElement **)pFVar41 = local_2a8.Data.AllocatorInstance.Data;
          local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar41 + 8) = local_2a8.Data.ArrayNum;
          *(int *)(pFVar41 + 0xc) = local_2a8.Data.ArrayMax;
          local_2a8.Data.ArrayNum = 0;
          local_2a8.Data.ArrayMax = 0;
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
      }
      TObjectIterator<UFunction>::Advance(&local_268);
    }
    if (local_268.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.ObjectArray.AllocatorInstance.Data);
    }
    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pUVar31 = this->ConsoleSettings;
    local_2e0.ArrayNum = 0;
    local_2e0.ArrayMax = 0;
    iVar30 = (pUVar31->AutoCompleteMapPaths).ArrayNum;
    pFVar41 = (pUVar31->AutoCompleteMapPaths).AllocatorInstance.Data;
    pFVar32 = pFVar41 + (longlong)iVar30 * 0x10;
    while( true ) {
      if ((pUVar31->AutoCompleteMapPaths).ArrayNum != iVar30) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar41 == pFVar32) break;
      FPaths::ProjectDir(&local_c0);
      ::FString::PrintfImpl(&local_140,L"%s%s");
      `UConsole::BuildRuntimeAutoCompleteList'::__l29::<lambda_1>::operator()
                (local_res18,&local_2e0,&local_140);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      pFVar41 = pFVar41 + 0x10;
    }
    pFVar24 = FPaths::GameUserDeveloperDir(&local_b0);
    `UConsole::BuildRuntimeAutoCompleteList'::__l29::<lambda_1>::operator()
              (local_res18,&local_2e0,pFVar24);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    iVar30 = local_2e0.ArrayNum;
    pFVar41 = local_2e0.AllocatorInstance.Data + (longlong)local_2e0.ArrayNum * 0x10;
    pTVar1 = &this->AutoCompleteList;
    this_01.Data = local_2e0.AllocatorInstance.Data;
    while( true ) {
      if (local_2e0.ArrayNum != iVar30) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (this_01.Data == pFVar41) break;
      piVar46 = &(this->AutoCompleteList).ArrayMax;
      piVar29 = &(this->AutoCompleteList).ArrayNum;
      uVar17 = 0;
      bVar13 = ::FString::EndsWith((FString *)this_01.Data,L"_P",2,IgnoreCase);
      if (bVar13) {
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,3,&pTVar1->AllocatorInstance,piVar29,piVar46);
        pFVar32 = (pTVar1->AllocatorInstance).Data;
        memmove(pFVar32 + 0x78,pFVar32,(longlong)iVar18 * 0x28);
        pFVar32 = (pTVar1->AllocatorInstance).Data;
      }
      else {
        uVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,3,&pTVar1->AllocatorInstance,piVar29,piVar46);
        pFVar32 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28;
      }
      DefaultConstructItems<FAutoCompleteCommand,int>(pFVar32,3);
      ::FString::PrintfImpl(&local_298,L"open %s");
      uVar40 = 0;
      if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar17 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar32 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28;
      if (pFVar32 != (FScriptContainerElement *)&local_298) {
        if (*(void **)pFVar32 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar32);
        }
        *(FScriptContainerElement **)pFVar32 = local_298.Data.AllocatorInstance.Data;
        local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar32 + 8) = local_298.Data.ArrayNum;
        *(int *)(pFVar32 + 0xc) = local_298.Data.ArrayMax;
        local_298.Data.ArrayNum = 0;
        local_298.Data.ArrayMax = 0;
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      uVar40 = 0;
      if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar17 >> 0x1f;
      }
      FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28 + 0x20) =
           FVar3;
      ::FString::PrintfImpl(&local_288,L"travel %s");
      uVar43 = uVar17 + 1;
      uVar40 = 0;
      if ((int)uVar43 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar43 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar32 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar43 * 0x28;
      if (pFVar32 != (FScriptContainerElement *)&local_288) {
        if (*(void **)pFVar32 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar32);
        }
        *(FScriptContainerElement **)pFVar32 = local_288.Data.AllocatorInstance.Data;
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar32 + 8) = local_288.Data.ArrayNum;
        *(int *)(pFVar32 + 0xc) = local_288.Data.ArrayMax;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      uVar43 = uVar17 + 1;
      FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
      uVar40 = 0;
      if ((int)uVar43 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar43 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar43 * 0x28 + 0x20) =
           FVar3;
      ::FString::PrintfImpl(&local_278,L"servertravel %s");
      uVar43 = uVar17 + 2;
      uVar40 = 0;
      if ((int)uVar43 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar43 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar32 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar43 * 0x28;
      if (pFVar32 != (FScriptContainerElement *)&local_278) {
        if (*(void **)pFVar32 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar32);
        }
        *(FScriptContainerElement **)pFVar32 = local_278.Data.AllocatorInstance.Data;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar32 + 8) = local_278.Data.ArrayNum;
        *(int *)(pFVar32 + 0xc) = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      uVar17 = uVar17 + 2;
      FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
      uVar40 = 0;
      if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
        uVar40 = ~uVar17 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_01.Data = this_01.Data + 0x10;
      *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28 + 0x20) =
           FVar3;
    }
    DestructItems<FString,int>((FString *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
    if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.AllocatorInstance.Data);
    }
    uVar17 = (this->AutoCompleteList).ArrayNum;
    if (uVar17 == (this->AutoCompleteList).ArrayMax) {
      uVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->AutoCompleteList).AllocatorInstance,
                          &(this->AutoCompleteList).ArrayMax);
    }
    (this->AutoCompleteList).ArrayNum = uVar17 + 1;
    DefaultConstructItems<FAutoCompleteCommand,int>
              ((this->AutoCompleteList).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x28,1);
    pFVar41 = (FScriptContainerElement *)::FString::FString(&local_a0,L"open 127.0.0.1");
    uVar40 = 0;
    uVar43 = uVar40;
    if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
      uVar43 = ~uVar17 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar32 = (this->AutoCompleteList).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x28;
    if (pFVar32 != pFVar41) {
      pFVar6 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar32->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar32->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar41->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar41->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)&pFVar32[8].field_0x0 = *(int *)&pFVar41[8].field_0x0;
      *(int *)&pFVar32[0xc].field_0x0 = *(int *)&pFVar41[0xc].field_0x0;
      *(undefined8 *)&pFVar41[8].field_0x0 = 0;
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    pFVar41 = (FScriptContainerElement *)
              ::FString::FString(local_80,L"(opens connection to localhost)");
    uVar43 = uVar40;
    if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
      uVar43 = ~uVar17 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar32 = (this->AutoCompleteList).AllocatorInstance.Data + ((longlong)(int)uVar17 * 5 + 2) * 8;
    if (pFVar32 != pFVar41) {
      pFVar6 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar32->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar32->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar41->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar41->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)&pFVar32[8].field_0x0 = *(int *)&pFVar41[8].field_0x0;
      *(int *)&pFVar32[0xc].field_0x0 = *(int *)&pFVar41[0xc].field_0x0;
      *(undefined8 *)&pFVar41[8].field_0x0 = 0;
    }
    if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
    }
    FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
    uVar43 = uVar40;
    if ((int)uVar17 < (this->AutoCompleteList).ArrayNum) {
      uVar43 = ~uVar17 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FColor_u_0 *)
     ((this->AutoCompleteList).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x28 + 0x20) = FVar3
    ;
    pFVar25 = FStatGroupGameThreadNotifier::Get();
    uStack_194 = 1;
    local_180 = 0;
    pTVar27 = &pFVar25->StatGroupNames;
    uVar17 = *(uint *)&(pFVar25->StatGroupNames).Elements.field_0x28;
    local_190 = &(pFVar25->StatGroupNames).Elements.field_0x10;
    uStack_184 = uVar40;
    if (uVar17 != 0) {
      puVar39 = *(uint **)&(pFVar25->StatGroupNames).Elements.field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)local_190;
      }
      uVar43 = *puVar39;
      while (uVar43 == 0) {
        uVar40 = uVar40 + 1;
        local_180 = local_180 + 0x20;
        uStack_184 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar40)
        goto LAB_14891acbe;
        uVar43 = puVar39[(int)uVar40];
      }
      uStack_194 = -uVar43 & uVar43;
      uVar28 = (ulonglong)uStack_194 * 2 + 1;
      lVar37 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_1e8 = (int)lVar37;
      uStack_184 = local_1e8 + -1 + local_180;
      if ((int)uVar17 < (int)uStack_184) {
        uStack_184 = uVar17;
      }
    }
LAB_14891acbe:
    uVar17 = *(uint *)&(pFVar25->StatGroupNames).Elements.field_0x28;
    pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar25->StatGroupNames).Elements.field_0x10
    ;
    uStack_17c = local_54;
    uVar43 = uVar17 & 0xffffffe0;
    iStack_178 = *(int *)&(pFVar25->StatGroupNames).Elements.field_0x8 -
                 *(int *)&(pFVar25->StatGroupNames).Elements.field_0x34;
    uStack_188 = 0xffffffff;
    TStack_168._padding_ = CONCAT44(uStack_194,uVar40);
    TStack_168.CurrentBitIndex = uStack_184;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    iVar30 = (int)uVar17 >> 5;
    TStack_168._28_4_ = local_54;
    TStack_168.BaseBitIndex = local_180;
    uStack_148 = CONCAT44(uStack_174,iStack_178);
    local_2f0 = pTVar27;
    local_2c8 = pTVar34;
    local_1a0 = pTVar27;
    uStack_198 = uVar40;
    local_170 = pTVar27;
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_190;
    if ((((int)uVar17 < 0) || (*(int *)&(pFVar25->StatGroupNames).Elements.field_0x28 < (int)uVar17)
        ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar40 = *(uint *)&(pFVar25->StatGroupNames).Elements.field_0x28;
    if (uVar17 != uVar40) {
      puVar7 = *(undefined1 **)&(pFVar25->StatGroupNames).Elements.field_0x20;
      puVar38 = (undefined1 *)pTVar34;
      if (puVar7 != (undefined1 *)0x0) {
        puVar38 = puVar7;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar30 * 4);
      while (uVar17 == 0) {
        iVar30 = iVar30 + 1;
        uVar43 = uVar43 + 0x20;
        uVar17 = uVar40;
        if ((int)(((int)(uVar40 - 1) >> 0x1f & 0x1fU) + (uVar40 - 1)) >> 5 < iVar30)
        goto LAB_14891adee;
        uVar17 = *(uint *)(puVar38 + (longlong)iVar30 * 4);
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar37 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_1e4 = (int)lVar37;
      uVar17 = local_1e4 + -1 + uVar43;
      if ((int)uVar40 < (int)uVar17) {
        uVar17 = uVar40;
      }
    }
LAB_14891adee:
    pTVar1 = &this->AutoCompleteList;
    while( true ) {
      pTVar35 = local_170;
      if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
          (int)uStack_148) {
        local_304[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_304);
      }
      lVar37 = (longlong)TStack_168.CurrentBitIndex;
      if (((TStack_168.CurrentBitIndex == uVar17) && (TStack_168.Array == pTVar34)) &&
         (pTVar35 == pTVar27)) break;
      lVar8 = *(longlong *)&pTVar35->Elements;
      ::FString::FString(&local_218,L"Stat ");
      pFVar24 = ::FName::ToString((FName *)(lVar8 + lVar37 * 0x10),&local_90);
      ::FString::RemoveAt(pFVar24,0,10,No);
      pFVar41 = (pFVar24->Data).AllocatorInstance.Data;
      uVar28 = 0;
      uVar40 = 0;
      (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar30 = (pFVar24->Data).ArrayNum;
      (pFVar24->Data).ArrayNum = 0;
      (pFVar24->Data).ArrayMax = 0;
      iVar18 = iVar30 + -1;
      if (iVar30 == 0) {
        iVar18 = 0;
      }
      ::FString::AppendChars(&local_218,(wchar_t *)pFVar41,iVar18);
      if (pFVar41 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar41);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      uVar44 = uVar28;
      if (0 < (this->AutoCompleteList).ArrayNum) {
        do {
          uVar40 = (uint)uVar44;
          uVar43 = 0;
          if ((int)uVar40 < (this->AutoCompleteList).ArrayNum) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar41 = (pTVar1->AllocatorInstance).Data;
          iVar30 = *(int *)(pFVar41 + uVar28 + 8);
          if (iVar30 == local_218.Data.ArrayNum) {
            if (iVar30 < 2) break;
            iVar30 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(pFVar41 + uVar28),
                                (wchar_t *)local_218.Data.AllocatorInstance.Data);
            bVar13 = iVar30 == 0;
          }
          else {
            bVar13 = iVar30 + local_218.Data.ArrayNum == 1;
          }
          if (bVar13) break;
          uVar40 = uVar40 + 1;
          uVar28 = uVar28 + 0x28;
          uVar44 = (ulonglong)uVar40;
        } while ((int)uVar40 < (this->AutoCompleteList).ArrayNum);
      }
      if ((this->AutoCompleteList).ArrayNum <= (int)uVar40) {
        uVar40 = (this->AutoCompleteList).ArrayNum;
        if (uVar40 == (this->AutoCompleteList).ArrayMax) {
          uVar40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar1->AllocatorInstance,&(this->AutoCompleteList).ArrayMax);
        }
        (this->AutoCompleteList).ArrayNum = uVar40 + 1;
        DefaultConstructItems<FAutoCompleteCommand,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar40 * 0x28,1);
      }
      uVar43 = 0;
      if ((int)uVar40 < (this->AutoCompleteList).ArrayNum) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_218.Data.ArrayNum == 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = local_218.Data.ArrayNum + -1;
      }
      ::FString::AssignRange
                ((FString *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar40 * 0x28),
                 (wchar_t *)local_218.Data.AllocatorInstance.Data,iVar30);
      uVar43 = 0;
      if ((int)uVar40 < (this->AutoCompleteList).ArrayNum) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      FVar3 = (this->ConsoleSettings->AutoCompleteCommandColor).field0_0x0;
      if ((uVar43 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar40 * 0x28 + 0x20) =
           FVar3;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      pTVar34 = local_2c8;
      pTVar27 = local_2f0;
    }
    local_1a8.AutoCompleteList = &this->AutoCompleteList;
    FEngineShowFlags::IterateAllFlags<_UConsole::BuildRuntimeAutoCompleteList_::__l54::FIterSink>
              (&local_1a8);
    (**(code **)(this->_padding_ + 0x308))(this,&this->AutoCompleteList);
    iVar30 = (this->AutoCompleteList).ArrayNum;
    if ((this->AutoCompleteList).ArrayMax != iVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar30,&(this->AutoCompleteList).AllocatorInstance,iVar30,
                 &(this->AutoCompleteList).ArrayMax);
    }
    local_308 = 0;
    if (0 < (this->AutoCompleteList).ArrayNum) {
      local_1b0 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  &this->AutoCompleteTree;
      do {
        pTVar27 = local_1b0;
        uVar17 = local_308;
        pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        uVar40 = 0;
        if ((int)local_308 < (this->AutoCompleteList).ArrayNum) {
          uVar40 = ~local_308 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        ::FString::ToLower((FString *)
                           ((this->AutoCompleteList).AllocatorInstance.Data +
                           (longlong)(int)uVar17 * 0x28),&local_1c8);
        pTVar42 = pTVar34;
        local_2f0 = pTVar27;
        while( true ) {
          uVar28 = 0;
          iVar30 = local_1c8.Data.ArrayNum + -1;
          if (local_1c8.Data.ArrayNum == 0) {
            iVar30 = 0;
          }
          iVar18 = (int)pTVar42;
          local_2c8 = pTVar34;
          if (iVar30 <= iVar18) break;
          if ((((iVar18 < 0) || (local_1c8.Data.ArrayNum == 0)) ||
              (local_1c8.Data.ArrayNum + -1 <= iVar18)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                  ,0x107,
                                  L"String index out of bounds: Index %i from a string with a length of %i"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar7 = &(pTVar27->Elements).field_0x18;
          iVar30 = *(int *)&(pTVar27->Elements).field_0x20;
          uVar2 = *(ushort *)
                   (local_1c8.Data.AllocatorInstance.Data + (longlong)&pTVar34->AllocatorInstance);
          pTVar35 = local_2f0;
          uVar44 = uVar28;
          if (0 < iVar30) {
            do {
              uVar40 = (uint)uVar28;
              uVar43 = ~uVar40 >> 0x1f;
              uVar17 = 0;
              if ((int)uVar40 < iVar30) {
                uVar17 = uVar43;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar37 = uVar44 * 8;
              if (**(uint **)(lVar37 + *(longlong *)puVar7) == (uint)uVar2) {
                uVar17 = 0;
                if ((int)uVar40 < *(int *)&(pTVar27->Elements).field_0x20) {
                  uVar17 = uVar43;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pTVar12 = &pTVar27->Elements;
                pTVar27 = *(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)
                           (lVar37 + *(longlong *)puVar7);
                uVar17 = 0;
                if ((int)uVar40 < *(int *)&pTVar12->field_0x20) {
                  uVar17 = uVar43;
                }
                local_2f0 = pTVar27;
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar37 = *(longlong *)(*(longlong *)puVar7 + lVar37);
                if (((*(uint **)(lVar37 + 8) <= &local_308) &&
                    (&local_308 < *(uint **)(lVar37 + 8) + *(int *)(lVar37 + 0x14))) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar30 = *(int *)(lVar37 + 0x10);
                if (iVar30 == *(int *)(lVar37 + 0x14)) {
                  iVar30 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)(lVar37 + 8),(int *)(lVar37 + 0x14)
                                     );
                }
                *(int *)(lVar37 + 0x10) = iVar30 + 1;
                *(uint *)(*(longlong *)(lVar37 + 8) + (longlong)iVar30 * 4) = local_308;
                pTVar35 = pTVar27;
                if (uVar40 != 0xffffffff) goto LAB_14891b593;
                break;
              }
              iVar30 = *(int *)&(pTVar27->Elements).field_0x20;
              uVar28 = (ulonglong)(uVar40 + 1);
              uVar44 = uVar44 + 1;
              pTVar35 = local_2f0;
            } while ((int)(uVar40 + 1) < iVar30);
          }
          pTVar27 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
          pTVar26 = ::operator_new(0x28);
          if (pTVar26 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
            *(undefined8 *)&(pTVar26->Elements).field_0x8 = 0;
            *(undefined8 *)&(pTVar26->Elements).field_0x10 = 0;
            *(undefined8 *)&(pTVar26->Elements).field_0x18 = 0;
            *(undefined8 *)&(pTVar26->Elements).field_0x20 = 0;
            *(uint *)&pTVar26->Elements = (uint)uVar2;
            pTVar27 = pTVar26;
          }
          puVar7 = &(pTVar27->Elements).field_0x8;
          local_2e8 = pTVar27;
          if (((*(uint **)puVar7 <= &local_308) &&
              (&local_308 < *(uint **)puVar7 + *(int *)&(pTVar27->Elements).field_0x14)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar30 = *(int *)&(pTVar27->Elements).field_0x10;
          puVar38 = &(pTVar27->Elements).field_0x14;
          if (iVar30 == *(int *)puVar38) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)puVar7,(int *)puVar38);
          }
          *(int *)&(pTVar27->Elements).field_0x10 = iVar30 + 1;
          *(uint *)(*(longlong *)puVar7 + (longlong)iVar30 * 4) = local_308;
          ppTVar9 = *(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ***)
                     &(pTVar35->Elements).field_0x18;
          if (((ppTVar9 <= &local_2e8) &&
              (&local_2e8 < ppTVar9 + *(int *)&(pTVar35->Elements).field_0x24)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar30 = *(int *)&(pTVar35->Elements).field_0x20;
          puVar7 = &(pTVar35->Elements).field_0x24;
          if (iVar30 == *(int *)puVar7) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&(pTVar35->Elements).field_0x18,
                                (int *)puVar7);
          }
          *(int *)&(pTVar35->Elements).field_0x20 = iVar30 + 1;
          *(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)
           (*(longlong *)&(pTVar35->Elements).field_0x18 + (longlong)iVar30 * 8) = local_2e8;
          local_2f0 = local_2e8;
          pTVar27 = local_2e8;
LAB_14891b593:
          pTVar42 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(iVar18 + 1);
          pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((local_2c8->AllocatorInstance).InlineData + 2);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_308 = local_308 + 1;
      } while ((int)local_308 < (this->AutoCompleteList).ArrayNum);
    }
    this->bIsRuntimeAutoCompleteUpToDate = 1;
  }
  else {
    this->bIsRuntimeAutoCompleteUpToDate = 0;
  }
  FMemScope::~FMemScope(&local_1b8);
  FLLMScope::~FLLMScope(local_2d0);
  return;
}

// CapturedMouseMove @ 14891cda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsole::CapturedMouseMove(UConsole *this,FViewport *param_1,int param_2,int param_3)

{
  TVector2<float>_u_0 TVar1;
  
  TVar1._s_0.Y = (float)param_3;
  TVar1._s_0.X = (float)param_2;
  (this->Selection).MousePos.field0_0x0 = TVar1;
  return;
}

// ClearOutput @ 14891d170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::ClearOutput(UConsole *this)

{
  this->SBHead = 0;
  DestructItems<FString,int>
            ((FString *)(this->Scrollback).AllocatorInstance.Data,(this->Scrollback).ArrayNum);
  (this->Scrollback).ArrayNum = 0;
  if ((this->Scrollback).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Scrollback).AllocatorInstance,0,&(this->Scrollback).ArrayMax);
  }
  return;
}

// ConsoleActive @ 14891df00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::ConsoleActive(UConsole *this)

{
  return this->ConsoleState != (FName)0x0;
}

// ConsoleCommand @ 14891df20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::ConsoleCommand(UConsole *this,FString *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  ULocalPlayer *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UGameInstance *this_00;
  APlayerController *pAVar10;
  UGameViewportClient *this_01;
  uint uVar11;
  UGameViewportClient *pUVar12;
  <lambda_1> local_res8;
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  pFVar3 = (this->HistoryBuffer).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->HistoryBuffer).ArrayMax * 0x10))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_res8.Item = param_1;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->HistoryBuffer,&local_res8);
  pFVar3 = (this->HistoryBuffer).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->HistoryBuffer).ArrayMax * 0x10))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->HistoryBuffer).ArrayNum;
  piVar1 = &(this->HistoryBuffer).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->HistoryBuffer).AllocatorInstance,piVar1);
  }
  (this->HistoryBuffer).ArrayNum = iVar8 + 1;
  ::FString::FString((FString *)
                     ((this->HistoryBuffer).AllocatorInstance.Data + (longlong)iVar8 * 0x10),param_1
                    );
  uVar2 = (this->HistoryBuffer).ArrayNum;
  pUVar12 = (UGameViewportClient *)0x0;
  if (0x32 < uVar2) {
    uVar11 = uVar2 - 0x32;
    uVar9 = 0;
    if ((int)uVar11 <= (int)uVar2) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar11 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->HistoryBuffer,0,uVar11);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->HistoryBuffer).AllocatorInstance,(this->HistoryBuffer).ArrayNum,
                 piVar1);
    }
  }
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  pcVar6 = *(code **)(this->_padding_ + 0x2d0);
  ::FString::PrintfImpl(&local_58,L"\n>>> %s <<<");
  (*pcVar6)(this);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->_padding_ & 0x10) == 0) {
    this_01 = (UGameViewportClient *)this->_padding_;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8793431413794799546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                       ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    this_01 = pUVar12;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = UGameViewportClient::GetGameInstance(this_01);
  pUVar4 = (this->ConsoleTargetPlayer).field0_0x0.DebugPtr;
  if (pUVar4 == (ULocalPlayer *)0x0) {
    if ((this_00 == (UGameInstance *)0x0) ||
       (pAVar10 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
       pAVar10 == (APlayerController *)0x0)) {
      if ((this->_padding_ & 0x10) == 0) {
        pUVar12 = (UGameViewportClient *)this->_padding_;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8793431413794799546>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                           ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (**(code **)(pUVar12->_padding_ + 0x340))(pUVar12,local_28,param_1);
      local_48[0] = local_28[0];
    }
    else {
      pAVar10 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0);
      (**(code **)(pAVar10->_padding_ + 0xe00))(pAVar10,local_38,param_1,1);
      local_48[0] = local_38[0];
    }
  }
  else {
    plVar5 = (longlong *)pUVar4->_padding_;
    (**(code **)(*plVar5 + 0xe00))(plVar5,local_48,param_1,1);
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  return;
}

// DrawLine @ 14892e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsole::DrawLine(UConsole *this,UCanvas *param_1,UFont *param_2,FCanvasTileItem *param_3,
                  FCanvasTileItem *param_4,FCanvasTextItem *param_5,FString *param_6,float param_7,
                  float param_8,float param_9,TArray<FString,TSizedDefaultAllocator<32>_> *param_10)

{
  float fVar1;
  int iVar2;
  FCanvas *pFVar3;
  code *pcVar4;
  ITextData *pIVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  longlong lVar15;
  FText *pFVar16;
  FText *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_228;
  float local_224;
  int local_220;
  int local_21c;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8 [10];
  
  fVar24 = 0.0;
  fVar1 = param_1->ClipX;
  bVar14 = false;
  local_224 = 0.0;
  local_228 = 0.0;
  iVar20 = 0;
  local_220 = 0;
  local_21c = 0;
  if ((this->Selection).bActive != false) {
    fVar23 = (this->Selection).Offset;
    fVar25 = param_8 + this->TextH;
    lVar15 = 0x124;
    if ((this->Selection).bMade == false) {
      lVar15 = 300;
    }
    fVar27 = (this->Selection).MousePosDown.field0_0x0._s_0.Y - fVar23;
    fVar23 = *(float *)((longlong)&this->_padding_ + lVar15) - fVar23;
    if ((fVar27 < param_8) || (fVar25 < fVar27)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
      GetPosInTextLine(this,param_1,param_2,param_6,(this->Selection).MousePosDown.field0_0x0._s_0.X
                       ,&local_224,&local_220);
    }
    iVar22 = local_220;
    fVar12 = local_224;
    if ((fVar23 < param_8) || (fVar25 < fVar23)) {
      bVar9 = false;
    }
    else {
      lVar15 = 0x120;
      if ((this->Selection).bMade == false) {
        lVar15 = 0x128;
      }
      bVar9 = true;
      GetPosInTextLine(this,param_1,param_2,param_6,*(float *)((longlong)&this->_padding_ + lVar15),
                       &local_228,&local_21c);
      fVar24 = local_228;
      iVar20 = local_21c;
    }
    bVar8 = fVar23 < fVar27;
    fVar26 = fVar27;
    if (bVar8) {
      bVar11 = (bool)(bVar11 ^ 1);
      bVar9 = (bool)(bVar9 ^ 1);
      fVar26 = fVar23;
    }
    if (fVar23 <= fVar27) {
      fVar23 = fVar27;
    }
    if ((fVar23 < param_8) || (fVar25 < fVar26)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((fVar23 <= fVar25) || (param_8 <= fVar26)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((!bVar9) || (0.0 < fVar24)) {
      if (!bVar10) {
        if (bVar11) {
          if (bVar9) {
            if (fVar24 < fVar12) {
              local_228 = fVar12;
              local_224 = fVar24;
              local_220 = iVar20;
              local_21c = iVar22;
            }
            dVar6 = (double)param_8;
            param_3->_padding_ = (longlong)(double)param_9;
            param_3->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            dVar7 = (double)local_224;
            (param_3->Size).field0_0x0._s_0.X = dVar7;
            (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_3);
            iVar20 = local_220 + 1;
            *(FLinearColor_u_0 *)&param_5->_padding_ =
                 (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
            ::FString::Mid(param_6,&local_1e8,0,iVar20);
            pFVar16 = FText::FromString(&local_158,&local_1e8);
            pFVar17 = &param_5->Text;
            FText::operator=(pFVar17,pFVar16);
            if (local_158.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
            }
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_5,param_7,param_8);
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
            param_4->_padding_ = (longlong)dVar7;
            param_4->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            (param_4->Size).field0_0x0._s_0.X = (double)(local_228 - local_224);
            (param_4->Size).field0_0x0._s_0.Y = (double)fVar24;
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_4);
            *(FLinearColor_u_0 *)&param_5->_padding_ =
                 (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
            iVar22 = 0;
            if (0 < local_220) {
              iVar22 = iVar20;
            }
            ::FString::Mid(param_6,&local_1d8,iVar22,(local_21c - iVar22) + 1);
            pFVar16 = FText::FromString(&local_148,&local_1d8);
            FText::operator=(pFVar17,pFVar16);
            if (local_148.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
            }
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_5,local_224 + param_7,param_8);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            param_3->_padding_ = (longlong)(double)local_228;
            param_3->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            (param_3->Size).field0_0x0._s_0.X = (double)(fVar1 - local_228);
            (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_3);
            iVar22 = local_21c;
            fVar1 = local_228;
            *(FLinearColor_u_0 *)&param_5->_padding_ =
                 (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
            if (local_228 <= 0.0) {
              iVar19 = 0;
            }
            else {
              iVar19 = local_21c + 1;
            }
            iVar2 = (param_6->Data).ArrayNum;
            iVar21 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar21 = 0;
            }
            ::FString::Mid(param_6,&local_1c8,iVar19,iVar21);
            pFVar16 = FText::FromString(&local_138,&local_1c8);
            FText::operator=(pFVar17,pFVar16);
            if (local_138.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
            }
            UCanvas::DrawItem(param_1,(FCanvasItem *)param_5,fVar1 + param_7,param_8);
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            if ((this->Selection).bCapture != false) {
              ::FString::Mid(param_6,&local_208,iVar20,(iVar22 - iVar20) + 1);
              pFVar18 = (param_10->AllocatorInstance).Data;
              if (((pFVar18 <= (FScriptContainerElement *)&local_208) &&
                  ((FScriptContainerElement *)&local_208 <
                   pFVar18 + (longlong)param_10->ArrayMax * 0x10)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar20 = param_10->ArrayNum;
              if (iVar20 == param_10->ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_10->AllocatorInstance,&param_10->ArrayMax);
              }
              FVar13.Data = local_208.Data.AllocatorInstance.Data;
              param_10->ArrayNum = iVar20 + 1;
              pFVar18 = (param_10->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
              *(FScriptContainerElement **)&pFVar18->field_0x0 = (FScriptContainerElement *)0x0;
              *(int *)&pFVar18[8].field_0x0 = local_208.Data.ArrayNum;
              if (local_208.Data.ArrayNum == 0) {
                *(int *)(pFVar18 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)pFVar18,
                           local_208.Data.ArrayNum,(int *)(pFVar18 + 0xc));
                memcpy(*(FScriptContainerElement **)&pFVar18->field_0x0,FVar13.Data,
                       (longlong)local_208.Data.ArrayNum * 2);
              }
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            fVar23 = GetPosTextLineEnd(this,param_1,param_2,param_6);
            if (bVar8) {
              local_228 = fVar12;
              local_224 = fVar24;
              local_220 = iVar20;
              local_21c = iVar22;
            }
            dVar6 = (double)param_8;
            param_3->_padding_ = (longlong)(double)param_9;
            param_3->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            dVar7 = (double)local_224;
            (param_3->Size).field0_0x0._s_0.X = dVar7;
            (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
            pFVar3 = param_1->Canvas;
            (**(code **)(param_3->_padding_ + 0x18))(param_3);
            if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(pFVar3,false);
            }
            iVar20 = local_220 + 1;
            *(FLinearColor_u_0 *)&param_5->_padding_ =
                 (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
            ::FString::Mid(param_6,&local_1b8,0,iVar20);
            pFVar17 = FText::FromString(&local_128,&local_1b8);
            FText::operator=(&param_5->Text,pFVar17);
            if (local_128.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
            }
            pFVar3 = param_1->Canvas;
            pcVar4 = *(code **)(param_5->_padding_ + 8);
            if (pcVar4 == FCanvasItem::Draw) {
              param_5->_padding_ = (longlong)dVar6;
              param_5->_padding_ = (longlong)(double)param_7;
              (**(code **)(param_5->_padding_ + 0x18))();
            }
            else {
              (*pcVar4)(param_5,pFVar3,param_7,param_8);
            }
            if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(pFVar3,false);
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            param_4->_padding_ = (longlong)dVar7;
            param_4->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            (param_4->Size).field0_0x0._s_0.X = (double)(fVar23 - local_224);
            (param_4->Size).field0_0x0._s_0.Y = (double)fVar24;
            pFVar3 = param_1->Canvas;
            (**(code **)(param_4->_padding_ + 0x18))();
            if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(pFVar3,false);
            }
            *(FLinearColor_u_0 *)&param_5->_padding_ =
                 (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
            iVar22 = (param_6->Data).ArrayNum;
            iVar19 = 0;
            if (0 < local_220) {
              iVar19 = iVar20;
            }
            iVar21 = iVar22 + -1;
            if (iVar22 == 0) {
              iVar21 = 0;
            }
            ::FString::Mid(param_6,&local_1a8,iVar19,iVar21);
            pFVar17 = FText::FromString(&local_118,&local_1a8);
            FText::operator=(&param_5->Text,pFVar17);
            if (local_118.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
            }
            pFVar3 = param_1->Canvas;
            lVar15 = param_5->_padding_;
            if (*(code **)(lVar15 + 8) == FCanvasItem::Draw) {
              param_5->_padding_ = (longlong)dVar6;
              param_5->_padding_ = (longlong)(double)(local_224 + param_7);
              (**(code **)(lVar15 + 0x18))();
            }
            else {
              (**(code **)(lVar15 + 8))(param_5,pFVar3,lVar15,param_8);
            }
            if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(pFVar3,false);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            param_3->_padding_ = (longlong)(double)fVar23;
            param_3->_padding_ = (longlong)dVar6;
            fVar24 = this->TextH;
            (param_3->Size).field0_0x0._s_0.X = (double)(fVar1 - fVar23);
            (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
            pFVar3 = param_1->Canvas;
            (**(code **)(param_3->_padding_ + 0x18))(param_3);
            if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
              FCanvas::Flush_GameThread(pFVar3,false);
            }
            if ((this->Selection).bCapture != false) {
              iVar22 = (param_6->Data).ArrayNum;
              iVar19 = 0;
              if (0 < local_220) {
                iVar19 = iVar20;
              }
              iVar20 = iVar22 + -1;
              if (iVar22 == 0) {
                iVar20 = 0;
              }
              ::FString::Mid(param_6,&local_1f8,iVar19,iVar20);
              pFVar18 = (param_10->AllocatorInstance).Data;
              if (((pFVar18 <= (FScriptContainerElement *)&local_1f8) &&
                  ((FScriptContainerElement *)&local_1f8 <
                   pFVar18 + (longlong)param_10->ArrayMax * 0x10)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar20 = param_10->ArrayNum;
              if (iVar20 == param_10->ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_10->AllocatorInstance,&param_10->ArrayMax);
              }
              FVar13.Data = local_1f8.Data.AllocatorInstance.Data;
              param_10->ArrayNum = iVar20 + 1;
              pFVar18 = (param_10->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
              *(FScriptContainerElement **)&pFVar18->field_0x0 = (FScriptContainerElement *)0x0;
              *(int *)&pFVar18[8].field_0x0 = local_1f8.Data.ArrayNum;
              if (local_1f8.Data.ArrayNum == 0) {
                *(int *)(pFVar18 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar18,
                           local_1f8.Data.ArrayNum,(int *)(pFVar18 + 0xc));
                memcpy(*(FScriptContainerElement **)&pFVar18->field_0x0,FVar13.Data,
                       (longlong)local_1f8.Data.ArrayNum * 2);
              }
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
            }
          }
          goto LAB_14892f7ee;
        }
        goto LAB_14892e873;
      }
    }
    else if (!bVar10) {
LAB_14892e873:
      if (bVar9) {
        if (bVar8) {
          local_228 = fVar12;
          local_224 = fVar24;
          local_220 = iVar20;
          local_21c = iVar22;
        }
        dVar7 = (double)param_8;
        param_4->_padding_ = (longlong)(double)param_9;
        param_4->_padding_ = (longlong)dVar7;
        fVar24 = this->TextH;
        dVar6 = (double)local_228;
        (param_4->Size).field0_0x0._s_0.X = dVar6;
        (param_4->Size).field0_0x0._s_0.Y = (double)fVar24;
        pFVar3 = param_1->Canvas;
        (**(code **)(param_4->_padding_ + 0x18))();
        if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
          FCanvas::Flush_GameThread(pFVar3,false);
        }
        *(FLinearColor_u_0 *)&param_5->_padding_ =
             (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
        if (local_228 <= 0.0) {
          iVar20 = 0;
        }
        else {
          iVar20 = local_21c + 1;
        }
        ::FString::Mid(param_6,&local_198,0,iVar20);
        pFVar17 = FText::FromString(&local_108,&local_198);
        FText::operator=(&param_5->Text,pFVar17);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        pFVar3 = param_1->Canvas;
        pcVar4 = *(code **)(param_5->_padding_ + 8);
        if (pcVar4 == FCanvasItem::Draw) {
          param_5->_padding_ = (longlong)dVar7;
          param_5->_padding_ = (longlong)(double)param_7;
          (**(code **)(param_5->_padding_ + 0x18))();
        }
        else {
          (*pcVar4)(param_5,pFVar3,param_7,param_8);
        }
        if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
          FCanvas::Flush_GameThread(pFVar3,false);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        param_3->_padding_ = (longlong)dVar6;
        param_3->_padding_ = (longlong)dVar7;
        fVar24 = this->TextH;
        (param_3->Size).field0_0x0._s_0.X = (double)(fVar1 - local_228);
        (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
        pFVar3 = param_1->Canvas;
        (**(code **)(param_3->_padding_ + 0x18))(param_3);
        if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
          FCanvas::Flush_GameThread(pFVar3,false);
        }
        fVar1 = local_228;
        *(FLinearColor_u_0 *)&param_5->_padding_ =
             (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
        if (local_228 <= 0.0) {
          iVar20 = 0;
        }
        else {
          iVar20 = local_21c + 1;
        }
        iVar19 = (param_6->Data).ArrayNum;
        iVar22 = iVar19 + -1;
        if (iVar19 == 0) {
          iVar22 = 0;
        }
        ::FString::Mid(param_6,&local_188,iVar20,iVar22);
        pFVar17 = FText::FromString(&local_f8,&local_188);
        FText::operator=(&param_5->Text,pFVar17);
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        pFVar3 = param_1->Canvas;
        pcVar4 = *(code **)(param_5->_padding_ + 8);
        if (pcVar4 == FCanvasItem::Draw) {
          param_5->_padding_ = (longlong)dVar7;
          param_5->_padding_ = (longlong)(double)(fVar1 + param_7);
          (**(code **)(param_5->_padding_ + 0x18))();
        }
        else {
          (*pcVar4)(param_5,pFVar3,pcVar4,param_8);
        }
        if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
          FCanvas::Flush_GameThread(pFVar3,false);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if ((this->Selection).bCapture != false) {
          if (fVar1 <= 0.0) {
            iVar20 = 0;
          }
          else {
            iVar20 = local_21c + 1;
          }
          ::FString::Mid(param_6,&local_218,0,iVar20);
          if (1 < local_218.Data.ArrayNum) {
            pFVar18 = (param_10->AllocatorInstance).Data;
            if (((pFVar18 <= (FScriptContainerElement *)&local_218) &&
                ((FScriptContainerElement *)&local_218 <
                 pFVar18 + (longlong)param_10->ArrayMax * 0x10)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar20 = param_10->ArrayNum;
            if (iVar20 == param_10->ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_10->AllocatorInstance,&param_10->ArrayMax);
            }
            FVar13.Data = local_218.Data.AllocatorInstance.Data;
            param_10->ArrayNum = iVar20 + 1;
            pFVar18 = (param_10->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
            *(FScriptContainerElement **)&pFVar18->field_0x0 = (FScriptContainerElement *)0x0;
            *(int *)&pFVar18[8].field_0x0 = local_218.Data.ArrayNum;
            if (local_218.Data.ArrayNum == 0) {
              *(int *)(pFVar18 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_218.Data.ArrayNum,0,(ForAnyElementType *)pFVar18,
                         local_218.Data.ArrayNum,(int *)(pFVar18 + 0xc));
              memcpy(*(FScriptContainerElement **)&pFVar18->field_0x0,FVar13.Data,
                     (longlong)local_218.Data.ArrayNum * 2);
            }
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14892f7ee;
      }
    }
  }
  dVar6 = (double)param_8;
  if (bVar14) {
    fVar23 = GetPosTextLineEnd(this,param_1,param_2,param_6);
    param_4->_padding_ = (longlong)(double)param_9;
    param_4->_padding_ = (longlong)dVar6;
    fVar24 = this->TextH;
    (param_4->Size).field0_0x0._s_0.X = (double)fVar23;
    (param_4->Size).field0_0x0._s_0.Y = (double)fVar24;
    pFVar3 = param_1->Canvas;
    (**(code **)(param_4->_padding_ + 0x18))();
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
    *(FLinearColor_u_0 *)&param_5->_padding_ = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    iVar22 = (param_6->Data).ArrayNum;
    iVar20 = iVar22 + -1;
    if (iVar22 == 0) {
      iVar20 = 0;
    }
    ::FString::Mid(param_6,&local_178,0,iVar20);
    pFVar17 = FText::FromString(&local_e8,&local_178);
    FText::operator=(&param_5->Text,pFVar17);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    pFVar3 = param_1->Canvas;
    pcVar4 = *(code **)(param_5->_padding_ + 8);
    if (pcVar4 == FCanvasItem::Draw) {
      param_5->_padding_ = (longlong)dVar6;
      param_5->_padding_ = (longlong)(double)param_7;
      (**(code **)(param_5->_padding_ + 0x18))();
    }
    else {
      (*pcVar4)(param_5,pFVar3,param_7,param_8);
    }
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    param_3->_padding_ = (longlong)(double)fVar23;
    param_3->_padding_ = (longlong)dVar6;
    fVar24 = this->TextH;
    (param_3->Size).field0_0x0._s_0.X = (double)(fVar1 - fVar23);
    (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
    pFVar3 = param_1->Canvas;
    (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
    if ((this->Selection).bCapture != false) {
      pFVar18 = (param_10->AllocatorInstance).Data;
      if (((pFVar18 <= param_6) && (param_6 < pFVar18 + (longlong)param_10->ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = param_10->ArrayNum;
      if (iVar20 == param_10->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_10->AllocatorInstance,&param_10->ArrayMax);
      }
      param_10->ArrayNum = iVar20 + 1;
      ::FString::FString((FString *)((param_10->AllocatorInstance).Data + (longlong)iVar20 * 0x10),
                         param_6);
    }
  }
  else {
    fVar23 = GetPosTextLineEnd(this,param_1,param_2,param_6);
    param_3->_padding_ = (longlong)(double)param_9;
    param_3->_padding_ = (longlong)dVar6;
    fVar24 = this->TextH;
    (param_3->Size).field0_0x0._s_0.X = (double)fVar23;
    (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
    pFVar3 = param_1->Canvas;
    (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
    *(FLinearColor_u_0 *)&param_5->_padding_ = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    iVar22 = (param_6->Data).ArrayNum;
    iVar20 = iVar22 + -1;
    if (iVar22 == 0) {
      iVar20 = 0;
    }
    ::FString::Mid(param_6,&local_168,0,iVar20);
    pFVar17 = FText::FromString(local_d8,&local_168);
    FText::operator=(&param_5->Text,pFVar17);
    if (local_d8[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8[0].TextData.Reference + 0x10))();
    }
    pFVar3 = param_1->Canvas;
    pcVar4 = *(code **)(param_5->_padding_ + 8);
    if (pcVar4 == FCanvasItem::Draw) {
      param_5->_padding_ = (longlong)dVar6;
      param_5->_padding_ = (longlong)(double)param_7;
      (**(code **)(param_5->_padding_ + 0x18))();
    }
    else {
      (*pcVar4)(param_5,pFVar3,param_7,param_8);
    }
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    param_3->_padding_ = (longlong)(double)fVar23;
    param_3->_padding_ = (longlong)dVar6;
    fVar24 = this->TextH;
    (param_3->Size).field0_0x0._s_0.X = (double)(fVar1 - fVar23);
    (param_3->Size).field0_0x0._s_0.Y = (double)fVar24;
    pFVar3 = param_1->Canvas;
    (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar3,false);
    }
  }
LAB_14892f7ee:
  param_5->_padding_ = (longlong)&___7FCanvasTextItem__6B_;
  pIVar5 = (param_5->Text).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  if ((char)param_5->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_5->_padding_);
  }
  param_5->_padding_ = (longlong)&___7FCanvasItem__6B_;
  param_5->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

// EndState_Open @ 148939670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::EndState_Open(UConsole *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UGameViewportClient *pUVar4;
  UGameViewportClient *this_00;
  
  this_00 = (UGameViewportClient *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar4 = (UGameViewportClient *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8793431413794799546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                       ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar4 = this_00;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(pUVar4->_padding_ + 0x198))(&pUVar4->_padding_);
  if (cVar3 == '\x03') {
    if ((this->_padding_ & 0x10) == 0) {
      this_00 = (UGameViewportClient *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8793431413794799546>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                         ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UGameViewportClient::SetMouseCaptureMode(this_00,this->PreviousMouseCaptureMode);
  }
  return;
}

// EndState_Typing @ 148939730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::EndState_Typing(UConsole *this,FName param_1)

{
  this->bAutoCompleteLocked = 0;
  return;
}

// FakeGotoState @ 148942980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::FakeGotoState(UConsole *this,FName param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FSlateApplication *pFVar9;
  undefined8 *puVar10;
  TSharedPtr<SViewport,1> *pTVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  UGameViewportClient *this_00;
  TSharedPtr<SWidget,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<SWidget,1> local_58;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<SViewport,1> local_38;
  TReferenceControllerBase<1> *local_20;
  
  if (this->ConsoleState == NAME_Typing) {
    (**(code **)(this->_padding_ + 0x330))();
  }
  else if (this->ConsoleState == NAME_Open) {
    (**(code **)(this->_padding_ + 0x358))();
  }
  if (param_1 == NAME_Typing) {
    (**(code **)(this->_padding_ + 0x328))(this,this->ConsoleState);
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&OnConsoleActivationStateChanged,true);
    pFVar9 = FSlateApplication::Get();
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)pFVar9 + 0x98))(pFVar9);
    (this->PreviousFocusedWidget).Object = (SWidget *)*puVar10;
    pTVar4 = (TReferenceControllerBase<1> *)puVar10[1];
    if (pTVar4 != (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))();
        }
      }
      (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    pFVar9 = FSlateApplication::Get();
    FSlateApplication::ResetToDefaultPointerInputSettings(pFVar9);
    pFVar9 = FSlateApplication::Get();
    if ((this->_padding_ & 0x10) == 0) {
      this_00 = (UGameViewportClient *)this->_padding_;
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8793431413794799546>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                         ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (UGameViewportClient *)0x0;
    }
    pTVar11 = UGameViewportClient::GetGameViewportWidget(this_00,&local_38);
    local_58.Object = (SWidget *)pTVar11->Object;
    local_58.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::SetKeyboardFocus(pFVar9,&local_58,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else if (param_1 == NAME_Open) {
    (**(code **)(this->_padding_ + 0x350))(this,this->ConsoleState);
    pFVar9 = FSlateApplication::Get();
    FSlateApplication::ResetToDefaultPointerInputSettings(pFVar9);
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&OnConsoleActivationStateChanged,true);
  }
  else if (param_1 == (FName)0x0) {
    this->bCtrl = 0;
    this->bShift = 0;
    (this->ConsoleState).ComparisonIndex = 0;
    (this->ConsoleState).Number = 0;
    local_78.Object = (SWidget *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((((this->PreviousFocusedWidget).Object == (SWidget *)0x0) ||
        (pTVar4 = (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
      pFVar9 = FSlateApplication::Get();
      pTVar12 = (TSharedPtr<SWidget,1> *)(**(code **)(*(longlong *)pFVar9 + 0x98))(pFVar9);
      if (&local_78 != pTVar12) {
        local_78.Object = pTVar12->Object;
        pTVar12->Object = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_78.SharedReferenceCount,&pTVar12->SharedReferenceCount);
      }
    }
    else {
      local_60.ReferenceController =
           (this->PreviousFocusedWidget).WeakReferenceCount.ReferenceController;
      local_78.Object = (SWidget *)0x0;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = (local_60.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_78.Object = (SWidget *)0x0;
            goto LAB_148942bc2;
          }
          LOCK();
          aVar8 = (local_60.ReferenceController)->SharedReferenceCount;
          bVar7 = aVar3 == aVar8;
          if (bVar7) {
            (local_60.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar8 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar8;
        } while (!bVar7);
        local_78.Object = (this->PreviousFocusedWidget).Object;
      }
LAB_148942bc2:
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_78.SharedReferenceCount,&local_60);
      local_20 = local_60.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (local_78.Object != (SWidget *)0x0) {
      pFVar9 = FSlateApplication::Get();
      FSlateApplication::ClearKeyboardFocus(pFVar9,SetDirectly);
      pFVar9 = FSlateApplication::Get();
      FSlateApplication::SetKeyboardFocus(pFVar9,&local_78,Mouse);
    }
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&OnConsoleActivationStateChanged,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  this->ConsoleState = param_1;
  return;
}

// FlushPlayerInput @ 14894dc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::FlushPlayerInput(UConsole *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  ULocalPlayer *pUVar4;
  longlong *plVar5;
  
  pUVar4 = (this->ConsoleTargetPlayer).field0_0x0.DebugPtr;
  if (pUVar4 == (ULocalPlayer *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      plVar5 = (longlong *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8793431413794799546>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Console.h"
                         ,0x46,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar5 = (longlong *)0x0;
    }
    pUVar3 = (UWorld *)(**(code **)(*plVar5 + 0x180))();
    pUVar4 = UEngine::GetFirstGamePlayer(GEngine,pUVar3);
    if (pUVar4 == (ULocalPlayer *)0x0) {
      return;
    }
  }
  if ((pUVar4->_padding_ != 0) &&
     (plVar5 = *(longlong **)(pUVar4->_padding_ + 0x450), plVar5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014894dcd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x2b0))();
    return;
  }
  return;
}

// GetPosInTextLine @ 14895abc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsole::GetPosInTextLine
          (UConsole *this,UCanvas *param_1,UFont *param_2,FString *param_3,float param_4,
          float *param_5,int *param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_res20 [2];
  float local_88 [2];
  FString local_80;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58 [3];
  
  iVar5 = 0;
  fVar6 = 0.0;
  while( true ) {
    iVar1 = (param_3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar5) {
      return;
    }
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::PrintfImpl(&local_80,L"%c");
    local_68 = local_80.Data.AllocatorInstance.Data;
    iStack_60 = local_80.Data.ArrayNum + -1;
    if (local_80.Data.ArrayNum == 0) {
      iStack_60 = 0;
    }
    local_58[0]._12_4_ = uStack_5c;
    local_58[0].Size = iStack_60;
    local_58[0].DataPtr = (wchar_t *)local_80.Data.AllocatorInstance.Data;
    UCanvas::StrLen(param_2,local_58,local_res20,local_88,this->bDPIAwareStringMeasurement,
                    param_1->Canvas);
    fVar6 = fVar6 + local_res20[0];
    if (param_4 < fVar6) break;
    *param_5 = fVar6;
    *param_6 = iVar5;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    iVar5 = iVar5 + 1;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPosTextLineEnd @ 14895ad50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
UConsole::GetPosTextLineEnd(UConsole *this,UCanvas *param_1,UFont *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_res20 [2];
  float local_78 [2];
  FString local_70;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48 [2];
  
  iVar5 = 0;
  fVar6 = 0.0;
  while( true ) {
    iVar1 = (param_3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar5) break;
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    ::FString::PrintfImpl(&local_70,L"%c");
    local_58 = local_70.Data.AllocatorInstance.Data;
    iStack_50 = local_70.Data.ArrayNum + -1;
    if (local_70.Data.ArrayNum == 0) {
      iStack_50 = 0;
    }
    local_48[0]._12_4_ = uStack_4c;
    local_48[0].Size = iStack_50;
    local_48[0].DataPtr = (wchar_t *)local_70.Data.AllocatorInstance.Data;
    UCanvas::StrLen(param_2,local_48,local_res20,local_78,this->bDPIAwareStringMeasurement,
                    param_1->Canvas);
    fVar6 = fVar6 + local_res20[0];
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    iVar5 = iVar5 + 1;
  }
  return fVar6;
}

// GetPrivateStaticClass @ 14895b010

UClass * __cdecl UConsole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Console",&Z_Registration_Info_UClass_UConsole.InnerSingleton,
               StaticRegisterNativesUConsole,0x160,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Input",InternalConstructor<UConsole>,
               InternalVTableHelperCtorCaller<UConsole>,local_res8,UObject::StaticClass,
               UGameViewportClient::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsole.InnerSingleton;
}

// InputAxis @ 1489630d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConsole::InputAxis(UConsole *this,FInputDeviceId param_1,FKey *param_2,float param_3,float param_4,
                   int param_5,bool param_6)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// InputChar @ 1489630f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::InputChar(UConsole *this,FInputDeviceId param_1,FString *param_2)

{
  undefined1 uVar1;
  
  if (this->ConsoleState == NAME_Typing) {
                    /* WARNING: Could not recover jumptable at 0x000148963103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x318))();
    return (bool)uVar1;
  }
  if (this->ConsoleState == NAME_Open) {
                    /* WARNING: Could not recover jumptable at 0x000148963116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x338))();
    return (bool)uVar1;
  }
  return this->bCaptureKeyInput;
}

// InputChar_Open @ 148963130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::InputChar_Open(UConsole *this,FInputDeviceId param_1,FString *param_2)

{
  if (this->bCaptureKeyInput == 0) {
    (**(code **)(this->_padding_ + 0x2f8))(this,param_2);
  }
  return true;
}

// InputChar_Typing @ 148963160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::InputChar_Typing(UConsole *this,FInputDeviceId param_1,FString *param_2)

{
  if (this->bCaptureKeyInput == 0) {
    (**(code **)(this->_padding_ + 0x2f8))(this,param_2);
  }
  return true;
}

// InputKey @ 1489634c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConsole::InputKey(UConsole *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,
                  float param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FKey local_48 [2];
  
  local_48[0].KeyName = param_2->KeyName;
  local_48[0].KeyDetails.Object = (param_2->KeyDetails).Object;
  local_48[0].KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_48[0].KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48[0].KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48[0].KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = InputKey_InputLine(this,param_1,local_48,param_3,param_4,param_5);
  if (bVar2) {
LAB_1489635a7:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  }
  else {
    if (this->ConsoleState != NAME_Typing) {
      if (this->ConsoleState != NAME_Open) goto LAB_1489635a7;
      pcVar1 = *(code **)(this->_padding_ + 0x340);
      local_48[0].KeyName = param_2->KeyName;
      local_48[0].KeyDetails.Object = (param_2->KeyDetails).Object;
      local_48[0].KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_48[0].KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48[0].KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48[0].KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(this,param_1.InternalId,local_48,param_3,param_4,param_5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  return bVar2;
}

// InputKey_InputLine @ 1489642c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConsole::InputKey_InputLine
          (UConsole *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,float param_4,
          bool param_5)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  code *pcVar6;
  FName FVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FSlateApplication *this_00;
  UClass *this_01;
  FString *pFVar15;
  int iVar16;
  int iVar17;
  FName *pFVar18;
  FName FVar19;
  wchar_t *pwVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  byte local_res20;
  UConsole *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FName local_90;
  FKeyDetails *local_88;
  TReferenceControllerBase<1> *local_80;
  FName local_78;
  FKeyDetails *local_70;
  TReferenceControllerBase<1> *local_68;
  FString local_60;
  FString local_50;
  
  if (param_3 == IE_Pressed) {
    this->bCaptureKeyInput = 0;
  }
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetModifierKeys(this_00);
  if ((((((local_res20 & 0x10) == 0) && ((local_res20 & 0x20) == 0)) && ((local_res20 & 0x40) == 0))
      && ((-1 < (char)local_res20 && ((local_res20 & 1) == 0)))) &&
     (((local_res20 & 2) == 0 && (((local_res20 & 4) == 0 && ((local_res20 & 8) == 0)))))) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  this_01 = UInputSettings::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar5 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar18 = *(FName **)&pUVar5[9].field_0x18;
  pFVar2 = pFVar18 + (longlong)*(int *)&pUVar5[9].field_0x20 * 3;
  if (pFVar18 != pFVar2) {
    do {
      if (*pFVar18 == param_2->KeyName) {
        if ((param_3 == IE_Pressed) && (!bVar23 && this->bCtrl == 0)) {
          FVar7 = this->ConsoleState;
          FVar19 = NAME_Open;
          if (FVar7 != NAME_Typing) {
            if (FVar7 == NAME_Open) {
              FVar19.ComparisonIndex.Value = 0;
              FVar19.Number = 0;
            }
            else {
              FVar19 = NAME_Typing;
              if (FVar7 != (FName)0x0) goto LAB_1489645a8;
            }
          }
          (**(code **)(this->_padding_ + 0x398))(this,FVar19);
          this->bCaptureKeyInput = 1;
LAB_1489645a8:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
          return true;
        }
        break;
      }
      pFVar18 = pFVar18 + 3;
    } while (pFVar18 != pFVar2);
  }
  local_138 = this;
  if (this->ConsoleState == (FName)0x0) goto LAB_148964f40;
  pcVar6 = *(code **)(this->_padding_ + 0x2e8);
  local_90 = param_2->KeyName;
  local_88 = (param_2->KeyDetails).Object;
  local_80 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  cVar9 = (*pcVar6)(this,&local_90,param_3);
  if (cVar9 != '\0') goto LAB_148964e97;
  pcVar6 = *(code **)(this->_padding_ + 0x2f0);
  local_78 = param_2->KeyName;
  local_70 = (param_2->KeyDetails).Object;
  local_68 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  cVar9 = (*pcVar6)(this,&local_78);
  if (cVar9 != '\0') goto LAB_148964e97;
  if (param_5) {
LAB_148964f40:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return false;
  }
  FVar7 = param_2->KeyName;
  if ((FVar7 == EKeys::Escape.KeyName) && (param_3 == IE_Released)) {
    lVar8 = this->_padding_;
    if (1 < (this->TypedStr).Data.ArrayNum) {
      ::FString::FString(&local_f0,"");
      (**(code **)(lVar8 + 0x2b0))(this,&local_f0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x2b8))(this,0);
      this->AutoCompleteIndex = 0;
      this->AutoCompleteCursor = 0;
      pFVar15 = ::FString::FString(&local_60,L"");
      ::FString::operator=(&this->PrecompletedInputLine,pFVar15);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      ::FString::operator=(&this->LastAutoCompletedCommand,(wchar_t *)0x0);
      DestructItems<FAutoCompleteCommand,int>
                ((FAutoCompleteCommand *)(this->AutoComplete).AllocatorInstance.Data,
                 (this->AutoComplete).ArrayNum);
      piVar1 = &(this->AutoComplete).ArrayMax;
      (this->AutoComplete).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->AutoComplete).AllocatorInstance,0,piVar1);
      }
      this->bAutoCompleteLocked = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    (**(code **)(lVar8 + 0x398))(this,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  if ((FVar7 == EKeys::Enter.KeyName) && (param_3 == IE_Released)) {
    if ((this->TypedStr).Data.ArrayNum < 2) {
      (**(code **)(this->_padding_ + 0x398))(this,0);
    }
    else {
      ::FString::FString(&local_c0,&this->TypedStr);
      pcVar6 = *(code **)(this->_padding_ + 0x2b0);
      ::FString::FString(&local_e0,L"");
      (*pcVar6)(this,&local_e0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x2b8))(this,0);
      (**(code **)(this->_padding_ + 0x2c0))(this,&local_c0);
      pcVar6 = *(code **)(this->_padding_ + 0x2d0);
      ::FString::FString(&local_d0,L"");
      (*pcVar6)(this,&local_d0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (this->ConsoleState == NAME_Typing) {
        (**(code **)(this->_padding_ + 0x398))(this,0);
      }
      (**(code **)(this->_padding_ + 0x310))(this);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar15 = ::FString::FString(&local_50,L"");
    ::FString::operator=(&this->PrecompletedInputLine,pFVar15);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&this->LastAutoCompletedCommand,(wchar_t *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  if ((param_3 & ~IE_Repeat) != IE_Pressed) {
    if (((FVar7 != EKeys::LeftMouseButton.KeyName) && (FVar7 != EKeys::MiddleMouseButton.KeyName))
       && (FVar7 != EKeys::RightMouseButton.KeyName)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return false;
  }
  if ((FVar7 == EKeys::Up.KeyName) || ((FVar7 == EKeys::Tab.KeyName && (this->bShift != 0)))) {
    if (ZPULL(*(undefined4 *)&this->field_0xb0,1,1) == 0) {
      iVar13 = (this->AutoComplete).ArrayNum;
      if (iVar13 == 0) {
        SetAutoCompleteFromHistory(this);
      }
      else {
        if (param_2->KeyName == EKeys::Tab.KeyName) {
          *(uint *)&this->field_0xb0 = *(undefined4 *)&this->field_0xb0 | 1;
        }
        if (this->ConsoleSettings->bOrderTopToBottom == false) {
          iVar12 = this->AutoCompleteCursor + 1;
          iVar21 = iVar13;
          if (0x14 < iVar13) {
            iVar21 = 0x14;
          }
          if (iVar12 < iVar21) {
            this->AutoCompleteCursor = iVar12;
          }
          else if (this->AutoCompleteIndex < iVar13 + -0x14) {
            this->AutoCompleteIndex = this->AutoCompleteIndex + 1;
          }
          else {
            this->AutoCompleteIndex = 0;
            this->AutoCompleteCursor = 0;
          }
        }
        else {
          `UConsole::InputKey_InputLine'::__l2::<lambda_1>::operator()(&local_138);
        }
      }
      SetInputLineFromAutoComplete(this);
    }
    goto LAB_148964f40;
  }
  if ((FVar7 != EKeys::Down.KeyName) && ((FVar7 != EKeys::Tab.KeyName || (this->bShift != 0)))) {
    if (FVar7 == EKeys::BackSpace.KeyName) {
      iVar13 = this->TypedStrPos;
      if (0 < iVar13) {
        iVar21 = 0;
        pFVar15 = &this->TypedStr;
        if (this->bCtrl == 0) {
          iVar12 = iVar13 + -1;
        }
        else {
          iVar11 = ::FString::Find(pFVar15,L" ",1,CaseSensitive,FromEnd,iVar13);
          iVar12 = ::FString::Find(pFVar15,L".",1,CaseSensitive,FromEnd,iVar13);
          iVar13 = this->TypedStrPos;
          if (iVar12 < iVar11) {
            iVar12 = iVar11;
          }
          if (iVar12 < 0) {
            iVar12 = iVar21;
          }
        }
        pcVar6 = *(code **)(this->_padding_ + 0x2b0);
        iVar11 = (this->TypedStr).Data.ArrayNum;
        iVar17 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar17 = 0;
        }
        if (iVar11 == 0) {
          pwVar20 = L"";
          iVar11 = iVar21;
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
          iVar11 = iVar11 + -1;
        }
        iVar16 = iVar11;
        if (iVar17 - iVar13 < iVar11) {
          iVar16 = iVar17 - iVar13;
        }
        iVar13 = iVar21;
        if (0 < iVar16) {
          iVar13 = iVar16;
        }
        ::FString::FString(&local_120,
                           (wchar_t *)
                           ((longlong)pwVar20 + ((longlong)iVar11 - (longlong)iVar13) * 2));
        iVar13 = (this->TypedStr).Data.ArrayNum;
        iVar11 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar11 = iVar21;
        }
        if (iVar12 < iVar11) {
          iVar11 = iVar12;
        }
        if (0 < iVar11) {
          iVar21 = iVar11;
        }
        if (iVar13 == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_130,pwVar20,iVar21);
        ::FString::PrintfImpl(&local_b0,L"%s%s");
        (*pcVar6)(this,&local_b0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        (**(code **)(this->_padding_ + 0x2b8))(this,iVar12);
        this->bAutoCompleteLocked = 0;
      }
      this->bCaptureKeyInput = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    if (FVar7 != EKeys::Delete.KeyName) {
      if (FVar7 == EKeys::Left.KeyName) {
        iVar21 = 0;
        if (this->bCtrl == 0) {
          iVar13 = this->TypedStrPos + -1;
          if (iVar13 < 0) {
            iVar13 = iVar21;
          }
        }
        else {
          iVar12 = (this->TypedStr).Data.ArrayNum;
          iVar13 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar13 = iVar21;
          }
          iVar12 = this->TypedStrPos + -1;
          if (iVar12 < 0) {
            iVar12 = iVar21;
          }
          iVar11 = ::FString::Find(&this->TypedStr,L" ",1,CaseSensitive,FromEnd,iVar12);
          iVar21 = ::FString::Find(&this->TypedStr,L".",1,CaseSensitive,FromEnd,iVar12);
          if (iVar21 < iVar11) {
            iVar21 = iVar11;
          }
          if (iVar21 + 1 < iVar13) {
            iVar13 = iVar21 + 1;
          }
        }
      }
      else if (FVar7 == EKeys::Right.KeyName) {
        iVar21 = (this->TypedStr).Data.ArrayNum;
        if (this->bCtrl == 0) {
          iVar12 = iVar21 + -1;
          iVar13 = this->TypedStrPos + 1;
          if (iVar21 == 0) {
            iVar12 = 0;
          }
          if (iVar12 < iVar13) {
            iVar13 = iVar12;
          }
        }
        else {
          iVar12 = iVar21 + -1;
          if (iVar21 == 0) {
            iVar12 = 0;
          }
          iVar13 = this->TypedStrPos + 1;
          if (iVar13 < iVar12) {
            iVar12 = iVar13;
          }
          iVar13 = ::FString::Find(&this->TypedStr,L" ",1,CaseSensitive,FromStart,iVar12);
          iVar21 = ::FString::Find(&this->TypedStr,L".",1,CaseSensitive,FromStart,iVar12);
          if (-1 < iVar13) {
            if (iVar21 < 0) goto LAB_148964cb9;
            if (iVar13 < iVar21) {
              iVar21 = iVar13;
            }
          }
          iVar13 = iVar21;
          if (iVar21 == -1) goto LAB_148964caa;
        }
      }
      else if (FVar7 == EKeys::Home.KeyName) {
        iVar13 = 0;
      }
      else {
        if (FVar7 != EKeys::End.KeyName) goto LAB_148964f40;
LAB_148964caa:
        iVar21 = (this->TypedStr).Data.ArrayNum;
        iVar13 = iVar21 + -1;
        if (iVar21 == 0) {
          iVar13 = 0;
        }
      }
LAB_148964cb9:
      (**(code **)(this->_padding_ + 0x2b8))(this,iVar13);
      goto LAB_148964cc5;
    }
    iVar13 = (this->TypedStr).Data.ArrayNum;
    iVar21 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar21 = 0;
    }
    if (iVar21 <= this->TypedStrPos) goto LAB_148964cc5;
    iVar21 = this->TypedStrPos + 1;
    iVar13 = iVar21;
    if (this->bCtrl != 0) {
      iVar13 = ::FString::Find(&this->TypedStr,L" ",1,CaseSensitive,FromStart,iVar21);
      iVar21 = ::FString::Find(&this->TypedStr,L".",1,CaseSensitive,FromStart,iVar21);
      if (-1 < iVar13) {
        if (iVar21 < 0) goto LAB_148964a25;
        if (iVar13 < iVar21) {
          iVar21 = iVar13;
        }
      }
      iVar13 = iVar21;
      if ((iVar13 == -1) &&
         (iVar21 = (this->TypedStr).Data.ArrayNum, iVar13 = iVar21 + -1, iVar21 == 0)) {
        iVar13 = 0;
      }
    }
LAB_148964a25:
    pcVar6 = *(code **)(this->_padding_ + 0x2b0);
    iVar21 = (this->TypedStr).Data.ArrayNum;
    iVar12 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar12 = 0;
    }
    if (iVar21 == 0) {
      pwVar20 = L"";
      iVar21 = 0;
    }
    else {
      pwVar20 = (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data;
      iVar21 = iVar21 + -1;
    }
    iVar11 = iVar21;
    if (iVar12 - iVar13 < iVar21) {
      iVar11 = iVar12 - iVar13;
    }
    iVar13 = 0;
    if (0 < iVar11) {
      iVar13 = iVar11;
    }
    ::FString::FString(&local_100,
                       (wchar_t *)((longlong)pwVar20 + ((longlong)iVar21 - (longlong)iVar13) * 2));
    iVar13 = (this->TypedStr).Data.ArrayNum;
    iVar21 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar21 = 0;
    }
    if (this->TypedStrPos < iVar21) {
      iVar21 = this->TypedStrPos;
    }
    iVar12 = 0;
    if (0 < iVar21) {
      iVar12 = iVar21;
    }
    if (iVar13 == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_110,pwVar20,iVar12);
    ::FString::PrintfImpl(&local_a0,L"%s%s");
    (*pcVar6)(this,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
LAB_148964cc5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  if (ZPULL(*(undefined4 *)&this->field_0xb0,1,1) != 0) goto LAB_148964e97;
  iVar13 = (this->AutoComplete).ArrayNum;
  if (iVar13 == 0) {
    SetAutoCompleteFromHistory(this);
  }
  else {
    if (param_2->KeyName == EKeys::Tab.KeyName) {
      *(uint *)&this->field_0xb0 = *(undefined4 *)&this->field_0xb0 | 1;
      if (iVar13 < 2) goto LAB_148964dd4;
      iVar13 = (this->LastAutoCompletedCommand).Data.ArrayNum;
      iVar21 = (this->TypedStr).Data.ArrayNum;
      if (iVar13 == iVar21) {
        if (1 < iVar13) {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)
                              (this->LastAutoCompletedCommand).Data.AllocatorInstance.Data,
                              (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data);
          bVar23 = iVar13 == 0;
          goto LAB_148964d46;
        }
      }
      else {
        bVar23 = iVar13 + iVar21 == 1;
LAB_148964d46:
        if (!bVar23) goto LAB_148964dd4;
      }
      iVar13 = (this->AutoComplete).ArrayNum;
    }
    else if (iVar13 < 2) goto LAB_148964dd4;
    if (this->ConsoleSettings->bOrderTopToBottom == false) {
      `UConsole::InputKey_InputLine'::__l2::<lambda_1>::operator()(&local_138);
    }
    else {
      iVar12 = this->AutoCompleteCursor + 1;
      iVar21 = iVar13;
      if (0x14 < iVar13) {
        iVar21 = 0x14;
      }
      if (iVar12 < iVar21) {
        this->AutoCompleteCursor = iVar12;
      }
      else if (this->AutoCompleteIndex < iVar13 + -0x14) {
        this->AutoCompleteIndex = this->AutoCompleteIndex + 1;
      }
      else {
        this->AutoCompleteIndex = 0;
        this->AutoCompleteCursor = 0;
      }
    }
  }
LAB_148964dd4:
  iVar13 = (this->AutoComplete).ArrayNum;
  if (0 < iVar13) {
    uVar22 = this->AutoCompleteCursor;
    if (this->AutoCompleteCursor < 0) {
      uVar22 = 0;
    }
    uVar22 = this->AutoCompleteIndex + uVar22;
    uVar14 = 0;
    if ((int)uVar22 < iVar13) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar3 = (this->AutoComplete).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x28;
    ::FString::operator=(&this->TypedStr,(FString *)pFVar3);
    iVar13 = (this->TypedStr).Data.ArrayNum;
    iVar21 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar21 = 0;
    }
    (**(code **)(this->_padding_ + 0x2b8))(this,iVar21);
    this->bAutoCompleteLocked = 1;
    ::FString::operator=(&this->PrecompletedInputLine,(FString *)pFVar3);
    ::FString::operator=(&this->LastAutoCompletedCommand,(FString *)pFVar3);
  }
LAB_148964e97:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// InputKey_Open @ 148964f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConsole::InputKey_Open
          (UConsole *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,float param_4,
          bool param_5)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  
  FVar2 = param_2->KeyName;
  if (FVar2 == EKeys::LeftMouseButton.KeyName) {
    if (param_3 == IE_Pressed) {
      (this->Selection).MousePosDown.field0_0x0 = (this->Selection).MousePos.field0_0x0;
      (this->Selection).bActive = true;
      (this->Selection).bMade = false;
      (this->Selection).Offset = 0.0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    if (param_3 == IE_Released) {
      (this->Selection).MousePosUp.field0_0x0 = (this->Selection).MousePos.field0_0x0;
      (this->Selection).bCapture = true;
      (this->Selection).bMade = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  if ((FVar2 == EKeys::PageUp.KeyName) || (FVar2 == EKeys::MouseScrollUp.KeyName)) {
    iVar1 = (this->Scrollback).ArrayNum;
    iVar4 = iVar1 + -1;
    if ((this->SBPos < iVar4) &&
       (iVar3 = ((*(uint *)&this->field_0xb0 & 2) * 2 | 1) + this->SBPos, this->SBPos = iVar3,
       iVar1 <= iVar3)) {
      this->SBPos = iVar4;
    }
  }
  else {
    if ((FVar2 != EKeys::PageDown.KeyName) && (FVar2 != EKeys::MouseScrollDown.KeyName)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return false;
    }
    if ((0 < this->SBPos) &&
       (iVar4 = this->SBPos - ((*(uint *)&this->field_0xb0 & 2) * 2 | 1), this->SBPos = iVar4,
       iVar4 < 0)) {
      this->SBPos = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// InputTouch @ 1489658b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConsole::InputTouch
          (UConsole *this,FInputDeviceId param_1,uint param_2,Type param_3,TVector2<double> *param_4
          ,float param_5,FDateTime param_6,uint param_7)

{
  return false;
}

// InvalidateAutocomplete @ 148966120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::InvalidateAutocomplete(UConsole *this)

{
  this->bIsRuntimeAutoCompleteUpToDate = 0;
  return;
}

// MouseMove @ 148969d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::MouseMove(UConsole *this,FViewport *param_1,int param_2,int param_3)

{
  TVector2<float>_u_0 TVar1;
  
  TVar1._s_0.Y = (float)param_3;
  TVar1._s_0.X = (float)param_2;
  (this->Selection).MousePos.field0_0x0 = TVar1;
  return;
}

// NormalizeHistoryBuffer @ 14896a250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::NormalizeHistoryBuffer(UConsole *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (this->HistoryBuffer).ArrayNum;
  if (0x32 < uVar1) {
    uVar5 = uVar1 - 0x32;
    uVar4 = 0;
    if ((int)uVar5 <= (int)uVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->HistoryBuffer,0,uVar5);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->HistoryBuffer).AllocatorInstance,(this->HistoryBuffer).ArrayNum,
                 &(this->HistoryBuffer).ArrayMax);
    }
  }
  return;
}

// OutputText @ 14896e580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::OutputText(UConsole *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  iVar6 = (param_1->Data).ArrayNum;
  iVar1 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  for (; 0 < iVar1; iVar1 = iVar1 + (-1 - iVar6)) {
    iVar2 = ::FString::Find(&local_38,L"\n",1,CaseSensitive,FromStart,-1);
    iVar6 = iVar1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    iVar2 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    if (iVar6 < iVar2) {
      iVar2 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar4.Data,iVar7);
    OutputTextLine(this,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = ::FString::Mid(&local_38,&local_18,iVar6 + 1,0x7fffffff);
    if (&local_38 != pFVar3) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// OutputTextLine @ 14896e750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::OutputTextLine(UConsole *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (this->Scrollback).ArrayNum;
  iVar2 = this->ConsoleSettings->MaxScrollbackSize;
  if (iVar7 < iVar2) {
    this->SBHead = this->SBHead + 1;
  }
  else {
    uVar8 = (iVar7 - iVar2) + 1;
    uVar6 = 0;
    if ((int)uVar8 <= iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar8 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->Scrollback,0,uVar8);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->Scrollback).AllocatorInstance,(this->Scrollback).ArrayNum,
                 &(this->Scrollback).ArrayMax);
    }
    this->SBHead = this->ConsoleSettings->MaxScrollbackSize;
  }
  pFVar3 = (this->Scrollback).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Scrollback).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Scrollback).ArrayNum;
  piVar1 = &(this->Scrollback).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Scrollback).AllocatorInstance,piVar1);
    (this->Scrollback).ArrayNum = iVar7;
  }
  (this->Scrollback).ArrayNum = iVar7 + 1;
  ::FString::FString((FString *)((this->Scrollback).AllocatorInstance.Data + (longlong)iVar7 * 0x10)
                     ,param_1);
  if ((this->Selection).bActive != false) {
    (this->Selection).Offset = this->TextH + (this->Selection).Offset;
  }
  return;
}

// PostInitProperties @ 14896f800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::PostInitProperties(UConsole *this)

{
  UObject::PostInitProperties((UObject *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UConsole>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FEngineShowFlags::OnCustomShowFlagRegistered,(UConsole *)&stack0x00000010,
             (pmf_303e3cda *)this);
  return;
}

// PostRender_Console @ 14896fdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::PostRender_Console(UConsole *this,UCanvas *param_1)

{
  int iVar1;
  int iVar2;
  
  if (this->ConsoleState != (FName)0x0) {
    UCanvas::ApplySafeZoneTransform(param_1);
    if (this->ConsoleState == NAME_Typing) {
      (**(code **)(this->_padding_ + 800))(this,param_1);
    }
    else if (this->ConsoleState == NAME_Open) {
      (**(code **)(this->_padding_ + 0x348))(this,param_1);
    }
    if ((param_1->SafeZonePadX != 0) || (param_1->SafeZonePadY != 0)) {
      FCanvas::PopTransform(param_1->Canvas);
      iVar1 = param_1->SizeX;
      param_1->SizeX = param_1->UnsafeSizeX;
      iVar2 = param_1->SizeY;
      param_1->SizeY = param_1->UnsafeSizeY;
      param_1->ClipX = (float)(param_1->UnsafeSizeX - (int)((float)iVar1 - param_1->ClipX));
      param_1->ClipY = (float)(param_1->UnsafeSizeY - (int)((float)iVar2 - param_1->ClipY));
    }
  }
  return;
}

// PostRender_Console_Open @ 14896feb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::PostRender_Console_Open(UConsole *this,UCanvas *param_1)

{
  float *pfVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TVar2;
  FCanvas *pFVar3;
  UConsoleSettings *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  TIntPoint<int> TVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TConsoleVariableData<int> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  UFont *pUVar21;
  FText *pFVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  ITextData *pIVar25;
  int iVar26;
  longlong lVar27;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar35 [16];
  undefined1 local_res18 [8];
  float local_res20;
  float local_808;
  float local_804;
  float local_800;
  TArray<FString,TSizedDefaultAllocator<32>_> local_7f8;
  FString local_7e8;
  UFont *local_7d8;
  int local_7d0;
  int iStack_7cc;
  FLinearColor_u_0 local_7c8;
  undefined1 local_7b8 [4];
  undefined1 local_7b4 [12];
  wchar_t *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  TVector2<double>_u_0 local_798;
  wchar_t *local_788;
  int iStack_780;
  undefined4 uStack_77c;
  undefined1 local_778 [16];
  undefined1 local_768 [64];
  TVector2<double>_u_0 local_728;
  float local_718;
  TVector2<double>_u_0 local_710;
  TVector2<double>_u_0 TStack_700;
  FTextureResource *local_6f0;
  FMaterialRenderProxy *local_6e8;
  double local_6e0;
  double local_6d8;
  double dStack_6d0;
  TVector2<double>_u_0 local_6c8;
  undefined1 local_6b8 [52];
  float local_684;
  float local_680;
  float local_67c;
  TVector2<double>_u_0 local_678;
  float local_668;
  TVector2<double>_u_0 local_660;
  TVector2<double>_u_0 TStack_650;
  FTextureResource *local_640;
  FMaterialRenderProxy *local_638;
  double local_630;
  double local_628;
  double dStack_620;
  TVector2<double>_u_0 local_618;
  undefined1 local_608 [64];
  TVector2<double>_u_0 local_5c8;
  float local_5b8;
  TVector2<double>_u_0 local_5b0;
  TVector2<double>_u_0 TStack_5a0;
  FTextureResource *local_590;
  FMaterialRenderProxy *local_588;
  double local_580;
  double local_578;
  double dStack_570;
  TVector2<double>_u_0 local_568;
  TStringView<wchar_t> local_558;
  FText local_548;
  TStringView<wchar_t> local_538;
  FCanvasTextItemBase local_528;
  UFont *local_390;
  FSlateFontInfo local_388;
  char local_328;
  ITextData *local_320;
  uint local_318;
  undefined1 local_308 [68];
  float local_2c4;
  longlong local_2c0;
  longlong lStack_2b8;
  longlong local_2b0;
  longlong lStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  longlong local_280;
  longlong lStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 local_24e;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined1 local_23c;
  double local_238;
  double dStack_230;
  undefined **local_228;
  longlong local_220;
  longlong lStack_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  double local_1e8;
  double dStack_1e0;
  float local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  FTexture *local_1b0;
  FMaterialRenderProxy *local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  FBatchedElements *local_178;
  UFont *local_170;
  FSlateFontInfo local_168;
  char local_108;
  TRefCountPtr<ITextData> local_100;
  uint local_f8;
  
  pTVar14 = CVarCustomConsolePosEnabled.Ref;
  local_800 = param_1->ClipX;
  fVar30 = 0.0;
  auVar35 = roundps(unaff_XMM15,ZEXT416((uint)(param_1->ClipY * __real_3f400000)),1);
  local_res20 = 0.0;
  local_778 = auVar35;
  bVar16 = IsInParallelGameThread();
  lVar27 = 0;
  if (bVar16) {
LAB_14896ff52:
    lVar20 = lVar27;
  }
  else {
    bVar16 = IsInGameThread();
    lVar20 = 4;
    if (bVar16) goto LAB_14896ff52;
  }
  pTVar15 = CVarConsoleXPos.Ref;
  if (*(int *)((longlong)pTVar14->ShadowedValue + lVar20) == 0) goto LAB_14896ffc0;
  bVar16 = IsInParallelGameThread();
  if (bVar16) {
LAB_14896ff77:
    lVar20 = lVar27;
  }
  else {
    bVar16 = IsInGameThread();
    lVar20 = 4;
    if (bVar16) goto LAB_14896ff77;
  }
  pTVar14 = CVarConsoleYPos.Ref;
  fVar30 = (float)*(int *)((longlong)pTVar15->ShadowedValue + lVar20);
  local_res20 = fVar30;
  bVar16 = IsInParallelGameThread();
  if ((bVar16) || (bVar16 = IsInGameThread(), lVar20 = 4, bVar16)) {
    lVar20 = lVar27;
  }
  fVar29 = param_1->ClipY - (float)*(int *)((longlong)pTVar14->ShadowedValue + lVar20);
  local_778 = ZEXT416((uint)fVar29);
  auVar35 = ZEXT416((uint)fVar29);
LAB_14896ffc0:
  fVar34 = auVar35._0_4_;
  pUVar21 = UEngine::GetSmallFont();
  fVar29 = __real_3f800000;
  pFVar3 = param_1->Canvas;
  fVar33 = __real_3f800000;
  if (pFVar3->bStereoRendering == false) {
    fVar33 = pFVar3->DPIScale;
  }
  local_7a8 = L"M";
  pfVar1 = &this->TextH;
  uStack_7a0 = 1;
  local_558._12_4_ = uStack_79c;
  local_558.Size = 1;
  local_558.DataPtr = L"M";
  local_7d8 = pUVar21;
  UCanvas::StrLen(pUVar21,&local_558,&this->TextW,pfVar1,this->bDPIAwareStringMeasurement,pFVar3);
  fVar29 = fVar29 / fVar33;
  fVar32 = fVar34 - fVar29 * *pfVar1;
  *pfVar1 = fVar29 * *pfVar1;
  fVar33 = __real_3c23d70a;
  this->TextW = fVar29 * this->TextW;
  uVar13 = FLinearColor::White.field0_0x0._s_0.B;
  uVar12 = FLinearColor::White.field0_0x0._s_0.G;
  uVar11 = FLinearColor::White.field0_0x0._s_0.R;
  if ((this->Scrollback).ArrayNum != 0) {
    pUVar4 = this->ConsoleSettings;
    fVar33 = pUVar4->BackgroundOpacityPercentage * fVar33;
    local_7c8._s_0.R = FLinearColor::sRGBToLinearTable[(pUVar4->InputColor).field0_0x0._s_0.R];
    local_7c8._s_0.G = FLinearColor::sRGBToLinearTable[(pUVar4->InputColor).field0_0x0._s_0.G];
    local_7c8._s_0.B = FLinearColor::sRGBToLinearTable[(pUVar4->InputColor).field0_0x0._s_0.B];
    local_7c8._s_0.A = (float)(pUVar4->InputColor).field0_0x0._s_0.A * __real_3b808081;
    pFVar22 = FText::FromString(&local_548,L"");
    dVar7 = (double)fVar30;
    local_798._s_0.Y = (double)((fVar34 - __real_40a00000) - *pfVar1);
    local_798._s_0.X = dVar7;
    FCanvasTextItemBase::FCanvasTextItemBase
              (&local_528,(TVector2<double> *)&local_798._s_0,(FLinearColor *)&local_7c8._s_0);
    pIVar25 = (pFVar22->TextData).Reference;
    local_328 = '\0';
    local_528._padding_._4_4_ = 2;
    local_528._padding_ = (longlong)&___7FCanvasTextItem__6B_;
    local_390 = pUVar21;
    local_320 = pIVar25;
    if (pIVar25 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar25 + 8))(pIVar25,local_7b8);
    }
    local_318 = pFVar22->Flags;
    if (local_548.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
    }
    fVar30 = *pfVar1;
    dVar31 = (double)local_800;
    local_590 = UTexture::GetResource((UTexture *)(this->DefaultTexture_Black).field0_0x0.DebugPtr);
    local_608._24_4_ = 0;
    local_608[0x20] = 0;
    local_608._40_8_ = 0;
    local_608._0_8_ = &___7FCanvasTileItem__6B_;
    local_608._16_8_ = 0;
    local_5b0._s_0.X = 0.0;
    local_580 = 0.0;
    local_5b0._s_0.Y = ___xmm_3ff00000000000000000000000000000;
    TStack_5a0._s_0.X = _UNK_15061cbc8;
    TStack_5a0._s_0.Y = __real_3ff0000000000000;
    local_5b8 = 1.0;
    local_588 = (FMaterialRenderProxy *)0x0;
    local_578 = 0.0;
    dStack_570 = 0.0;
    local_608._48_8_ = 0;
    local_608._56_4_ = 0;
    local_568 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_608._8_8_ = dVar7;
    local_608._60_4_ = fVar33;
    local_5c8._s_0.X = dVar31;
    local_5c8._s_0.Y = (double)(fVar34 - fVar30);
    if ((local_590 == (FTextureResource *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTexture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                            ,0x152,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar30 = *pfVar1;
    local_640 = UTexture::GetResource((UTexture *)(this->DefaultTexture_White).field0_0x0.DebugPtr);
    local_6b8._24_4_ = 0;
    local_6b8[0x20] = 0;
    local_6b8._40_8_ = 0;
    local_6b8._0_8_ = &___7FCanvasTileItem__6B_;
    local_660._s_0.Y = ___xmm_3ff00000000000000000000000000000;
    TStack_650._s_0.X = _UNK_15061cbc8;
    TStack_650._s_0.Y = __real_3ff0000000000000;
    local_6b8._48_4_ = uVar11;
    local_684 = (float)uVar12;
    local_680 = (float)uVar13;
    local_628 = 0.0;
    dStack_620 = 0.0;
    local_6b8._16_8_ = 0;
    local_660._s_0.X = 0.0;
    local_630 = 0.0;
    local_668 = 1.0;
    local_638 = (FMaterialRenderProxy *)0x0;
    local_618 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_6b8._8_8_ = dVar7;
    local_67c = fVar33;
    local_678._s_0.X = dVar31;
    local_678._s_0.Y = (double)(fVar34 - fVar30);
    if ((local_640 == (FTextureResource *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTexture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                            ,0x152,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar30 = local_res20;
    uVar10 = __xmm_80000000800000008000000080000000;
    uVar24 = ~this->SBPos + this->SBHead;
    local_608._28_4_ = 0xb;
    local_6b8._28_4_ = 0xb;
    local_7f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f8.ArrayNum = 0;
    local_7f8.ArrayMax = 0;
    if ((float)((uint)*pfVar1 ^ __xmm_80000000800000008000000080000000) < fVar32) {
      lVar27 = (longlong)(int)uVar24 << 4;
      do {
        auVar35 = local_778;
        if ((int)uVar24 < 0) break;
        if ((int)uVar24 < (this->Scrollback).ArrayNum) {
          bVar16 = this->bDPIAwareStringMeasurement;
          if (((int)uVar24 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Scrollback).AllocatorInstance.Data;
          local_788 = *(wchar_t **)(pFVar5 + lVar27);
          iVar19 = *(int *)(pFVar5 + lVar27 + 8);
          iStack_780 = iVar19 + -1;
          if (iVar19 == 0) {
            iStack_780 = 0;
          }
          local_538._12_4_ = uStack_77c;
          local_538.Size = iStack_780;
          local_538.DataPtr = local_788;
          UCanvas::StrLen(local_7d8,&local_538,&local_808,&local_804,bVar16,param_1->Canvas);
          local_804 = fVar29 * local_804;
          local_808 = local_808 * fVar29;
          if (*pfVar1 < local_804) {
            fVar32 = fVar32 - (local_804 - *pfVar1);
          }
          uVar18 = 0;
          if ((int)uVar24 < (this->Scrollback).ArrayNum) {
            uVar18 = ~uVar24 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Scrollback).AllocatorInstance.Data;
          local_308._24_4_ = (undefined4)local_528._padding_;
          local_308._28_4_ = local_528._padding_._4_4_;
          local_308[0x20] = (undefined1)local_528._padding_;
          local_308._40_8_ = local_528._padding_;
          local_250 = local_528.bCentreX;
          local_308._8_8_ = local_528._padding_;
          local_308._16_8_ = local_528._padding_;
          local_24f = local_528.bCentreY;
          local_308._48_8_ = local_528._padding_;
          local_308._56_8_ = local_528._padding_;
          local_24e = local_528.bOutlined;
          local_2c4 = local_528.Depth;
          local_23c = local_528.bDontCorrectStereoscopic;
          local_2b0 = local_528.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._4_8_;
          lStack_2a8 = local_528.FontRenderInfo.GlowInfo._16_8_;
          local_210 = (undefined4)local_528.TileItem._padding_;
          local_20c = local_528.TileItem._padding_._4_4_;
          local_308._64_4_ = local_528.HorizSpacingAdjust;
          local_208 = (undefined1)local_528.TileItem._padding_;
          local_290 = local_528.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X;
          dStack_288 = local_528.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y;
          local_200 = local_528.TileItem._padding_;
          local_228 = &___7FCanvasTileItem__6B_;
          local_2c0 = local_528.FontRenderInfo._0_8_;
          lStack_2b8 = local_528.FontRenderInfo.GlowInfo._0_8_;
          local_1b0 = local_528.TileItem.Texture;
          local_270 = local_528.ShadowOffset.field0_0x0._s_0.X;
          dStack_268 = local_528.ShadowOffset.field0_0x0._s_0.Y;
          local_1a8 = local_528.TileItem.MaterialRenderProxy;
          local_2a0 = local_528.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X;
          dStack_298 = local_528.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y;
          local_178 = local_528.BatchedElements;
          local_308._0_8_ = &___7FCanvasSimpleTextItem__6B_;
          local_24c = local_528.OutlineColor.field0_0x0._0_8_;
          uStack_244 = local_528.OutlineColor.field0_0x0._8_8_;
          local_280 = local_528.ShadowColor.field0_0x0._0_8_;
          lStack_278 = local_528.ShadowColor.field0_0x0._8_8_;
          local_238 = local_528.Scale.field0_0x0._s_0.X;
          dStack_230 = local_528.Scale.field0_0x0._s_0.Y;
          local_1f8 = local_528.TileItem._padding_;
          lStack_1f0 = local_528.TileItem._padding_;
          local_260 = local_528.DrawnSize.field0_0x0._s_0.X;
          dStack_258 = local_528.DrawnSize.field0_0x0._s_0.Y;
          local_1d8 = local_528.TileItem.Z;
          local_220 = local_528.TileItem._padding_;
          lStack_218 = local_528.TileItem._padding_;
          local_1c0 = local_528.TileItem.UV1.field0_0x0._s_0.X;
          dStack_1b8 = local_528.TileItem.UV1.field0_0x0._s_0.Y;
          local_1e8 = local_528.TileItem.Size.field0_0x0._s_0.X;
          dStack_1e0 = local_528.TileItem.Size.field0_0x0._s_0.Y;
          local_1a0 = local_528.TileItem.Rotation.Pitch;
          dStack_198 = local_528.TileItem.Rotation.Yaw;
          local_1d0 = local_528.TileItem.UV0.field0_0x0._s_0.X;
          dStack_1c8 = local_528.TileItem.UV0.field0_0x0._s_0.Y;
          local_188 = local_528.TileItem.PivotPoint.field0_0x0._s_0.X;
          dStack_180 = local_528.TileItem.PivotPoint.field0_0x0._s_0.Y;
          local_190 = local_528.TileItem.Rotation.Roll;
          local_170 = local_390;
          local_108 = local_328;
          if (local_328 != '\0') {
            FSlateFontInfo::FSlateFontInfo(&local_168,&local_388);
            pIVar25 = local_320;
          }
          local_308._0_8_ = &___7FCanvasTextItem__6B_;
          local_100.Reference = pIVar25;
          if (pIVar25 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar25 + 8))(pIVar25,local_7b4);
          }
          local_f8 = local_318;
          DrawLine(this,param_1,local_7d8,(FCanvasTileItem *)local_608,(FCanvasTileItem *)local_6b8,
                   (FCanvasTextItem *)local_308,(FString *)(pFVar5 + lVar27),fVar30,fVar32,fVar30,
                   &local_7f8);
        }
        uVar24 = uVar24 - 1;
        fVar32 = fVar32 - *pfVar1;
        lVar27 = lVar27 + -0x10;
        auVar35 = local_778;
      } while ((float)((uint)*pfVar1 ^ uVar10) < fVar32);
    }
    fVar34 = auVar35._0_4_;
    if (((this->Selection).bCapture != false) &&
       (iVar19 = local_7f8.ArrayNum, local_7f8.ArrayNum != 0)) {
      lVar27 = (longlong)(local_7f8.ArrayNum / 2);
      if (0 < local_7f8.ArrayNum / 2) {
        pTVar28 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                  (local_7f8.AllocatorInstance.Data + (longlong)(local_7f8.ArrayNum + -1) * 0x10);
        FVar23.Data = local_7f8.AllocatorInstance.Data;
        do {
          iVar26 = pTVar28->ArrayNum;
          iVar9 = pTVar28->ArrayMax;
          TVar2 = *(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->AllocatorInstance).Data =
               (pTVar28->AllocatorInstance).Data;
          ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->ArrayNum = iVar26;
          ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->ArrayMax = iVar9;
          FVar23.Data = FVar23.Data + 0x10;
          *pTVar28 = TVar2;
          lVar27 = lVar27 + -1;
          pTVar28 = pTVar28 + -1;
        } while (lVar27 != 0);
      }
      bVar16 = true;
      pTVar28 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                (local_7f8.AllocatorInstance.Data + (longlong)local_7f8.ArrayNum * 0x10);
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7e8.Data.ArrayNum = 0;
      local_7e8.Data.ArrayMax = 0;
      FVar23.Data = local_7f8.AllocatorInstance.Data;
      while( true ) {
        if (local_7f8.ArrayNum != iVar19) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data == pTVar28) break;
        if (bVar16) {
          bVar16 = false;
        }
        else {
          ::FString::AppendChars(&local_7e8,L"\r\n",2);
        }
        iVar26 = ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->ArrayNum + -1;
        if (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->ArrayNum == 0) {
          iVar26 = 0;
        }
        ::FString::AppendChars
                  (&local_7e8,
                   (wchar_t *)
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)FVar23.Data)->AllocatorInstance)
                   .Data,iVar26);
        FVar23.Data = FVar23.Data + 0x10;
      }
      iVar19 = local_7e8.Data.ArrayNum + -1;
      if (local_7e8.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      if (iVar19 != 0) {
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_7e8.Data.ArrayNum != 0) {
          FVar23.Data = local_7e8.Data.AllocatorInstance.Data;
        }
        FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar23.Data);
      }
      (this->Selection).bCapture = false;
      if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_7f8.AllocatorInstance.Data,local_7f8.ArrayNum);
    if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.AllocatorInstance.Data);
    }
    local_6b8._0_8_ = &___7FCanvasItem__6B_;
    local_608._0_8_ = &___7FCanvasItem__6B_;
    if (pIVar25 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar25 + 0x10))(pIVar25);
    }
    if (local_328 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    local_528.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
    local_528._padding_ = (longlong)&___7FCanvasItem__6B_;
    fVar33 = __real_3c23d70a;
  }
  fVar33 = this->ConsoleSettings->BackgroundOpacityPercentage * fVar33;
  dVar7 = (double)(fVar32 + this->TextH);
  local_6f0 = UTexture::GetResource((UTexture *)(this->DefaultTexture_Black).field0_0x0.DebugPtr);
  fVar30 = local_res20;
  local_768._24_4_ = 0;
  local_768._40_8_ = 0;
  local_768._0_8_ = &___7FCanvasTileItem__6B_;
  local_768._16_8_ = 0;
  local_710._s_0.X = 0.0;
  local_6e0 = 0.0;
  local_6e8 = (FMaterialRenderProxy *)0x0;
  local_768[0x20] = 0;
  local_718 = 1.0;
  local_768._48_8_ = 0;
  local_768._56_4_ = 0;
  local_768._8_8_ = (undefined8)local_res20;
  local_6c8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_728._s_0.X = (double)local_800;
  local_710._s_0.Y = ___xmm_3ff00000000000000000000000000000;
  TStack_700._s_0.X = _UNK_15061cbc8;
  TStack_700._s_0.Y = __real_3ff0000000000000;
  local_6d8 = 0.0;
  dStack_6d0 = 0.0;
  local_768._60_4_ = fVar33;
  local_728._s_0.Y = dVar7;
  if ((local_6f0 == (FTextureResource *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                          ,0x152,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = param_1->Canvas;
  local_768._28_4_ = 0xb;
  if (*(code **)(local_768._0_8_ + 0x18) == FCanvasTileItem::Draw) {
    FCanvasTileItem::Draw((FCanvasTileItem *)local_768,pFVar3);
  }
  else {
    (**(code **)(local_768._0_8_ + 0x18))();
  }
  if (pFVar3->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar3,false);
  }
  local_7d0 = (int)fVar30;
  iStack_7cc = (int)(fVar34 + __real_40c00000 + this->TextH);
  TVar8.field0_0x0._s_0.Y = iStack_7cc;
  TVar8.field0_0x0._s_0.X = local_7d0;
  PostRender_InputLine(this,param_1,TVar8);
  return;
}

// PostRender_Console_Typing @ 148970c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::PostRender_Console_Typing(UConsole *this,UCanvas *param_1)

{
  TIntPoint<int> TVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  pTVar2 = CVarCustomConsolePosEnabled.Ref;
  fVar7 = param_1->ClipY;
  fVar8 = 0.0;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if (bVar4) {
LAB_148970c7e:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_148970c7e;
    lVar5 = 4;
  }
  pTVar3 = CVarConsoleXPos.Ref;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 0) goto LAB_148970cd5;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_148970ca4:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_148970ca4;
    lVar5 = 4;
  }
  pTVar2 = CVarConsoleYPos.Ref;
  fVar8 = (float)*(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_148970cc7:
    lVar6 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_148970cc7;
  }
  fVar7 = fVar7 - (float)*(int *)((longlong)pTVar2->ShadowedValue + lVar6);
LAB_148970cd5:
  TVar1.field0_0x0._s_0.Y = (int)fVar7;
  TVar1.field0_0x0._s_0.X = (int)fVar8;
  PostRender_InputLine(this,param_1,TVar1);
  return;
}

// PostRender_InputLine @ 148970d20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsole::PostRender_InputLine(UConsole *this,UCanvas *param_1,TIntPoint<int> param_2)

{
  int iVar1;
  FCanvas *pFVar2;
  UConsoleSettings *pUVar3;
  TRefCountPtr<FRHITexture> TVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  UFont *pUVar14;
  bool bVar15;
  int iVar16;
  FString *pFVar17;
  FText *pFVar18;
  size_t sVar19;
  FScriptContainerElement *pFVar20;
  wchar_t *pwVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_res8 [2];
  UCanvas *local_res10;
  TIntPoint<int>_u_0 local_res18;
  float local_res20 [2];
  FAutoCompleteCommand **ppFVar34;
  ForAnyElementType FVar35;
  ForAnyElementType local_638;
  undefined1 local_630 [8];
  float local_628;
  float local_624;
  float local_620 [2];
  UFont *local_618;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  int local_600;
  float local_5fc;
  undefined1 local_5f8 [8];
  undefined1 local_5f0 [56];
  undefined1 local_5b8 [16];
  TIntRect<int>_u_0 local_5a8;
  FAutoCompleteCommand *local_598;
  TRefCountPtr<HHitProxy> local_590;
  TRefCountPtr<HHitProxy> local_588;
  uint local_580;
  undefined4 local_57c;
  undefined1 local_578;
  double local_570;
  undefined8 local_568;
  float local_560;
  float local_55c;
  double local_558;
  double local_550;
  undefined4 local_548;
  ForAnyElementType local_540;
  ForAnyElementType local_538;
  undefined1 auStack_530 [16];
  FTextureResource *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  TVector2<double>_u_0 local_4f8;
  FScriptContainerElement *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  FString local_4d8;
  FString local_4c8;
  FText local_4b8;
  undefined1 local_4a8 [16];
  undefined1 local_498 [52];
  float local_464;
  float local_460;
  undefined4 local_45c;
  TVector2<double>_u_0 local_458;
  float local_448;
  ForAnyElementType local_440;
  undefined8 local_438;
  TVector2<double>_u_0 local_428;
  wchar_t *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  FScriptContainerElement *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  FScriptContainerElement *local_3e8;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  UConsole *local_3d8;
  FAutoCompleteCommand **local_3d0;
  float *local_3c8;
  float *local_3c0;
  UCanvas **local_3b8;
  TIntPoint<int>_u_0 *local_3b0;
  float *local_3a8;
  float *local_3a0;
  UFont **local_398;
  float *local_390;
  float *local_388;
  undefined1 *local_380;
  FString local_378;
  TStringView<wchar_t> local_368;
  FText local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  FText local_308;
  FString local_2f8;
  undefined1 local_2e8 [52];
  float local_2b4;
  float local_2b0;
  float local_2ac;
  uint local_2a0;
  FLinearColor_u_0 local_260;
  TVector2<double>_u_0 local_250 [4];
  undefined **local_208;
  UFont *local_150;
  TReferenceControllerBase<1> *local_110;
  char local_e8;
  FText local_e0 [10];
  
  uVar22 = 0;
  local_res8[0] = 0.0;
  local_res10 = param_1;
  local_res18 = param_2.field0_0x0;
  ::FString::PrintfImpl((FString *)(local_5f0 + 0x28),L"%s%s");
  if ((this->PrecompletedInputLine).Data.ArrayNum < 2) {
    local_5b8._0_8_ = (TIntPoint<int>_u_0)0x0;
    pFVar17 = (FString *)local_5b8;
    local_5b8._8_8_ = (TIntPoint<int>_u_0)0x0;
    bVar8 = false;
    bVar15 = true;
  }
  else {
    iVar16 = (this->TypedStr).Data.ArrayNum;
    uVar24 = iVar16 - 1;
    if (iVar16 == 0) {
      uVar24 = uVar22;
    }
    pFVar17 = ::FString::RightChop(&this->PrecompletedInputLine,&local_378,uVar24);
    bVar8 = true;
    bVar15 = false;
  }
  local_5f0._24_8_ = (pFVar17->Data).AllocatorInstance.Data;
  (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f0._32_4_ = (pFVar17->Data).ArrayNum;
  local_5f0._36_4_ = (pFVar17->Data).ArrayMax;
  (pFVar17->Data).ArrayNum = 0;
  (pFVar17->Data).ArrayMax = 0;
  if ((bVar15) && ((TIntPoint<int>_u_0)local_5b8._0_8_ != (TIntPoint<int>_u_0)0x0)) {
    FMemory::Free((void *)local_5b8._0_8_);
  }
  if ((bVar8) && (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  fVar9 = __real_3f800000;
  local_628 = __real_3f800000;
  if (local_res10->Canvas->bStereoRendering == false) {
    local_628 = local_res10->Canvas->DPIScale;
  }
  local_618 = UEngine::GetSmallFont();
  local_3e8 = (FScriptContainerElement *)local_5f0._40_8_;
  uStack_3e0 = local_5f0._48_4_ - 1;
  if (local_5f0._48_4_ == 0) {
    uStack_3e0 = uVar22;
  }
  local_368._12_4_ = uStack_3dc;
  local_368.Size = uStack_3e0;
  local_368.DataPtr = (wchar_t *)local_5f0._40_8_;
  UCanvas::StrLen(local_618,&local_368,local_res20,local_res8,this->bDPIAwareStringMeasurement,
                  local_res10->Canvas);
  fVar33 = __real_3c23d70a;
  local_res20[0] = local_res20[0] * (fVar9 / local_628);
  fVar31 = local_res8[0] * (fVar9 / local_628);
  fVar32 = this->ConsoleSettings->BackgroundOpacityPercentage * __real_3c23d70a;
  dVar6 = (double)local_res10->ClipX;
  local_res8[0] = fVar31;
  local_520 = UTexture::GetResource((UTexture *)(this->DefaultTexture_Black).field0_0x0.DebugPtr);
  dVar12 = _UNK_150689688;
  dVar11 = ___xmm_3ff00000000000003ff0000000000000;
  fVar10 = __real_40c00000;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0.0;
  local_540.Data = (FScriptContainerElement *)0x0;
  local_510 = 0;
  local_548 = 1.0;
  local_518 = 0;
  local_568 = 0.0;
  local_560 = 0.0;
  local_590.Reference = (HHitProxy *)(double)local_res18._s_0.X;
  local_4f8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_598 = (FAutoCompleteCommand *)&___7FCanvasTileItem__6B_;
  local_588.Reference = (HHitProxy *)(double)((float)(local_res18._s_0.Y + -6) - local_res8[0]);
  local_550 = (double)(fVar31 + __real_40c00000);
  local_538.Data = ___xmm_3ff00000000000000000000000000000;
  auStack_530._0_8_ = _UNK_15061cbc8;
  local_508 = 0;
  uStack_500 = 0;
  auStack_530._8_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_55c = fVar32;
  local_558 = dVar6;
  if ((local_520 == (FTextureResource *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                          ,0x182,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_57c._0_1_ = true;
  local_57c._1_3_ = 0;
  pFVar2 = local_res10->Canvas;
  (*(code *)(((FRenderTarget *)((longlong)local_598 + 0x10))->RenderTargetTextureRHI).Reference)
            (&local_598);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  local_568 = (double)CONCAT44(FLinearColor::sRGBToLinearTable[0x8c],
                               FLinearColor::sRGBToLinearTable[0x8c]);
  local_560 = FLinearColor::sRGBToLinearTable[0x8c];
  local_55c = 1.0;
  local_520 = UTexture::GetResource((UTexture *)(this->DefaultTexture_White).field0_0x0.DebugPtr);
  local_550 = __real_4000000000000000;
  pFVar2 = local_res10->Canvas;
  local_558 = dVar6;
  (*(code *)(((FRenderTarget *)((longlong)local_598 + 0x10))->RenderTargetTextureRHI).Reference)
            (&local_598);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  FText::FromString(&local_4b8,(FString *)(local_5f0 + 0x28));
  pUVar14 = local_618;
  fVar31 = __real_3b808081;
  pUVar3 = this->ConsoleSettings;
  local_5a8._0_4_ = FLinearColor::sRGBToLinearTable[(pUVar3->InputColor).field0_0x0._s_0.R];
  local_5a8._4_4_ = FLinearColor::sRGBToLinearTable[(pUVar3->InputColor).field0_0x0._s_0.G];
  local_5a8._8_4_ = FLinearColor::sRGBToLinearTable[(pUVar3->InputColor).field0_0x0._s_0.B];
  local_428._s_0.X = (double)local_res18._s_0.X;
  local_5a8._12_4_ = (float)(pUVar3->InputColor).field0_0x0._s_0.A * __real_3b808081;
  local_428._s_0.Y = (double)((float)(local_res18._s_0.Y + -3) - local_res8[0]);
  FCanvasTextItemBase::FCanvasTextItemBase
            ((FCanvasTextItemBase *)local_2e8,(TVector2<double> *)&local_428._s_0,
             (FLinearColor *)&local_5a8._s_0);
  local_150 = pUVar14;
  local_e8 = '\0';
  local_2e8._28_4_ = 2;
  local_2e8._0_8_ = &___7FCanvasTextItem__6B_;
  local_e0[0].TextData.Reference = local_4b8.TextData.Reference;
  if (local_4b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4b8.TextData.Reference + 8))
              (local_4b8.TextData.Reference,local_4a8);
  }
  local_2a0 = local_2a0 | 2;
  local_e0[0].Flags = local_4b8.Flags;
  local_250[0]._s_0.X = dVar11;
  local_250[0]._s_0.Y = dVar12;
  local_260 = FLinearColor::Black.field0_0x0;
  pFVar2 = local_res10->Canvas;
  (**(code **)(local_2e8._0_8_ + 0x18))(local_2e8);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  if (1 < (int)local_5f0._32_4_) {
    pUVar3 = this->ConsoleSettings;
    local_2b4 = FLinearColor::sRGBToLinearTable[(pUVar3->AutoCompleteFadedColor).field0_0x0._s_0.G];
    local_2b0 = FLinearColor::sRGBToLinearTable[(pUVar3->AutoCompleteFadedColor).field0_0x0._s_0.B];
    local_2e8._48_4_ =
         FLinearColor::sRGBToLinearTable[(pUVar3->AutoCompleteFadedColor).field0_0x0._s_0.R];
    local_2ac = (float)(pUVar3->AutoCompleteFadedColor).field0_0x0._s_0.A * fVar31;
    pFVar18 = FText::FromString(&local_358,(FString *)(local_5f0 + 0x18));
    FText::operator=(local_e0,pFVar18);
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
    }
    pFVar2 = local_res10->Canvas;
    if (*(code **)(local_2e8._0_8_ + 8) == FCanvasItem::Draw) {
      local_2e8._8_8_ = (undefined8)((float)local_res18._s_0.X + local_res20[0]);
      local_2e8._16_8_ = (undefined8)((float)(local_res18._s_0.Y + -3) - local_res8[0]);
      (**(code **)(local_2e8._0_8_ + 0x18))();
    }
    else {
      (**(code **)(local_2e8._0_8_ + 8))(local_2e8);
    }
    if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar2,false);
    }
  }
  iVar16 = (this->AutoComplete).ArrayNum;
  if (iVar16 < 1) goto LAB_148971ce1;
  uVar24 = this->AutoCompleteIndex;
  if (((int)uVar24 < 0) && (uVar24 = uVar24 + iVar16, (int)uVar24 < 0)) {
    uVar24 = uVar22;
  }
  bVar15 = this->bDPIAwareStringMeasurement;
  if (ConsoleDefs::LeadingInputText.Data.ArrayNum == 0) {
    local_4e8 = (FScriptContainerElement *)0x15060d16c;
LAB_1489713c4:
    sVar19 = wcslen((wchar_t *)local_4e8);
    iStack_4e0 = (int)sVar19;
  }
  else {
    iStack_4e0 = 0;
    local_4e8 = ConsoleDefs::LeadingInputText.Data.AllocatorInstance.Data;
    if (ConsoleDefs::LeadingInputText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_1489713c4;
  }
  local_348._12_4_ = uStack_4dc;
  local_348.Size = iStack_4e0;
  local_348.DataPtr = (wchar_t *)local_4e8;
  UCanvas::StrLen(local_618,&local_348,local_res20,local_res8,bVar15,local_res10->Canvas);
  fVar31 = FLinearColor::sRGBToLinearTable[0];
  local_res20[0] = local_res20[0] * (fVar9 / local_628);
  local_res8[0] = local_res8[0] * (fVar9 / local_628);
  local_620[0] = ((float)local_res18._s_0.Y - fVar10) - (local_res8[0] + local_res8[0]);
  fVar33 = this->ConsoleSettings->BackgroundOpacityPercentage * fVar33;
  local_568 = (double)CONCAT44(FLinearColor::sRGBToLinearTable[0],FLinearColor::sRGBToLinearTable[0]
                              );
  local_560 = FLinearColor::sRGBToLinearTable[0];
  local_55c = fVar33;
  local_520 = UTexture::GetResource((UTexture *)(this->DefaultTexture_White).field0_0x0.DebugPtr);
  FVar35.Data = (FScriptContainerElement *)(local_630 + 4);
  local_638.Data = (FScriptContainerElement *)0x0;
  ppFVar34 = (FAutoCompleteCommand **)0x0;
  local_630 = (undefined1  [8])0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x15,&local_638,0,(int *)FVar35.Data);
  local_624 = 0.0;
  lVar27 = (longlong)(int)uVar24 * 0x28;
  local_600 = -uVar24;
  fVar32 = 0.0;
  do {
    iVar16 = (this->AutoComplete).ArrayNum;
    fVar30 = fVar32;
    if (iVar16 <= (int)(local_600 + uVar24)) break;
    uVar22 = 0;
    if ((int)uVar24 < iVar16) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar29 = (this->AutoComplete).AllocatorInstance.Data + lVar27;
    local_5f8 = (undefined1  [8])pFVar29;
    if (((local_638.Data <= (FCanvas *)local_5f8) &&
        ((FScriptContainerElement *)local_5f8 < local_638.Data + (longlong)(int)local_630._4_4_ * 8)
        ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = local_630._0_4_;
    if (local_630._0_4_ == local_630._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_638,(int *)(local_630 + 4));
    }
    local_630._0_4_ = iVar16 + 1;
    pFVar28 = pFVar29 + 0x10;
    *(undefined1 (*) [8])(local_638.Data + (longlong)iVar16 * 8) = local_5f8;
    bVar15 = this->bDPIAwareStringMeasurement;
    if (*(int *)(pFVar29 + 0x18) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)pFVar28;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp(pwVar21,L">");
    pFVar20 = pFVar29;
    if (iVar16 == 0) {
      pFVar20 = pFVar28;
    }
    local_418 = *(wchar_t **)pFVar20;
    iStack_410 = *(int *)(pFVar20 + 8) + -1;
    if (*(int *)(pFVar20 + 8) == 0) {
      iStack_410 = 0;
    }
    local_338._12_4_ = uStack_40c;
    local_338.Size = iStack_410;
    FVar35.Data = (FScriptContainerElement *)local_res10->Canvas;
    ppFVar34 = (FAutoCompleteCommand **)(ulonglong)bVar15;
    local_338.DataPtr = local_418;
    UCanvas::StrLen(local_618,&local_338,&local_610,&local_60c,bVar15,(FCanvas *)FVar35.Data);
    local_610 = local_610 * (fVar9 / local_628);
    local_60c = local_60c * (fVar9 / local_628);
    fVar7 = local_610;
    if (local_610 <= local_624) {
      fVar7 = local_624;
    }
    local_624 = fVar7;
    if (1 < *(int *)(pFVar29 + 0x18)) {
      bVar15 = this->bDPIAwareStringMeasurement;
      iVar16 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar28,L">");
      if (iVar16 == 0) {
        pFVar28 = pFVar29;
      }
      local_408 = *(wchar_t **)pFVar28;
      iStack_400 = *(int *)(pFVar28 + 8) + -1;
      if (*(int *)(pFVar28 + 8) == 0) {
        iStack_400 = 0;
      }
      local_328._12_4_ = uStack_3fc;
      local_328.Size = iStack_400;
      FVar35.Data = (FScriptContainerElement *)local_res10->Canvas;
      ppFVar34 = (FAutoCompleteCommand **)(ulonglong)bVar15;
      local_328.DataPtr = local_408;
      UCanvas::StrLen(local_618,&local_328,&local_608,&local_604,bVar15,(FCanvas *)FVar35.Data);
      local_608 = local_608 * (fVar9 / local_628);
      local_604 = local_604 * (fVar9 / local_628);
      fVar30 = local_608 + fVar10;
      if (fVar30 <= fVar32) {
        fVar30 = fVar32;
      }
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x28;
    fVar32 = fVar30;
  } while (local_600 + uVar24 < 0x14);
  if (0x14 < (uint)(this->AutoComplete).ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UConsole::PostRender_InputLine'::__l19::
             _dynamic_atexit_destructor_for__MoreMatchesLine__);
      _Init_thread_footer(&::_TSS0);
    }
    ::FString::PrintfImpl((FString *)(local_5f0 + 8),L"[%i more matches]");
    if (MoreMatchesLine.Command.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(MoreMatchesLine.Command.Data.AllocatorInstance.Data);
    }
    MoreMatchesLine.Command.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_5f0._8_8_
    ;
    MoreMatchesLine.Command.Data.ArrayNum = local_5f0._16_4_;
    MoreMatchesLine.Command.Data.ArrayMax = local_5f0._20_4_;
    local_5f0._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_5f0._16_8_ = (FScriptContainerElement *)0x0;
    MoreMatchesLine.Color.field0_0x0 =
         (FColor_u_0)*(FColor_u_0 *)&(this->ConsoleSettings->AutoCompleteFadedColor).field0_0x0._s_0
    ;
    local_5f0._0_8_ = &MoreMatchesLine;
    if ((local_638.Data <= (FCanvas *)local_5f0) &&
       ((FScriptContainerElement *)local_5f0 < local_638.Data + (longlong)(int)local_630._4_4_ * 8))
    {
      ppFVar34 = (FAutoCompleteCommand **)local_5f0;
      FVar35.Data = local_638.Data;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar16 = local_630._0_4_;
    if (local_630._0_4_ == local_630._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_638,(int *)(local_630 + 4));
    }
    local_630._0_4_ = iVar16 + 1;
    *(undefined8 *)(local_638.Data + (longlong)iVar16 * 8) = local_5f0._0_8_;
  }
  fVar32 = __real_41000000;
  fVar10 = __real_40800000;
  uVar23 = 0;
  local_5fc = fVar30 + local_624;
  local_57c._0_1_ = true;
  local_57c._1_3_ = 0;
  fVar30 = (float)(int)local_630._0_4_ * local_res8[0];
  local_568 = (double)CONCAT44(fVar31,fVar31);
  local_560 = fVar31;
  dVar6 = (double)(fVar30 + __real_41000000);
  fVar31 = ((local_620[0] + local_res8[0]) - fVar30) - __real_40800000;
  local_558 = (double)(local_5fc + __real_41000000);
  pFVar2 = local_res10->Canvas;
  TVar4.Reference = ((TRefCountPtr<FRHITexture> *)((longlong)local_598 + 8))->Reference;
  local_550 = dVar6;
  if (TVar4.Reference == (FRHITexture *)FCanvasItem::Draw) {
    local_590.Reference =
         (HHitProxy *)(double)(((float)local_res18._s_0.X + local_res20[0]) - __real_40800000);
    local_588.Reference = (HHitProxy *)(double)fVar31;
    local_55c = fVar33;
    (*(code *)(((FRenderTarget *)((longlong)local_598 + 0x10))->RenderTargetTextureRHI).Reference)()
    ;
  }
  else {
    local_55c = fVar33;
    (*(code *)TVar4.Reference)(&local_598,pFVar2,local_598,fVar31,ppFVar34,FVar35.Data);
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  local_498._0_8_ = &___7FCanvasBoxItem__6B_;
  local_458._s_0.X = (double)(local_5fc + fVar32);
  local_498._24_8_ = 0;
  local_498[0x20] = 0;
  local_498._40_8_ = 0;
  local_448 = 0.0;
  local_440.Data = (FScriptContainerElement *)0x0;
  local_438._0_4_ = 0;
  local_438._4_4_ = 0;
  local_498._48_4_ = FLinearColor::sRGBToLinearTable[0x8c];
  local_464 = FLinearColor::sRGBToLinearTable[0x8c];
  local_460 = FLinearColor::sRGBToLinearTable[0x8c];
  local_45c = 0x3f800000;
  pFVar2 = local_res10->Canvas;
  local_498._8_8_ = (undefined8)(((float)local_res18._s_0.X + local_res20[0]) - fVar10);
  local_498._16_8_ = (undefined8)(((local_620[0] + local_res8[0]) - fVar30) - fVar10);
  local_458._s_0.Y = dVar6;
  FCanvasBoxItem::Draw((FCanvasBoxItem *)local_498,pFVar2);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  uVar13 = local_630._0_4_;
  local_3d0 = &local_598;
  local_3c8 = &local_5fc;
  local_3c0 = local_res8;
  local_3b8 = &local_res10;
  local_3b0 = &local_res18;
  local_3a8 = local_res20;
  local_3a0 = local_620;
  local_398 = &local_618;
  local_390 = &local_628;
  local_388 = &local_624;
  local_380 = local_2e8;
  local_3d8 = this;
  if (this->ConsoleSettings->bOrderTopToBottom == false) {
    uVar25 = uVar23;
    if (0 < (int)local_630._0_4_) {
      while( true ) {
        uVar24 = (uint)uVar23;
        uVar22 = 0;
        if ((int)uVar24 < (int)local_630._0_4_) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        `UConsole::PostRender_InputLine'::__l8::<lambda_1>::operator()
                  (&local_3d8,*(FAutoCompleteCommand **)(local_638.Data + uVar25),uVar24,uVar13);
        uVar23 = (ulonglong)(uVar24 + 1);
        if ((int)uVar13 <= (int)(uVar24 + 1)) break;
        uVar25 = uVar25 + 8;
      }
    }
  }
  else {
    uVar22 = local_630._0_4_ - 1;
    if (-1 < (int)uVar22) {
      lVar27 = (longlong)(int)uVar22 * 8;
      while( true ) {
        uVar24 = 0;
        if ((int)uVar22 < (int)local_630._0_4_) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        `UConsole::PostRender_InputLine'::__l8::<lambda_1>::operator()
                  (&local_3d8,*(FAutoCompleteCommand **)(local_638.Data + lVar27),uVar22,uVar13);
        lVar27 = lVar27 + -8;
        uVar22 = uVar22 - 1;
        if ((int)uVar22 < 0) break;
      }
    }
  }
  if (local_440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data);
  }
  local_498._0_8_ = &___7FCanvasItem__6B_;
  if ((FCanvas *)local_638.Data != (FCanvas *)0x0) {
    FMemory::Free(local_638.Data);
  }
LAB_148971ce1:
  iVar1 = (this->TypedStr).Data.ArrayNum;
  iVar16 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar16 = 0;
  }
  if (this->TypedStrPos < iVar16) {
    iVar16 = this->TypedStrPos;
  }
  iVar26 = 0;
  if (0 < iVar16) {
    iVar26 = iVar16;
  }
  if (iVar1 == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_4d8,pwVar21,iVar26);
  ::FString::PrintfImpl(&local_4c8,L"%s%s");
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  local_3f8 = local_4c8.Data.AllocatorInstance.Data;
  iStack_3f0 = local_4c8.Data.ArrayNum + -1;
  if (local_4c8.Data.ArrayNum == 0) {
    iStack_3f0 = 0;
  }
  local_318._12_4_ = uStack_3ec;
  local_318.Size = iStack_3f0;
  local_318.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
  UCanvas::StrLen(local_618,&local_318,local_res20,local_res8,this->bDPIAwareStringMeasurement,
                  local_res10->Canvas);
  local_2ac = 1.0;
  local_res20[0] = local_res20[0] * (fVar9 / local_628);
  local_res8[0] = local_res8[0] * (fVar9 / local_628);
  local_2e8._48_4_ = FLinearColor::sRGBToLinearTable[0xff];
  local_2b4 = FLinearColor::sRGBToLinearTable[0xff];
  local_2b0 = FLinearColor::sRGBToLinearTable[0xff];
  pFVar17 = ::FString::FString(&local_2f8,L"_");
  pFVar18 = FText::FromString(&local_308,pFVar17);
  FText::operator=(local_e0,pFVar18);
  if (local_308.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  pFVar2 = local_res10->Canvas;
  if (*(code **)(local_2e8._0_8_ + 8) == FCanvasItem::Draw) {
    local_2e8._8_8_ = (undefined8)((float)local_res18._s_0.X + local_res20[0]);
    local_2e8._16_8_ = (undefined8)(((float)local_res18._s_0.Y - fVar9) - local_res8[0]);
    (**(code **)(local_2e8._0_8_ + 0x18))();
  }
  else {
    (**(code **)(local_2e8._0_8_ + 8))(local_2e8);
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  local_2e8._0_8_ = &___7FCanvasTextItem__6B_;
  if (local_e0[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0[0].TextData.Reference + 0x10))();
  }
  if (local_e8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  }
  local_208 = &___7FCanvasItem__6B_;
  local_2e8._0_8_ = &___7FCanvasItem__6B_;
  if (local_4b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
  }
  local_598 = (FAutoCompleteCommand *)&___7FCanvasItem__6B_;
  if ((FScriptContainerElement *)local_5f0._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5f0._24_8_);
  }
  if ((FScriptContainerElement *)local_5f0._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5f0._40_8_);
  }
  return;
}

// ProcessControlKey @ 1489734b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::ProcessControlKey(UConsole *this,FKey *param_1,EInputEvent param_2)

{
  FName FVar1;
  code *pcVar2;
  FString local_18;
  
  FVar1 = param_1->KeyName;
  if ((FVar1 == EKeys::LeftControl.KeyName) || (FVar1 == EKeys::RightControl.KeyName)) {
    if (param_2 == IE_Released) {
      this->bCtrl = 0;
    }
    else if (param_2 == IE_Pressed) {
      this->bCtrl = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  if ((this->bCtrl != 0) && (param_2 == IE_Pressed)) {
    if (FVar1 == EKeys::V.KeyName) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      FWindowsPlatformApplicationMisc::ClipboardPaste(&local_18);
      (**(code **)(this->_padding_ + 0x2f8))(this,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (FVar1 == EKeys::C.KeyName) {
        if ((this->TypedStr).Data.ArrayNum != 0) {
          FWindowsPlatformApplicationMisc::ClipboardCopy
                    ((wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
          return true;
        }
        FWindowsPlatformApplicationMisc::ClipboardCopy(L"");
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
        return true;
      }
      if (FVar1 != EKeys::X.KeyName) goto LAB_148973622;
      if (1 < (this->TypedStr).Data.ArrayNum) {
        FWindowsPlatformApplicationMisc::ClipboardCopy
                  ((wchar_t *)(this->TypedStr).Data.AllocatorInstance.Data);
        pcVar2 = *(code **)(this->_padding_ + 0x2b0);
        ::FString::FString(&local_18,L"");
        (*pcVar2)(this,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        (**(code **)(this->_padding_ + 0x2b8))(this,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
LAB_148973622:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// ProcessShiftKey @ 148974460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UConsole::ProcessShiftKey(UConsole *this,FKey *param_1,EInputEvent param_2)

{
  if ((param_1->KeyName != EKeys::LeftShift.KeyName) &&
     (param_1->KeyName != EKeys::RightShift.KeyName)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return false;
  }
  if (param_2 == IE_Released) {
    this->bShift = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  if (param_2 == IE_Pressed) {
    this->bShift = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// Serialize @ 14897d0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::Serialize(UConsole *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  int *piVar7;
  FString local_18;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ConsoleResponseLog,"LogConsoleResponse");
    _Init_thread_footer(&::_TSS0);
  }
  if (*param_3 != ConsoleResponseLog) {
    pTVar6 = (TConsoleVariableData<int> *)0x0;
    if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pIVar3 = IConsoleManager::Get();
      plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"con.MinLogVerbosity",1);
      pTVar5 = pTVar6;
      if (plVar4 != (longlong *)0x0) {
        pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
      }
      ::CVar = pTVar5;
      _Init_thread_footer(&::_TSS1);
    }
    pTVar5 = ::CVar;
    if (::CVar == (TConsoleVariableData<int> *)0x0) {
      return;
    }
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      pTVar6 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)pTVar6->ShadowedValue) <
        (int)(uint)param_2) {
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)&this[-1].TextW + 0x2d0);
  ::FString::FString(&local_18,param_1);
  (*pcVar1)(&this[-1].TextW,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAutoCompleteFromHistory @ 14897d9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::SetAutoCompleteFromHistory(UConsole *this)

{
  int *piVar1;
  TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  FString local_68;
  FString local_58;
  FColor_u_0 local_48;
  
  pTVar2 = &this->AutoComplete;
  this->AutoCompleteIndex = 0;
  this->AutoCompleteCursor = 0;
  DestructItems<FAutoCompleteCommand,int>
            ((FAutoCompleteCommand *)(pTVar2->AllocatorInstance).Data,(this->AutoComplete).ArrayNum)
  ;
  piVar1 = &(this->AutoComplete).ArrayMax;
  (this->AutoComplete).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar11 = (this->HistoryBuffer).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    do {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar7 = 0;
      if ((int)uVar11 < (this->HistoryBuffer).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_48 = (FColor_u_0)0xffb4b4b4;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HistoryBuffer).AllocatorInstance.Data;
      iVar8 = *(int *)(pFVar3 + lVar12 + 8);
      uVar7 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar7 = 0;
      }
      ::FString::AssignRange(&local_68,*(wchar_t **)(pFVar3 + lVar12),uVar7);
      local_48 = (this->ConsoleSettings->HistoryColor).field0_0x0;
      ::FString::operator=(&local_58,L">");
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)*piVar1 * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->AutoComplete).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar2->AllocatorInstance,piVar1);
      }
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      lVar9 = (longlong)iVar8;
      (this->AutoComplete).ArrayNum = iVar8 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar9 * 0x28) = 0;
      lVar10 = (longlong)local_68.Data.ArrayNum;
      *(int *)(pFVar3 + lVar9 * 0x28 + 8) = local_68.Data.ArrayNum;
      pFVar3 = pFVar3 + lVar9 * 0x28;
      if (local_68.Data.ArrayNum == 0) {
        *(int *)(pFVar3 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_68.Data.ArrayNum,
                   (int *)(pFVar3 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar3,FVar5.Data,lVar10 * 2);
      }
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      *(FScriptContainerElement **)(pFVar3 + 0x10) = (FScriptContainerElement *)0x0;
      lVar9 = (longlong)local_58.Data.ArrayNum;
      *(int *)(pFVar3 + 0x18) = local_58.Data.ArrayNum;
      if (local_58.Data.ArrayNum == 0) {
        *(int *)(pFVar3 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)(pFVar3 + 0x10),
                   local_58.Data.ArrayNum,(int *)(pFVar3 + 0x1c));
                    /* WARNING: Load size is inaccurate */
        memcpy(pFVar3[0x10],FVar5.Data,lVar9 * 2);
      }
      *(FColor_u_0 *)(pFVar3 + 0x20) = local_48;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// SetCursorPos @ 14897e990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::SetCursorPos(UConsole *this,int param_1)

{
  this->TypedStrPos = param_1;
  return;
}

// SetInputLineFromAutoComplete @ 14897f160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::SetInputLineFromAutoComplete(UConsole *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (this->AutoComplete).ArrayNum;
  if (0 < iVar6) {
    iVar5 = this->AutoCompleteCursor;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar7 = this->AutoCompleteIndex + iVar5;
    uVar4 = 0;
    if ((int)uVar7 < iVar6) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->AutoComplete).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x28;
    ::FString::operator=(&this->TypedStr,(FString *)pFVar1);
    iVar5 = (this->TypedStr).Data.ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    (**(code **)(this->_padding_ + 0x2b8))(this,iVar6);
    this->bAutoCompleteLocked = 1;
    ::FString::operator=(&this->PrecompletedInputLine,(FString *)pFVar1);
    ::FString::operator=(&this->LastAutoCompletedCommand,(FString *)pFVar1);
  }
  return;
}

// SetInputText @ 14897f260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::SetInputText(UConsole *this,FString *param_1)

{
  ::FString::operator=(&this->TypedStr,param_1);
  return;
}

// StartTyping @ 148981480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::StartTyping(UConsole *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&TypingName,L"Typing");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(this->_padding_ + 0x398))(this,TypingName);
  (**(code **)(this->_padding_ + 0x2b0))(this,param_1);
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489814f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,iVar2);
  return;
}

// StaticRegisterNativesUConsole @ 148982a90

void __cdecl UConsole::StaticRegisterNativesUConsole(void)

{
  return;
}

// UpdateCompleteIndices @ 148988f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::UpdateCompleteIndices(UConsole *this)

{
  int *piVar1;
  TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FAutoCompleteCommand *pFVar4;
  FScriptContainerElement *pFVar5;
  FAutoCompleteCommand *pFVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  ETextFilterExpressionType EVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  FAutoCompleteNode *pFVar24;
  FAutoCompleteCommand *pFVar25;
  uint uVar26;
  ulonglong uVar28;
  uint uVar29;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  FString local_c0;
  undefined1 local_b0 [8];
  FDelegateAllocation local_a8;
  UConsole *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FText local_70;
  FReadAccessScope local_60;
  ulonglong uVar27;
  
  if (this->bIsRuntimeAutoCompleteUpToDate == 0) {
    (**(code **)(this->_padding_ + 0x300))(this,1);
  }
  DestructItems<FAutoCompleteCommand,int>
            ((FAutoCompleteCommand *)(this->AutoComplete).AllocatorInstance.Data,
             (this->AutoComplete).ArrayNum);
  uVar21 = 0;
  piVar1 = &(this->AutoComplete).ArrayMax;
  (this->AutoComplete).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->AutoComplete).AllocatorInstance,0,piVar1);
  }
  this->AutoCompleteIndex = 0;
  pTVar8 = CVarConsoleLegacySearch.Ref;
  this->AutoCompleteCursor = 0;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    uVar18 = 1;
    if (!bVar9) goto LAB_148988fe1;
  }
  uVar18 = uVar21;
LAB_148988fe1:
  if (pTVar8->ShadowedValue[uVar18] == false) {
    if (1 < (this->TypedStr).Data.ArrayNum) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_b0 = (undefined1  [8])0x0;
        local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_a8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
                   (FWriteAccessScope *)&local_90);
        local_78 = &local_a8;
        puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_a8);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFAutoCompleteCommand__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar16 = FDelegateHandle::GenerateNewID();
          puVar15[2] = uVar16;
          *puVar15 = &
                     ___7__TBaseStaticDelegateInstance___A6AXAEBUFAutoCompleteCommand__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar15[3] = CommandToStringArray;
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        TTextFilter<FAutoCompleteCommand_const_&>::TTextFilter<FAutoCompleteCommand_const_&>
                  (&::Filter,
                   (TDelegate<void___cdecl(FAutoCompleteCommand_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                    *)local_b0);
        atexit(`UConsole::UpdateCompleteIndices'::__l43::_dynamic_atexit_destructor_for__Filter__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar14 = FText::FromString(&local_70,&this->TypedStr);
      bVar9 = FTextFilterExpressionEvaluator::SetFilterText
                        (&::Filter.TextFilterExpressionEvaluator,pFVar14);
      if (bVar9) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &::Filter.ChangedEvent);
      }
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      iVar11 = (this->AutoCompleteList).ArrayNum;
      pTVar2 = &this->AutoComplete;
      pFVar25 = (FAutoCompleteCommand *)(this->AutoCompleteList).AllocatorInstance.Data;
      pFVar4 = pFVar25 + iVar11;
      while( true ) {
        if ((this->AutoCompleteList).ArrayNum != iVar11) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FAutoCompleteCommand,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar25 == pFVar4) break;
        EVar10 = FTextFilterExpressionEvaluator::GetFilterType
                           (&::Filter.TextFilterExpressionEvaluator);
        if (EVar10 == Empty) {
LAB_148989643:
          pFVar6 = (FAutoCompleteCommand *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar6 <= pFVar25) && (pFVar25 < pFVar6 + (this->AutoComplete).ArrayMax)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->AutoComplete).ArrayNum;
          if (iVar12 == (this->AutoComplete).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar2->AllocatorInstance,&(this->AutoComplete).ArrayMax);
          }
          (this->AutoComplete).ArrayNum = iVar12 + 1;
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x28;
          ::FString::FString((FString *)pFVar3,&pFVar25->Command);
          ::FString::FString((FString *)(pFVar3 + 0x10),&pFVar25->Desc);
          *(FColor_u_0 *)(pFVar3 + 0x20) = (pFVar25->Color).field0_0x0;
        }
        else {
          ::Filter.TextFilterExpressionContext.ItemPtr = pFVar25;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &::Filter.TextFilterExpressionContext.TransformArrayDelegate,&local_60);
          plVar17 = (longlong *)0x0;
          if (::Filter.TextFilterExpressionContext.TransformArrayDelegate._16_4_ != 0) {
            plVar17 = (longlong *)::Filter.TextFilterExpressionContext.TransformArrayDelegate._8_8_;
          }
          (**(code **)(*plVar17 + 0x60))(plVar17,pFVar25);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_60);
          bVar9 = FTextFilterExpressionEvaluator::TestTextFilter
                            (&::Filter.TextFilterExpressionEvaluator,
                             (ITextFilterExpressionContext *)&::Filter.TextFilterExpressionContext);
          ::Filter.TextFilterExpressionContext.ItemPtr = (FAutoCompleteCommand *)0x0;
          if (::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayMax < 0) {
            DestructItems<FString,int>
                      ((FString *)
                       ::Filter.TextFilterExpressionContext.ItemBasicStrings.AllocatorInstance.Data,
                       ::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayNum);
            ::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayNum = 0;
            if (::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,&::Filter.TextFilterExpressionContext.ItemBasicStrings.
                                   AllocatorInstance,0,
                         &::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayMax);
            }
          }
          else {
            DestructItems<FString,int>
                      ((FString *)
                       ::Filter.TextFilterExpressionContext.ItemBasicStrings.AllocatorInstance.Data,
                       ::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayNum);
            ::Filter.TextFilterExpressionContext.ItemBasicStrings.ArrayNum = 0;
          }
          if (bVar9) goto LAB_148989643;
        }
        pFVar25 = pFVar25 + 1;
      }
      local_98 = this;
      AlgoImpl::
      IntroSortInternal<FAutoCompleteCommand,int,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,_UConsole::UpdateCompleteIndices_::__l43::<lambda_1>_>_>
                ((FAutoCompleteCommand *)(this->AutoComplete).AllocatorInstance.Data,
                 (this->AutoComplete).ArrayNum,local_res8[0],(<lambda_1> *)&local_98);
    }
  }
  else {
    pFVar24 = &this->AutoCompleteTree;
    ::FString::ToLower(&this->TypedStr,&local_c0);
    local_res18 = 0xffffffff;
    uVar18 = uVar21;
    while( true ) {
      uVar20 = 0;
      iVar11 = (this->TypedStr).Data.ArrayNum;
      uVar26 = 0;
      uVar23 = iVar11 - 1;
      if (iVar11 == 0) {
        uVar23 = uVar26;
      }
      uVar29 = (uint)uVar18;
      if ((int)uVar23 <= (int)uVar29) break;
      if ((int)uVar29 < 0) {
code_r0x000148989066:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        uVar23 = local_c0.Data.ArrayNum - 1;
        if (local_c0.Data.ArrayNum == 0) {
          uVar23 = uVar26;
        }
        if ((int)uVar23 <= (int)uVar29) goto code_r0x000148989066;
      }
      local_res20 = (uint)*(ushort *)(local_c0.Data.AllocatorInstance.Data + uVar21);
      uVar27 = uVar20;
      uVar28 = uVar20;
      if ((pFVar24->ChildNodes).ArrayNum < 1) {
LAB_14898915f:
        if ((this->bAutoCompleteLocked != 0) || ((int)uVar26 < 1)) {
          iVar12 = (this->TypedStr).Data.ArrayNum;
          iVar11 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar11 = 0;
          }
          if (iVar11 <= (int)uVar29) break;
          pwVar13 = ::FString::operator[](&this->TypedStr,uVar29);
          if (*pwVar13 == L' ') goto LAB_148989214;
        }
        goto LAB_14898949e;
      }
      while( true ) {
        uVar19 = (uint)uVar20;
        uVar22 = ~uVar19 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar19 < (pFVar24->ChildNodes).ArrayNum) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar26 = (int)uVar27 +
                 *(int *)(*(longlong *)((pFVar24->ChildNodes).AllocatorInstance.Data + uVar28 * 8) +
                         0x20);
        uVar27 = (ulonglong)uVar26;
        uVar23 = 0;
        if ((int)uVar19 < (pFVar24->ChildNodes).ArrayNum) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (**(uint **)((pFVar24->ChildNodes).AllocatorInstance.Data + uVar28 * 8) == local_res20)
        break;
        uVar20 = (ulonglong)(uVar19 + 1);
        uVar28 = uVar28 + 1;
        if ((pFVar24->ChildNodes).ArrayNum <= (int)(uVar19 + 1)) goto LAB_14898915f;
      }
      uVar23 = 0;
      if ((int)uVar19 < (pFVar24->ChildNodes).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = (ulonglong)(uVar29 + 1);
      uVar21 = uVar21 + 2;
      pFVar24 = *(FAutoCompleteNode **)((pFVar24->ChildNodes).AllocatorInstance.Data + uVar28 * 8);
    }
    uVar18 = 0xffffffff;
    uVar29 = local_res18;
LAB_148989214:
    local_res18 = uVar29;
    uVar23 = 0;
    if (pFVar24 != &this->AutoCompleteTree) {
      uVar26 = (pFVar24->AutoCompleteListIndices).ArrayNum;
      if (uVar26 != 0) {
        pTVar2 = &this->AutoComplete;
        do {
          if ((int)uVar18 < 0) {
LAB_148989312:
            uVar29 = 0;
            if ((int)uVar23 < (pFVar24->AutoCompleteListIndices).ArrayNum) {
              uVar29 = ~uVar23 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar29 = *(uint *)((pFVar24->AutoCompleteListIndices).AllocatorInstance.Data +
                              (longlong)(int)uVar23 * 4);
            uVar19 = 0;
            if ((int)uVar29 < (this->AutoCompleteList).ArrayNum) {
              uVar19 = ~uVar29 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            pFVar3 = (this->AutoCompleteList).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x28;
            if (((pFVar5 <= pFVar3) &&
                (pFVar3 < pFVar5 + (longlong)(this->AutoComplete).ArrayMax * 0x28)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (this->AutoComplete).ArrayNum;
            if (iVar11 == (this->AutoComplete).ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&pTVar2->AllocatorInstance,&(this->AutoComplete).ArrayMax);
            }
            (this->AutoComplete).ArrayNum = iVar11 + 1;
            pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x28;
            ::FString::FString((FString *)pFVar5,(FString *)pFVar3);
            ::FString::FString((FString *)(pFVar5 + 0x10),(FString *)(pFVar3 + 0x10));
            *(undefined4 *)(pFVar5 + 0x20) = *(undefined4 *)(pFVar3 + 0x20);
          }
          else {
            uVar29 = 0;
            if ((int)uVar23 < (pFVar24->AutoCompleteListIndices).ArrayNum) {
              uVar29 = ~uVar23 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar29 = *(uint *)((pFVar24->AutoCompleteListIndices).AllocatorInstance.Data +
                              (longlong)(int)uVar23 * 4);
            uVar19 = 0;
            if ((int)uVar29 < (this->AutoCompleteList).ArrayNum) {
              uVar19 = ~uVar29 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)((this->AutoCompleteList).AllocatorInstance.Data +
                             (longlong)(int)uVar29 * 0x28 + 8);
            uVar29 = iVar11 - 1;
            if (iVar11 == 0) {
              uVar29 = 0;
            }
            if (uVar29 == local_res18) goto LAB_148989312;
          }
          uVar18 = (ulonglong)local_res18;
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar26);
      }
      AlgoImpl::
      IntroSortInternal<FAutoCompleteCommand,int,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<void>_>_>
                ((FAutoCompleteCommand *)(this->AutoComplete).AllocatorInstance.Data,
                 (this->AutoComplete).ArrayNum,local_res8[0],(TLess<void> *)local_res10);
    }
LAB_14898949e:
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdatePrecompletedInputLine @ 148989850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConsole::UpdatePrecompletedInputLine(UConsole *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  FString local_18;
  
  iVar1 = (this->AutoComplete).ArrayNum;
  if (iVar1 < 1) {
    pFVar5 = ::FString::FString(&local_18,L"");
    pFVar9 = &this->PrecompletedInputLine;
    if (pFVar9 != pFVar5) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PrecompletedInputLine).Data.ArrayNum = (pFVar5->Data).ArrayNum;
      (this->PrecompletedInputLine).Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return;
  }
  iVar7 = this->AutoCompleteCursor;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  uVar8 = this->AutoCompleteIndex + iVar7;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::FString::operator=
            (&this->PrecompletedInputLine,
             (FString *)((this->AutoComplete).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28))
  ;
  return;
}

