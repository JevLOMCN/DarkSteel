// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// UMaterialExpression @ 14728bd80

UMaterialExpression * __thiscall
UMaterialExpression::UMaterialExpression(UMaterialExpression *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpression__6B_;
  (this->GraphNode).field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
  (this->SubgraphExpression).field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->LastErrorText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastErrorText).Data.ArrayNum = 0;
  (this->LastErrorText).Data.ArrayMax = 0;
  (this->MaterialExpressionGuid).A = 0;
  (this->MaterialExpressionGuid).B = 0;
  (this->MaterialExpressionGuid).C = 0;
  (this->MaterialExpressionGuid).D = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->Function).field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
  (this->Desc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Desc).Data.ArrayNum = 0;
  (this->Desc).Data.ArrayMax = 0;
  (this->MenuCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuCategories).ArrayNum = 0;
  (this->MenuCategories).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  return this;
}

// ~UMaterialExpression @ 14728d520

void __thiscall UMaterialExpression::~UMaterialExpression(UMaterialExpression *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpression__6B_;
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->MenuCategories).AllocatorInstance.Data,(this->MenuCategories).ArrayNum)
  ;
  pFVar1 = (this->MenuCategories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Desc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastErrorText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14728fde0

UClass * __cdecl UMaterialExpression::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpression",
               &Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton,
               StaticRegisterNativesUMaterialExpression,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpression>,
               InternalVTableHelperCtorCaller<UMaterialExpression>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton;
}

// Serialize @ 1472910a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialExpression::Serialize(UMaterialExpression *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUMaterialExpression @ 147291360

void __cdecl UMaterialExpression::StaticRegisterNativesUMaterialExpression(void)

{
  return;
}

// UMaterialExpression @ 148afa700

UMaterialExpression * __thiscall
UMaterialExpression::UMaterialExpression(UMaterialExpression *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpression__6B_;
  (this->GraphNode).field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
  (this->SubgraphExpression).field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->LastErrorText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastErrorText).Data.ArrayNum = 0;
  (this->LastErrorText).Data.ArrayMax = 0;
  (this->MaterialExpressionGuid).A = 0;
  (this->MaterialExpressionGuid).B = 0;
  (this->MaterialExpressionGuid).C = 0;
  (this->MaterialExpressionGuid).D = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->Function).field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
  (this->Desc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Desc).Data.ArrayNum = 0;
  (this->Desc).Data.ArrayMax = 0;
  (this->MenuCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuCategories).ArrayNum = 0;
  (this->MenuCategories).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  return this;
}

// GetAssetOwner @ 148b00500

UObject * __thiscall UMaterialExpression::GetAssetOwner(UMaterialExpression *this)

{
  UMaterial *pUVar1;
  
  pUVar1 = (UMaterial *)(this->Function).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterial *)0x0) {
    pUVar1 = (this->Material).field0_0x0.DebugPtr;
  }
  return (UObject *)pUVar1;
}

// GetAssetPathName @ 148b00520

FString * __thiscall
UMaterialExpression::GetAssetPathName(UMaterialExpression *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  UMaterial *this_00;
  FString local_28;
  FString local_18;
  
  this_00 = (UMaterial *)(this->Function).field0_0x0.DebugPtr;
  if ((this_00 == (UMaterial *)0x0) &&
     (this_00 = (this->Material).field0_0x0.DebugPtr, this_00 == (UMaterial *)0x0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
    bVar2 = true;
    bVar1 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsAllowedIn @ 148b02680

bool __thiscall UMaterialExpression::IsAllowedIn(UMaterialExpression *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = IsExpressionClassPermitted((UClass *)this->_padding_);
  return bVar1;
}

// PostDuplicate @ 148b02900

void __thiscall UMaterialExpression::PostDuplicate(UMaterialExpression *this,bool param_1)

{
  return;
}

// PostInitProperties @ 148b02b30

void __thiscall UMaterialExpression::PostInitProperties(UMaterialExpression *this)

{
  UObject::PostInitProperties((UObject *)this);
  UObjectBaseUtility::IsTemplate
            ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  return;
}

// PostLoad @ 148b02bf0

void __thiscall UMaterialExpression::PostLoad(UMaterialExpression *this)

{
  int iVar1;
  longlong lVar2;
  UMaterial *pUVar3;
  UMaterialFunction *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_28;
  FString local_18;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId992,"UMaterialExpression_PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
               ,0x3e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId992);
  }
  UObject::PostLoad((UObject *)this);
  if ((this->Material).field0_0x0.DebugPtr == (UMaterial *)0x0) {
    lVar2 = this->_padding_;
    pUVar6 = Z_Construct_UClass_UMaterial_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar3 = (UMaterial *)this->_padding_;
      if (pUVar3 == (UMaterial *)0x0) {
        pFVar7 = GetTypeName<UMaterial>(&local_28);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      pUVar6 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar7 = GetTypeName<UMaterial>(&local_28);
        pwVar8 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar3);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar8,pwVar9);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Material).field0_0x0.DebugPtr = pUVar3;
    }
  }
  if ((this->Function).field0_0x0.DebugPtr == (UMaterialFunction *)0x0) {
    lVar2 = this->_padding_;
    pUVar6 = Z_Construct_UClass_UMaterialFunction_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar4 = (UMaterialFunction *)this->_padding_;
      if (pUVar4 == (UMaterialFunction *)0x0) {
        pFVar7 = GetTypeName<UMaterialFunction>(&local_18);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      pUVar6 = Z_Construct_UClass_UMaterialFunction_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar7 = GetTypeName<UMaterialFunction>(&local_18);
        pwVar8 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UObject>(&local_28,(UObject *)pUVar4);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar8,pwVar9);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Function).field0_0x0.DebugPtr = pUVar4;
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 148b03920

void __thiscall
UMaterialExpression::Serialize(UMaterialExpression *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId958,"UMaterialExpression_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
               ,0x3be);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId958);
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10[0].StructuredArchive);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FUE5MainStreamObjectVersion::GUID);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateMaterialExpressionGuid @ 148b04860

void __thiscall
UMaterialExpression::UpdateMaterialExpressionGuid
          (UMaterialExpression *this,bool param_1,bool param_2)

{
  return;
}

// UpdateParameterGuid @ 148b04870

void __thiscall
UMaterialExpression::UpdateParameterGuid(UMaterialExpression *this,bool param_1,bool param_2)

{
  return;
}

// ValidateState @ 148b048c0

void __thiscall UMaterialExpression::ValidateState(UMaterialExpression *this)

{
  return;
}

