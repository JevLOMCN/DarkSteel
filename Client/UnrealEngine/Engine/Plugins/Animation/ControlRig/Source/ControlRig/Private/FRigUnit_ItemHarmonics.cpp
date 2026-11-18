// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4dd310

UScriptStruct * __cdecl FRigUnit_ItemHarmonics::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics,(UObject *)pUVar1,
                         L"RigUnit_ItemHarmonics");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton;
}

// FRigUnit_ItemHarmonics @ 14a512720

FRigUnit_ItemHarmonics * __thiscall
FRigUnit_ItemHarmonics::FRigUnit_ItemHarmonics(FRigUnit_ItemHarmonics *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FRigUnit_ItemHarmonics__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorkData).WaveTime.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorkData).WaveTime.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorkData).WaveTime.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->WaveSpeed).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->WaveSpeed).field0_0x0._s_0.Y = (double)uVar1;
  (this->WaveSpeed).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->WaveAmplitude).field0_0x0._s_0.X = 0.0;
  (this->WaveAmplitude).field0_0x0._s_0.Y = 70.0;
  (this->WaveAmplitude).field0_0x0._s_0.Z = 0.0;
  (this->WaveFrequency).field0_0x0._s_0.X = 1.0;
  (this->WaveFrequency).field0_0x0._s_0.Y = 0.6000000238418579;
  (this->WaveFrequency).field0_0x0._s_0.Z = 0.800000011920929;
  (this->WaveOffset).field0_0x0._s_0.X = 0.0;
  (this->WaveOffset).field0_0x0._s_0.Y = 1.0;
  (this->WaveOffset).field0_0x0._s_0.Z = 2.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WaveNoise).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WaveNoise).field0_0x0._s_0.Y = (double)uVar1;
  (this->WaveNoise).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WaveEase = Linear;
  this->WaveMinimum = 0.5;
  this->WaveMaximum = 1.0;
  this->RotationOrder = YZX;
  return this;
}

// Execute @ 14a52a740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ItemHarmonics::Execute(FRigUnit_ItemHarmonics *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_Harmonics_TargetItem *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->WaveSpeed,&this->WaveFrequency,&this->WaveAmplitude,
                &this->WaveOffset,&this->WaveNoise,this->WaveEase,this->WaveMinimum,
                this->WaveMaximum,this->RotationOrder,&this->WorkData);
  return;
}

// Execute @ 14a52a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ItemHarmonics::Execute(FRigUnit_ItemHarmonics *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2d8 [32];
  TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
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
  local_278.DataPtr = (FRigUnit_Harmonics_TargetItem *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->WaveSpeed,
                &this->WaveFrequency,&this->WaveAmplitude,&this->WaveOffset,&this->WaveNoise,
                this->WaveEase,this->WaveMinimum,this->WaveMaximum,this->RotationOrder,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530f60

UScriptStruct * __thiscall
FRigUnit_ItemHarmonics::GetExecuteContextStruct(FRigUnit_ItemHarmonics *this)

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

// RigVMExecute @ 14a549f90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ItemHarmonics::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigVMAnimEasingType EVar3;
  EEulerRotationOrder EVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uchar *puVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  FRigVMMemoryHandle *pFVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  ERigVMAnimEasingType *pEVar15;
  float *pfVar16;
  EEulerRotationOrder *pEVar17;
  FRigVMSlice *pFVar18;
  FRigUnit_BoneHarmonics_WorkData *pFVar19;
  FControlRigExecuteContext *pFVar20;
  TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> local_70 [3];
  
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar11->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar9 = (TVector<double> *)pFVar11[1].Ptr;
  }
  else {
    pTVar9 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
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
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar10 = (TVector<double> *)pFVar11[2].Ptr;
  }
  else {
    pTVar10 = (TVector<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar12 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pEVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  EVar3 = *pEVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar16;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar16;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pEVar17 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  EVar4 = *pEVar17;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar19 = (FRigUnit_BoneHarmonics_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar18->Offset + pFVar18->Index);
  local_70[0].DataPtr = *(FRigUnit_Harmonics_TargetItem **)puVar8;
  local_70[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_70[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar20 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar20,local_70,pTVar9,pTVar10,pTVar12,pTVar13,pTVar14,EVar3,fVar1,fVar2,EVar4,
                pFVar19);
  return;
}

// StaticExecute @ 14a582b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ItemHarmonics::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,ERigVMAnimEasingType param_8,float param_9,float param_10,
          EEulerRotationOrder param_11,FRigUnit_BoneHarmonics_WorkData *param_12)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  URigHierarchy *pUVar4;
  FCachedRigElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  FRigUnit_Harmonics_TargetItem *pFVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_288 [32];
  longlong local_238;
  FCachedRigElement local_220;
  TVector<double> *local_200;
  TVector<double> *local_1f8;
  URigHierarchy *local_1f0;
  FControlRigExecuteContext *local_1e8;
  TVector<double>_u_0 local_1e0;
  TQuat<double> local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pUVar4 = param_1->Hierarchy;
  if (pUVar4 != (URigHierarchy *)0x0) {
    uVar19 = param_2->ArrayNum;
    uVar20 = 0;
    local_200 = param_3;
    local_1f8 = param_4;
    local_1f0 = pUVar4;
    local_1e8 = param_1;
    if ((param_12->CachedItems).ArrayNum != uVar19) {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      piVar1 = &(param_12->CachedItems).ArrayMax;
      (param_12->CachedItems).ArrayNum = 0;
      if ((param_12->CachedItems).ArrayMax < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar19,(ForAnyElementType *)param_12,0,piVar1);
      }
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_12->WaveTime).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_12->WaveTime).field0_0x0._s_0.Y = (double)uVar14;
      (param_12->WaveTime).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (((param_12->CachedItems).ArrayNum == 0) && (uVar19 = uVar20, 0 < param_2->ArrayNum)) {
        do {
          pFVar17 = TArrayView<FRigUnit_Harmonics_TargetItem_const_,int>::operator[](param_2,uVar19)
          ;
          local_220.Key._0_4_ = local_220.Key._0_4_ & 0xffffff00;
          local_220.Key.Name.ComparisonIndex.Value = 0;
          local_220.Key.Name.Number = 0;
          local_220.Index = 0xffff;
          local_220.ContainerVersion = -1;
          local_220.Element = (FRigBaseElement *)0x0;
          FCachedRigElement::UpdateCache(&local_220,&pFVar17->Item,pUVar4);
          if (local_220.Index != 0xffff) {
            ::FName::IsWithinBounds(local_220.Key.Name.ComparisonIndex);
          }
          pFVar5 = (FCachedRigElement *)(param_12->CachedItems).AllocatorInstance.Data;
          if (((pFVar5 <= &local_220) && (&local_220 < pFVar5 + *piVar1)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = (param_12->CachedItems).ArrayNum;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)param_12,piVar1);
          }
          uVar19 = uVar19 + 1;
          (param_12->CachedItems).ArrayNum = iVar16 + 1;
          pFVar6 = (param_12->CachedItems).AllocatorInstance.Data;
          pFVar2 = pFVar6 + (longlong)iVar16 * 0x20;
          *(ulonglong *)pFVar2 =
               CONCAT44(local_220.Key.Name.ComparisonIndex.Value,local_220.Key._0_4_);
          *(ulonglong *)(pFVar2 + 8) =
               CONCAT26(local_220._14_2_,CONCAT24(local_220.Index,local_220.Key.Name.Number));
          pFVar6 = pFVar6 + (longlong)iVar16 * 0x20 + 0x10;
          *(ulonglong *)pFVar6 = CONCAT44(local_220._20_4_,local_220.ContainerVersion);
          *(FRigBaseElement **)(pFVar6 + 8) = local_220.Element;
          param_3 = local_200;
        } while ((int)uVar19 < param_2->ArrayNum);
      }
    }
    fVar13 = __real_3f800000;
    iVar16 = (param_12->CachedItems).ArrayNum;
    if (0 < iVar16) {
      lVar21 = 0;
      uVar27 = (undefined4)__real_40608cccc0000000;
      uVar28 = (undefined4)((ulonglong)__real_40608cccc0000000 >> 0x20);
      uVar29 = (undefined4)__real_4022666660000000;
      uVar30 = (undefined4)((ulonglong)__real_4022666660000000 >> 0x20);
      local_238 = 0;
      do {
        uVar18 = ~uVar20 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar20 < iVar16) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (param_12->CachedItems).AllocatorInstance.Data;
        if (((*(short *)(pFVar2 + lVar21 + 0xc) != -1) &&
            (bVar15 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar2 + lVar21 + 4)), bVar15)
            ) && ((*(longlong *)(pFVar2 + lVar21 + 4) != 0 &&
                  (pFVar2[lVar21] != (FScriptContainerElement)0x0)))) {
          uVar19 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar22 = *(float *)((longlong)&param_2->DataPtr->Ratio + local_238);
          if (fVar13 <= fVar22) {
            fVar22 = fVar13;
          }
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar22 = FRigVMMathLibrary::EaseFloat(fVar22,param_8);
          uVar19 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar11 = (double)*(float *)((longlong)&param_2->DataPtr->Ratio + local_238);
          dVar9 = dVar11 * (local_1f8->field0_0x0)._s_0.X + (param_12->WaveTime).field0_0x0._s_0.X;
          dVar10 = dVar11 * (local_1f8->field0_0x0)._s_0.Y + (param_12->WaveTime).field0_0x0._s_0.Y;
          dVar12 = dVar11 * (local_1f8->field0_0x0)._s_0.Z + (param_12->WaveTime).field0_0x0._s_0.Z;
          fVar23 = FMath::PerlinNoise1D((float)(dVar9 + (double)CONCAT44(uVar28,uVar27)));
          fVar24 = FMath::PerlinNoise1D((float)(dVar10 + (double)CONCAT44(uVar30,uVar29)));
          fVar25 = FMath::PerlinNoise1D((float)(dVar12 + ___real_406b3cccc0000000));
          dVar11 = (param_7->field0_0x0)._s_0.X;
          dVar8 = (double)(fVar22 * (param_10 - param_9) + param_9);
          dVar11 = sin((dVar11 + dVar11) * (double)fVar23 + dVar9 + (param_6->field0_0x0)._s_0.X);
          local_1e0._s_0.X = dVar11 * (param_5->field0_0x0)._s_0.X * dVar8;
          dVar11 = sin(((double)fVar24 + (double)fVar24) * (param_7->field0_0x0)._s_0.Y + dVar10 +
                       (param_6->field0_0x0)._s_0.Y);
          local_1e0._s_0.Y = dVar11 * (param_5->field0_0x0)._s_0.Y * dVar8;
          dVar11 = sin(((double)fVar25 + (double)fVar25) * (param_7->field0_0x0)._s_0.Z + dVar12 +
                       (param_6->field0_0x0)._s_0.Z);
          local_1e0._s_0.Z = dVar11 * (param_5->field0_0x0)._s_0.Z * dVar8;
          AnimationCore::QuatFromEuler(&local_1c8,(TVector<double> *)&local_1e0._s_0,param_11,false)
          ;
          uVar19 = 0;
          if ((int)uVar20 < (param_12->CachedItems).ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar4 = local_1f0;
          uVar19 = 0xffffffff;
          uVar3 = *(ushort *)((param_12->CachedItems).AllocatorInstance.Data + lVar21 + 0xc);
          if (uVar3 != 0xffff) {
            uVar19 = (uint)uVar3;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_1f0,&local_148,uVar19,false);
          dVar11 = local_148.Rotation.XY.m128d_f64[0] * local_1c8.Y;
          uVar19 = 0;
          if ((int)uVar20 < (param_12->CachedItems).ArrayNum) {
            uVar19 = uVar18;
          }
          dVar8 = local_1c8.Z * local_148.Rotation.XY.m128d_f64[1];
          dVar10 = local_1c8.X * local_148.Rotation.XY.m128d_f64[1];
          dVar26 = local_1c8.Z * local_148.Rotation.ZW.m128d_f64[1];
          dVar9 = local_148.Rotation.XY.m128d_f64[0] * local_1c8.Z *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  local_1c8.Y * local_148.Rotation.ZW.m128d_f64[1] +
                  local_1c8.W * local_148.Rotation.XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  local_148.Rotation.ZW.m128d_f64[0] * local_1c8.X *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar12 = local_148.Rotation.XY.m128d_f64[0] * local_1c8.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   local_1c8.W * local_148.Rotation.ZW.m128d_f64[1] +
                   local_1c8.Y * local_148.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   local_148.Rotation.ZW.m128d_f64[0] * local_1c8.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
          local_148.Rotation.XY.m128d_f64[0] =
               local_148.Rotation.XY.m128d_f64[0] * local_1c8.W *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_1c8.X * local_148.Rotation.ZW.m128d_f64[1] +
               dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_148.Rotation.ZW.m128d_f64[0] * local_1c8.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
          local_148.Rotation.ZW.m128d_f64[0] =
               dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar26 +
               dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               local_148.Rotation.ZW.m128d_f64[0] * local_1c8.W *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar19 = 0xffffffff;
          uVar3 = *(ushort *)((param_12->CachedItems).AllocatorInstance.Data + lVar21 + 0xc);
          if (uVar3 != 0xffff) {
            uVar19 = (uint)uVar3;
          }
          local_1a8.Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
          local_1a8.Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
          local_1a8.Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
          local_1a8.Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
          local_1a8.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
          local_1a8.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
          local_1a8.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
          local_1a8.Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
          local_1a8.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
          local_1a8.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
          local_1a8.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
          local_1a8.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
          URigHierarchy::SetGlobalTransformByIndex(pUVar4,uVar19,&local_1a8,false,true,false,false);
          uVar27 = (undefined4)__real_40608cccc0000000;
          uVar28 = (undefined4)((ulonglong)__real_40608cccc0000000 >> 0x20);
          uVar29 = (undefined4)__real_4022666660000000;
          uVar30 = (undefined4)((ulonglong)__real_4022666660000000 >> 0x20);
        }
        iVar16 = (param_12->CachedItems).ArrayNum;
        local_238 = local_238 + 0x10;
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
        param_3 = local_200;
      } while ((int)uVar20 < iVar16);
    }
    dVar11 = *(double *)&local_1e8->field_0x20;
    dVar8 = (param_3->field0_0x0)._s_0.Z;
    dVar9 = (param_3->field0_0x0)._s_0.X;
    dVar10 = (param_12->WaveTime).field0_0x0._s_0.Z;
    dVar12 = (param_12->WaveTime).field0_0x0._s_0.X;
    (param_12->WaveTime).field0_0x0._s_0.Y =
         dVar11 * (param_3->field0_0x0)._s_0.Y + (param_12->WaveTime).field0_0x0._s_0.Y;
    (param_12->WaveTime).field0_0x0._s_0.Z = dVar11 * dVar8 + dVar10;
    (param_12->WaveTime).field0_0x0._s_0.X = dVar11 * dVar9 + dVar12;
  }
  return;
}

