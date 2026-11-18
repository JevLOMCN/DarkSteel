// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd9ac50

UScriptStruct * __cdecl FGeometryScriptSphereCovering::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSphereCovering.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptSphereCovering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSphereCovering,(UObject *)pUVar1,
                         L"GeometryScriptSphereCovering");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptSphereCovering.OuterSingleton;
}

// Reset @ 14cde31a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FGeometryScriptSphereCovering::Reset(FGeometryScriptSphereCovering *this)

{
  code *pcVar1;
  bool bVar2;
  FSphereCovering *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptSphereCovering local_18;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if ((this->Spheres).Object == (FSphereCovering *)0x0) {
    local_18.Spheres.SharedReferenceCount.ReferenceController = ::operator_new(0x30);
    if (local_18.Spheres.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      local_18.Spheres.Object = ___xmm_00000000000000000000000000000010;
      pFVar3 = (FSphereCovering *)&DAT_00000010;
      local_18.Spheres.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_18.Spheres.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pFVar3 = (FSphereCovering *)(local_18.Spheres.SharedReferenceCount.ReferenceController + 1);
      (local_18.Spheres.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_18.Spheres.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSphereCovering_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      local_18.Spheres.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_18.Spheres.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_18.Spheres.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      local_18.Spheres.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_18.Spheres.SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
           (atomic<int>)0x0;
      local_18.Spheres.SharedReferenceCount.ReferenceController[2].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pFVar3 == (FSphereCovering *)0x0) {
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
      (local_18.Spheres.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.Spheres.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
      pTVar4 = local_18.Spheres.SharedReferenceCount.ReferenceController;
      local_18.Spheres.Object = pFVar3;
    }
    if (this != &local_18) {
      (this->Spheres).Object = pFVar3;
      local_18.Spheres.Object = (FSphereCovering *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Spheres).SharedReferenceCount,&local_18.Spheres.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.Spheres.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((this->Spheres).Object == (FSphereCovering *)0x0) {
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
  pFVar3 = (this->Spheres).Object;
  (pFVar3->Position).ArrayNum = 0;
  if ((pFVar3->Position).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pFVar3,0,&(pFVar3->Position).ArrayMax);
  }
  (pFVar3->Radius).ArrayNum = 0;
  if ((pFVar3->Radius).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar3->Radius).AllocatorInstance,0,&(pFVar3->Radius).ArrayMax);
  }
  return;
}

