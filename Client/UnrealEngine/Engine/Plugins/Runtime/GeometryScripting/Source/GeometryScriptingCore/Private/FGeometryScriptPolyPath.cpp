// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd90230

UScriptStruct * __cdecl FGeometryScriptPolyPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptPolyPath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptPolyPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPolyPath,(UObject *)pUVar1,
                         L"GeometryScriptPolyPath");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptPolyPath.OuterSingleton;
}

// Reset @ 14cde2ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FGeometryScriptPolyPath::Reset(FGeometryScriptPolyPath *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if ((this->Path).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FStack_20.ReferenceController = ::operator_new(0x20);
    if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (FStack_20.ReferenceController + 1);
      (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      FStack_20.ReferenceController[1]._padding_ = 0;
      FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
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
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar3 = FStack_20.ReferenceController;
      local_28 = pTVar4;
    }
    if (this != (FGeometryScriptPolyPath *)&local_28) {
      (this->Path).Object = pTVar4;
      local_28 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Path).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((this->Path).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
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
  pTVar4 = (this->Path).Object;
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

