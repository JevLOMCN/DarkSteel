// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a155d90

UScriptStruct * __cdecl FRigVMFunction_MathBoxFromArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxFromArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxFromArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray,(UObject *)pUVar1
                         ,L"RigVMFunction_MathBoxFromArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxFromArray.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxFromArray.OuterSingleton;
}

// GetExecuteContextStruct @ 14a155ea0

UScriptStruct * __thiscall
FRigVMFunction_MathBoxFromArray::GetExecuteContextStruct(FRigVMFunction_MathBoxFromArray *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a1564d0

/* WARNING: Removing unreachable block (ram,0x00014a156648) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_MathBoxFromArray::Execute(FRigVMFunction_MathBoxFromArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_128;
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->Array).ArrayNum;
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  local_128.DataPtr = (TVector<double> *)(this->Array).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_128.ArrayNum = iVar1;
  StaticExecute(&local_118,&local_128,&this->Box,&this->Minimum,&this->Maximum,&this->Center,
                &this->Size);
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// Execute @ 14a19ee30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathBoxFromArray::Execute
          (FRigVMFunction_MathBoxFromArray *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = (TVector<double> *)(this->Array).AllocatorInstance.Data;
  iVar1 = (this->Array).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->Box,&this->Minimum,&this->Maximum,&this->Center,&this->Size
               );
  return;
}

// RigVMExecute @ 14a1bb5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathBoxFromArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TBox<double> *pTVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  FRigVMExecuteContext *pFVar11;
  TArrayView<UE::Math::TVector<double>_const_,int> local_38;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
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
  pTVar2 = (TBox<double> *)param_2->DataPtr[1].Ptr;
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  local_38.DataPtr = *(TVector<double> **)puVar6;
  local_38.ArrayNum = *(int *)(puVar6 + 8);
  if (local_38.ArrayNum < 0) {
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
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,&local_38,pTVar2,pTVar3,pTVar8,pTVar9,pTVar10);
  return;
}

// StaticExecute @ 14a1dc7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathBoxFromArray::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TBox<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double *pdVar9;
  TVector<double> *pTVar10;
  double *pdVar11;
  uchar uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  (param_3->Min).field0_0x0._s_0.X = 0.0;
  (param_3->Min).field0_0x0._s_0.Y = 0.0;
  (param_3->Min).field0_0x0._s_0.Z = 0.0;
  (param_3->Max).field0_0x0._s_0.X = 0.0;
  (param_3->Max).field0_0x0._s_0.Y = 0.0;
  (param_3->Max).field0_0x0._s_0.Z = 0.0;
  param_3->IsValid = '\0';
  param_3->Pad[0] = '\0';
  param_3->Pad[1] = '\0';
  param_3->Pad[2] = '\0';
  param_3->Pad[3] = '\0';
  param_3->Pad[4] = '\0';
  param_3->Pad[5] = '\0';
  param_3->Pad[6] = '\0';
  pTVar10 = param_2->DataPtr;
  pTVar1 = pTVar10 + param_2->ArrayNum;
  if (pTVar10 == pTVar1) {
    uVar19 = *(undefined8 *)((longlong)&(param_3->Min).field0_0x0 + 8);
    uVar14 = (undefined4)uVar19;
    uVar16 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar19 = (param_3->Min).field0_0x0._s_0.Z;
    uVar20 = (param_3->Max).field0_0x0._s_0.X;
    uVar21 = (param_3->Min).field0_0x0._s_0.X;
  }
  else {
    uVar12 = param_3->IsValid;
    do {
      pdVar9 = &(param_3->Max).field0_0x0._s_0.Y;
      pdVar11 = &(param_3->Max).field0_0x0._s_0.Z;
      if (uVar12 == '\0') {
        dVar2 = (pTVar10->field0_0x0)._s_0.Y;
        uVar12 = '\x01';
        (param_3->Max).field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
        (param_3->Max).field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar10->field0_0x0)._s_0.Z;
        (param_3->Max).field0_0x0._s_0.Z = dVar2;
        dVar3 = (param_3->Max).field0_0x0._s_0.X;
        dVar4 = (param_3->Max).field0_0x0._s_0.Y;
        param_3->IsValid = '\x01';
        uVar20 = (param_3->Max).field0_0x0._s_0.X;
        (param_3->Min).field0_0x0._s_0.X = dVar3;
        (param_3->Min).field0_0x0._s_0.Y = dVar4;
        (param_3->Min).field0_0x0._s_0.Z = dVar2;
        uVar19 = *(undefined8 *)((longlong)&(param_3->Min).field0_0x0 + 8);
        uVar14 = (undefined4)uVar19;
        uVar16 = (undefined4)((ulonglong)uVar19 >> 0x20);
        uVar19 = (param_3->Min).field0_0x0._s_0.Z;
        uVar21 = (param_3->Min).field0_0x0._s_0.X;
      }
      else {
        uVar21 = (pTVar10->field0_0x0)._s_0.X;
        dVar2 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 8);
        uVar14 = SUB84(dVar2,0);
        uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
        uVar19 = (param_3->Min).field0_0x0._s_0.Z;
        uVar20 = (param_3->Max).field0_0x0._s_0.X;
        dVar3 = *pdVar9;
        uVar13 = SUB84(dVar3,0);
        uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = (param_3->Min).field0_0x0._s_0.X;
        if (dVar4 <= (double)uVar21) {
          uVar21 = dVar4;
        }
        dVar4 = *pdVar11;
        uVar17 = SUB84(dVar4,0);
        uVar18 = (undefined4)((ulonglong)dVar4 >> 0x20);
        (param_3->Min).field0_0x0._s_0.X = (double)uVar21;
        dVar5 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
        if (dVar5 <= dVar2) {
          uVar14 = SUB84(dVar5,0);
          uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar16,uVar14);
        dVar2 = (pTVar10->field0_0x0)._s_0.Z;
        if (dVar2 <= (double)uVar19) {
          uVar19 = dVar2;
        }
        (param_3->Min).field0_0x0._s_0.Z = (double)uVar19;
        dVar2 = (pTVar10->field0_0x0)._s_0.X;
        if ((double)uVar20 <= dVar2) {
          uVar20 = dVar2;
        }
        (param_3->Max).field0_0x0._s_0.X = (double)uVar20;
        dVar2 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
        if (dVar3 <= dVar2) {
          uVar13 = SUB84(dVar2,0);
          uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *pdVar9 = (double)CONCAT44(uVar15,uVar13);
        dVar2 = *(double *)((longlong)&pTVar10->field0_0x0 + 0x10);
        if (dVar4 <= dVar2) {
          uVar17 = SUB84(dVar2,0);
          uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *pdVar11 = (double)CONCAT44(uVar18,uVar17);
      }
      pTVar10 = pTVar10 + 1;
    } while (pTVar10 != pTVar1);
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar11 = &(param_3->Max).field0_0x0._s_0.Z;
  pdVar9 = &(param_3->Max).field0_0x0._s_0.Y;
  if (param_2->ArrayNum == 0) {
    if (param_3->IsValid == '\0') {
      (param_3->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_3->Max).field0_0x0._s_0.Y = (double)uVar8;
      (param_3->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar3 = (param_3->Max).field0_0x0._s_0.X;
      dVar4 = (param_3->Max).field0_0x0._s_0.Y;
      param_3->IsValid = '\x01';
      dVar2 = (param_3->Max).field0_0x0._s_0.Z;
      (param_3->Min).field0_0x0._s_0.X = dVar3;
      (param_3->Min).field0_0x0._s_0.Y = dVar4;
      (param_3->Min).field0_0x0._s_0.Z = dVar2;
    }
    else {
      if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X <= (double)uVar21) {
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      dVar2 = *pdVar11;
      uVar13 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      (param_3->Min).field0_0x0._s_0.X = (double)uVar21;
      if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y <= (double)CONCAT44(uVar16,uVar14)
         ) {
        uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar16 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      }
      (param_3->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar16,uVar14);
      if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z <= (double)uVar19) {
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      (param_3->Min).field0_0x0._s_0.Z = (double)uVar19;
      if ((double)uVar20 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      (param_3->Max).field0_0x0._s_0.X = (double)uVar20;
      uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar16 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      dVar3 = *pdVar9;
      if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y <= dVar3) {
        uVar14 = SUB84(dVar3,0);
        uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      *pdVar9 = (double)CONCAT44(uVar16,uVar14);
      if (dVar2 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) {
        uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar15 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      *pdVar11 = (double)CONCAT44(uVar15,uVar13);
    }
  }
  dVar2 = (param_3->Min).field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (param_3->Min).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar2;
  (param_4->field0_0x0)._s_0.Z = (param_3->Min).field0_0x0._s_0.Z;
  dVar2 = (param_3->Max).field0_0x0._s_0.Y;
  (param_5->field0_0x0)._s_0.X = (param_3->Max).field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y = dVar2;
  (param_5->field0_0x0)._s_0.Z = (param_3->Max).field0_0x0._s_0.Z;
  dVar3 = (param_3->Min).field0_0x0._s_0.Y;
  dVar2 = (param_3->Min).field0_0x0._s_0.Z;
  dVar4 = (param_3->Max).field0_0x0._s_0.Y;
  dVar5 = (param_3->Max).field0_0x0._s_0.Z;
  (param_6->field0_0x0)._s_0.X =
       ((param_3->Min).field0_0x0._s_0.X + (param_3->Max).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  dVar2 = (dVar5 + dVar2) * _UNK_150689678;
  auVar6._8_4_ = SUB84(dVar2,0);
  auVar6._0_8_ = (dVar4 + dVar3) * ___xmm_3fe00000000000003fe0000000000000;
  auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_6->field0_0x0 + 8) = auVar6;
  dVar3 = (param_3->Max).field0_0x0._s_0.Y;
  dVar4 = (param_3->Min).field0_0x0._s_0.Y;
  dVar2 = (param_3->Max).field0_0x0._s_0.Z - (param_3->Min).field0_0x0._s_0.Z;
  (param_7->field0_0x0)._s_0.X = (param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X
  ;
  auVar7._8_4_ = SUB84(dVar2,0);
  auVar7._0_8_ = dVar3 - dVar4;
  auVar7._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_7->field0_0x0 + 8) = auVar7;
  return;
}

