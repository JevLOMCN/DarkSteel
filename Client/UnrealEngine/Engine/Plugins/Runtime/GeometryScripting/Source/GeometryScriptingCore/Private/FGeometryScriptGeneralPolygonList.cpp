// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd90790

UScriptStruct * __cdecl FGeometryScriptGeneralPolygonList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptGeneralPolygonList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptGeneralPolygonList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList,
                         (UObject *)pUVar1,L"GeometryScriptGeneralPolygonList");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptGeneralPolygonList.OuterSingleton;
}

// Reset @ 14cde2b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGeometryScriptGeneralPolygonList::Reset(FGeometryScriptGeneralPolygonList *this,int param_1)

{
  TGeneralPolygon2<double> *pTVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FGeometryScriptGeneralPolygonList local_28;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if ((this->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_28.Polygons.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_28.Polygons.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      local_28.Polygons.Object = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)
               &DAT_00000010;
      local_28.Polygons.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_28.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pTVar6 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)
               (local_28.Polygons.SharedReferenceCount.ReferenceController + 1);
      (local_28.Polygons.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_28.Polygons.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_V__TGeneralPolygon2_N_Geometry_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_28.Polygons.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_28.Polygons.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_28.Polygons.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pTVar6 == (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                    0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (local_28.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
      pTVar5 = local_28.Polygons.SharedReferenceCount.ReferenceController;
      local_28.Polygons.Object = pTVar6;
    }
    if (this != &local_28) {
      (this->Polygons).Object = pTVar6;
      local_28.Polygons.Object =
           (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Polygons).SharedReferenceCount,&local_28.Polygons.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Polygons.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if ((this->Polygons).Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar6 = (this->Polygons).Object;
  if (-1 < param_1) {
    piVar3 = &pTVar6->ArrayMax;
    pTVar1 = (TGeneralPolygon2<double> *)(pTVar6->AllocatorInstance).Data;
    if (param_1 <= *piVar3) {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar1,pTVar6->ArrayNum);
      pTVar6->ArrayNum = 0;
      return;
    }
    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar1,pTVar6->ArrayNum);
    pTVar6->ArrayNum = 0;
    if (*piVar3 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&pTVar6->AllocatorInstance,0,piVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

