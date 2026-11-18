// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd9b800

UScriptStruct * __cdecl FGeometryScriptIndexList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptIndexList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptIndexList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptIndexList,(UObject *)pUVar1,
                         L"GeometryScriptIndexList");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptIndexList.OuterSingleton;
}

// Reset @ 14cde2d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGeometryScriptIndexList::Reset
          (FGeometryScriptIndexList *this,EGeometryScriptIndexType param_1,int param_2)

{
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->List;
  if (pTVar1->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FStack_30.ReferenceController = ::operator_new(0x20);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar5 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar4 = FStack_30.ReferenceController;
      local_38 = pTVar5;
    }
    if (pTVar1 != (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *)&local_38) {
      pTVar1->Object = pTVar5;
      local_38 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->List).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar1->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar5 = pTVar1->Object;
  if (-1 < param_2) {
    pTVar5->ArrayNum = 0;
    if (pTVar5->ArrayMax < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_2,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
    }
    this->IndexType = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

