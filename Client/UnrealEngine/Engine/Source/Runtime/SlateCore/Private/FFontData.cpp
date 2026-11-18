// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 23

// StaticStruct @ 142459f00

UScriptStruct * __cdecl FFontData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFontData,(UObject *)pUVar1,L"FontData");
  }
  return Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton;
}

// FFontData @ 142472450

FFontData * __thiscall FFontData::FFontData(FFontData *this,UObject *param_1,int param_2)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  uint uVar2;
  UClass *pUVar3;
  void *pvVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  this->SubFaceIndex = param_2;
  (this->FontFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontFilename).Data.ArrayNum = 0;
  (this->FontFilename).Data.ArrayMax = 0;
  this->Hinting = Default;
  this->LoadingPolicy = LazyLoad;
  (this->FontFaceAsset).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  iVar1 = (this->FontFilename).Data.ArrayNum;
  pwVar8 = L"";
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(this->FontFilename).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  this->FontFilenameHash = uVar2;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar3 = UFontFaceInterface::StaticClass();
    pvVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    if (pvVar4 == (void *)0x0) {
      pFVar5 = GetTypeName<IFontFaceInterface_const_>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UObject_const_>
                         (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  return this;
}

// FFontData @ 142472530

FFontData * __thiscall
FFontData::FFontData
          (FFontData *this,FString *param_1,EFontHinting param_2,EFontLoadingPolicy param_3,
          int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FFontData *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  
  pwVar8 = L"";
  (this->FontFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontFilename).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontFilename).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->FontFilename).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->Hinting = param_2;
  this->LoadingPolicy = param_3;
  this->SubFaceIndex = param_4;
  (this->FontFaceAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  if ((param_3 == Inline) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLoadingPolicy != EFontLoadingPolicy::Inline",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\CompositeFont.cpp"
                         ,0x87,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FFontData *)(*pcVar3)();
    return pFVar6;
  }
  iVar1 = (this->FontFilename).Data.ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(this->FontFilename).Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  this->FontFilenameHash = uVar5;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// FFontData @ 142472600

FFontData * __thiscall FFontData::FFontData(FFontData *this)

{
  uint uVar1;
  
  (this->FontFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontFilename).Data.ArrayNum = 0;
  (this->FontFilename).Data.ArrayMax = 0;
  this->Hinting = Default;
  this->LoadingPolicy = LazyLoad;
  this->SubFaceIndex = 0;
  (this->FontFaceAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  this->FontFilenameHash = uVar1;
  return this;
}

// operator== @ 14247a470

bool __thiscall FFontData::operator==(FFontData *this,FFontData *param_1)

{
  int iVar1;
  UObject *pUVar2;
  int iVar3;
  bool bVar4;
  
  if (this == param_1) {
    return true;
  }
  pUVar2 = (this->FontFaceAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (param_1->FontFaceAsset).field0_0x0.DebugPtr) {
    if (pUVar2 != (UObject *)0x0) {
      return true;
    }
    if ((((this->FontFilenameHash == param_1->FontFilenameHash) &&
         (this->Hinting == param_1->Hinting)) && (this->LoadingPolicy == param_1->LoadingPolicy)) &&
       (this->SubFaceIndex == param_1->SubFaceIndex)) {
      iVar3 = (this->FontFilename).Data.ArrayNum;
      iVar1 = (param_1->FontFilename).Data.ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          return true;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->FontFilename).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->FontFilename).Data.AllocatorInstance.Data);
        bVar4 = iVar3 == 0;
      }
      else {
        bVar4 = iVar3 + iVar1 == 1;
      }
      if (bVar4) {
        return true;
      }
    }
  }
  return false;
}

// operator!= @ 14247a810

bool __thiscall FFontData::operator!=(FFontData *this,FFontData *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// AddReferencedObjects @ 14247f880

void __thiscall FFontData::AddReferencedObjects(FFontData *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014247f893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->FontFaceAsset,0,0);
  return;
}

// GetAscendOverriddenValue @ 14248ac60

int __thiscall FFontData::GetAscendOverriddenValue(FFontData *this)

{
  UObjectBaseUtility *this_00;
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return 0;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014248ac9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
    return iVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetDescendOverriddenValue @ 14248ebb0

int __thiscall FFontData::GetDescendOverriddenValue(FFontData *this)

{
  UObjectBaseUtility *this_00;
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return 0;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014248ebeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    return iVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetFontFaceAsset @ 142490770

UObject * __thiscall FFontData::GetFontFaceAsset(FFontData *this)

{
  return (this->FontFaceAsset).field0_0x0.DebugPtr;
}

// GetFontFaceData @ 142490780

TSharedPtr<FFontFaceData_const_,1> * __thiscall
FFontData::GetFontFaceData
          (FFontData *this,TSharedPtr<FFontFaceData_const_,1> *__return_storage_ptr__)

{
  UObjectBaseUtility *this_00;
  TReferenceControllerBase<1> *pTVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_28 [16];
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    __return_storage_ptr__->Object = (FFontFaceData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x58))(plVar3,local_28);
    __return_storage_ptr__->Object = (FFontFaceData *)*puVar4;
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_28._8_8_);
    return __return_storage_ptr__;
  }
  pFVar5 = GetTypeName<IFontFaceInterface_const_>((FString *)local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// GetFontFilename @ 142490ac0

FString * __thiscall FFontData::GetFontFilename(FFontData *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return &this->FontFilename;
  }
  pUVar1 = UFontFaceInterface::StaticClass();
  plVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142490afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FString *)(**(code **)(*plVar2 + 0x10))(plVar2);
    return pFVar3;
  }
  pFVar3 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetFontRasterizationSettings @ 142490b60

FFontRasterizationSettings __thiscall FFontData::GetFontRasterizationSettings(FFontData *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  FString *pFVar3;
  FFontRasterizationSettings in_RDX;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if ((this_00 != (UObjectBaseUtility *)0x0) && (bSlateSdfTextEnable)) {
    pUVar1 = UFontFaceInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2);
      return in_RDX;
    }
    pFVar3 = GetTypeName<IFontFaceInterface_const_>(&local_28);
    pwVar4 = L"";
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    pFVar3 = GetFullNameForCastLogError<UObject_const_>
                       (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar4,pwVar5);
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetHinting @ 142491300

EFontHinting __thiscall FFontData::GetHinting(FFontData *this)

{
  UObjectBaseUtility *this_00;
  EFontHinting EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return this->Hinting;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014249133b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    return EVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetLayoutMethod @ 142492010

EFontLayoutMethod __thiscall FFontData::GetLayoutMethod(FFontData *this)

{
  UObjectBaseUtility *this_00;
  EFontLayoutMethod EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return Metrics;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014249204b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    return EVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetLoadingPolicy @ 142492340

EFontLoadingPolicy __thiscall FFontData::GetLoadingPolicy(FFontData *this)

{
  UObjectBaseUtility *this_00;
  EFontLoadingPolicy EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return this->LoadingPolicy;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014249237b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
    return EVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetStrikeBrushHeightPercentage @ 142495bf0

int __thiscall FFontData::GetStrikeBrushHeightPercentage(FFontData *this)

{
  UObjectBaseUtility *this_00;
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return 0x3c;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142495c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
    return iVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetSubFaceIndex @ 142495e40

int __thiscall FFontData::GetSubFaceIndex(FFontData *this)

{
  return this->SubFaceIndex;
}

// HasFont @ 1424975b0

bool __thiscall FFontData::HasFont(FFontData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  TSharedPtr<FFontFaceData_const_,1> local_18;
  
  GetFontFaceData(this,&local_18);
  if (local_18.Object == (FFontFaceData *)0x0) {
LAB_14249760c:
    pFVar4 = GetFontFilename(this);
    if ((pFVar4->Data).ArrayNum < 2) {
      bVar2 = false;
      goto LAB_142497620;
    }
  }
  else {
    if (local_18.Object == (FFontFaceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((local_18.Object)->Data).ArrayNum < 1) goto LAB_14249760c;
  }
  bVar2 = true;
LAB_142497620:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// IsAscendOverridden @ 14249a850

bool __thiscall FFontData::IsAscendOverridden(FFontData *this)

{
  UObjectBaseUtility *this_00;
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return false;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014249a88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
    return (bool)uVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// IsDescendOverridden @ 14249a9e0

bool __thiscall FFontData::IsDescendOverridden(FFontData *this)

{
  UObjectBaseUtility *this_00;
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontFaceAsset).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return false;
  }
  pUVar2 = UFontFaceInterface::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014249aa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    return (bool)uVar1;
  }
  pFVar4 = GetTypeName<IFontFaceInterface_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>
                     (&local_18,(this->FontFaceAsset).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// Serialize @ 1424a6b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFontData::Serialize(FFontData *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  EFontHinting *pEVar4;
  EFontLoadingPolicy *pEVar5;
  longlong lVar6;
  undefined4 uVar7;
  UScriptStruct *pUVar8;
  TObjectPtr<UObject_const_>_u_0 TVar9;
  int iVar10;
  uint uVar11;
  UPackage *pUVar12;
  FStructuredArchiveFromArchive *pFVar13;
  FStructuredArchiveSlot FVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  TObjectPtr<UObject_const_>_u_0 local_1b8;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (iVar10 < 9) {
    return false;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  bVar17 = SUB41(uVar16,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  iVar10 = 0;
  if ((uint *)puVar3[1] < puVar1) {
    uVar7 = local_1b8._4_4_;
    local_1b8.DebugPtr = local_1b8.DebugPtr & 0xffffffff00000000;
    if ((param_1->field_0x28 & 1) == 0) {
      local_1b8._4_4_ = uVar7;
      local_1b8._0_4_ = uVar16;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
    if (1 < (uint)local_1b8._0_4_) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar11 = local_1b8._0_4_;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1424a6c6b;
  }
  else {
    uVar11 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_1424a6c6b:
    bVar17 = uVar11 != 0;
  }
  if (bVar17 == false) {
    if (Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFontData,(UObject *)pUVar12,L"FontData");
    }
    pUVar8 = Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton;
    bVar17 = UScriptStruct::UseBinarySerialization
                       (Z_Registration_Info_UScriptStruct_FFontData.OuterSingleton,param_1);
    lVar6 = pUVar8->_padding_;
    if (bVar17) {
      pFVar13 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
      FVar14 = FStructuredArchiveFromArchive::GetSlot(pFVar13);
      (**(code **)(lVar6 + 0x2d0))(pUVar8,*(undefined8 *)FVar14,this);
    }
    else {
      pFVar13 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
      FVar14 = FStructuredArchiveFromArchive::GetSlot(pFVar13);
      local_1c0 = 0;
      local_1c8 = 0;
      (**(code **)(lVar6 + 0x2e0))(pUVar8,*(undefined8 *)FVar14,this,pUVar8);
    }
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  else {
    local_1b8 = (TObjectPtr<UObject_const_>_u_0)(this->FontFaceAsset).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_1b8);
    TVar9 = local_1b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1b8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_1b8.DebugPtr);
    }
    (this->FontFaceAsset).field0_0x0.DebugPtr = (UObject *)TVar9;
    if (TVar9.DebugPtr == (UObject *)0x0) {
      ::operator<<(param_1,&this->FontFilename);
      pEVar4 = (EFontHinting *)**(undefined8 **)&param_1->field_0x8;
      if ((EFontHinting *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Hinting,1);
      }
      else {
        this->Hinting = *pEVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      pEVar5 = (EFontLoadingPolicy *)**(undefined8 **)&param_1->field_0x8;
      if (pEVar5 + 1 <= (EFontLoadingPolicy *)(*(undefined8 **)&param_1->field_0x8)[1]) {
        this->LoadingPolicy = *pEVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        ::operator<<(param_1,&this->SubFaceIndex);
        goto LAB_1424a6e07;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->LoadingPolicy,1);
    }
    ::operator<<(param_1,&this->SubFaceIndex);
  }
LAB_1424a6e07:
  iVar2 = (this->FontFilename).Data.ArrayNum;
  if (iVar2 == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(this->FontFilename).Data.AllocatorInstance.Data;
    iVar10 = iVar2 + -1;
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar15);
  this->FontFilenameHash = uVar11;
  return true;
}

// SetSubFaceIndex @ 1424a7450

void __thiscall FFontData::SetSubFaceIndex(FFontData *this,int param_1)

{
  this->SubFaceIndex = param_1;
  return;
}

