// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a490ae0

UScriptStruct * __cdecl FRigUnit_CCDIKPerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem,(UObject *)pUVar1,
                         L"RigUnit_CCDIKPerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a490c80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CCDIKPerItem::GetExecuteContextStruct(FRigUnit_CCDIKPerItem *this)

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

// Execute @ 14a490f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIKPerItem::Execute(FRigUnit_CCDIKPerItem *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStackY_328 [32];
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_2c8;
  TArrayView<FRigElementKey_const_,int> local_2b8;
  undefined1 local_2a8 [592];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_2a8);
  if ((FRigVMNameCache *)local_2a8._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_2a8._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_2c8.DataPtr =
       (FRigUnit_CCDIK_RotationLimitPerItem *)(this->RotationLimits).AllocatorInstance.Data;
  iVar5 = (this->RotationLimits).ArrayNum;
  if (iVar5 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_2b8.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  bVar9 = this->bPropagateToChildren;
  fVar1 = this->BaseRotationLimit;
  bVar4 = this->bStartFromTail;
  iVar6 = this->MaxIterations;
  fVar2 = this->Weight;
  fVar3 = this->Precision;
  iVar7 = (this->Items).Keys.ArrayNum;
  local_2c8.ArrayNum = iVar5;
  if (iVar7 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_2b8.ArrayNum = iVar7;
  FRigUnit_CCDIKItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_2a8,&local_2b8,&this->EffectorTransform,fVar3,fVar2,
             iVar6,bVar4,fVar1,&local_2c8,bVar9,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_2a8);
  return;
}

// GetUpgradeInfo @ 14a498170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CCDIKPerItem::GetUpgradeInfo
          (FRigUnit_CCDIKPerItem *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UPackage *pUVar3;
  FRigVMRegistry_RWLock *pFVar4;
  undefined1 auStackY_198 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_158;
  FRigUnit_CCDIKItemArray local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FRigUnit_CCDIKItemArray::FRigUnit_CCDIKItemArray(&local_148);
  if (&local_148.Items != &(this->Items).Keys) {
    iVar1 = (this->Items).Keys.ArrayNum;
    pFVar2 = (this->Items).Keys.AllocatorInstance.Data;
    local_148.Items.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_148.Items.ArrayMax == 0)) {
      local_148.Items.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,local_148.Items.ArrayMax,&local_148.Items.AllocatorInstance,iVar1,
                 &local_148.Items.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_148.Items.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 0xc);
      }
    }
  }
  local_148.MaxIterations = this->MaxIterations;
  local_148.EffectorTransform.Rotation.XY.m128d_f64[0] =
       (this->EffectorTransform).Rotation.XY.m128d_f64[0];
  local_148.EffectorTransform.Rotation.XY.m128d_f64[1] =
       (this->EffectorTransform).Rotation.XY.m128d_f64[1];
  local_148.EffectorTransform.Rotation.ZW.m128d_f64[0] =
       (this->EffectorTransform).Rotation.ZW.m128d_f64[0];
  local_148.EffectorTransform.Rotation.ZW.m128d_f64[1] =
       (this->EffectorTransform).Rotation.ZW.m128d_f64[1];
  local_148.bStartFromTail = this->bStartFromTail;
  local_148.EffectorTransform.Translation.XY.m128d_f64[0] =
       (this->EffectorTransform).Translation.XY.m128d_f64[0];
  local_148.EffectorTransform.Translation.XY.m128d_f64[1] =
       (this->EffectorTransform).Translation.XY.m128d_f64[1];
  local_148.EffectorTransform.Translation.ZW.m128d_f64[0] =
       (this->EffectorTransform).Translation.ZW.m128d_f64[0];
  local_148.EffectorTransform.Translation.ZW.m128d_f64[1] =
       (this->EffectorTransform).Translation.ZW.m128d_f64[1];
  local_148.EffectorTransform.Scale3D.XY.m128d_f64[0] =
       (this->EffectorTransform).Scale3D.XY.m128d_f64[0];
  local_148.EffectorTransform.Scale3D.XY.m128d_f64[1] =
       (this->EffectorTransform).Scale3D.XY.m128d_f64[1];
  local_148.Precision = this->Precision;
  local_148.BaseRotationLimit = this->BaseRotationLimit;
  local_148.EffectorTransform.Scale3D.ZW.m128d_f64[0] =
       (this->EffectorTransform).Scale3D.ZW.m128d_f64[0];
  local_148.EffectorTransform.Scale3D.ZW.m128d_f64[1] =
       (this->EffectorTransform).Scale3D.ZW.m128d_f64[1];
  local_148.Weight = this->Weight;
  if (&local_148.RotationLimits != &this->RotationLimits) {
    iVar1 = (this->RotationLimits).ArrayNum;
    pFVar2 = (this->RotationLimits).AllocatorInstance.Data;
    local_148.RotationLimits.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_148.RotationLimits.ArrayMax == 0)) {
      local_148.RotationLimits.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,local_148.RotationLimits.ArrayMax,
                 &local_148.RotationLimits.AllocatorInstance,iVar1,
                 &local_148.RotationLimits.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_148.RotationLimits.AllocatorInstance.Data,pFVar2,(longlong)iVar1 << 4);
      }
    }
  }
  local_148.bPropagateToChildren = this->bPropagateToChildren;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem,(UObject *)pUVar3,
                         L"RigUnit_CCDIKPerItem");
    pFVar4 = FRigVMRegistry_RWLock::Get();
    local_158.ArrayNum = 1;
    local_158.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar4,Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton,
               &local_158);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKPerItem.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray,(UObject *)pUVar3,
                         L"RigUnit_CCDIKItemArray");
    pFVar4 = FRigVMRegistry_RWLock::Get();
    local_158.ArrayNum = 1;
    local_158.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar4,Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton,
               &local_158);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_158.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_148);
  if (local_148.WorkData.RotationLimitsPerItem.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.WorkData.RotationLimitsPerItem.AllocatorInstance.Data);
  }
  if (local_148.WorkData.RotationLimitIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_148.WorkData.RotationLimitIndex.AllocatorInstance.Data);
  }
  if (local_148.WorkData.CachedItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.WorkData.CachedItems.AllocatorInstance.Data);
  }
  DestructItems<FCCDIKChainLink,int>
            ((FCCDIKChainLink *)local_148.WorkData.Chain.AllocatorInstance.Data,
             local_148.WorkData.Chain.ArrayNum);
  if ((FCCDIKChainLink *)local_148.WorkData.Chain.AllocatorInstance.Data != (FCCDIKChainLink *)0x0)
  {
    FMemory::Free(local_148.WorkData.Chain.AllocatorInstance.Data);
  }
  if (local_148.RotationLimits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RotationLimits.AllocatorInstance.Data);
  }
  if (local_148.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Items.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_CCDIKPerItem @ 14a50c840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CCDIKPerItem * __thiscall
FRigUnit_CCDIKPerItem::FRigUnit_CCDIKPerItem(FRigUnit_CCDIKPerItem *this)

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
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->Items).Keys.ArrayNum = 0;
  (this->Items).Keys.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FRigUnit_CCDIKPerItem__6B_;
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
  (this->RotationLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationLimits).ArrayNum = 0;
  (this->RotationLimits).ArrayMax = 0;
  (this->WorkData).Chain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Chain.ArrayNum = 0;
  (this->WorkData).Chain.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).RotationLimitIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).RotationLimitIndex.ArrayNum = 0;
  (this->WorkData).RotationLimitIndex.ArrayMax = 0;
  (this->WorkData).RotationLimitsPerItem.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).RotationLimitsPerItem.ArrayNum = 0;
  (this->WorkData).RotationLimitsPerItem.ArrayMax = 0;
  (this->WorkData).CachedEffector.Key.Type = (char)uVar9;
  *(int3 *)&(this->WorkData).CachedEffector.Key.field_0x1 = (int3)(uVar9 >> 8);
  (this->WorkData).CachedEffector.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  *(ulonglong *)&(this->WorkData).CachedEffector.Key.Name.Number =
       CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->WorkData).CachedEffector.ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->WorkData).CachedEffector.Element = (FRigBaseElement *)0x0;
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
  this->Precision = 1.0;
  this->Weight = 1.0;
  this->MaxIterations = 10;
  this->bStartFromTail = true;
  this->bPropagateToChildren = true;
  this->BaseRotationLimit = 30.0;
  return this;
}

// ~FRigUnit_CCDIKPerItem @ 14a518210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIKPerItem::~FRigUnit_CCDIKPerItem(FRigUnit_CCDIKPerItem *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkData).RotationLimitsPerItem.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).RotationLimitIndex.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).CachedItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCCDIKChainLink,int>
            ((FCCDIKChainLink *)(this->WorkData).Chain.AllocatorInstance.Data,
             (this->WorkData).Chain.ArrayNum);
  pFVar1 = (this->WorkData).Chain.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Items).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a524e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CCDIKPerItem::Execute(FRigUnit_CCDIKPerItem *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_CCDIK_RotationLimitPerItem *)(this->RotationLimits).AllocatorInstance.Data;
  iVar1 = (this->RotationLimits).ArrayNum;
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
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->Items,&this->EffectorTransform,this->Precision,this->Weight,
                this->MaxIterations,this->bStartFromTail,this->BaseRotationLimit,&local_18,
                this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14a536620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIKPerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FRigElementKeyCollection *pFVar9;
  TTransform<double> *pTVar10;
  float *pfVar11;
  FRigVMMemoryHandle *pFVar12;
  int *piVar13;
  uchar *puVar14;
  uchar *puVar15;
  FRigVMSlice *pFVar16;
  FRigUnit_CCDIK_WorkData *pFVar17;
  FControlRigExecuteContext *pFVar18;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_68 [4];
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FRigElementKeyCollection *)pFVar12->Ptr;
  }
  else {
    pFVar9 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  if (iVar5 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar10 = (TTransform<double> *)pFVar12[1].Ptr;
  }
  else {
    pTVar10 = (TTransform<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12[1].PropertyPath,pFVar12[1].Ptr,pFVar12[1].Property);
  }
  if (iVar5 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar11 = (float *)pFVar12[2].Ptr;
  }
  else {
    pfVar11 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12[2].PropertyPath,pFVar12[2].Ptr,pFVar12[2].Property);
  }
  fVar1 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar2 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  piVar13 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  iVar5 = *piVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar7 = (bool)*puVar14;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar3 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar4 = (bool)*puVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FRigUnit_CCDIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar12,false,pFVar16->Offset + pFVar16->Index);
  local_68[0].DataPtr = *(FRigUnit_CCDIK_RotationLimitPerItem **)puVar14;
  local_68[0].ArrayNum = *(int *)(puVar14 + 8);
  if (local_68[0].ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,pFVar9,pTVar10,fVar1,fVar2,iVar5,bVar7,fVar3,local_68,bVar4,pFVar17);
  return;
}

// StaticExecute @ 14a563960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIKPerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          TTransform<double> *param_3,float param_4,float param_5,int param_6,bool param_7,
          float param_8,TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> *param_9,
          bool param_10,FRigUnit_CCDIK_WorkData *param_11)

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
  FRigUnit_CCDIKItemArray::StaticExecute
            (param_1,local_28,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11);
  return;
}

