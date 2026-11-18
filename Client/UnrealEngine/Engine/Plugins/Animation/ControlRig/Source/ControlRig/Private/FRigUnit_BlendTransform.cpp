// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ee0a0

UScriptStruct * __cdecl FRigUnit_BlendTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_BlendTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_BlendTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BlendTransform,(UObject *)pUVar1,
                         L"RigUnit_BlendTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_BlendTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_BlendTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ee2c0

UScriptStruct * __thiscall
FRigUnit_BlendTransform::GetExecuteContextStruct(FRigUnit_BlendTransform *this)

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

// Execute @ 14a4fb4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_BlendTransform::Execute(FRigUnit_BlendTransform *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FBlendTarget_const_,int> local_278;
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
  local_278.DataPtr = (FBlendTarget *)(this->Targets).AllocatorInstance.Data;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Source,&local_278,&this->Result);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4fb5f0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_BlendTransform::GetUpgradeInfo
          (FRigUnit_BlendTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a5248b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_BlendTransform::Execute(FRigUnit_BlendTransform *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FBlendTarget_const_,int> local_18;
  
  local_18.DataPtr = (FBlendTarget *)(this->Targets).AllocatorInstance.Data;
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
  StaticExecute(param_1,&this->Source,&local_18,&this->Result);
  return;
}

// RigVMExecute @ 14a535a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_BlendTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  uchar *puVar7;
  FControlRigExecuteContext *pFVar8;
  TArrayView<FBlendTarget_const_,int> local_18;
  
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
    pTVar6 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar2[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  iVar1 = *(int *)(puVar7 + 8);
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  local_18.DataPtr = *(FBlendTarget **)puVar7;
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
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,&local_18,pTVar3);
  return;
}

// StaticExecute @ 14a561c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_BlendTransform::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          TArrayView<FBlendTarget_const_,int> *param_3,TTransform<double> *param_4)

{
  code *pcVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  TTransform<double> *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float local_a8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_90 [6];
  
  fVar3 = __real_3727c5ac;
  iVar6 = param_3->ArrayNum;
  if (0 < iVar6) {
    uVar10 = 0;
    fVar16 = 0.0;
    local_90[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90[0].ArrayNum = 0;
    local_90[0].ArrayMax = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    uVar14 = uVar10;
    do {
      uVar8 = (uint)uVar10;
      uVar13 = ~uVar8 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar8 < iVar6) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (fVar3 < *(float *)((longlong)(&param_3->DataPtr->Transform + 1) + uVar14)) {
        uVar9 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar11 = (TTransform<double> *)
                  ((longlong)(param_3->DataPtr->Transform).Rotation.XY.m128d_f64 + uVar14);
        if (((local_90[0].AllocatorInstance.Data <= pTVar11) &&
            (pTVar11 < (TTransform<double> *)
                       (local_90[0].AllocatorInstance.Data + (longlong)local_90[0].ArrayMax * 0x60))
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_90[0].ArrayNum == local_90[0].ArrayMax) {
          local_90[0].ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_90[0].AllocatorInstance,&local_90[0].ArrayMax);
        }
        lVar7 = (longlong)local_90[0].ArrayNum;
        local_90[0].ArrayNum = local_90[0].ArrayNum + 1;
        dVar2 = (pTVar11->Rotation).XY.m128d_f64[1];
        lVar7 = lVar7 * 0x60;
        *(double *)&local_90[0].AllocatorInstance.Data[lVar7].field_0x0 =
             (pTVar11->Rotation).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 8) = dVar2;
        dVar2 = (pTVar11->Rotation).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x10) =
             (pTVar11->Rotation).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x10 + 8) = dVar2;
        dVar2 = (pTVar11->Translation).XY.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x20) =
             (pTVar11->Translation).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x20 + 8) = dVar2;
        dVar2 = (pTVar11->Translation).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x30) =
             (pTVar11->Translation).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x30 + 8) = dVar2;
        dVar2 = (pTVar11->Scale3D).XY.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x40) =
             (pTVar11->Scale3D).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x40 + 8) = dVar2;
        dVar2 = (pTVar11->Scale3D).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x50) =
             (pTVar11->Scale3D).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x50 + 8) = dVar2;
        uVar9 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = (FScriptContainerElement *)((longlong)(&param_3->DataPtr->Transform + 1) + uVar14)
        ;
        if (((local_a0.AllocatorInstance.Data <= pFVar12) &&
            (pFVar12 < local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = local_a0.ArrayNum;
        if (local_a0.ArrayNum == local_a0.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
        }
        local_a0.ArrayNum = iVar6 + 1;
        *(float *)(local_a0.AllocatorInstance.Data + (longlong)iVar6 * 4) = *(float *)pFVar12;
        uVar9 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar16 = fVar16 + *(float *)((longlong)(&param_3->DataPtr->Transform + 1) + uVar14);
      }
      fVar4 = __real_3f800000;
      lVar7 = 0;
      iVar6 = param_3->ArrayNum;
      uVar10 = (ulonglong)(uVar8 + 1);
      uVar14 = uVar14 + 0x70;
    } while ((int)(uVar8 + 1) < iVar6);
    if (0 < local_90[0].ArrayNum) {
      if (__real_3f800000 < fVar16) {
        uVar9 = 0;
        if (0 < local_a0.ArrayNum) {
          fVar15 = __real_3f800000 / fVar16;
          do {
            uVar8 = 0;
            if ((int)uVar9 < local_a0.ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar9 = uVar9 + 1;
            *(float *)(local_a0.AllocatorInstance.Data + lVar7) =
                 fVar15 * *(float *)(local_a0.AllocatorInstance.Data + lVar7);
            lVar7 = lVar7 + 4;
          } while ((int)uVar9 < local_a0.ArrayNum);
        }
      }
      local_a8[0] = fVar4 - fVar16;
      if (fVar4 <= fVar4 - fVar16) {
        local_a8[0] = fVar4;
      }
      if (local_a8[0] <= 0.0) {
        local_a8[0] = 0.0;
      }
      if (fVar3 < local_a8[0]) {
        if (((local_90[0].AllocatorInstance.Data <= param_2) &&
            (param_2 < (TTransform<double> *)
                       (local_90[0].AllocatorInstance.Data + (longlong)local_90[0].ArrayMax * 0x60))
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_90[0].ArrayNum == local_90[0].ArrayMax) {
          local_90[0].ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_90[0].AllocatorInstance,&local_90[0].ArrayMax);
        }
        lVar7 = (longlong)local_90[0].ArrayNum;
        dVar2 = (param_2->Rotation).XY.m128d_f64[1];
        local_90[0].ArrayNum = local_90[0].ArrayNum + 1;
        lVar7 = lVar7 * 0x60;
        *(double *)&local_90[0].AllocatorInstance.Data[lVar7].field_0x0 =
             (param_2->Rotation).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 8) = dVar2;
        dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x10) =
             (param_2->Rotation).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x10 + 8) = dVar2;
        dVar2 = (param_2->Translation).XY.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x20) =
             (param_2->Translation).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x20 + 8) = dVar2;
        dVar2 = (param_2->Translation).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x30) =
             (param_2->Translation).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x30 + 8) = dVar2;
        dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x40) =
             (param_2->Scale3D).XY.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x40 + 8) = dVar2;
        dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x50) =
             (param_2->Scale3D).ZW.m128d_f64[0];
        *(double *)(local_90[0].AllocatorInstance.Data + lVar7 + 0x50 + 8) = dVar2;
        if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = local_a0.ArrayNum;
        if (local_a0.ArrayNum == local_a0.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
        }
        local_a0.ArrayNum = iVar6 + 1;
        *(float *)(local_a0.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_a8[0];
      }
      FAnimationRuntime::BlendTransformsByWeight(param_4,local_90,&local_a0);
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if ((TTransform<double> *)local_90[0].AllocatorInstance.Data != (TTransform<double> *)0x0) {
      FMemory::Free(local_90[0].AllocatorInstance.Data);
    }
  }
  dVar2 = (param_2->Rotation).XY.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Translation).XY.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Translation).ZW.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar2;
  return;
}

