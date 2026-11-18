// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a483670

UScriptStruct * __cdecl FRigUnit_FABRIKPerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem,(UObject *)pUVar1,
                         L"RigUnit_FABRIKPerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a483750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_FABRIKPerItem::GetExecuteContextStruct(FRigUnit_FABRIKPerItem *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4857d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FABRIKPerItem::Execute(FRigUnit_FABRIKPerItem *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 auStackY_2f8 [32];
  TArrayView<FRigElementKey_const_,int> local_2a8;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_298);
  if ((FRigVMNameCache *)local_298._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_298._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_2a8.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  iVar5 = (this->Items).Keys.ArrayNum;
  bVar3 = this->bSetEffectorTransform;
  iVar6 = this->MaxIterations;
  bVar4 = this->bPropagateToChildren;
  fVar1 = this->Weight;
  fVar2 = this->Precision;
  if (iVar5 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_2a8.ArrayNum = iVar5;
  FRigUnit_FABRIKItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_298,&local_2a8,&this->EffectorTransform,fVar2,fVar1,
             bVar4,iVar6,&this->WorkData,bVar3);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_298);
  return;
}

// GetUpgradeInfo @ 14a485b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FABRIKPerItem::GetUpgradeInfo
          (FRigUnit_FABRIKPerItem *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  undefined1 auStackY_168 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_128;
  FRigUnit_FABRIKItemArray local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FRigUnit_FABRIKItemArray::FRigUnit_FABRIKItemArray(&local_118);
  if (&local_118.Items != &(this->Items).Keys) {
    iVar1 = (this->Items).Keys.ArrayNum;
    _Src = (this->Items).Keys.AllocatorInstance.Data;
    local_118.Items.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_118.Items.ArrayMax == 0)) {
      local_118.Items.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,local_118.Items.ArrayMax,&local_118.Items.AllocatorInstance,iVar1,
                 &local_118.Items.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_118.Items.AllocatorInstance.Data,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  local_118.bPropagateToChildren = this->bPropagateToChildren;
  local_118.EffectorTransform.Rotation.XY.m128d_f64[0] =
       (this->EffectorTransform).Rotation.XY.m128d_f64[0];
  local_118.EffectorTransform.Rotation.XY.m128d_f64[1] =
       (this->EffectorTransform).Rotation.XY.m128d_f64[1];
  local_118.EffectorTransform.Rotation.ZW.m128d_f64[0] =
       (this->EffectorTransform).Rotation.ZW.m128d_f64[0];
  local_118.EffectorTransform.Rotation.ZW.m128d_f64[1] =
       (this->EffectorTransform).Rotation.ZW.m128d_f64[1];
  local_118.MaxIterations = this->MaxIterations;
  local_118.EffectorTransform.Translation.XY.m128d_f64[0] =
       (this->EffectorTransform).Translation.XY.m128d_f64[0];
  local_118.EffectorTransform.Translation.XY.m128d_f64[1] =
       (this->EffectorTransform).Translation.XY.m128d_f64[1];
  local_118.EffectorTransform.Translation.ZW.m128d_f64[0] =
       (this->EffectorTransform).Translation.ZW.m128d_f64[0];
  local_118.EffectorTransform.Translation.ZW.m128d_f64[1] =
       (this->EffectorTransform).Translation.ZW.m128d_f64[1];
  local_118.EffectorTransform.Scale3D.XY.m128d_f64[0] =
       (this->EffectorTransform).Scale3D.XY.m128d_f64[0];
  local_118.EffectorTransform.Scale3D.XY.m128d_f64[1] =
       (this->EffectorTransform).Scale3D.XY.m128d_f64[1];
  local_118.EffectorTransform.Scale3D.ZW.m128d_f64[0] =
       (this->EffectorTransform).Scale3D.ZW.m128d_f64[0];
  local_118.EffectorTransform.Scale3D.ZW.m128d_f64[1] =
       (this->EffectorTransform).Scale3D.ZW.m128d_f64[1];
  local_118.Precision = this->Precision;
  local_118.Weight = this->Weight;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem,(UObject *)pUVar2,
                         L"RigUnit_FABRIKPerItem");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_128.ArrayNum = 1;
    local_128.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton,
               &local_128);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKPerItem.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray,(UObject *)pUVar2,
                         L"RigUnit_FABRIKItemArray");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_128.ArrayNum = 1;
    local_128.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton,
               &local_128);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_128.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_118);
  if (local_118.WorkData.CachedItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.WorkData.CachedItems.AllocatorInstance.Data);
  }
  DestructItems<FFABRIKChainLink,int>
            ((FFABRIKChainLink *)local_118.WorkData.Chain.AllocatorInstance.Data,
             local_118.WorkData.Chain.ArrayNum);
  if ((FFABRIKChainLink *)local_118.WorkData.Chain.AllocatorInstance.Data != (FFABRIKChainLink *)0x0
     ) {
    FMemory::Free(local_118.WorkData.Chain.AllocatorInstance.Data);
  }
  if (local_118.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Items.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_FABRIKPerItem @ 14a50f340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_FABRIKPerItem * __thiscall
FRigUnit_FABRIKPerItem::FRigUnit_FABRIKPerItem(FRigUnit_FABRIKPerItem *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint local_28;
  undefined2 uStack_1a;
  undefined4 uStack_14;
  
  (this->Items).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->Items).Keys.ArrayNum = 0;
  (this->Items).Keys.ArrayMax = 0;
  *(undefined ***)this = &___7FRigUnit_FABRIKPerItem__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_28 = local_28 & 0xffffff00;
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = (ulonglong)local_28;
  (this->WorkData).Chain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Chain.ArrayNum = 0;
  (this->WorkData).Chain.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).CachedEffector.Key.Type = (char)uVar9;
  *(int3 *)&(this->WorkData).CachedEffector.Key.field_0x1 = (int3)(uVar9 >> 8);
  (this->WorkData).CachedEffector.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  *(ulonglong *)&(this->WorkData).CachedEffector.Key.Name.Number =
       CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->WorkData).CachedEffector.ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->WorkData).CachedEffector.Element = (FRigBaseElement *)0x0;
  this->Precision = 1.0;
  this->Weight = 1.0;
  this->bPropagateToChildren = true;
  this->MaxIterations = 10;
  *&(this->EffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->EffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bSetEffectorTransform = true;
  return this;
}

// Execute @ 14a527710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FABRIKPerItem::Execute(FRigUnit_FABRIKPerItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Items,&this->EffectorTransform,this->Precision,this->Weight,
                this->bPropagateToChildren,this->MaxIterations,&this->WorkData,
                this->bSetEffectorTransform);
  return;
}

// RigVMExecute @ 14a53e7b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIKPerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKeyCollection *pFVar7;
  TTransform<double> *pTVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  uchar *puVar11;
  int *piVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_FABRIK_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKeyCollection *)pFVar10->Ptr;
  }
  else {
    pFVar7 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar10[1].Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar1 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  iVar4 = *piVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_FABRIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar13->Offset + pFVar13->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar3 = (bool)*puVar11;
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar7,pTVar8,fVar1,fVar2,bVar6,iVar4,pFVar14,bVar3);
  return;
}

// StaticExecute @ 14a570830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIKPerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          TTransform<double> *param_3,float param_4,float param_5,bool param_6,int param_7,
          FRigUnit_FABRIK_WorkData *param_8,bool param_9)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_28 [2];
  
  local_28[0].DataPtr = (FRigElementKey *)(param_2->Keys).AllocatorInstance.Data;
  iVar1 = (param_2->Keys).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].ArrayNum = iVar1;
  FRigUnit_FABRIKItemArray::StaticExecute
            (param_1,local_28,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

