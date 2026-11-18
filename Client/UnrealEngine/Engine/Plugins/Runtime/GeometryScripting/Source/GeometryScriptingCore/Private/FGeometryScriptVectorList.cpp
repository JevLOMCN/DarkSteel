// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd8e560

UScriptStruct * __cdecl FGeometryScriptVectorList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptVectorList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptVectorList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptVectorList,(UObject *)pUVar1,
                         L"GeometryScriptVectorList");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptVectorList.OuterSingleton;
}

// Reset @ 14cde34d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FGeometryScriptVectorList::Reset(FGeometryScriptVectorList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FGeometryScriptVectorList local_28;
  
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_28.List.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_28.List.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
       ) {
      local_28.List.Object = ___xmm_00000000000000000000000000000010;
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      local_28.List.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (local_28.List.SharedReferenceCount.ReferenceController + 1);
      (local_28.List.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_28.List.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_28.List.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_28.List.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_28.List.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pTVar4 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      LOCK();
      (local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
      pTVar3 = local_28.List.SharedReferenceCount.ReferenceController;
      local_28.List.Object = pTVar4;
    }
    if (this != &local_28) {
      (this->List).Object = pTVar4;
      local_28.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->List).SharedReferenceCount,&local_28.List.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.List.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
    {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pTVar4 = (this->List).Object;
  if (-1 < param_1) {
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

