// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 10

// operator==<FConstSharedStruct> @ 1470d1040

bool __thiscall
FConstSharedStruct::operator==<FConstSharedStruct>
          (FConstSharedStruct *this,FConstSharedStruct *param_1)

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

// Get<FTestConstSharedFragment_Int_const_> @ 1470de140

FTestConstSharedFragment_Int * __thiscall
FConstSharedStruct::Get<FTestConstSharedFragment_Int_const_>(FConstSharedStruct *this)

{
  FStructSharedMemory *pFVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  FTestConstSharedFragment_Int *pFVar4;
  
  pFVar1 = (this->StructMemoryPtr).Object;
  if (pFVar1 != (FStructSharedMemory *)0x0) {
    pUVar2 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
    lVar3 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    pFVar4 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                       (pUVar2,(void *)((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar3 + 7 &
                                       -lVar3));
    return pFVar4;
  }
  pFVar4 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                     ((UScriptStruct *)0x0,(void *)0x0);
  return pFVar4;
}

// Make<FTestConstSharedFragment_Float,float_const_&> @ 1470e98f0

FConstSharedStruct * __cdecl
FConstSharedStruct::Make<FTestConstSharedFragment_Float,float_const_&>
          (FConstSharedStruct *__return_storage_ptr__,float *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FStructSharedMemory *pFVar5;
  FConstSharedStruct *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  FConstSharedStruct local_18;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Float,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Float");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton;
  uVar8 = (uint)*(short *)((longlong)
                           &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.
                            OuterSingleton)->_padding_ + 4);
  pFVar5 = FMemory::Malloc((longlong)
                           (int)(((int)(
                                       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float
                                       .OuterSingleton)->_padding_ + -1 + uVar8 & -uVar8) +
                                (uVar8 + 7 & -uVar8)),uVar8);
  (pFVar5->ScriptStruct).field0_0x0.DebugPtr = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9,1);
  if (pFVar5 == (FStructSharedMemory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x55,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FConstSharedStruct *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar9 = (longlong)
          *(short *)((longlong)&((pFVar5->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
  *(float *)((longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9) = *param_1;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar5;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.StructMemoryPtr.Object = pFVar5;
  local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_18) {
    (__return_storage_ptr__->StructMemoryPtr).Object = pFVar5;
    local_18.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount,
               &local_18.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// Make<FTestConstSharedFragment_Int> @ 1470e9aa0

FConstSharedStruct * __cdecl
FConstSharedStruct::Make<FTestConstSharedFragment_Int>
          (FConstSharedStruct *__return_storage_ptr__,FTestConstSharedFragment_Int *param_1)

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

// Make<FTestConstSharedFragment_Int,int_const_&> @ 1470e9b80

FConstSharedStruct * __cdecl
FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
          (FConstSharedStruct *__return_storage_ptr__,int *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FStructSharedMemory *pFVar5;
  FConstSharedStruct *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  FConstSharedStruct local_18;
  
  (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar8 = (uint)*(short *)((longlong)
                           &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.
                            OuterSingleton)->_padding_ + 4);
  pFVar5 = FMemory::Malloc((longlong)
                           (int)(((int)(
                                       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int
                                       .OuterSingleton)->_padding_ + -1 + uVar8 & -uVar8) +
                                (uVar8 + 7 & -uVar8)),uVar8);
  (pFVar5->ScriptStruct).field0_0x0.DebugPtr = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (pFVar5->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9,1);
  if (pFVar5 == (FStructSharedMemory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x55,
                       L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FConstSharedStruct *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar9 = (longlong)
          *(short *)((longlong)&((pFVar5->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
  *(int *)((longlong)&(pFVar5->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9) = *param_1;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)pFVar5;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.StructMemoryPtr.Object = pFVar5;
  local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController = pTVar7;
  if (__return_storage_ptr__ != &local_18) {
    (__return_storage_ptr__->StructMemoryPtr).Object = pFVar5;
    local_18.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount,
               &local_18.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// FConstSharedStruct @ 1470f33d0

FConstSharedStruct * __thiscall
FConstSharedStruct::FConstSharedStruct(FConstSharedStruct *this,FSharedStruct *param_1)

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

// FConstSharedStruct @ 1470f3400

FConstSharedStruct * __thiscall
FConstSharedStruct::FConstSharedStruct(FConstSharedStruct *this,FConstSharedStruct *param_1)

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

// FConstSharedStruct @ 1470f3430

FConstSharedStruct * __thiscall
FConstSharedStruct::FConstSharedStruct(FConstSharedStruct *this,FSharedStruct *param_1)

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

// ~FConstSharedStruct @ 1470f8010

void __thiscall FConstSharedStruct::~FConstSharedStruct(FConstSharedStruct *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return;
}

// InitializeAs @ 147122230

void __thiscall
FConstSharedStruct::InitializeAs(FConstSharedStruct *this,UScriptStruct *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  FStructSharedMemory *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FConstSharedStruct local_28;
  FConstSharedStruct local_18;
  
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
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar3;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.StructMemoryPtr.Object = pFVar3;
  local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController = pTVar4;
  if (this != &local_28) {
    (this->StructMemoryPtr).Object = pFVar3;
    local_28.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StructMemoryPtr).SharedReferenceCount,
               &local_28.StructMemoryPtr.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

