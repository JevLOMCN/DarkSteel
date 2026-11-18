// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 15

// <lambda_invoker_cdecl> @ 14a0af660

FRigVMTemplateArgument * __cdecl
FRigVMTemplateArgumentInfo::<lambda_24_>::<lambda_invoker_cdecl>
          (FRigVMTemplateArgument *__return_storage_ptr__,FName param_1,ERigVMPinDirection param_2,
          FRigVMRegistryHandle *param_3)

{
  __return_storage_ptr__->Index = -1;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  (__return_storage_ptr__->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypeIndices).ArrayNum = 0;
  (__return_storage_ptr__->TypeIndices).ArrayMax = 0;
  __return_storage_ptr__->bUseCategories = false;
  (__return_storage_ptr__->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypeCategories).ArrayNum = 0;
  (__return_storage_ptr__->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->FilterType = 0;
  *(undefined8 *)&(__return_storage_ptr__->FilterType).field_0x28 = 0;
  (__return_storage_ptr__->CachedArrayType).bIsSet = false;
  __return_storage_ptr__->Direction = IO;
  return __return_storage_ptr__;
}

// <lambda_27_> @ 14a0bc210

<lambda_27_> * __thiscall
`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>::<lambda_27_>
          (void *this,<lambda_27_> *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  <lambda_27_> *p<Var3;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)(param_1 + 8);
  _Src = *(void **)param_1;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(longlong *)((longlong)this + 0x10) = lVar2;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  if (lVar2 != 0) {
    p<Var3 = param_1 + 0x20;
    if (*(<lambda_27_> **)(param_1 + 0x38) != (<lambda_27_> *)0x0) {
      p<Var3 = *(<lambda_27_> **)(param_1 + 0x38);
    }
    (*(code *)**(undefined8 **)p<Var3)();
  }
  return this;
}

// FRigVMTemplateArgumentInfo @ 14a0c19c0

FRigVMTemplateArgumentInfo * __thiscall
FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
          (FRigVMTemplateArgumentInfo *this,FName param_1,ERigVMPinDirection param_2,
          TFunction<FRigVMTemplateArgument___cdecl(FName,ERigVMPinDirection,FRigVMRegistryHandle_const_&)>
          *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  this->Name = param_1;
  this->Direction = param_2;
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->FactoryCallback = lVar1;
  *(undefined8 *)&(this->FactoryCallback).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  return this;
}

// FRigVMTemplateArgumentInfo @ 14a0c1a20

FRigVMTemplateArgumentInfo * __thiscall
FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
          (FRigVMTemplateArgumentInfo *this,FName param_1,ERigVMPinDirection param_2)

{
  undefined1 *puVar1;
  
  this->Name = param_1;
  this->Direction = param_2;
  *(undefined8 *)&this->FactoryCallback = 0;
  *(undefined8 *)&(this->FactoryCallback).field_0x28 = 0;
  *(undefined ***)&(this->FactoryCallback).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->FactoryCallback).field_0x18;
  *(code **)puVar1 = <lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->FactoryCallback =
         UE::Core::Private::Function::
         TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
         ::Call;
  }
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  return this;
}

// FRigVMTemplateArgumentInfo @ 14a0c1a70

FRigVMTemplateArgumentInfo * __thiscall
FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
          (FRigVMTemplateArgumentInfo *this,FName param_1,ERigVMPinDirection param_2,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  longlong lVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  this->Name = param_1;
  this->Direction = param_2;
  local_10 = param_3->ArrayNum;
  lVar4 = (longlong)local_10;
  _Src = (param_3->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar4 * 0xc);
  }
  iVar3 = local_10;
  _Src_00.Data = local_18.Data;
  *(undefined8 *)&this->FactoryCallback = 0;
  puVar1 = &(this->FactoryCallback).field_0x18;
  *(undefined8 *)&(this->FactoryCallback).field_0x28 = 0;
  *(undefined ***)&(this->FactoryCallback).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_25_>,0,0>
        ::_vftable_;
  puVar2 = &(this->FactoryCallback).field_0x24;
  *(undefined8 *)puVar1 = 0;
  *(int *)&(this->FactoryCallback).field_0x20 = local_10;
  if (local_10 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_10,0,(ForAnyElementType *)puVar1,local_10,(int *)puVar2);
    memcpy(*(void **)puVar1,_Src_00.Data,(longlong)iVar3 * 0xc);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->FactoryCallback =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_25_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
         ::Call;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  return this;
}

// FRigVMTemplateArgumentInfo @ 14a0c1bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0c1d41) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014a0c1d45 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FRigVMTemplateArgumentInfo * __thiscall
FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
          (FRigVMTemplateArgumentInfo *this,FName param_1,ERigVMPinDirection param_2,
          TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *param_4)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  undefined8 *puVar2;
  longlong *plVar3;
  size_t sVar4;
  undefined1 auStackY_b8 [32];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  this->Name = param_1;
  this->Direction = param_2;
  local_70 = param_3->ArrayNum;
  sVar4 = (size_t)local_70;
  _Src = (param_3->AllocatorInstance).Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,sVar4);
  }
  local_68 = *(longlong *)param_4;
  local_40 = 0;
  if (local_68 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_58);
  }
  *(undefined8 *)&this->FactoryCallback = 0;
  *(undefined8 *)&(this->FactoryCallback).field_0x28 = 0;
  puVar2 = FMemory::Malloc(0x50,0x10);
  _Src_00.Data = local_78.Data;
  *(undefined8 **)&(this->FactoryCallback).field_0x28 = puVar2;
  puVar2[2] = 0;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_27_>,0,1>
             ::_vftable_;
  pFVar1 = (ForAnyElementType *)(puVar2 + 2);
  sVar4 = (size_t)local_70;
  *(int *)(puVar2 + 3) = local_70;
  if (local_70 == 0) {
    *(int *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70,0,pFVar1,local_70,(int *)((longlong)puVar2 + 0x1c));
    memcpy(pFVar1->Data,_Src_00.Data,sVar4);
  }
  puVar2[4] = local_68;
  puVar2[9] = local_40;
  local_40 = 0;
  *(undefined4 *)(puVar2 + 6) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_54;
  *(undefined4 *)(puVar2 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_4c;
  puVar2[8] = local_48;
  if (puVar2[4] != 0) {
    local_68 = 0;
  }
  if (pFVar1 != (ForAnyElementType *)0x0) {
    *(code **)&this->FactoryCallback =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
         ::Call;
  }
  if (local_68 != 0) {
    (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// FRigVMTemplateArgumentInfo @ 14a0c1db0

FRigVMTemplateArgumentInfo * __thiscall
FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
          (FRigVMTemplateArgumentInfo *this,FName param_1,ERigVMPinDirection param_2,
          TRigVMTypeIndex *param_3)

{
  int iVar1;
  FNameEntryId FVar2;
  uint uVar3;
  
  FVar2.Value = (param_3->Name).ComparisonIndex.Value;
  uVar3 = (param_3->Name).Number;
  this->Direction = param_2;
  this->Name = param_1;
  *(undefined8 *)&this->FactoryCallback = 0;
  *(undefined8 *)&(this->FactoryCallback).field_0x28 = 0;
  *(undefined ***)&(this->FactoryCallback).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_26_>,0,0>
        ::_vftable_;
  iVar1 = param_3->Index;
  *(uint *)&(this->FactoryCallback).field_0x18 = FVar2.Value;
  *(uint *)&(this->FactoryCallback).field_0x1c = uVar3;
  *(int *)&(this->FactoryCallback).field_0x20 = iVar1;
  if (&(this->FactoryCallback).field_0x18 != (undefined1 *)0x0) {
    *(code **)&this->FactoryCallback =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
         ::Call;
  }
  (this->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndices).ArrayNum = 0;
  (this->TypeIndices).ArrayMax = 0;
  return this;
}

// operator() @ 14a0c9530

FRigVMTemplateArgument * __thiscall
`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>::operator()
          (void *this,FRigVMTemplateArgument *__return_storage_ptr__,FName param_1,
          ERigVMPinDirection param_2,FRigVMRegistryHandle *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res20 [8];
  TRigVMTypeIndex local_38;
  undefined1 local_2c [4];
  initializer_list<TRigVMTypeIndex> local_28;
  
  local_38.Index = *(int *)((longlong)this + 8);
  local_38.Name = *(FName *)this;
  local_28._First = &local_38;
  local_28._Last = (TRigVMTypeIndex *)local_2c;
  __return_storage_ptr__->Index = -1;
  __return_storage_ptr__->Name = param_1;
  __return_storage_ptr__->Direction = param_2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>
            (&__return_storage_ptr__->TypeIndices,
             (initializer_list<TRigVMTypeIndex> *)(local_2c + 4));
  (__return_storage_ptr__->TypeCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypeCategories).ArrayNum = 0;
  (__return_storage_ptr__->TypeCategories).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->FilterType = 0;
  *(undefined8 *)&(__return_storage_ptr__->FilterType).field_0x28 = 0;
  (__return_storage_ptr__->CachedArrayType).bIsSet = false;
  __return_storage_ptr__->bUseCategories = false;
  iVar2 = (__return_storage_ptr__->TypeIndices).ArrayNum;
  pFVar3 = (__return_storage_ptr__->TypeIndices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((__return_storage_ptr__->TypeIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_3->Registry->_padding_ + 0x118))(param_3->Registry,pFVar3);
    pFVar3 = pFVar3 + 0xc;
  }
  return __return_storage_ptr__;
}

// operator() @ 14a0c9610

FRigVMTemplateArgument * __thiscall
`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_27_>::operator()
          (void *this,FRigVMTemplateArgument *__return_storage_ptr__,FName param_1,
          ERigVMPinDirection param_2,FRigVMRegistryHandle *param_3)

{
  undefined8 *puVar1;
  FName local_res18 [2];
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_38;
  
  local_38._0_8_ = *(longlong *)((longlong)this + 0x10);
  local_38._40_8_ = 0;
  local_res18[0] = param_1;
  if (local_38._0_8_ != 0) {
    puVar1 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar1)(puVar1,&local_38.field_0x10);
  }
  FRigVMTemplateArgument::FRigVMTemplateArgument
            (__return_storage_ptr__,local_res18,param_2,this,&local_38,param_3);
  return __return_storage_ptr__;
}

// ComputeTemplateNotation @ 14a0d02f0

/* WARNING: Removing unreachable block (ram,0x00014a0d0450) */

FName __cdecl
FRigVMTemplateArgumentInfo::ComputeTemplateNotation
          (FName param_1,TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  ERigVMPinDirection EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FName *pFVar10;
  longlong *in_R8;
  FName *pFVar11;
  FName local_res10;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar8 = (int)in_R8[1];
  if (iVar8 == 0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    pFVar10 = (FName *)*in_R8;
    pFVar11 = pFVar10 + (longlong)iVar8 * 10;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_res10 = (FName)param_2;
    while( true ) {
      if ((int)in_R8[1] != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRigVMTemplateArgumentInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar11) break;
      EVar1 = (ERigVMPinDirection)pFVar10[1].ComparisonIndex.Value;
      if ((EVar1 != Invalid) && (EVar1 != Hidden)) {
        FRigVMTemplate::GetArgumentNotation(&local_58,*pFVar10,EVar1);
        if ((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
           (((FScriptContainerElement *)&local_58 <
             local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar2 = (code *)swi(3);
          FVar5 = (FName)(*pcVar2)();
          return FVar5;
        }
        iVar4 = local_68.ArrayNum;
        if (local_68.ArrayNum == local_68.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
        }
        local_68.ArrayNum = iVar4 + 1;
        pFVar7 = local_68.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_58.Data.AllocatorInstance.Data;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_58.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
      }
      pFVar10 = pFVar10 + 10;
    }
    if (local_68.ArrayNum == 0) {
      *(undefined8 *)param_1 = 0;
      iVar8 = 0;
    }
    else {
      pFVar6 = ::FName::ToString(&local_res10,&local_38);
      pFVar6 = RigVMStringUtils::MakeTemplateNotation(&local_48,pFVar6,&local_68);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FName::FName((FName *)param_1,pwVar9);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar8 = local_68.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,iVar8);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// GetArgument @ 14a0df7d0

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgumentInfo::GetArgument
          (FRigVMTemplateArgumentInfo *this,FRigVMTemplateArgument *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMTemplateArgument *pFVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRigVMTemplateArgument *)(*pcVar4)();
      return pFVar7;
    }
  }
  GetArgument_NoLock(this,__return_storage_ptr__,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigVMTemplateArgument *)(*pcVar4)();
          return pFVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return __return_storage_ptr__;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigVMTemplateArgument *)(*pcVar4)();
          return pFVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetArgument_NoLock @ 14a0e11a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMTemplateArgument * __thiscall
FRigVMTemplateArgumentInfo::GetArgument_NoLock
          (FRigVMTemplateArgumentInfo *this,FRigVMTemplateArgument *__return_storage_ptr__,
          FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigVMTemplateArgument *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  ERigVMPinDirection local_b8 [8];
  FName local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->TypeIndices).ArrayNum == 0) {
    if (*(longlong *)&this->FactoryCallback == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FactoryCallback",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x34f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRigVMTemplateArgument *)(*pcVar1)();
        return pFVar3;
      }
    }
    local_b8[0] = this->Direction;
    local_b0 = this->Name;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->FactoryCallback);
    plVar6 = *(longlong **)&(this->FactoryCallback).field_0x28;
    pcVar1 = *(code **)&this->FactoryCallback;
    plVar5 = (longlong *)&(this->FactoryCallback).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar5 = plVar6;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(local_a8,uVar4,&local_b0,local_b8);
    FRigVMTemplateArgument::FRigVMTemplateArgument
              (__return_storage_ptr__,(FRigVMTemplateArgument *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((FScriptContainerElement *)local_a8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._40_8_);
    }
    if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._16_8_);
    }
  }
  else {
    FRigVMTemplateArgument::FRigVMTemplateArgument
              (__return_storage_ptr__,&this->Name,this->Direction,&this->TypeIndices,param_1);
  }
  return __return_storage_ptr__;
}

// GetTypesFromCategories @ 14a0f1970

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMTemplateArgumentInfo::GetTypesFromCategories
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  GetTypesFromCategories_NoLock(__return_storage_ptr__,param_1,param_2,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetTypesFromCategories_NoLock @ 14a0f1b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMTemplateArgumentInfo::GetTypesFromCategories_NoLock
          (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
          *param_2,FRigVMRegistryHandle *param_3)

{
  bool *pbVar1;
  code *pcVar2;
  FRigVMRegistryHandle *pFVar3;
  TDelegate<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *this;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  int iVar13;
  bool *pbVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246 [6];
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_240;
  uint local_230;
  int local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  uint uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int local_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_200;
  undefined4 local_1f8;
  uint uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FRigVMRegistryHandle *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  TRigVMTypeIndex local_1d0;
  FScriptContainerElement *local_1c0;
  TDelegate<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *local_1b8;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_f8;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar16 = (param_1->AllocatorInstance).Data;
  uVar12 = 0;
  iVar13 = param_1->ArrayNum;
  pFVar21 = pFVar16 + iVar13;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1e8 = param_3;
  local_1b8 = param_2;
  local_1b0 = __return_storage_ptr__;
  while( true ) {
    if (param_1->ArrayNum != iVar13) {
      local_248 = 0;
      `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_248);
    }
    if (pFVar16 == pFVar21) break;
    lVar6 = (**(code **)(param_3->Registry->_padding_ + 0x140))(param_3->Registry,*pFVar16);
    uVar12 = uVar12 + *(int *)(lVar6 + 8);
    pFVar16 = pFVar16 + 1;
  }
  if (uVar12 <= (uint)(local_98._8_4_ - local_64)) goto LAB_14a0f1e69;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar17 = 1;
  if (3 < uVar12) {
    uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1e0 = (undefined4)lVar6;
    uVar17 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar17 <= (int)local_50)) goto LAB_14a0f1e69;
  local_50 = uVar17;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar17 != 0) {
    uVar12 = uVar17;
    if (uVar17 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14a0f1cc4;
      }
    }
    else {
LAB_14a0f1cc4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      uVar18 = 0;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar7 = uVar18 & (longlong)(int)uVar17 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_224 = 1;
    local_228 = 0;
    uStack_214 = 0;
    iStack_210 = 0;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar12 = *(uint *)FVar19;
      local_228 = 0;
      while (uVar12 == 0) {
        iStack_210 = iStack_210 + 0x20;
        lVar6 = (longlong)local_228;
        local_228 = local_228 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_228)
        goto LAB_14a0f1dcb;
        uVar12 = ((uint *)((longlong)FVar19 + 4))[lVar6];
      }
      uStack_224 = -uVar12 & uVar12;
      uVar18 = (ulonglong)uStack_224 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1dc = (int)lVar6;
      uStack_214 = local_1dc + -1 + iStack_210;
      if ((int)local_70 < (int)uStack_214) {
LAB_14a0f1dcb:
        uStack_214 = local_70;
      }
    }
    local_218 = 0xffffffff;
    local_1a8 = (longlong *)local_98;
    local_1a0._padding_ = CONCAT44(uStack_224,local_228);
    local_1a0.CurrentBitIndex = uStack_214;
    local_1a0.UnvisitedBitMask = 0xffffffff;
    local_1a0._28_4_ = uStack_20c;
    local_1a0.BaseBitIndex = iStack_210;
    local_1a0.Array = pTStack_220;
    uVar12 = uStack_214;
    if ((int)uStack_214 < (int)local_70) {
      do {
        uVar17 = local_50 - 1 & *(uint *)(*local_1a8 + 8 + (longlong)(int)uVar12 * 0x14);
        lVar6 = *local_1a8 + (longlong)(int)uVar12 * 0x14;
        *(uint *)(lVar6 + 0x10) = uVar17;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(FVar11.Data + uVar18 * 4);
        *(uint *)(FVar11.Data + uVar18 * 4) = uVar12;
        local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
        uVar12 = local_1a0.CurrentBitIndex;
      } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
    }
  }
LAB_14a0f1e69:
  local_230 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_230;
  pFVar21 = (param_1->AllocatorInstance).Data;
  local_1c0 = pFVar21 + uVar18;
  while( true ) {
    pFVar16 = local_1c0;
    if (param_1->ArrayNum != (int)uVar18) {
      local_247 = 0;
      `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_247);
    }
    this = local_1b8;
    if (pFVar21 == pFVar16) break;
    plVar8 = (longlong *)
             (**(code **)(param_3->Registry->_padding_ + 0x140))(param_3->Registry,*pFVar21);
    iVar13 = (int)plVar8[1];
    pbVar14 = (bool *)*plVar8;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar9;
    }
    uVar12 = (local_98._8_4_ - local_64) + iVar13;
    if ((uint)(local_98._8_4_ - local_64) < uVar12) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
      }
      TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98,uVar12);
      uVar17 = 1;
      if (3 < uVar12) {
        uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_1d8 = (undefined4)lVar6;
        uVar17 = 1 << ((byte)lVar6 & 0x1f);
      }
      if ((local_50 == 0) || ((int)local_50 < (int)uVar17)) {
        local_50 = uVar17;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar17 != 0) {
          uVar12 = uVar17;
          if (uVar17 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar12 = 0;
              goto LAB_14a0f1f89;
            }
          }
          else {
LAB_14a0f1f89:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar12,4);
          }
          if (0 < (int)uVar17) {
            uVar20 = (ulonglong)uVar17;
            uVar18 = 0;
            do {
              FVar11.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_58.Data;
              }
              uVar7 = uVar18 & (longlong)(int)uVar17 - 1U;
              uVar18 = uVar18 + 1;
              *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uStack_204 = 1;
          local_208 = 0;
          uStack_1f4 = 0;
          iStack_1f0 = 0;
          if (local_70 != 0) {
            FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_78;
            }
            uVar12 = *(uint *)FVar19;
            local_208 = 0;
            while (uVar12 == 0) {
              iStack_1f0 = iStack_1f0 + 0x20;
              lVar6 = (longlong)local_208;
              local_208 = local_208 + 1;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_208)
              goto LAB_14a0f2099;
              uVar12 = ((uint *)((longlong)FVar19 + 4))[lVar6];
            }
            uStack_204 = -uVar12 & uVar12;
            uVar18 = (ulonglong)uStack_204 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            local_1d4 = (int)lVar6;
            uStack_1f4 = iStack_1f0 + -1 + local_1d4;
            if ((int)local_70 < (int)uStack_1f4) {
LAB_14a0f2099:
              uStack_1f4 = local_70;
            }
          }
          local_1f8 = 0xffffffff;
          local_180 = (longlong *)local_98;
          local_178._padding_ = CONCAT44(uStack_204,local_208);
          local_178.CurrentBitIndex = uStack_1f4;
          local_178.UnvisitedBitMask = 0xffffffff;
          local_178._28_4_ = uStack_1ec;
          local_178.BaseBitIndex = iStack_1f0;
          local_178.Array = pTStack_200;
          uVar12 = uStack_1f4;
          if ((int)uStack_1f4 < (int)local_70) {
            do {
              uVar17 = local_50 - 1 & *(uint *)(*local_180 + 8 + (longlong)(int)uVar12 * 0x14);
              lVar6 = *local_180 + (longlong)(int)uVar12 * 0x14;
              *(uint *)(lVar6 + 0x10) = uVar17;
              FVar11.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_58.Data;
              }
              uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(FVar11.Data + uVar18 * 4);
              *(uint *)(FVar11.Data + uVar18 * 4) = uVar12;
              local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
              uVar12 = local_178.CurrentBitIndex;
            } while (local_178.CurrentBitIndex < (local_178.Array)->NumBits);
          }
        }
      }
    }
    pbVar1 = pbVar14 + (longlong)iVar13 * 0xc;
    param_3 = local_1e8;
    for (; local_1e8 = param_3, pbVar14 != pbVar1; pbVar14 = pbVar14 + 0xc) {
      TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator>::
      Emplace<TRigVMTypeIndex_const_&>
                ((TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator> *)
                 local_98,&local_1d0,pbVar14);
      param_3 = local_1e8;
    }
    pFVar21 = pFVar21 + 1;
    uVar18 = (ulonglong)local_230;
  }
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,&local_e8);
  uVar12 = 0;
  if (((*(int *)&this->field_0x10 == 0) || (*(longlong **)&this->field_0x8 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)&this->field_0x8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    pTVar9 = TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator>::Array
                       ((TSet<TRigVMTypeIndex,DefaultKeyFuncs<TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)local_98,&local_f8);
    if (&local_240 != pTVar9) {
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      local_240.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_240.ArrayNum = pTVar9->ArrayNum;
      local_240.ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    uVar17 = local_98._8_4_ - local_64;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (local_240.ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar17,&local_240.AllocatorInstance,local_240.ArrayNum,&local_240.ArrayMax);
    }
    uVar17 = local_70;
    local_138 = 0;
    uStack_13c = local_138;
    uStack_14c = 1;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar15 = *(uint *)FVar19;
      local_138 = 0;
      uVar12 = 0;
      while (uVar15 == 0) {
        lVar6 = (longlong)(int)uVar12;
        local_138 = local_138 + 0x20;
        uVar12 = uVar12 + 1;
        uStack_13c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14a0f22a1;
        uVar15 = ((uint *)((longlong)FVar19 + 4))[lVar6];
      }
      uStack_14c = -uVar15 & uVar15;
      uVar18 = (ulonglong)uStack_14c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1d0.Name.Number = (uint)lVar6;
      uStack_13c = (local_138 - 1) + local_1d0.Name.Number;
      if ((int)local_70 < (int)uStack_13c) {
        uStack_13c = local_70;
      }
    }
LAB_14a0f22a1:
    iStack_130 = local_98._8_4_ - local_64;
    local_158 = (longlong *)local_98;
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_140 = 0xffffffff;
    TStack_120.CurrentBitIndex = uStack_13c;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    uVar15 = local_70 & 0xffffffe0;
    TStack_120._padding_ = CONCAT44(uStack_14c,uVar12);
    uStack_134 = local_9c;
    iVar13 = (int)local_70 >> 5;
    TStack_120._28_4_ = local_9c;
    TStack_120.BaseBitIndex = local_138;
    uStack_100 = CONCAT44(uStack_12c,iStack_130);
    bVar10 = (byte)local_70;
    uStack_150 = uVar12;
    local_128 = local_158;
    TStack_120.Array = local_148;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar9;
    }
    pFVar3 = local_1e8;
    if (uVar17 != local_70) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar12 = -1 << (bVar10 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar6 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14a0f23c0;
        uVar12 = ((uint *)((longlong)FVar19 + 4))[lVar6];
      }
      uVar18 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1d0.Index = (int)lVar6;
      uVar17 = (uVar15 - 1) + local_1d0.Index;
      if ((int)local_70 < (int)uVar17) {
        uVar17 = local_70;
      }
    }
LAB_14a0f23c0:
    while( true ) {
      plVar8 = local_128;
      if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
        local_246[0] = 0;
        `TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_246);
      }
      if (((TStack_120.CurrentBitIndex == uVar17) &&
          (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar8 == (longlong *)local_98)) break;
      pFVar21 = (FScriptContainerElement *)(*plVar8 + (longlong)TStack_120.CurrentBitIndex * 0x14);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_d0);
      if (*(int *)&this->field_0x10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)&this->field_0x8;
      }
      cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,pFVar21,pFVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_d0);
      if (cVar5 != '\0') {
        if (((local_240.AllocatorInstance.Data <= pFVar21) &&
            (pFVar21 < local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        iVar13 = local_240.ArrayNum;
        if (local_240.ArrayNum == local_240.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_240.AllocatorInstance,&local_240.ArrayMax);
        }
        local_240.ArrayNum = iVar13 + 1;
        *(undefined8 *)(local_240.AllocatorInstance.Data + (longlong)iVar13 * 0xc) =
             *(undefined8 *)pFVar21;
        *(undefined4 *)(local_240.AllocatorInstance.Data + (longlong)iVar13 * 0xc + 8) =
             *(undefined4 *)(pFVar21 + 8);
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
    }
  }
  pTVar9 = local_1b0;
  FVar11.Data = local_240.AllocatorInstance.Data;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_1b0->AllocatorInstance).Data = FVar11.Data;
  local_1b0->ArrayMax = local_240.ArrayMax;
  local_1b0->ArrayNum = local_240.ArrayNum;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return pTVar9;
}

// MakeFlattenedFromTypeIndices @ 14a0fc440

FRigVMTemplateArgumentInfo * __cdecl
FRigVMTemplateArgumentInfo::MakeFlattenedFromTypeIndices
          (FRigVMTemplateArgumentInfo *__return_storage_ptr__,FName param_1,
          ERigVMPinDirection param_2,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  
  __return_storage_ptr__->Name = param_1;
  __return_storage_ptr__->Direction = param_2;
  *(undefined8 *)&__return_storage_ptr__->FactoryCallback = 0;
  *(undefined8 *)&(__return_storage_ptr__->FactoryCallback).field_0x28 = 0;
  *(undefined ***)&(__return_storage_ptr__->FactoryCallback).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(__return_storage_ptr__->FactoryCallback).field_0x18;
  *(code **)puVar1 = <lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&__return_storage_ptr__->FactoryCallback =
         UE::Core::Private::Function::
         TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
         ::Call;
  }
  (__return_storage_ptr__->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypeIndices).ArrayNum = 0;
  (__return_storage_ptr__->TypeIndices).ArrayMax = 0;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->TypeIndices,param_3);
  return __return_storage_ptr__;
}

