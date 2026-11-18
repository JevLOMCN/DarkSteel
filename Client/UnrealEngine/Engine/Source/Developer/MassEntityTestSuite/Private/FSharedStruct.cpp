// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 10

// operator==<FSharedStruct> @ 1470d10c0

bool __thiscall FSharedStruct::operator==<FSharedStruct>(FSharedStruct *this,FSharedStruct *param_1)

{
  FStructSharedMemory *pFVar1;
  FStructSharedMemory *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  
  pFVar1 = (this->StructMemoryPtr).Object;
  pUVar6 = (UScriptStruct *)0x0;
  pUVar3 = pUVar6;
  if (pFVar1 != (FStructSharedMemory *)0x0) {
    pUVar3 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
  }
  pFVar2 = (param_1->StructMemoryPtr).Object;
  pUVar4 = pUVar6;
  if (pFVar2 != (FStructSharedMemory *)0x0) {
    pUVar4 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
  }
  if (pUVar3 == pUVar4) {
    pUVar3 = pUVar6;
    if (pFVar1 != (FStructSharedMemory *)0x0) {
      lVar5 = (longlong)
              *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      pUVar3 = (UScriptStruct *)((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
    }
    if (pFVar2 != (FStructSharedMemory *)0x0) {
      lVar5 = (longlong)
              *(short *)((longlong)&((pFVar2->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      pUVar6 = (UScriptStruct *)((longlong)&(pFVar2->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
    }
    if (pUVar3 == pUVar6) {
      return true;
    }
  }
  return false;
}

// Get<FTestSharedFragment_Int> @ 1470de1c0

FTestSharedFragment_Int * __thiscall
FSharedStruct::Get<FTestSharedFragment_Int>(FSharedStruct *this)

{
  FStructSharedMemory *pFVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  FTestSharedFragment_Int *pFVar4;
  
  pFVar1 = (this->StructMemoryPtr).Object;
  if (pFVar1 != (FStructSharedMemory *)0x0) {
    pUVar2 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
    lVar3 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    pFVar4 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int>
                       (pUVar2,(void *)((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar3 + 7 &
                                       -lVar3));
    return pFVar4;
  }
  pFVar4 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int>((UScriptStruct *)0x0,(void *)0x0);
  return pFVar4;
}

// Make<FTestConstSharedFragment_Int> @ 1470e9b10

FSharedStruct * __cdecl
FSharedStruct::Make<FTestConstSharedFragment_Int>
          (FSharedStruct *__return_storage_ptr__,FTestConstSharedFragment_Int *param_1)

{
  UPackage *pUVar1;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar1,
                         L"TestConstSharedFragment_Int");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
               (uchar *)param_1);
  return __return_storage_ptr__;
}

// Make<FTestSharedFragment_Float,float_const_&> @ 1470e9fd0

FSharedStruct * __cdecl
FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>
          (FSharedStruct *__return_storage_ptr__,float *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FStructSharedMemory *pFVar5;
  longlong lVar6;
  FSharedStruct *pFVar7;
  uint uVar8;
  FSharedStruct local_18;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar4,
                         L"TestSharedFragment_Float");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
  uVar8 = (uint)*(short *)((longlong)
                           &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.
                            OuterSingleton)->_padding_ + 4);
  pFVar5 = FMemory::Malloc((longlong)
                           (int)(((int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.
                                       OuterSingleton)->_padding_ + -1 + uVar8 & -uVar8) +
                                (uVar8 + 7 & -uVar8)),uVar8);
  (pFVar5->ScriptStruct).field0_0x0.DebugPtr = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
  lVar6 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar6 + 7 & -lVar6,1);
  if (pFVar5 == (FStructSharedMemory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x55,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSharedStruct *)(*pcVar2)();
      return pFVar7;
    }
  }
  lVar6 = (longlong)
          *(short *)((longlong)&((pFVar5->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
  *(float *)((longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar6 + 7 & -lVar6) = *param_1;
  local_18.StructMemoryPtr.Object = pFVar5;
  local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)pFVar5;
  }
  if (__return_storage_ptr__ != &local_18) {
    (__return_storage_ptr__->StructMemoryPtr).Object = pFVar5;
    local_18.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount,
               &local_18.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Make<FTestSharedFragment_Int> @ 1470ea180

FSharedStruct * __cdecl
FSharedStruct::Make<FTestSharedFragment_Int>
          (FSharedStruct *__return_storage_ptr__,FTestSharedFragment_Int *param_1)

{
  UPackage *pUVar1;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,
               (uchar *)param_1);
  return __return_storage_ptr__;
}

// Make<FTestSharedFragment_Int> @ 1470ea1f0

FSharedStruct * __cdecl
FSharedStruct::Make<FTestSharedFragment_Int>(FSharedStruct *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,(uchar *)0x0
              );
  return __return_storage_ptr__;
}

// Make<FTestSharedFragment_Int,int_const_&> @ 1470ea250

FSharedStruct * __cdecl
FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>
          (FSharedStruct *__return_storage_ptr__,int *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FStructSharedMemory *pFVar5;
  longlong lVar6;
  FSharedStruct *pFVar7;
  uint uVar8;
  FSharedStruct local_18;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar4,
                         L"TestSharedFragment_Int");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar8 = (uint)*(short *)((longlong)
                           &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                            OuterSingleton)->_padding_ + 4);
  pFVar5 = FMemory::Malloc((longlong)
                           (int)(((int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                                       OuterSingleton)->_padding_ + -1 + uVar8 & -uVar8) +
                                (uVar8 + 7 & -uVar8)),uVar8);
  (pFVar5->ScriptStruct).field0_0x0.DebugPtr = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
  lVar6 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar6 + 7 & -lVar6,1);
  if (pFVar5 == (FStructSharedMemory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x55,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSharedStruct *)(*pcVar2)();
      return pFVar7;
    }
  }
  lVar6 = (longlong)
          *(short *)((longlong)&((pFVar5->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
  *(int *)((longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar6 + 7 & -lVar6) = *param_1;
  local_18.StructMemoryPtr.Object = pFVar5;
  local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)pFVar5;
  }
  if (__return_storage_ptr__ != &local_18) {
    (__return_storage_ptr__->StructMemoryPtr).Object = pFVar5;
    local_18.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount,
               &local_18.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FSharedStruct @ 1470f5450

FSharedStruct * __thiscall FSharedStruct::FSharedStruct(FSharedStruct *this,FSharedStruct *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->StructMemoryPtr).Object = (param_1->StructMemoryPtr).Object;
  pTVar1 = (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController;
  (this->StructMemoryPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FSharedStruct @ 1470f8a20

void __thiscall FSharedStruct::~FSharedStruct(FSharedStruct *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return;
}

// InitializeAs @ 147122350

void __thiscall
FSharedStruct::InitializeAs(FSharedStruct *this,UScriptStruct *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  FStructSharedMemory *pFVar3;
  FSharedStruct local_28;
  FSharedStruct local_18;
  
  if (param_1 == (UScriptStruct *)0x0) {
    local_18.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (this != &local_18) {
      (this->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StructMemoryPtr).SharedReferenceCount,
                 &local_18.StructMemoryPtr.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    return;
  }
  pFVar3 = FStructSharedMemory::CreateImpl(param_1,param_2);
  if (pFVar3 == (FStructSharedMemory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x44,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.StructMemoryPtr.Object = pFVar3;
  local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)pFVar3;
  }
  if (this != &local_28) {
    (this->StructMemoryPtr).Object = pFVar3;
    local_28.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StructMemoryPtr).SharedReferenceCount,
               &local_28.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return;
}

