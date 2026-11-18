// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f7560

UScriptStruct * __cdecl FRigUnit_HierarchyCreatePoseItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyCreatePoseItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f75e0

UScriptStruct * __thiscall
FRigUnit_HierarchyCreatePoseItemArray::GetExecuteContextStruct
          (FRigUnit_HierarchyCreatePoseItemArray *this)

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

// Execute @ 14a4f7870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyCreatePoseItemArray::Execute(FRigUnit_HierarchyCreatePoseItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigUnit_HierarchyCreatePoseItemArray_Entry_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_278.DataPtr =
       (FRigUnit_HierarchyCreatePoseItemArray_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
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
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Pose);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_HierarchyCreatePoseItemArray @ 14a511260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_HierarchyCreatePoseItemArray * __thiscall
FRigUnit_HierarchyCreatePoseItemArray::FRigUnit_HierarchyCreatePoseItemArray
          (FRigUnit_HierarchyCreatePoseItemArray *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  pFVar1 = &this->Pose;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &(this->Pose).KeyToIndex;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  *(undefined8 *)pTVar2 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyCreatePoseItemArray__6B_;
  local_88._0_4_ = -1;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  (this->Pose).CachedPoseHash = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  local_88._4_4_ = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = -1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  iVar7 = local_88._4_4_;
  iVar6 = (int)local_88;
  if (pFVar1 != (FRigPose *)&local_98) {
    pFVar3 = (pFVar1->Elements).AllocatorInstance.Data;
    local_90._4_4_ = (int)local_90;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_98.Data;
    (this->Pose).Elements.ArrayNum = (int)local_90;
    (this->Pose).Elements.ArrayMax = local_90._4_4_;
    iVar7 = local_88._4_4_;
    iVar6 = (int)local_88;
  }
  local_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar6;
  (this->Pose).PoseHash = iVar7;
  (this->Pose).CachedPoseHash = local_80;
  if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                 *)&local_78) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = local_78.Data;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x8 = (undefined4)local_70;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0xc = local_70._4_4_;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pose).KeyToIndex.field_0x10 != &local_68) {
      if (local_68.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        (this->Pose).KeyToIndex.field_0x10 = local_68.AllocatorInstance.InlineData[0];
        (this->Pose).KeyToIndex.field_0x11 = local_68.AllocatorInstance.InlineData[1];
        (this->Pose).KeyToIndex.field_0x12 = local_68.AllocatorInstance.InlineData[2];
        (this->Pose).KeyToIndex.field_0x13 = local_68.AllocatorInstance.InlineData[3];
        (this->Pose).KeyToIndex.field_0x14 = local_68.AllocatorInstance.InlineData[4];
        (this->Pose).KeyToIndex.field_0x15 = local_68.AllocatorInstance.InlineData[5];
        (this->Pose).KeyToIndex.field_0x16 = local_68.AllocatorInstance.InlineData[6];
        (this->Pose).KeyToIndex.field_0x17 = local_68.AllocatorInstance.InlineData[7];
        (this->Pose).KeyToIndex.field_0x18 = local_68.AllocatorInstance.InlineData[8];
        (this->Pose).KeyToIndex.field_0x19 = local_68.AllocatorInstance.InlineData[9];
        (this->Pose).KeyToIndex.field_0x1a = local_68.AllocatorInstance.InlineData[10];
        (this->Pose).KeyToIndex.field_0x1b = local_68.AllocatorInstance.InlineData[0xb];
        (this->Pose).KeyToIndex.field_0x1c = local_68.AllocatorInstance.InlineData[0xc];
        (this->Pose).KeyToIndex.field_0x1d = local_68.AllocatorInstance.InlineData[0xd];
        (this->Pose).KeyToIndex.field_0x1e = local_68.AllocatorInstance.InlineData[0xe];
        (this->Pose).KeyToIndex.field_0x1f = local_68.AllocatorInstance.InlineData[0xf];
      }
      pvVar4 = *(void **)&(this->Pose).KeyToIndex.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(ForElementType<unsigned_int> *)&(this->Pose).KeyToIndex.field_0x20 =
           local_68.AllocatorInstance.SecondaryData;
      *(int *)&(this->Pose).KeyToIndex.field_0x28 = local_68.NumBits;
      *(int *)&(this->Pose).KeyToIndex.field_0x2c = local_68.MaxBits;
      local_68.NumBits = 0;
      local_68.MaxBits = 0;
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = local_48;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = local_44;
    local_44 = 0;
    local_48 = 0xffffffff;
    if (local_38 == (void *)0x0) {
      *(undefined4 *)&(this->Pose).KeyToIndex.field_0x38 = local_40;
    }
    pvVar4 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(void **)&(this->Pose).KeyToIndex.field_0x40 = local_38;
    local_38 = (void *)0x0;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = local_30;
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar5 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar7 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return this;
}

// Execute @ 14a529640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyCreatePoseItemArray::Execute
          (FRigUnit_HierarchyCreatePoseItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_HierarchyCreatePoseItemArray_Entry_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_HierarchyCreatePoseItemArray_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->Pose);
  return;
}

// RigVMExecute @ 14a5475b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyCreatePoseItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FRigPose *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<FRigUnit_HierarchyCreatePoseItemArray_Entry_const_,int> local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)(puVar6 + 8);
  pFVar3 = (FRigPose *)param_2->DataPtr[1].Ptr;
  local_18.DataPtr = *(FRigUnit_HierarchyCreatePoseItemArray_Entry **)puVar6;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pFVar3);
  return;
}

// StaticExecute @ 14a57fc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyCreatePoseItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_HierarchyCreatePoseItemArray_Entry_const_,int> *param_2,
          FRigPose *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  URigHierarchy *this;
  FRigPoseElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FRigBaseElement *pFVar11;
  longlong lVar12;
  UScriptStruct *pUVar13;
  FRigElementKey *pFVar14;
  TVector<double> *pTVar15;
  FRigPoseElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FRigUnit_HierarchyCreatePoseItemArray_Entry *pFVar19;
  uint uVar20;
  FRigUnit_HierarchyCreatePoseItemArray_Entry *pFVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_288 [32];
  FCachedRigElement local_238;
  FRigPreferredEulerAngles local_218;
  TQuat<double> local_1d8;
  FRigElementKey local_1b8;
  TRotator<double> local_1a8;
  TRotator<double> local_190;
  TVector<double> local_178;
  FRigPoseElement local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    (param_3->Elements).ArrayNum = 0;
    if ((param_3->Elements).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,0x10,0,(ForAnyElementType *)param_3,0,&(param_3->Elements).ArrayMax);
    }
  }
  else {
    uVar10 = param_2->ArrayNum;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &(param_3->Elements).ArrayMax;
    (param_3->Elements).ArrayNum = 0;
    if ((param_3->Elements).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,0x10,uVar10,(ForAnyElementType *)param_3,0,piVar1);
    }
    uVar10 = this->TopologyVersion;
    param_3->HierarchyTopologyVersion = uVar10;
    param_3->PoseHash = uVar10;
    pFVar19 = param_2->DataPtr;
    pFVar21 = pFVar19 + param_2->ArrayNum;
    for (; pFVar19 != pFVar21; pFVar19 = pFVar19 + 1) {
      iVar9 = URigHierarchy::GetIndex(this,&pFVar19->Item,true);
      pFVar11 = URigHierarchy::Get(this,iVar9);
      if (pFVar11 != (FRigBaseElement *)0x0) {
        lVar12 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11);
        pUVar13 = FRigTransformElement::StaticStruct();
        if (pUVar13 != (UScriptStruct *)0x0) {
          iVar9 = (int)pUVar13->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar13->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            FRigPoseElement::FRigPoseElement(&local_158);
            local_238.Key._0_4_ = local_238.Key._0_4_ & 0xffffff00;
            local_238.Key.Name.ComparisonIndex.Value = 0;
            local_238.Key.Name.Number = 0;
            local_238.Index = 0xffff;
            local_238.ContainerVersion = -1;
            local_238.Element = (FRigBaseElement *)0x0;
            FCachedRigElement::UpdateCache(&local_238,&pFVar19->Item,this);
            local_158.Index.Key.Name.ComparisonIndex.Value =
                 local_238.Key.Name.ComparisonIndex.Value;
            local_158.Index.Key.Type = local_238.Key.Type;
            local_158.Index.Key._1_3_ = local_238.Key._1_3_;
            local_158.Index.Index = local_238.Index;
            local_158.Index.Key.Name.Number = local_238.Key.Name.Number;
            local_158.Index._14_2_ = local_238._14_2_;
            local_158.Index._20_4_ = local_238._20_4_;
            local_158.Index.ContainerVersion = local_238.ContainerVersion;
            local_158.Index.Element = local_238.Element;
            pFVar14 = URigHierarchy::GetActiveParent(this,&local_1b8,&pFVar19->Item,true);
            local_158.LocalTransform.Rotation.ZW.m128d_f64[0] =
                 (pFVar19->LocalTransform).Rotation.ZW.m128d_f64[0];
            local_158.LocalTransform.Rotation.ZW.m128d_f64[1] =
                 (pFVar19->LocalTransform).Rotation.ZW.m128d_f64[1];
            local_158.ActiveParent.Type = pFVar14->Type;
            local_158.ActiveParent._1_3_ = *(undefined3 *)&pFVar14->field_0x1;
            local_158.ActiveParent.Name.ComparisonIndex.Value =
                 (pFVar14->Name).ComparisonIndex.Value;
            local_158.ActiveParent.Name.Number = (pFVar14->Name).Number;
            local_158.LocalTransform.Rotation.XY.m128d_f64[0] =
                 (pFVar19->LocalTransform).Rotation.XY.m128d_f64[0];
            local_158.LocalTransform.Rotation.XY.m128d_f64[1] =
                 (pFVar19->LocalTransform).Rotation.XY.m128d_f64[1];
            local_158.LocalTransform.Translation.XY.m128d_f64[0] =
                 (pFVar19->LocalTransform).Translation.XY.m128d_f64[0];
            local_158.LocalTransform.Translation.XY.m128d_f64[1] =
                 (pFVar19->LocalTransform).Translation.XY.m128d_f64[1];
            local_158.LocalTransform.Translation.ZW.m128d_f64[0] =
                 (pFVar19->LocalTransform).Translation.ZW.m128d_f64[0];
            local_158.LocalTransform.Translation.ZW.m128d_f64[1] =
                 (pFVar19->LocalTransform).Translation.ZW.m128d_f64[1];
            local_158.LocalTransform.Scale3D.XY.m128d_f64[0] =
                 (pFVar19->LocalTransform).Scale3D.XY.m128d_f64[0];
            local_158.LocalTransform.Scale3D.XY.m128d_f64[1] =
                 (pFVar19->LocalTransform).Scale3D.XY.m128d_f64[1];
            local_158.LocalTransform.Scale3D.ZW.m128d_f64[0] =
                 (pFVar19->LocalTransform).Scale3D.ZW.m128d_f64[0];
            local_158.LocalTransform.Scale3D.ZW.m128d_f64[1] =
                 (pFVar19->LocalTransform).Scale3D.ZW.m128d_f64[1];
            local_158.GlobalTransform.Rotation.XY.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Rotation.XY.m128d_f64[0];
            local_158.GlobalTransform.Rotation.XY.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Rotation.XY.m128d_f64[1];
            local_158.GlobalTransform.Rotation.ZW.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Rotation.ZW.m128d_f64[0];
            local_158.GlobalTransform.Rotation.ZW.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Rotation.ZW.m128d_f64[1];
            local_158.GlobalTransform.Translation.XY.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Translation.XY.m128d_f64[0];
            local_158.GlobalTransform.Translation.XY.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Translation.XY.m128d_f64[1];
            local_158.GlobalTransform.Translation.ZW.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Translation.ZW.m128d_f64[0];
            local_158.GlobalTransform.Translation.ZW.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Translation.ZW.m128d_f64[1];
            local_158.GlobalTransform.Scale3D.XY.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Scale3D.XY.m128d_f64[0];
            local_158.GlobalTransform.Scale3D.XY.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Scale3D.XY.m128d_f64[1];
            local_158.GlobalTransform.Scale3D.ZW.m128d_f64[0] =
                 (pFVar19->GlobalTransform).Scale3D.ZW.m128d_f64[0];
            local_158.GlobalTransform.Scale3D.ZW.m128d_f64[1] =
                 (pFVar19->GlobalTransform).Scale3D.ZW.m128d_f64[1];
            local_158.CurveValue = pFVar19->CurveValue;
            local_158.PreferredEulerAngle.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_158.PreferredEulerAngle.field0_0x0._4_4_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_158.PreferredEulerAngle.field0_0x0._0_4_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            local_158.PreferredEulerAngle.field0_0x0._12_4_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_158.PreferredEulerAngle.field0_0x0._8_4_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            lVar12 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11);
            pUVar13 = FRigControlElement::StaticStruct();
            if (pUVar13 != (UScriptStruct *)0x0) {
              iVar9 = (int)pUVar13->_padding_;
              if ((*(int *)(lVar12 + 0x38) < iVar9) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar9 * 8)
                  != &pUVar13->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                if (pFVar19->UseEulerAngles == false) {
                  local_218._0_8_ = *(undefined8 *)&pFVar11[0xb].OwnedInstances;
                  local_218.Current.field0_0x0._s_0.X =
                       (double)*(undefined8 *)&pFVar11[0xb].MetadataStorageIndex;
                  local_218.Current.field0_0x0._s_0.Y =
                       (double)pFVar11[0xb].ComponentIndices.AllocatorInstance.Data;
                  local_218.Current.field0_0x0._s_0.Z =
                       (double)*(undefined8 *)&pFVar11[0xb].ComponentIndices.ArrayNum;
                  local_218.Initial.field0_0x0._s_0.X =
                       (double)pFVar11[0xb].CachedNameString.Data.AllocatorInstance.Data;
                  local_218.Initial.field0_0x0._s_0.Y =
                       (double)*(undefined8 *)&pFVar11[0xb].CachedNameString.Data.ArrayNum;
                  local_218.Initial.field0_0x0._s_0.Z = (double)pFVar11[0xc]._padding_;
                  local_1d8.Z = (pFVar19->LocalTransform).Rotation.ZW.m128d_f64[0];
                  local_1d8.W = (pFVar19->LocalTransform).Rotation.ZW.m128d_f64[1];
                  local_1d8.X = (pFVar19->LocalTransform).Rotation.XY.m128d_f64[0];
                  local_1d8.Y = (pFVar19->LocalTransform).Rotation.XY.m128d_f64[1];
                  UE::Math::TQuat<double>::Rotator(&local_1d8,&local_1a8);
                  FRigPreferredEulerAngles::SetRotator(&local_218,&local_190,&local_1a8,false,false)
                  ;
                  pTVar15 = FRigPreferredEulerAngles::GetAngles
                                      (&local_218,&local_178,false,local_218.RotationOrder);
                  local_158.PreferredEulerAngle.field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
                  local_158.PreferredEulerAngle.field0_0x0._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
                  uVar2 = *(undefined8 *)((longlong)&pTVar15->field0_0x0 + 0x10);
                  uVar22 = (undefined4)uVar2;
                  uVar23 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                else {
                  uVar2 = *(undefined8 *)((longlong)&(pFVar19->EulerAngles).field0_0x0 + 0x10);
                  uVar22 = (undefined4)uVar2;
                  uVar23 = (undefined4)((ulonglong)uVar2 >> 0x20);
                  local_158.PreferredEulerAngle.field0_0x0._s_0.X =
                       (pFVar19->EulerAngles).field0_0x0._s_0.X;
                  local_158.PreferredEulerAngle.field0_0x0._s_0.Y =
                       (pFVar19->EulerAngles).field0_0x0._s_0.Y;
                }
                local_158.PreferredEulerAngle.field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar22);
              }
            }
            pFVar3 = (FRigPoseElement *)(param_3->Elements).AllocatorInstance.Data;
            if (((pFVar3 <= &local_158) && (&local_158 < pFVar3 + *piVar1)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = (param_3->Elements).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x110,0x10,(ForAnyElementType *)param_3,piVar1);
            }
            (param_3->Elements).ArrayNum = iVar9 + 1;
            lVar12 = 2;
            pFVar3 = &local_158;
            pFVar7 = (param_3->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x110;
            do {
              pFVar18 = pFVar7;
              pFVar16 = pFVar3;
              dVar6 = *(double *)&(pFVar16->Index).Key.Name.Number;
              *(double *)pFVar18 = *(double *)&(pFVar16->Index).Key;
              *(double *)(pFVar18 + 8) = dVar6;
              pFVar11 = (pFVar16->Index).Element;
              *(double *)(pFVar18 + 0x10) = *(double *)&(pFVar16->Index).ContainerVersion;
              *(FRigBaseElement **)(pFVar18 + 0x18) = pFVar11;
              dVar6 = (pFVar16->GlobalTransform).Rotation.XY.m128d_f64[1];
              *(double *)(pFVar18 + 0x20) = (pFVar16->GlobalTransform).Rotation.XY.m128d_f64[0];
              *(double *)(pFVar18 + 0x28) = dVar6;
              dVar6 = (pFVar16->GlobalTransform).Rotation.ZW.m128d_f64[1];
              *(double *)(pFVar18 + 0x30) = (pFVar16->GlobalTransform).Rotation.ZW.m128d_f64[0];
              *(double *)(pFVar18 + 0x38) = dVar6;
              dVar6 = (pFVar16->GlobalTransform).Translation.XY.m128d_f64[1];
              *(double *)(pFVar18 + 0x40) = (pFVar16->GlobalTransform).Translation.XY.m128d_f64[0];
              *(double *)(pFVar18 + 0x48) = dVar6;
              dVar6 = (pFVar16->GlobalTransform).Translation.ZW.m128d_f64[1];
              *(double *)(pFVar18 + 0x50) = (pFVar16->GlobalTransform).Translation.ZW.m128d_f64[0];
              *(double *)(pFVar18 + 0x58) = dVar6;
              dVar6 = (pFVar16->GlobalTransform).Scale3D.XY.m128d_f64[1];
              *(double *)(pFVar18 + 0x60) = (pFVar16->GlobalTransform).Scale3D.XY.m128d_f64[0];
              *(double *)(pFVar18 + 0x68) = dVar6;
              dVar6 = (pFVar16->GlobalTransform).Scale3D.ZW.m128d_f64[1];
              *(double *)(pFVar18 + 0x70) = (pFVar16->GlobalTransform).Scale3D.ZW.m128d_f64[0];
              *(double *)(pFVar18 + 0x78) = dVar6;
              lVar12 = lVar12 + -1;
              pFVar3 = (FRigPoseElement *)&pFVar16->LocalTransform;
              pFVar7 = pFVar18 + 0x80;
            } while (lVar12 != 0);
            dVar6 = (pFVar16->LocalTransform).Rotation.XY.m128d_f64[1];
            *(double *)(pFVar18 + 0x80) = (pFVar16->LocalTransform).Rotation.XY.m128d_f64[0];
            *(double *)(pFVar18 + 0x88) = dVar6;
            FVar4 = (pFVar19->Item).Name;
            uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
            uVar20 = (uint)(pFVar19->Item).Type + (uVar10 + FVar4.Number) * 10;
            uVar17 = param_3->PoseHash - uVar20 ^ uVar20 >> 0xd;
            uVar10 = (-0x61c88647 - uVar17) - uVar20 ^ uVar17 << 8;
            uVar20 = (uVar20 - uVar10) - uVar17 ^ uVar10 >> 0xd;
            uVar17 = (uVar17 - uVar20) - uVar10 ^ uVar20 >> 0xc;
            uVar10 = (uVar10 - uVar17) - uVar20 ^ uVar17 << 0x10;
            uVar20 = (uVar20 - uVar10) - uVar17 ^ uVar10 >> 5;
            uVar17 = (uVar17 - uVar20) - uVar10 ^ uVar20 >> 3;
            uVar10 = (uVar10 - uVar17) - uVar20 ^ uVar17 << 10;
            param_3->PoseHash = (uVar20 - uVar10) - uVar17 ^ uVar10 >> 0xf;
          }
        }
      }
    }
  }
  return;
}

