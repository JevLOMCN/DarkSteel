// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 646

// Construct<FGeometryScriptCollisionFromMeshOptions> @ 14cd8d860

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCollisionFromMeshOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x102;
  *(undefined4 *)param_1 = 0x1010601;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FGeometryScriptCollisionFromMeshOptions> @ 14cd8d8c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCollisionFromMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010601;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x102;
  return;
}

// Destruct<FGeometryScriptCollisionFromMeshOptions> @ 14cd8d950

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCollisionFromMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCollisionFromMeshOptions> @ 14cd8da90

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCollisionFromMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBendWarpOptions> @ 14cd8def0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBendWarpOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptBendWarpOptions> @ 14cd8df50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBendWarpOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FGeometryScriptBendWarpOptions> @ 14cd8df70

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBendWarpOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptBendWarpOptions> @ 14cd8e050

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBendWarpOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBoneWeight> @ 14cd8e630

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBoneWeight>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptBoneWeight> @ 14cd8e640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBoneWeight>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGeometryScriptBoneWeight> @ 14cd8e690

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBoneWeight>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptBoneWeight> @ 14cd8e740

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBoneWeight>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptColorList> @ 14cd8e850

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptColorList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptColorList> @ 14cd8e8a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptColorList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptColorList> @ 14cd8e8b0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptColorList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Construct<FGeometryScriptMeshSelection> @ 14cd8e8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshSelection>(void *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTStack_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FStack_20.ReferenceController = ::operator_new(0x68);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTStack_28 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometrySelection_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    FStack_20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3]._padding_ = 0;
    FStack_20.ReferenceController[5]._padding_ = 0;
    FStack_20.ReferenceController[6]._padding_ = 0;
    *(undefined4 *)&FStack_20.ReferenceController[1]._padding_ = 4;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[1]._padding_ + 4) = 1;
    FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2]._padding_ = 0;
    FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&FStack_20.ReferenceController[4]._padding_ = 0;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[4]._padding_ + 4) = 0x80;
    FStack_20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    FStack_20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
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
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = FStack_20.ReferenceController;
    pTStack_28 = pTVar4;
  }
  if (param_1 != &pTStack_28) {
    *(TReferenceControllerBase<1> **)param_1 = pTVar4;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (*(longlong *)param_1 == 0) {
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
  puVar1 = *(undefined4 **)param_1;
  *puVar1 = 4;
  puVar1[1] = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshSelection> @ 14cd8e8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshSelection>(void *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTStack_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FStack_20.ReferenceController = ::operator_new(0x68);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTStack_28 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometrySelection_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    FStack_20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3]._padding_ = 0;
    FStack_20.ReferenceController[5]._padding_ = 0;
    FStack_20.ReferenceController[6]._padding_ = 0;
    *(undefined4 *)&FStack_20.ReferenceController[1]._padding_ = 4;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[1]._padding_ + 4) = 1;
    FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2]._padding_ = 0;
    FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&FStack_20.ReferenceController[4]._padding_ = 0;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[4]._padding_ + 4) = 0x80;
    FStack_20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    FStack_20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
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
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = FStack_20.ReferenceController;
    pTStack_28 = pTVar4;
  }
  if (param_1 != &pTStack_28) {
    *(TReferenceControllerBase<1> **)param_1 = pTVar4;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (*(longlong *)param_1 == 0) {
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
  puVar1 = *(undefined4 **)param_1;
  *puVar1 = 4;
  puVar1[1] = 1;
  return;
}

// Destruct<FGeometryScriptMeshSelection> @ 14cd8e920

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshSelection>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptColorList> @ 14cd8e950

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptColorList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptColorList> @ 14cd8ea10

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptColorList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Copy<FGeometryScriptMeshSelection> @ 14cd8ea30

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshSelection>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptMeshSelection> @ 14cd8eb00

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptMeshSelection>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FGeometryScriptCopySkinWeightProfileToAssetOptions> @ 14cd8ed70

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopySkinWeightProfileToAssetOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// ConstructForTests<FGeometryScriptCopySkinWeightProfileToAssetOptions> @ 14cd8edc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopySkinWeightProfileToAssetOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FGeometryScriptCopySkinWeightProfileToAssetOptions> @ 14cd8ee10

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopySkinWeightProfileToAssetOptions>
          (void *param_1)

{
  return;
}

// Copy<FGeometryScriptCopySkinWeightProfileToAssetOptions> @ 14cd8eef0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopySkinWeightProfileToAssetOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshDifferenceInfo> @ 14cd8f000

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshDifferenceInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FGeometryScriptMeshDifferenceInfo> @ 14cd8f0a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshDifferenceInfo>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  return;
}

// Destruct<FGeometryScriptMeshDifferenceInfo> @ 14cd8f100

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshDifferenceInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptMeshDifferenceInfo> @ 14cd8f160

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshDifferenceInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar3 = puVar4 + ((longlong)param_2 - (longlong)param_1);
      pFVar5 = (ForAnyElementType *)(puVar4 + 8);
      *puVar4 = *puVar3;
      if (pFVar5 != (ForAnyElementType *)(puVar3 + 8)) {
        iVar2 = *(int *)(puVar3 + 0x10);
        piVar1 = (int *)(puVar4 + 0x14);
        _Src = ((ForAnyElementType *)(puVar3 + 8))->Data;
        *(int *)(puVar4 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(puVar3 + 0x18);
      *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(puVar3 + 0x1c);
      puVar4[0x20] = puVar3[0x20];
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x28;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptUVList> @ 14cd8fbf0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptUVList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptUVList> @ 14cd8fc40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUVList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptUVList> @ 14cd8fc90

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptUVList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptUVList> @ 14cd8fcb0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptUVList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptUVList> @ 14cd8fd30

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptUVList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FGeometryScriptCopyMorphTargetToAssetOptions> @ 14cd8ffa0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopyMorphTargetToAssetOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  return;
}

// ConstructForTests<FGeometryScriptCopyMorphTargetToAssetOptions> @ 14cd8ffb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopyMorphTargetToAssetOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  return;
}

// Destruct<FGeometryScriptCopyMorphTargetToAssetOptions> @ 14cd8ffc0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopyMorphTargetToAssetOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCopyMorphTargetToAssetOptions> @ 14cd90090

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopyMorphTargetToAssetOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeasureMeshDistanceOptions> @ 14cd901c0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeasureMeshDistanceOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeasureMeshDistanceOptions> @ 14cd90210

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeasureMeshDistanceOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptMeasureMeshDistanceOptions> @ 14cd90220

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeasureMeshDistanceOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeasureMeshDistanceOptions> @ 14cd902f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeasureMeshDistanceOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptFitOrientedBoxOptions> @ 14cd90420

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptFitOrientedBoxOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3f847ae147ae147b;
  return;
}

// ConstructForTests<FGeometryScriptFitOrientedBoxOptions> @ 14cd904a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptFitOrientedBoxOptions>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3f847ae147ae147b;
  return;
}

// Destruct<FGeometryScriptFitOrientedBoxOptions> @ 14cd904d0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptFitOrientedBoxOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptFitOrientedBoxOptions> @ 14cd905e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptFitOrientedBoxOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMergeVertexOptions> @ 14cd90720

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMergeVertexOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptMergeVertexOptions> @ 14cd90730

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMergeVertexOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptMergeVertexOptions> @ 14cd90780

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMergeVertexOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptVectorList> @ 14cd90850

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptVectorList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FGeometryScriptMergeVertexOptions> @ 14cd90860

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMergeVertexOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FGeometryScriptVectorList> @ 14cd908b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptVectorList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptVectorList> @ 14cd908c0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptVectorList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptVectorList> @ 14cd909e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptVectorList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptVectorList> @ 14cd90aa0

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptVectorList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FGeometryScriptCopyMeshToAssetOptions> @ 14cd90bd0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopyMeshToAssetOptions>(void *param_1)

{
  memset(param_1,0,0xb8);
  FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions(param_1);
  return;
}

// ConstructForTests<FGeometryScriptCopyMeshToAssetOptions> @ 14cd90d00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopyMeshToAssetOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xd4 | 0x14;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff80000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// Destruct<FGeometryScriptCopyMeshToAssetOptions> @ 14cd90d50

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopyMeshToAssetOptions>(void *param_1)

{
  DestructItems<FNaniteAssemblyNode,int>
            (*(FNaniteAssemblyNode **)((longlong)param_1 + 0xa0),*(int *)((longlong)param_1 + 0xa8))
  ;
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  DestructItems<FNaniteAssemblyPart,int>
            (*(FNaniteAssemblyPart **)((longlong)param_1 + 0x90),*(int *)((longlong)param_1 + 0x98))
  ;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FGeometryScriptCopyMeshToAssetOptions> @ 14cd90db0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopyMeshToAssetOptions>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x10);
      *puVar6 = puVar6[(longlong)param_2 - (longlong)param_1];
      puVar6[1] = *(undefined1 *)((longlong)pvVar5 + 1);
      puVar6[2] = *(undefined1 *)((longlong)pvVar5 + 2);
      puVar6[3] = *(undefined1 *)((longlong)pvVar5 + 3);
      puVar6[4] = *(undefined1 *)((longlong)pvVar5 + 4);
      puVar6[5] = *(undefined1 *)((longlong)pvVar5 + 5);
      puVar6[6] = *(undefined1 *)((longlong)pvVar5 + 6);
      puVar6[7] = *(undefined1 *)((longlong)pvVar5 + 7);
      puVar6[8] = *(undefined1 *)((longlong)pvVar5 + 8);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x10)) {
        iVar3 = *(int *)((longlong)pvVar5 + 0x18);
        piVar2 = (int *)(puVar6 + 0x1c);
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar5 + 0x10))->Data;
        *(int *)(puVar6 + 0x18) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (pFVar1->Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar3);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x20);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x20)) {
        iVar3 = *(int *)((longlong)pvVar5 + 0x28);
        piVar2 = (int *)(puVar6 + 0x2c);
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar5 + 0x20))->Data;
        *(int *)(puVar6 + 0x28) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 3);
          }
        }
      }
      puVar6[0x30] = *(undefined1 *)((longlong)pvVar5 + 0x30);
      *(undefined8 *)(puVar6 + 0x34) = *(undefined8 *)((longlong)pvVar5 + 0x34);
      *(undefined4 *)(puVar6 + 0x3c) = *(undefined4 *)((longlong)pvVar5 + 0x3c);
      FMeshNaniteSettings::operator=
                ((FMeshNaniteSettings *)(puVar6 + 0x40),
                 (FMeshNaniteSettings *)((longlong)pvVar5 + 0x40));
      puVar6[0xb0] = *(undefined1 *)((longlong)pvVar5 + 0xb0);
      puVar6[0xb1] = *(undefined1 *)((longlong)pvVar5 + 0xb1);
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0xb8);
      puVar6 = puVar6 + 0xb8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptIsSameMeshOptions> @ 14cd910a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptIsSameMeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x358637bd;
  return;
}

// ConstructForTests<FGeometryScriptIsSameMeshOptions> @ 14cd910c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptIsSameMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x358637bd;
  return;
}

// Destruct<FGeometryScriptIsSameMeshOptions> @ 14cd910e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptIsSameMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptIsSameMeshOptions> @ 14cd91360

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptIsSameMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptConvexDecompositionOptions> @ 14cd914b0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptConvexDecompositionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3fb999999999999a;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryScriptConvexDecompositionOptions> @ 14cd914f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConvexDecompositionOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3fb999999999999a;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGeometryScriptConvexDecompositionOptions> @ 14cd91530

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptConvexDecompositionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptConvexDecompositionOptions> @ 14cd91b30

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptConvexDecompositionOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptAppendMeshOptions> @ 14cd91bf0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptAppendMeshOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptAppendMeshOptions> @ 14cd91c00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptAppendMeshOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FGeometryScriptAppendMeshOptions> @ 14cd91c10

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptAppendMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptAppendMeshOptions> @ 14cd91ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptAppendMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptScalarList> @ 14cd91e30

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptScalarList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptScalarList> @ 14cd91e40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptScalarList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptScalarList> @ 14cd91e50

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptScalarList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptScalarList> @ 14cd91f50

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptScalarList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptScalarList> @ 14cd92010

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptScalarList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FGeometryScriptNaniteOptions> @ 14cd92070

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptNaniteOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptNaniteOptions> @ 14cd920d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptNaniteOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0x42c80000;
  return;
}

// Destruct<FGeometryScriptNaniteOptions> @ 14cd920f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptNaniteOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptNaniteOptions> @ 14cd92190

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptNaniteOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshIsoCurveOptions> @ 14cd92290

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshIsoCurveOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x38d1b717;
  return;
}

// ConstructForTests<FGeometryScriptMeshIsoCurveOptions> @ 14cd922b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshIsoCurveOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x38d1b717;
  return;
}

// Destruct<FGeometryScriptMeshIsoCurveOptions> @ 14cd922d0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshIsoCurveOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshIsoCurveOptions> @ 14cd92320

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshIsoCurveOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSweptHullOptions> @ 14cd923a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSweptHullOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  return;
}

// ConstructForTests<FGeometryScriptSweptHullOptions> @ 14cd92420

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSweptHullOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  return;
}

// Destruct<FGeometryScriptSweptHullOptions> @ 14cd92450

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSweptHullOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSweptHullOptions> @ 14cd92500

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSweptHullOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSimpleMeshBuffers> @ 14cd92630

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSimpleMeshBuffers>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSimpleMeshBuffers> @ 14cd926c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimpleMeshBuffers>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  return;
}

// Destruct<FGeometryScriptSimpleMeshBuffers> @ 14cd92750

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSimpleMeshBuffers>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGeometryScriptSimpleMeshBuffers> @ 14cd927a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSimpleMeshBuffers>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x40));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x50),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x50));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x60),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x60));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x70),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x70));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x80),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x80));
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x90),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x90));
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0),
               (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0));
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0xb0);
    if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0xb0)) {
      iVar3 = ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0xb0))->ArrayNum;
      piVar1 = &((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0xb0))->ArrayMax;
      _Src = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0xb0))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))
      ->ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar1,(ForAnyElementType *)pTVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xc0),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xc0));
    param_2 = (void *)((longlong)param_2 + 0xd0);
    param_1 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0xd0);
  }
  return true;
}

// Construct<FGeometryScriptTriangleList> @ 14cd92b00

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptTriangleList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptTriangleList> @ 14cd92b50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTriangleList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptTriangleList> @ 14cd92b60

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptTriangleList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptTriangleList> @ 14cd92bc0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTriangleList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptCopyMeshFromAssetOptions> @ 14cd92c40

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopyMeshFromAssetOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// ConstructForTests<FGeometryScriptCopyMeshFromAssetOptions> @ 14cd92c90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopyMeshFromAssetOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// Identical<FGeometryScriptTriangleList> @ 14cd92ca0

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptTriangleList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Destruct<FGeometryScriptCopyMeshFromAssetOptions> @ 14cd92d00

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopyMeshFromAssetOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCopyMeshFromAssetOptions> @ 14cd92d50

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopyMeshFromAssetOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshMirrorOptions> @ 14cd92ec0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshMirrorOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshMirrorOptions> @ 14cd92ed0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshMirrorOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Destruct<FGeometryScriptMeshMirrorOptions> @ 14cd92f20

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshMirrorOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshMirrorOptions> @ 14cd92f70

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshMirrorOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptConvexHullOptions> @ 14cd93050

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptConvexHullOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x80;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptConvexHullOptions> @ 14cd93080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConvexHullOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0x80;
  return;
}

// Destruct<FGeometryScriptConvexHullOptions> @ 14cd930f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptConvexHullOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptConvexHullOptions> @ 14cd93290

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptConvexHullOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRenderCaptureTextures> @ 14cd93620

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptRenderCaptureTextures>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FGeometryScriptRenderCaptureTextures> @ 14cd93650

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRenderCaptureTextures>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FGeometryScriptRenderCaptureTextures> @ 14cd936a0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRenderCaptureTextures>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptIndexList> @ 14cd936b0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptIndexList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryScriptIndexList> @ 14cd936d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptIndexList>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptIndexList> @ 14cd936f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptIndexList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FGeometryScriptRenderCaptureTextures> @ 14cd93700

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRenderCaptureTextures>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[4] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[4]);
      }
      puVar2[4] = puVar1[4];
      *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar1 + 5);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[6]);
      }
      puVar2[6] = puVar1[6];
      *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(puVar1 + 7);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[8] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[8]);
      }
      puVar2[8] = puVar1[8];
      *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(puVar1 + 9);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[10] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[10]);
      }
      puVar2[10] = puVar1[10];
      *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(puVar1 + 0xb);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0xc] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0xc]);
      }
      puVar2[0xc] = puVar1[0xc];
      *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0xe] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0xe]);
      }
      puVar2[0xe] = puVar1[0xe];
      *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)(puVar1 + 0xf);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0x10] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0x10]);
      }
      puVar2[0x10] = puVar1[0x10];
      *(undefined1 *)(puVar2 + 0x11) = *(undefined1 *)(puVar1 + 0x11);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x12;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptIndexList> @ 14cd938d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptIndexList>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptIndexList> @ 14cd93950

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptIndexList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((*(char *)param_1 == *(char *)param_2) &&
     (*(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FGeometryScriptMeshPlaneSliceOptions> @ 14cd93980

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshPlaneSliceOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshPlaneSliceOptions> @ 14cd939c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshPlaneSliceOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptMeshPlaneSliceOptions> @ 14cd939f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshPlaneSliceOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshPlaneSliceOptions> @ 14cd93a00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshPlaneSliceOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeRenderCaptureOptions> @ 14cd93b70

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptBakeRenderCaptureOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 4;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 4;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x10101;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// ConstructForTests<FGeometryScriptBakeRenderCaptureOptions> @ 14cd93bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeRenderCaptureOptions>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 4;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x10101;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FGeometryScriptBakeRenderCaptureOptions> @ 14cd93c20

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptBakeRenderCaptureOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptBakeRenderCaptureOptions> @ 14cd93c80

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeRenderCaptureOptions>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x48);
          }
        }
      }
      *(undefined1 *)&pFVar5[2].Data = *(undefined1 *)&pFVar2[2].Data;
      pFVar5[3].Data = pFVar2[3].Data;
      pFVar5[4].Data = pFVar2[4].Data;
      *(undefined1 *)&pFVar5[5].Data = *(undefined1 *)&pFVar2[5].Data;
      *(undefined1 *)((longlong)&pFVar5[5].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[5].Data + 1);
      *(undefined1 *)((longlong)&pFVar5[5].Data + 2) =
           *(undefined1 *)((longlong)&pFVar2[5].Data + 2);
      *(undefined4 *)((longlong)&pFVar5[5].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[5].Data + 4);
      *(undefined1 *)&pFVar5[6].Data = *(undefined1 *)&pFVar2[6].Data;
      *(undefined1 *)((longlong)&pFVar5[6].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 1);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 2) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 2);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 3) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 3);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 4);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 5) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 5);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 6) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 6);
      *(undefined1 *)((longlong)&pFVar5[6].Data + 7) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 7);
      *(undefined1 *)&pFVar5[7].Data = *(undefined1 *)&pFVar2[7].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptGroupLayer> @ 14cd93de0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptGroupLayer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptGroupLayer> @ 14cd93df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptGroupLayer>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FGeometryScriptGroupLayer> @ 14cd93e10

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptGroupLayer>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptGroupLayer> @ 14cd93e60

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptGroupLayer>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshPlaneCutOptions> @ 14cd93e90

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshPlaneCutOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptMeshPlaneCutOptions> @ 14cd93ec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshPlaneCutOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptMeshPlaneCutOptions> @ 14cd93ee0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshPlaneCutOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshPlaneCutOptions> @ 14cd93f70

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshPlaneCutOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptTransformCollisionOptions> @ 14cd94020

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptTransformCollisionOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptTransformCollisionOptions> @ 14cd94030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTransformCollisionOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptTransformCollisionOptions> @ 14cd94040

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptTransformCollisionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptTransformCollisionOptions> @ 14cd94090

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTransformCollisionOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeSourceMeshOptions> @ 14cd94440

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptBakeSourceMeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptBakeSourceMeshOptions> @ 14cd94490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeSourceMeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FGeometryScriptBakeSourceMeshOptions> @ 14cd944b0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeSourceMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptBakeSourceMeshOptions> @ 14cd94500

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeSourceMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptColorFlags> @ 14cd945d0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptColorFlags>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// ConstructForTests<FGeometryScriptColorFlags> @ 14cd945e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptColorFlags>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// Destruct<FGeometryScriptColorFlags> @ 14cd945f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptColorFlags>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptColorFlags> @ 14cd946c0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptColorFlags>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshSelfUnionOptions> @ 14cd947b0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshSelfUnionOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x10101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  return;
}

// ConstructForTests<FGeometryScriptMeshSelfUnionOptions> @ 14cd947d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshSelfUnionOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  return;
}

// Destruct<FGeometryScriptMeshSelfUnionOptions> @ 14cd947f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshSelfUnionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshSelfUnionOptions> @ 14cd94840

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshSelfUnionOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptConvexHullApproximationOptions> @ 14cd949c0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptConvexHullApproximationOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e19999a;
  return;
}

// ConstructForTests<FGeometryScriptConvexHullApproximationOptions> @ 14cd94aa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConvexHullApproximationOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e19999a;
  return;
}

// Destruct<FGeometryScriptConvexHullApproximationOptions> @ 14cd94ac0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptConvexHullApproximationOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptConvexHullApproximationOptions> @ 14cd94b10

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptConvexHullApproximationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptDisplaceFromTextureOptions> @ 14cd94c10

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptDisplaceFromTextureOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FGeometryScriptDisplaceFromTextureOptions> @ 14cd94c50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDisplaceFromTextureOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f000000;
  return;
}

// Destruct<FGeometryScriptDisplaceFromTextureOptions> @ 14cd94c90

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptDisplaceFromTextureOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptBakeTargetMeshOptions> @ 14cd94ca0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptBakeTargetMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptBakeTargetMeshOptions> @ 14cd94cb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeTargetMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FGeometryScriptBakeTargetMeshOptions> @ 14cd94cc0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeTargetMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptDisplaceFromTextureOptions> @ 14cd94d50

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptDisplaceFromTextureOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptBakeTargetMeshOptions> @ 14cd94da0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeTargetMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptUVTriangle> @ 14cd94dd0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptUVTriangle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FGeometryScriptUVTriangle> @ 14cd94e90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUVTriangle>(void *param_1)

{
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FGeometryScriptUVTriangle> @ 14cd94ec0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptUVTriangle>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptDebugMessage> @ 14cd94ed0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptDebugMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FGeometryScriptDebugMessage> @ 14cd94ef0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDebugMessage>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptUVTriangle> @ 14cd94fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptUVTriangle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptDebugMessage> @ 14cd95010

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptDebugMessage>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd9501c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Construct<FGeometryScriptMeshBooleanOptions> @ 14cd958b0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshBooleanOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined2 *)param_1 = 0x101;
  return;
}

// ConstructForTests<FGeometryScriptMeshBooleanOptions> @ 14cd958d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshBooleanOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FGeometryScriptDebugMessage> @ 14cd95930

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptDebugMessage>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar3 + 1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptMeshBooleanOptions> @ 14cd959e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshBooleanOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshBooleanOptions> @ 14cd95a70

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshBooleanOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptConvexHullSimplificationOptions> @ 14cd95b90

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptConvexHullSimplificationOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc;
  return;
}

// ConstructForTests<FGeometryScriptConvexHullSimplificationOptions> @ 14cd95bc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConvexHullSimplificationOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc;
  return;
}

// Destruct<FGeometryScriptConvexHullSimplificationOptions> @ 14cd95be0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptConvexHullSimplificationOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptConvexHullSimplificationOptions> @ 14cd95cf0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptConvexHullSimplificationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeOutputType> @ 14cd960a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBakeOutputType>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FGeometryScriptBakeOutputType> @ 14cd960d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeOutputType>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptBakeOutputType> @ 14cd96120

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeOutputType>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x78));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x60));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Copy<FGeometryScriptBakeOutputType> @ 14cd962b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeOutputType>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar4 + 8);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x18);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x10);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
      *(longlong *)((longlong)param_1 + 0x18) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x20);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x28);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      *(longlong *)((longlong)param_1 + 0x30) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x38);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x40);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(longlong *)((longlong)param_1 + 0x48) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x50) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x50);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x60);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x58);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      *(longlong *)((longlong)param_1 + 0x60) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x68) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x68);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x78);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x70);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
      *(longlong *)((longlong)param_1 + 0x78) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x80);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptTrianglePoint> @ 14cd96470

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptTrianglePoint>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FGeometryScriptTrianglePoint> @ 14cd964d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTrianglePoint>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FGeometryScriptTrianglePoint> @ 14cd96520

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptTrianglePoint>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptRenderCaptureCamerasForBoxOptions> @ 14cd96530

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptRenderCaptureCamerasForBoxOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FGeometryScriptRenderCaptureCamerasForBoxOptions> @ 14cd965b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRenderCaptureCamerasForBoxOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Copy<FGeometryScriptTrianglePoint> @ 14cd965f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTrianglePoint>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptRenderCaptureCamerasForBoxOptions> @ 14cd96680

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptRenderCaptureCamerasForBoxOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptRenderCaptureCamerasForBoxOptions> @ 14cd96720

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRenderCaptureCamerasForBoxOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x11);
      *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x12);
      *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x13);
      *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x14);
      *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x15);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x18),
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMergeSimpleCollisionOptions> @ 14cd968e0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMergeSimpleCollisionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x4024000000000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x70) = 4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 5;
  *(undefined4 *)((longlong)param_1 + 0x78) = 8;
  return;
}

// ConstructForTests<FGeometryScriptMergeSimpleCollisionOptions> @ 14cd96960

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMergeSimpleCollisionOptions>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x32;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 5;
  *(undefined4 *)((longlong)param_1 + 0x78) = 8;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return;
}

// Destruct<FGeometryScriptMergeSimpleCollisionOptions> @ 14cd969e0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMergeSimpleCollisionOptions>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28));
  return;
}

// Copy<FGeometryScriptMergeSimpleCollisionOptions> @ 14cd96b50

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMergeSimpleCollisionOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x18);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x28);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x20);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(longlong *)((longlong)param_1 + 0x28) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x39);
      *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x3a);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x3c);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x50);
      TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x58),
                 (TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar4 + 0x58));
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x68);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x80);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptIterativeMeshSmoothingOptions> @ 14cd970b0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptIterativeMeshSmoothingOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  *(undefined4 *)param_1 = 10;
  return;
}

// ConstructForTests<FGeometryScriptIterativeMeshSmoothingOptions> @ 14cd970d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptIterativeMeshSmoothingOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 10;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptIterativeMeshSmoothingOptions> @ 14cd970f0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptIterativeMeshSmoothingOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptIterativeMeshSmoothingOptions> @ 14cd97280

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptIterativeMeshSmoothingOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeVertexOptions> @ 14cd97310

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBakeVertexOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40400000;
  return;
}

// ConstructForTests<FGeometryScriptBakeVertexOptions> @ 14cd97370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeVertexOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptBakeVertexOptions> @ 14cd97390

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeVertexOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptCopyBonesFromMeshOptions> @ 14cd97420

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopyBonesFromMeshOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Copy<FGeometryScriptBakeVertexOptions> @ 14cd97430

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeVertexOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FGeometryScriptCopyBonesFromMeshOptions> @ 14cd97470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopyBonesFromMeshOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FGeometryScriptCopyBonesFromMeshOptions> @ 14cd97480

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopyBonesFromMeshOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptTriangle> @ 14cd97570

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptTriangle>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FGeometryScriptTriangle> @ 14cd975e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTriangle>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FGeometryScriptTriangle> @ 14cd97630

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptTriangle>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCopyBonesFromMeshOptions> @ 14cd97650

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopyBonesFromMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRenderCaptureCamera> @ 14cd976d0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRenderCaptureCamera>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FGeometryScriptRenderCaptureCamera> @ 14cd97850

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRenderCaptureCamera>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  return;
}

// Copy<FGeometryScriptTriangle> @ 14cd978b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTriangle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptRenderCaptureCamera> @ 14cd97940

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRenderCaptureCamera>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRenderCaptureCamera> @ 14cd97970

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRenderCaptureCamera>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavigableConvexDecompositionOptions> @ 14cd97f00

void __cdecl
UE::CoreUObject::Private::Construct<FNavigableConvexDecompositionOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4024000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FNavigableConvexDecompositionOptions> @ 14cd97f50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNavigableConvexDecompositionOptions>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FNavigableConvexDecompositionOptions> @ 14cd97f90

void __cdecl UE::CoreUObject::Private::Destruct<FNavigableConvexDecompositionOptions>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FNavigableConvexDecompositionOptions> @ 14cd98110

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigableConvexDecompositionOptions>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x18),
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x18));
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
        iVar3 = *(int *)((longlong)param_2 + 0x30);
        piVar2 = (int *)((longlong)param_1 + 0x34);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
        *(int *)((longlong)param_1 + 0x30) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x38),
                 (TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x38));
      param_2 = (void *)((longlong)param_2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPerlinNoiseOptions> @ 14cd985e0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPerlinNoiseOptions>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FGeometryScriptPerlinNoiseOptions> @ 14cd986b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPerlinNoiseOptions>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FGeometryScriptPerlinNoiseOptions> @ 14cd986f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPerlinNoiseOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPerlinNoiseOptions> @ 14cd98710

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPerlinNoiseOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeTextureOptions> @ 14cd98870

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBakeTextureOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)param_1 = 4;
  *(undefined4 *)((longlong)param_1 + 4) = 4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  return;
}

// ConstructForTests<FGeometryScriptBakeTextureOptions> @ 14cd988a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeTextureOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 4;
  *(undefined4 *)((longlong)param_1 + 4) = 4;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGeometryScriptBakeTextureOptions> @ 14cd988d0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeTextureOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptBoneInfo> @ 14cd98960

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBoneInfo>(void *param_1)

{
  memset(param_1,0,0xe0);
  FGeometryScriptBoneInfo::FGeometryScriptBoneInfo(param_1);
  return;
}

// Copy<FGeometryScriptBakeTextureOptions> @ 14cd98990

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeTextureOptions>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      puVar2[1] = *(undefined1 *)((longlong)pvVar1 + 1);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)pvVar1 + 4);
      puVar2[8] = *(undefined1 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      puVar2[0x18] = *(undefined1 *)((longlong)pvVar1 + 0x18);
      *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
      puVar2[0x20] = *(undefined1 *)((longlong)pvVar1 + 0x20);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x28);
      puVar2 = puVar2 + 0x28;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FGeometryScriptBoneInfo> @ 14cd98a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBoneInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xc0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xd0))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FGeometryScriptBoneInfo> @ 14cd98a90

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBoneInfo>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptSimpleCollisionTriangulationOptions> @ 14cd98ab0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSimpleCollisionTriangulationOptions>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = 4;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 8;
  return;
}

// ConstructForTests<FGeometryScriptSimpleCollisionTriangulationOptions> @ 14cd98ae0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimpleCollisionTriangulationOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 4;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 8;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FGeometryScriptSimpleCollisionTriangulationOptions> @ 14cd98b00

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSimpleCollisionTriangulationOptions>
          (void *param_1)

{
  return;
}

// Copy<FGeometryScriptBoneInfo> @ 14cd98b10

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBoneInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  
  if (param_3 != 0) {
    puVar29 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar29);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      uVar25 = puVar1[0x18];
      uVar26 = puVar1[0x19];
      uVar27 = puVar1[0x1a];
      uVar28 = puVar1[0x1b];
      *puVar29 = *puVar1;
      puVar29[1] = uVar2;
      puVar29[2] = uVar3;
      puVar29[3] = uVar4;
      puVar29[4] = uVar5;
      puVar29[5] = uVar6;
      puVar29[6] = uVar7;
      puVar29[7] = uVar8;
      puVar29[8] = uVar9;
      puVar29[9] = uVar10;
      puVar29[10] = uVar11;
      puVar29[0xb] = uVar12;
      puVar29[0xc] = uVar13;
      puVar29[0xd] = uVar14;
      puVar29[0xe] = uVar15;
      puVar29[0xf] = uVar16;
      puVar29[0x10] = uVar17;
      puVar29[0x11] = uVar18;
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      puVar29[0x14] = uVar21;
      puVar29[0x15] = uVar22;
      puVar29[0x16] = uVar23;
      puVar29[0x17] = uVar24;
      puVar29[0x18] = uVar25;
      puVar29[0x19] = uVar26;
      puVar29[0x1a] = uVar27;
      puVar29[0x1b] = uVar28;
      param_3 = param_3 + -1;
      puVar29 = puVar29 + 0x1c;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptDynamicMeshBVH> @ 14cd98cb0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptDynamicMeshBVH>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGeometryScriptDynamicMeshBVH> @ 14cd98cd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDynamicMeshBVH>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Copy<FGeometryScriptSimpleCollisionTriangulationOptions> @ 14cd98d80

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSimpleCollisionTriangulationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptDynamicMeshBVH> @ 14cd98dc0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptDynamicMeshBVH>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptDynamicMeshBVH> @ 14cd98f00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptDynamicMeshBVH>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      lVar2 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar5);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      uVar3 = *puVar1;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[1];
      *puVar5 = uVar3;
      puVar5[1] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      lVar2 = puVar1[3];
      uVar3 = puVar1[2];
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[3];
      puVar5[2] = uVar3;
      puVar5[3] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptDynamicMeshBVH> @ 14cd99040

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptDynamicMeshBVH>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((*(longlong *)param_1 == *(longlong *)param_2) &&
     (*(longlong *)((longlong)param_1 + 0x10) == *(longlong *)((longlong)param_2 + 0x10))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FComputeNegativeSpaceOptions> @ 14cd99180

void __cdecl UE::CoreUObject::Private::Construct<FComputeNegativeSpaceOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x32;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4024000000000000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FComputeNegativeSpaceOptions> @ 14cd991d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FComputeNegativeSpaceOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4024000000000000;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 8) = 0x32;
  return;
}

// Destruct<FComputeNegativeSpaceOptions> @ 14cd99230

void __cdecl UE::CoreUObject::Private::Destruct<FComputeNegativeSpaceOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FComputeNegativeSpaceOptions> @ 14cd99360

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeNegativeSpaceOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar1 + 2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x18);
      TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x20),
                 (TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 0x20));
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMathWarpOptions> @ 14cd99570

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMathWarpOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined1 **)((longlong)param_1 + 4) = &DAT_3e800000;
  return;
}

// ConstructForTests<FGeometryScriptMathWarpOptions> @ 14cd995d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMathWarpOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined1 **)((longlong)param_1 + 4) = &DAT_3e800000;
  return;
}

// Destruct<FGeometryScriptMathWarpOptions> @ 14cd995f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMathWarpOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMathWarpOptions> @ 14cd99640

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMathWarpOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBakeTypeOptions> @ 14cd99720

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBakeTypeOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryScriptBakeTypeOptions> @ 14cd99780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBakeTypeOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptBakeTypeOptions> @ 14cd997a0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBakeTypeOptions>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Construct<FGeometryScriptTransferBoneWeightsOptions> @ 14cd99870

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptTransferBoneWeightsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(FName *)((longlong)param_1 + 4) = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  *(FName *)((longlong)param_1 + 0xc) = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xbff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Copy<FGeometryScriptBakeTypeOptions> @ 14cd998d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBakeTypeOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FGeometryScriptTransferBoneWeightsOptions> @ 14cd99950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTransferBoneWeightsOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(FName *)((longlong)param_1 + 4) = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(FName *)((longlong)param_1 + 0xc) = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FGeometryScriptTransferBoneWeightsOptions> @ 14cd999b0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptTransferBoneWeightsOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptSphereCovering> @ 14cd99a40

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSphereCovering>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSphereCovering> @ 14cd99a60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSphereCovering>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptSphereCovering> @ 14cd99a70

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSphereCovering>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptTransferBoneWeightsOptions> @ 14cd99a80

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTransferBoneWeightsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptSphereCovering> @ 14cd99b10

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSphereCovering>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptSphereCovering> @ 14cd99bd0

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptSphereCovering>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FNegativeSpaceDirectionalToleranceScale> @ 14cd99d70

void __cdecl
UE::CoreUObject::Private::Construct<FNegativeSpaceDirectionalToleranceScale>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FNegativeSpaceDirectionalToleranceScale> @ 14cd99db0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNegativeSpaceDirectionalToleranceScale>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x4046800000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  return;
}

// Destruct<FNegativeSpaceDirectionalToleranceScale> @ 14cd99df0

void __cdecl
UE::CoreUObject::Private::Destruct<FNegativeSpaceDirectionalToleranceScale>(void *param_1)

{
  return;
}

// Copy<FNegativeSpaceDirectionalToleranceScale> @ 14cd99e90

bool __cdecl
UE::CoreUObject::Private::Copy<FNegativeSpaceDirectionalToleranceScale>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPerlinNoiseLayerOptions> @ 14cd9a0b0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPerlinNoiseLayerOptions>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FGeometryScriptPerlinNoiseLayerOptions> @ 14cd9a0f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPerlinNoiseLayerOptions>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGeometryScriptPerlinNoiseLayerOptions> @ 14cd9a130

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPerlinNoiseLayerOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPerlinNoiseLayerOptions> @ 14cd9a280

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPerlinNoiseLayerOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptGeneralPolygonList> @ 14cd9a460

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptGeneralPolygonList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptGeneralPolygonList> @ 14cd9a470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptGeneralPolygonList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Construct<FGeometryScriptSmoothBoneWeightsOptions> @ 14cd9a480

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSmoothBoneWeightsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
  return;
}

// Destruct<FGeometryScriptGeneralPolygonList> @ 14cd9a4b0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptGeneralPolygonList>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FGeometryScriptSmoothBoneWeightsOptions> @ 14cd9a4c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSmoothBoneWeightsOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
  return;
}

// Destruct<FGeometryScriptSmoothBoneWeightsOptions> @ 14cd9a590

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSmoothBoneWeightsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptGeneralPolygonList> @ 14cd9a720

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptGeneralPolygonList>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptSmoothBoneWeightsOptions> @ 14cd9a7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSmoothBoneWeightsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptGeneralPolygonList> @ 14cd9a810

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptGeneralPolygonList>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Construct<FGeometryScriptSimpleCollision> @ 14cd9a830

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSimpleCollision>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x99) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSimpleCollision> @ 14cd9a8d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimpleCollision>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FGeometryScriptSimpleCollision> @ 14cd9a960

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSimpleCollision>(void *param_1)

{
  DestructItems<FKSkinnedTriangleMeshElem,int>
            (*(FKSkinnedTriangleMeshElem **)((longlong)param_1 + 0x80),
             *(int *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FKMLLevelSetElem,int>
            (*(FKMLLevelSetElem **)((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            (*(FKSkinnedLevelSetElem **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FKLevelSetElem,int>
            (*(FKLevelSetElem **)((longlong)param_1 + 0x50),*(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FKTaperedCapsuleElem,int>
            (*(FKTaperedCapsuleElem **)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48)
            );
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FKConvexElem,int>
            (*(FKConvexElem **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FKSphylElem,int>
            (*(FKSphylElem **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FKBoxElem,int>
            (*(FKBoxElem **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FKSphereElem,int>(*(FKSphereElem **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGeometryScriptSimpleCollision> @ 14cd9a9b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSimpleCollision>
          (void *param_1,void *param_2,int param_3)

{
  FKAggregateGeom *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FKAggregateGeom::FreeRenderInfo(this);
      FKAggregateGeom::CloneAgg
                (this,(FKAggregateGeom *)(((longlong)param_2 - (longlong)param_1) + (longlong)this))
      ;
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSetStaticMeshCollisionOptions> @ 14cd9ac40

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSetStaticMeshCollisionOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptSetStaticMeshCollisionOptions> @ 14cd9ac90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSetStaticMeshCollisionOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptSetStaticMeshCollisionOptions> @ 14cd9ad00

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSetStaticMeshCollisionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSetStaticMeshCollisionOptions> @ 14cd9ad60

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSetStaticMeshCollisionOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptFlareWarpOptions> @ 14cd9b3e0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptFlareWarpOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptFlareWarpOptions> @ 14cd9b400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptFlareWarpOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptFlareWarpOptions> @ 14cd9b420

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptFlareWarpOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptFlareWarpOptions> @ 14cd9b450

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptFlareWarpOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPruneBoneWeightsOptions> @ 14cd9b730

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPruneBoneWeightsOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  return;
}

// ConstructForTests<FGeometryScriptPruneBoneWeightsOptions> @ 14cd9b790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPruneBoneWeightsOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  return;
}

// Destruct<FGeometryScriptPruneBoneWeightsOptions> @ 14cd9b7b0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPruneBoneWeightsOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptSimplePolygon> @ 14cd9b850

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSimplePolygon>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSimplePolygon> @ 14cd9b860

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimplePolygon>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptSimplePolygon> @ 14cd9b870

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSimplePolygon>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptPruneBoneWeightsOptions> @ 14cd9b880

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPruneBoneWeightsOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshWriteLOD> @ 14cd9b930

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshWriteLOD>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptMeshWriteLOD> @ 14cd9b940

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshWriteLOD>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Copy<FGeometryScriptSimplePolygon> @ 14cd9b960

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSimplePolygon>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptMeshWriteLOD> @ 14cd9b9e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshWriteLOD>(void *param_1)

{
  return;
}

// Identical<FGeometryScriptSimplePolygon> @ 14cd9b9f0

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptSimplePolygon>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// Copy<FGeometryScriptMeshWriteLOD> @ 14cd9ba40

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshWriteLOD>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSetSimpleCollisionOptions> @ 14cd9bc00

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSetSimpleCollisionOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptSetSimpleCollisionOptions> @ 14cd9bc10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSetSimpleCollisionOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptSetSimpleCollisionOptions> @ 14cd9bc20

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSetSimpleCollisionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSetSimpleCollisionOptions> @ 14cd9bc40

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSetSimpleCollisionOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptTwistWarpOptions> @ 14cd9bd90

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptTwistWarpOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptTwistWarpOptions> @ 14cd9bdb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTwistWarpOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FGeometryScriptTwistWarpOptions> @ 14cd9bdd0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptTwistWarpOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptTwistWarpOptions> @ 14cd9be20

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTwistWarpOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBoneWeightProfile> @ 14cd9bef0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptBoneWeightProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(FName *)param_1 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  return;
}

// ConstructForTests<FGeometryScriptBoneWeightProfile> @ 14cd9bf90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBoneWeightProfile>(void *param_1)

{
  *(FName *)param_1 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  return;
}

// Destruct<FGeometryScriptBoneWeightProfile> @ 14cd9bff0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptBoneWeightProfile>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptBoneWeightProfile> @ 14cd9c040

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBoneWeightProfile>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshReadLOD> @ 14cd9c090

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshReadLOD>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Construct<FGeometryScriptPolyPath> @ 14cd9c0a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPolyPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryScriptMeshReadLOD> @ 14cd9c0c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshReadLOD>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FGeometryScriptPolyPath> @ 14cd9c0e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolyPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptMeshReadLOD> @ 14cd9c100

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshReadLOD>(void *param_1)

{
  return;
}

// Destruct<FGeometryScriptPolyPath> @ 14cd9c110

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPolyPath>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FGeometryScriptMeshReadLOD> @ 14cd9c1a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshReadLOD>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptPolyPath> @ 14cd9c1d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPolyPath>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      lVar2 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar5);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      uVar3 = *puVar1;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[1];
      *puVar5 = uVar3;
      puVar5[1] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar1 + 2);
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryScriptPolyPath> @ 14cd9c270

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryScriptPolyPath>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((*(char *)((longlong)param_1 + 0x10) == *(char *)((longlong)param_2 + 0x10)) &&
     (*(longlong *)param_1 == *(longlong *)param_2)) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Decay<TObjectPtr<UDynamicMesh>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UDynamicMesh>_>,UDynamicMesh_*> @ 14cd9cad0

UDynamicMesh ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UDynamicMesh>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UDynamicMesh>_>,UDynamicMesh_*>
          (TObjectPtr<UDynamicMesh> *param_1)

{
  return (UDynamicMesh **)param_1;
}

// ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cd9dc00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  FText local_58;
  FTextFormat local_48 [2];
  
  uVar5 = *param_3;
  uVar9 = 0;
  if (1 < uVar5) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_ListUtilityFunctions",
                        L"InvalidListElementComponentIndex",
                        L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar7 = FTextFormat::FTextFormat(local_48,pFVar6,Default);
    local_98.Type = Int;
    local_98.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_98.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_70 = 1;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 2;
    local_98.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar5;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_c8.AllocatorInstance.Data,&local_98,2);
    local_a8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
    local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_b8,&local_a8,&local_c8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_b8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar2.Reference = local_b8.TextData.Reference;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                (local_b8.TextData.Reference,local_res8);
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  iVar10 = 1;
  if (*param_3 < 1) {
    iVar10 = *param_3;
  }
  iVar4 = 0;
  if (0 < iVar10) {
    iVar4 = iVar10;
  }
  *param_3 = iVar4;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,param_1->ArrayNum,Default)
  ;
  uVar11 = uVar9;
  if (0 < param_1->ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      dVar12 = AccessListHelper(param_1,uVar8,*param_3);
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      *(double *)((param_2->AllocatorInstance).Data + uVar11) = dVar12;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < param_1->ArrayNum);
  }
  return;
}

// ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cd9deb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  FText local_58;
  FTextFormat local_48 [2];
  
  uVar5 = *param_3;
  uVar9 = 0;
  if (2 < uVar5) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_ListUtilityFunctions",
                        L"InvalidListElementComponentIndex",
                        L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar7 = FTextFormat::FTextFormat(local_48,pFVar6,Default);
    local_98.Type = Int;
    local_98.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_98.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_70 = 2;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 2;
    local_98.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar5;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_c8.AllocatorInstance.Data,&local_98,2);
    local_a8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
    local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_b8,&local_a8,&local_c8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_b8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar2.Reference = local_b8.TextData.Reference;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                (local_b8.TextData.Reference,local_res8);
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  iVar10 = 2;
  if (*param_3 < 2) {
    iVar10 = *param_3;
  }
  iVar4 = 0;
  if (0 < iVar10) {
    iVar4 = iVar10;
  }
  *param_3 = iVar4;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,param_1->ArrayNum,Default)
  ;
  uVar11 = uVar9;
  if (0 < param_1->ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      dVar12 = AccessListHelper(param_1,uVar8,*param_3);
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      *(double *)((param_2->AllocatorInstance).Data + uVar11) = dVar12;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < param_1->ArrayNum);
  }
  return;
}

// ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14cd9e150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  TRefCountPtr<ITextData> TVar1;
  uint uVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  double dVar10;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [2];
  
  lVar9 = 2;
  iVar7 = 0;
  puVar8 = (uint *)param_3;
  do {
    uVar6 = *puVar8;
    if (2 < uVar6) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                          L"InvalidListElementComponentIndex",
                          L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar4 = FTextFormat::FTextFormat(local_58,pFVar3,Default);
      local_a8.Type = Int;
      local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_80 = 2;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 2;
      local_a8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar6;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_d8.AllocatorInstance.Data,&local_a8,2);
      local_b8.TextFormatData.Object = (pFVar4->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_b8,&local_d8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_c8);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar1.Reference = local_c8.TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res8);
        (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    uVar6 = 2;
    if ((int)*puVar8 < 2) {
      uVar6 = *puVar8;
    }
    uVar2 = 0;
    if (0 < (int)uVar6) {
      uVar2 = uVar6;
    }
    *puVar8 = uVar2;
    puVar8 = puVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,param_1->ArrayNum,Default);
  if (0 < param_1->ArrayNum) {
    do {
      dVar10 = AccessListHelper(param_1,iVar7,*param_3);
      pdVar5 = AccessListHelper(param_2,iVar7,0);
      *pdVar5 = dVar10;
      dVar10 = AccessListHelper(param_1,iVar7,param_3[1]);
      pdVar5 = AccessListHelper(param_2,iVar7,1);
      iVar7 = iVar7 + 1;
      *pdVar5 = dVar10;
    } while (iVar7 < param_1->ArrayNum);
  }
  return;
}

// ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cd9e3f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  float fVar1;
  code *pcVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [2];
  
  uVar6 = *param_3;
  uVar10 = 0;
  if (3 < uVar6) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                        L"InvalidListElementComponentIndex",
                        L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar8 = FTextFormat::FTextFormat(local_58,pFVar7,Default);
    local_a8.Type = Int;
    local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_80 = 3;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 2;
    local_a8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar6;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_d8.AllocatorInstance.Data,&local_a8,2);
    local_b8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
    local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_c8,&local_b8,&local_d8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_c8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar3.Reference = local_c8.TextData.Reference;
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                (local_c8.TextData.Reference,local_res8);
      (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))(local_c8.TextData.Reference);
      }
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  iVar12 = 3;
  if (*param_3 < 3) {
    iVar12 = *param_3;
  }
  iVar5 = 0;
  if (0 < iVar12) {
    iVar5 = iVar12;
  }
  *param_3 = iVar5;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,param_1->ArrayNum,Default)
  ;
  iVar12 = param_1->ArrayNum;
  uVar11 = uVar10;
  uVar13 = uVar10;
  if (0 < iVar12) {
    do {
      iVar5 = *param_3;
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar12) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + (uVar13 + (longlong)iVar5) * 4);
      uVar6 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      *(double *)((param_2->AllocatorInstance).Data + uVar11) = (double)fVar1;
      iVar12 = param_1->ArrayNum;
      uVar11 = uVar11 + 8;
      uVar13 = uVar13 + 4;
    } while ((int)(uVar9 + 1) < iVar12);
  }
  return;
}

// ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14cd9e6e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  FText local_58;
  FTextFormat local_48 [2];
  
  lVar14 = 3;
  puVar13 = (uint *)param_3;
  do {
    uVar11 = *puVar13;
    if (3 < uVar11) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"UGeometryScriptLibrary_ListUtilityFunctions",
                          L"InvalidListElementComponentIndex",
                          L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar8 = FTextFormat::FTextFormat(local_48,pFVar7,Default);
      local_70 = 3;
      local_98.Type = Int;
      local_98.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_98.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_78 = 0;
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 2;
      local_98.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar11;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_c8.AllocatorInstance.Data,&local_98,2);
      local_a8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
      local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_b8,&local_a8,&local_c8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
      if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_b8);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar4.Reference = local_b8.TextData.Reference;
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                  (local_b8.TextData.Reference,local_res8);
        (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
    uVar11 = 3;
    if ((int)*puVar13 < 3) {
      uVar11 = *puVar13;
    }
    uVar6 = 0;
    if (0 < (int)uVar11) {
      uVar6 = uVar11;
    }
    *puVar13 = uVar6;
    puVar13 = puVar13 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,param_1->ArrayNum,Default);
  iVar10 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      iVar2 = *param_3;
      uVar12 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar10) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + (iVar2 + lVar14) * 4);
      pdVar9 = AccessListHelper(param_2,uVar11,0);
      *pdVar9 = (double)fVar1;
      iVar10 = param_3[1];
      uVar6 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar14) * 4);
      pdVar9 = AccessListHelper(param_2,uVar11,1);
      *pdVar9 = (double)fVar1;
      iVar10 = param_3[2];
      uVar6 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + (lVar14 + iVar10) * 4);
      pdVar9 = AccessListHelper(param_2,uVar11,2);
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 4;
      *pdVar9 = (double)fVar1;
      iVar10 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cda1e10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,FLinearColor *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  undefined1 local_d8 [8];
  FTextFormat local_d0;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  FText local_78;
  FTextFormat local_68 [2];
  
  uVar12 = *param_4;
  uVar14 = 0;
  if (3 < uVar12) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_ListUtilityFunctions",
                        L"InvalidListElementComponentIndex",
                        L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar10 = FTextFormat::FTextFormat(local_68,pFVar9,Default);
    local_b8.Type = Int;
    local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_98 = 0;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_90 = 3;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 2;
    local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar12;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_f8.AllocatorInstance.Data,&local_b8,2);
    local_d0.TextFormatData.Object = (pFVar10->TextFormatData).Object;
    local_d0.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_d0.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d0.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_e8,&local_d0,&local_f8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_e8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar6.Reference = local_e8.TextData.Reference;
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 8))
                (local_e8.TextData.Reference,local_d8);
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  iVar13 = 3;
  if (*param_4 < 3) {
    iVar13 = *param_4;
  }
  iVar8 = 0;
  if (0 < iVar13) {
    iVar8 = iVar13;
  }
  *param_4 = iVar8;
  uVar12 = param_2->ArrayNum;
  uVar15 = param_1->ArrayNum;
  if (param_1->ArrayNum < (int)uVar12) {
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,uVar12,Default);
    uVar12 = uVar15;
  }
  lVar16 = (longlong)(int)uVar12;
  if (0 < (int)uVar12) {
    lVar17 = 0;
    do {
      iVar13 = *param_4;
      uVar15 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + lVar17 * 8);
      uVar15 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar17 * 4;
      lVar17 = lVar17 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (iVar13 + lVar18) * 4) = (float)dVar2;
    } while (lVar17 < lVar16);
  }
  if ((int)uVar12 < param_2->ArrayNum) {
    lVar17 = lVar16 * 4;
    lVar18 = lVar16 * 8;
    lVar16 = lVar16 << 4;
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar4 = *(undefined8 *)&param_3->field0_0x0;
      uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      uVar14 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar16;
      *(undefined8 *)pFVar1 = uVar4;
      *(undefined8 *)(pFVar1 + 8) = uVar5;
      iVar13 = *param_4;
      uVar14 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + lVar18);
      uVar14 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar11 = iVar13 + lVar17;
      lVar16 = lVar16 + 0x10;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 4;
      *(float *)((param_1->AllocatorInstance).Data + lVar11 * 4) = (float)dVar2;
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14cda2270

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          FLinearColor *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  uint local_e8;
  undefined1 local_e4 [4];
  FText local_e0;
  FTextFormat local_d0;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  FText local_78;
  FTextFormat local_68 [2];
  
  lVar14 = 0;
  do {
    iVar10 = param_4[lVar14];
    if ((iVar10 < 0) || (3 < iVar10)) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"UGeometryScriptLibrary_ListUtilityFunctions",
                          L"InvalidListElementComponentIndex",
                          L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar9 = FTextFormat::FTextFormat(local_68,pFVar8,Default);
      local_90 = 3;
      local_b8.Type = Int;
      local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_98 = 0;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 2;
      local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar10;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_b8,2);
      local_d0.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_d0.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_d0.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d0.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_e0,&local_d0,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_e0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar5.Reference = local_e0.TextData.Reference;
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 8))
                  (local_e0.TextData.Reference,local_e4);
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))(local_e0.TextData.Reference);
        }
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    iVar10 = 3;
    if (param_4[lVar14] < 3) {
      iVar10 = param_4[lVar14];
    }
    iVar7 = 0;
    if (0 < iVar10) {
      iVar7 = iVar10;
    }
    param_4[lVar14] = iVar7;
    lVar14 = lVar14 + 1;
  } while (lVar14 < 2);
  uVar11 = param_2->ArrayNum;
  uVar12 = param_1->ArrayNum;
  local_e8 = uVar11;
  if (param_1->ArrayNum < (int)uVar11) {
    local_e8 = uVar12;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,uVar11,Default);
    uVar11 = uVar12;
  }
  uVar12 = 0;
  lVar14 = (longlong)(int)uVar11;
  if (0 < (int)uVar11) {
    lVar15 = 0;
    do {
      iVar10 = *param_4;
      dVar17 = AccessListHelper(param_2,uVar12,0);
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar16 = lVar15 * 4;
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar16) * 4) = (float)dVar17;
      iVar10 = param_4[1];
      dVar17 = AccessListHelper(param_2,uVar12,1);
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar16) * 4) = (float)dVar17;
      uVar11 = local_e8;
    } while (lVar15 < lVar14);
  }
  if ((int)uVar11 < param_2->ArrayNum) {
    lVar15 = lVar14 * 4;
    lVar14 = lVar14 << 4;
    do {
      uVar3 = *(undefined8 *)&param_3->field0_0x0;
      uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      uVar13 = ~uVar11 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar14;
      *(undefined8 *)pFVar1 = uVar3;
      *(undefined8 *)(pFVar1 + 8) = uVar4;
      iVar10 = *param_4;
      dVar17 = AccessListHelper(param_2,uVar11,0);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar15) * 4) = (float)dVar17;
      iVar10 = param_4[1];
      dVar17 = AccessListHelper(param_2,uVar11,1);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar16 = iVar10 + lVar15;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x10;
      lVar15 = lVar15 + 4;
      *(float *)((param_1->AllocatorInstance).Data + lVar16 * 4) = (float)dVar17;
    } while ((int)uVar11 < param_2->ArrayNum);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14cda2760

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          FLinearColor *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  undefined1 local_d4 [4];
  FText local_d0;
  FTextFormat local_c0;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [2];
  
  uVar14 = 0;
  uVar13 = uVar14;
  do {
    iVar10 = param_4[uVar13];
    if ((iVar10 < 0) || (3 < iVar10)) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                          L"InvalidListElementComponentIndex",
                          L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar9 = FTextFormat::FTextFormat(local_58,pFVar8,Default);
      local_a8.Type = Int;
      local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_80 = 3;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 2;
      local_a8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar10;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_e8.AllocatorInstance.Data,&local_a8,2);
      local_c0.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_c0.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_c0.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c0.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_d0,&local_c0,&local_e8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_d0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar5.Reference = local_d0.TextData.Reference;
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 8))
                  (local_d0.TextData.Reference,local_d4);
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))(local_d0.TextData.Reference);
        }
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    iVar10 = 3;
    if (param_4[uVar13] < 3) {
      iVar10 = param_4[uVar13];
    }
    iVar7 = 0;
    if (0 < iVar10) {
      iVar7 = iVar10;
    }
    param_4[uVar13] = iVar7;
    uVar13 = uVar13 + 1;
  } while ((longlong)uVar13 < 3);
  uVar11 = param_2->ArrayNum;
  uVar12 = param_1->ArrayNum;
  local_d8 = uVar11;
  if (param_1->ArrayNum < (int)uVar11) {
    local_d8 = uVar12;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,uVar11,Default);
    uVar11 = uVar12;
  }
  lVar15 = (longlong)(int)uVar11;
  if (0 < (int)uVar11) {
    lVar17 = 0;
    do {
      iVar10 = *param_4;
      uVar12 = (uint)uVar14;
      dVar19 = AccessListHelper(param_2,uVar12,0);
      uVar16 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_1->AllocatorInstance).Data + ((longlong)iVar10 + lVar17 * 4) * 4) =
           (float)dVar19;
      iVar10 = param_4[1];
      dVar19 = AccessListHelper(param_2,uVar12,1);
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_1->AllocatorInstance).Data + ((longlong)iVar10 + lVar17 * 4) * 4) =
           (float)dVar19;
      iVar10 = param_4[2];
      dVar19 = AccessListHelper(param_2,uVar12,2);
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar18 = lVar17 * 4;
      uVar14 = (ulonglong)(uVar12 + 1);
      lVar17 = lVar17 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar18) * 4) = (float)dVar19;
      uVar11 = local_d8;
    } while (lVar17 < lVar15);
  }
  if ((int)uVar11 < param_2->ArrayNum) {
    lVar17 = lVar15 * 4;
    lVar15 = lVar15 << 4;
    do {
      uVar16 = ~uVar11 >> 0x1f;
      uVar3 = *(undefined8 *)&param_3->field0_0x0;
      uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar15;
      *(undefined8 *)pFVar1 = uVar3;
      *(undefined8 *)(pFVar1 + 8) = uVar4;
      iVar10 = *param_4;
      dVar19 = AccessListHelper(param_2,uVar11,0);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar17) * 4) = (float)dVar19;
      iVar10 = param_4[1];
      dVar19 = AccessListHelper(param_2,uVar11,1);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_1->AllocatorInstance).Data + (iVar10 + lVar17) * 4) = (float)dVar19;
      iVar10 = param_4[2];
      dVar19 = AccessListHelper(param_2,uVar11,2);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar18 = iVar10 + lVar17;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 0x10;
      lVar17 = lVar17 + 4;
      *(float *)((param_1->AllocatorInstance).Data + lVar18 * 4) = (float)dVar19;
    } while ((int)uVar11 < param_2->ArrayNum);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cda2d30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,TVector2<double> *param_3,int *param_4
          )

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  int *piVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  double *pdVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 local_res10 [8];
  TVector2<double> *local_res18;
  int *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  FText local_78;
  FTextFormat local_68 [2];
  
  uVar13 = *param_4;
  uVar17 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (1 < uVar13) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"UGeometryScriptLibrary_ListUtilityFunctions",
                         L"InvalidListElementComponentIndex",
                         L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar11 = FTextFormat::FTextFormat(local_68,pFVar10,Default);
    local_b8.Type = Int;
    local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_98 = 0;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_90 = 1;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 2;
    local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar13;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_e8.AllocatorInstance.Data,&local_b8,2);
    local_c8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
    local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_d8,&local_c8,&local_e8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_d8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar6.Reference = local_d8.TextData.Reference;
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                (local_d8.TextData.Reference,local_res10);
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  iVar15 = 1;
  if (*param_4 < 1) {
    iVar15 = *param_4;
  }
  iVar8 = 0;
  if (0 < iVar15) {
    iVar8 = iVar15;
  }
  *param_4 = iVar8;
  uVar13 = param_2->ArrayNum;
  uVar9 = param_1->ArrayNum;
  if (param_1->ArrayNum < (int)uVar13) {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,uVar13,Default);
    uVar13 = uVar9;
  }
  piVar5 = local_res20;
  lVar14 = (longlong)(int)uVar13;
  uVar18 = uVar17;
  if (0 < (int)uVar13) {
    do {
      iVar15 = *piVar5;
      uVar16 = (uint)uVar17;
      uVar9 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + uVar18 * 8);
      pdVar12 = AccessListHelper(param_1,uVar16,iVar15);
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar18 = uVar18 + 1;
      *pdVar12 = dVar2;
      param_4 = local_res20;
    } while ((longlong)uVar18 < lVar14);
  }
  if ((int)uVar13 < param_2->ArrayNum) {
    lVar19 = lVar14 * 8;
    lVar14 = lVar14 << 4;
    do {
      dVar2 = (local_res18->field0_0x0)._s_0.X;
      dVar4 = (local_res18->field0_0x0)._s_0.Y;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + lVar14;
      *(double *)pFVar1 = dVar2;
      *(double *)(pFVar1 + 8) = dVar4;
      iVar15 = *param_4;
      uVar9 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + lVar19);
      pdVar12 = AccessListHelper(param_1,uVar13,iVar15);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
      lVar19 = lVar19 + 8;
      *pdVar12 = dVar2;
      param_4 = local_res20;
    } while ((int)uVar13 < param_2->ArrayNum);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cda30e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  TRefCountPtr<ITextData> TVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  double *pdVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 local_res10 [8];
  TVector<double> *local_res18;
  int *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  FText local_88;
  FTextFormat local_78 [3];
  
  uVar15 = *param_4;
  uVar17 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (2 < uVar15) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"UGeometryScriptLibrary_ListUtilityFunctions",
                         L"InvalidListElementComponentIndex",
                         L"Component Index {0} will be clamped to valid range (0-{1})");
    pFVar13 = FTextFormat::FTextFormat(local_78,pFVar12,Default);
    local_c8.Type = Int;
    local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_c8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_a8 = 0;
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_a0 = 2;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 2;
    local_c8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar15;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_f8.AllocatorInstance.Data,&local_c8,2);
    local_d8.TextFormatData.Object = (pFVar13->TextFormatData).Object;
    local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_e8,&local_d8,&local_f8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogGeometry._0_1_) {
      FText::ToString(&local_e8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    TVar8.Reference = local_e8.TextData.Reference;
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 8))
                (local_e8.TextData.Reference,local_res10);
      (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  iVar16 = 2;
  if (*param_4 < 2) {
    iVar16 = *param_4;
  }
  iVar10 = 0;
  if (0 < iVar16) {
    iVar10 = iVar16;
  }
  *param_4 = iVar10;
  uVar15 = param_2->ArrayNum;
  uVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum < (int)uVar15) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,uVar15,Default);
    uVar15 = uVar11;
  }
  piVar7 = local_res20;
  lVar18 = (longlong)(int)uVar15;
  if (0 < (int)uVar15) {
    lVar19 = 0;
    do {
      iVar16 = *piVar7;
      uVar11 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + lVar19 * 8);
      pdVar14 = AccessListHelper(param_1,uVar17,iVar16);
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 1;
      *pdVar14 = dVar2;
    } while (lVar19 < lVar18);
  }
  if ((int)uVar15 < param_2->ArrayNum) {
    lVar19 = lVar18 * 8;
    lVar18 = lVar18 * 0x18;
    do {
      dVar5 = (local_res18->field0_0x0)._s_0.X;
      dVar6 = (local_res18->field0_0x0)._s_0.Y;
      dVar2 = (local_res18->field0_0x0)._s_0.Z;
      uVar17 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar3 + lVar18;
      *(double *)pFVar1 = dVar5;
      *(double *)(pFVar1 + 8) = dVar6;
      *(double *)(pFVar3 + lVar18 + 0x10) = dVar2;
      iVar16 = *local_res20;
      uVar17 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar2 = *(double *)((param_2->AllocatorInstance).Data + lVar19);
      pdVar14 = AccessListHelper(param_1,uVar15,iVar16);
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 0x18;
      lVar19 = lVar19 + 8;
      *pdVar14 = dVar2;
    } while ((int)uVar15 < param_2->ArrayNum);
  }
  return;
}

// SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14cda34a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::ListUtilityFunctionsLocals::
SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [3];
  
  lVar15 = 0;
  do {
    iVar13 = param_4[lVar15];
    if ((iVar13 < 0) || (2 < iVar13)) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                           L"InvalidListElementComponentIndex",
                           L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar11 = FTextFormat::FTextFormat(local_58,pFVar10,Default);
      local_80 = 2;
      local_a8.Type = Int;
      local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 2;
      local_a8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar13;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_d8.AllocatorInstance.Data,&local_a8,2);
      local_b8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_b8,&local_d8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_c8);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar6.Reference = local_c8.TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res8);
        (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))(local_c8.TextData.Reference);
        }
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    iVar13 = 2;
    if (param_4[lVar15] < 2) {
      iVar13 = param_4[lVar15];
    }
    iVar8 = 0;
    if (0 < iVar13) {
      iVar8 = iVar13;
    }
    param_4[lVar15] = iVar8;
    lVar15 = lVar15 + 1;
  } while (lVar15 < 2);
  uVar14 = param_2->ArrayNum;
  uVar9 = param_1->ArrayNum;
  if (param_1->ArrayNum < (int)uVar14) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_1,uVar14,Default);
    uVar14 = uVar9;
  }
  iVar13 = 0;
  if (0 < (int)uVar14) {
    do {
      iVar8 = *param_4;
      dVar16 = AccessListHelper(param_2,iVar13,0);
      pdVar12 = AccessListHelper(param_1,iVar13,iVar8);
      *pdVar12 = dVar16;
      iVar8 = param_4[1];
      dVar16 = AccessListHelper(param_2,iVar13,1);
      pdVar12 = AccessListHelper(param_1,iVar13,iVar8);
      iVar13 = iVar13 + 1;
      *pdVar12 = dVar16;
    } while (iVar13 < (int)uVar14);
  }
  if ((int)uVar14 < param_2->ArrayNum) {
    lVar15 = (longlong)(int)uVar14 * 0x18;
    do {
      dVar4 = (param_3->field0_0x0)._s_0.X;
      dVar5 = (param_3->field0_0x0)._s_0.Y;
      dVar16 = (param_3->field0_0x0)._s_0.Z;
      uVar9 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar15;
      *(double *)pFVar1 = dVar4;
      *(double *)(pFVar1 + 8) = dVar5;
      *(double *)(pFVar2 + lVar15 + 0x10) = dVar16;
      iVar13 = *param_4;
      dVar16 = AccessListHelper(param_2,uVar14,0);
      pdVar12 = AccessListHelper(param_1,uVar14,iVar13);
      *pdVar12 = dVar16;
      iVar13 = param_4[1];
      dVar16 = AccessListHelper(param_2,uVar14,1);
      pdVar12 = AccessListHelper(param_1,uVar14,iVar13);
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x18;
      *pdVar12 = dVar16;
    } while ((int)uVar14 < param_2->ArrayNum);
  }
  return;
}

// SortByValuesArrayHelper<UDynamicMesh_*,float> @ 14cda39f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,bool param_3,EArraySortOrder param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res10;
  FIdentityFunctor local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> *local_58;
  TArray<float,TSizedDefaultAllocator<32>_> *local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  iVar2 = param_2->ArrayNum;
  lVar10 = (longlong)iVar2;
  if ((param_1->ArrayNum != iVar2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToSort.Num() == NumValues",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshDecompositionFunctions.cpp"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar2,Default);
  uVar9 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_48.AllocatorInstance.Data + lVar11 * 4) = uVar9;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar10);
  }
  if (param_3) {
    if (param_4 == Ascending) {
      local_58 = param_2;
      AlgoImpl::
      StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>_::__l24::<lambda_3>_>_>
                ((int *)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res18,
                 (<lambda_3> *)&local_58);
    }
    else {
      local_50 = param_2;
      AlgoImpl::
      StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>_::__l26::<lambda_4>_>_>
                ((int *)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res18,
                 (<lambda_4> *)&local_50);
    }
  }
  else if (param_4 == Ascending) {
    local_res8 = param_2;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>_::__l17::<lambda_1>_>_>
              ((int *)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res18,
               (<lambda_1> *)&local_res8);
  }
  else {
    local_res10 = param_2;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>_::__l19::<lambda_2>_>_>
              ((int *)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res18,
               (<lambda_2> *)&local_res10);
  }
  uVar9 = 0;
  if (0 < lVar10) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      for (uVar7 = *(uint *)(local_48.AllocatorInstance.Data + lVar11 * 4); (int)uVar7 < (int)uVar9;
          uVar7 = *(uint *)(local_48.AllocatorInstance.Data + (longlong)(int)uVar7 * 4)) {
        uVar8 = 0;
        if ((int)uVar7 < local_48.ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar7 != uVar9) {
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
        uVar7 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        uVar4 = *(undefined8 *)(pFVar3 + lVar11 * 8);
        *(undefined8 *)(pFVar3 + lVar11 * 8) = *(undefined8 *)pFVar1;
        *(undefined8 *)pFVar1 = uVar4;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar10);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptScalarList> @ 14cda4bb0

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptScalarList>
          (FGeometryScriptColorList *param_1,FGeometryScriptScalarList *param_2)

{
  if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    return false;
  }
  if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptColorList::Reset(param_1,0);
  }
  return true;
}

// ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptUVList> @ 14cda4be0

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptUVList>
          (FGeometryScriptColorList *param_1,FGeometryScriptUVList *param_2)

{
  if ((param_2->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    return false;
  }
  if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptColorList::Reset(param_1,0);
  }
  return true;
}

// ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptVectorList> @ 14cda4c10

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptColorList,FGeometryScriptVectorList>
          (FGeometryScriptColorList *param_1,FGeometryScriptVectorList *param_2)

{
  if ((param_2->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    return false;
  }
  if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptColorList::Reset(param_1,0);
  }
  return true;
}

// ValidateListsToSetAFromB<FGeometryScriptUVList,FGeometryScriptScalarList> @ 14cda4c40

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptUVList,FGeometryScriptScalarList>
          (FGeometryScriptUVList *param_1,FGeometryScriptScalarList *param_2)

{
  if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    return false;
  }
  if ((param_1->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptUVList::Reset(param_1,0);
  }
  return true;
}

// ValidateListsToSetAFromB<FGeometryScriptVectorList,FGeometryScriptScalarList> @ 14cda4c70

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptVectorList,FGeometryScriptScalarList>
          (FGeometryScriptVectorList *param_1,FGeometryScriptScalarList *param_2)

{
  if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    return false;
  }
  if ((param_1->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FGeometryScriptVectorList::Reset(param_1,0);
  }
  return true;
}

// ValidateListsToSetAFromB<FGeometryScriptVectorList,FGeometryScriptUVList> @ 14cda4ca0

bool __cdecl
UE::ListUtilityFunctionsLocals::
ValidateListsToSetAFromB<FGeometryScriptVectorList,FGeometryScriptUVList>
          (FGeometryScriptVectorList *param_1,FGeometryScriptUVList *param_2)

{
  if ((param_2->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    return false;
  }
  if ((param_1->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FGeometryScriptVectorList::Reset(param_1,0);
  }
  return true;
}

// ValuePerMeshArrayHelper<float> @ 14cda4cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float local_res8 [2];
  float *local_68;
  TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *local_60;
  code *local_58;
  float **local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,param_1->ArrayNum,Default);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = uVar9;
      }
      local_res8[0] = param_3;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar5;
      }
      if (*(longlong *)((param_1->AllocatorInstance).Data + lVar10) != 0) {
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar5;
        }
        local_68 = local_res8;
        local_50 = &local_68;
        local_58 = Core::Private::Function::
                   TFunctionRefCaller<`UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>'::__l7::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                   ::Call;
        local_60 = param_2;
        UDynamicMesh::ProcessMesh
                  (*(UDynamicMesh **)((param_1->AllocatorInstance).Data + lVar10),
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
      }
      fVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)uVar7 < __return_storage_ptr__->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar5;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = fVar2;
      lVar8 = lVar8 + 4;
      iVar6 = param_1->ArrayNum;
    } while ((int)uVar7 < iVar6);
  }
  return __return_storage_ptr__;
}

// operator() @ 14cdb9a20

bool __thiscall
`UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>'::__l17::
<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  fVar1 = *(float *)(*plVar2 + (longlong)param_1 * 4);
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return fVar1 < *(float *)(*plVar2 + (longlong)param_2 * 4);
}

// operator() @ 14cdbbbf0

bool __thiscall
`UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>'::__l19::
<lambda_2>::operator()(void *this,int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  fVar2 = *(float *)(*plVar3 + (longlong)param_1 * 4);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pfVar1 = (float *)(*plVar3 + (longlong)param_2 * 4);
  return *pfVar1 <= fVar2 && fVar2 != *pfVar1;
}

// operator() @ 14cdbc030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_398 [32];
  undefined1 local_368 [8];
  FDynamicMeshEditor local_360;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_358;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_328;
  FMeshIndexMappings local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  if (**(char **)this == '\0') {
    bVar4 = false;
  }
  else {
    if (**(char **)this != '\x02') goto LAB_14cdbc085;
    bVar4 = true;
  }
  UE::Geometry::FDynamicMesh3::EnableMatchingAttributes
            (param_1,*(FDynamicMesh3 **)((longlong)this + 0x10),false,bVar4);
LAB_14cdbc085:
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2f8);
  iVar5 = 0;
  local_360.Mesh = param_1;
  if (0 < *(int *)((longlong)this + 0x18)) {
    do {
      local_358._0_8_ = 0;
      local_358._40_8_ = 0;
      local_328._0_8_ = 0;
      local_328._40_8_ = 0;
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (&local_360,*(FDynamicMesh3 **)((longlong)this + 0x10),&local_2f8,&local_328,
                 &local_358,false);
      if (iVar5 < *(int *)((longlong)this + 0x18)) {
        MeshTransforms::ApplyTransform
                  (*(FDynamicMesh3 **)((longlong)this + 0x10),
                   *(TTransformSRT3<double> **)((longlong)this + 8),true,All);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.VertexMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.TriangleMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.TriangleMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.GroupMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.GroupMap.ReverseMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.ColorMap);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_2f8.ColorMap.ReverseMap);
        iVar1 = local_2f8.UVMaps.ArrayNum;
        pTVar3 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)(local_2f8.UVMaps.AllocatorInstance.Data + (longlong)iVar1 * 0xa8);
        FVar2.Data = local_2f8.UVMaps.AllocatorInstance.Data;
        while( true ) {
          if (local_2f8.UVMaps.ArrayNum != iVar1) {
            `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_368);
          }
          if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              FVar2.Data == pTVar3) break;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)FVar2.Data);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)((longlong)FVar2.Data + 0x50));
          FVar2.Data = (FScriptContainerElement *)
                       &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)((longlong)FVar2.Data + 0xa0))->Elements).field_0x8;
        }
        iVar1 = local_2f8.NormalMaps.ArrayNum;
        pTVar3 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)(local_2f8.NormalMaps.AllocatorInstance.Data + (longlong)iVar1 * 0xa8);
        FVar2.Data = local_2f8.NormalMaps.AllocatorInstance.Data;
        while( true ) {
          if (local_2f8.NormalMaps.ArrayNum != iVar1) {
            `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_368);
          }
          if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              FVar2.Data == pTVar3) break;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)FVar2.Data);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)((longlong)FVar2.Data + 0x50));
          FVar2.Data = (FScriptContainerElement *)
                       &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)((longlong)FVar2.Data + 0xa0))->Elements).field_0x8;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)this + 0x18));
  }
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2f8);
  return;
}

// operator() @ 14cdbc940

bool __thiscall
`UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>'::__l24::
<lambda_3>::operator()(void *this,int param_1,int param_2)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  fVar1 = *(float *)(*plVar2 + (longlong)param_1 * 4);
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return fVar1 < *(float *)(*plVar2 + (longlong)param_2 * 4);
}

// operator() @ 14cdbcd00

bool __thiscall
`UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>'::__l26::
<lambda_4>::operator()(void *this,int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  fVar2 = *(float *)(*plVar3 + (longlong)param_1 * 4);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pfVar1 = (float *)(*plVar3 + (longlong)param_2 * 4);
  return *pfVar1 <= fVar2 && fVar2 != *pfVar1;
}

// AccessListHelper @ 14cdbefc0

double * __cdecl
UE::ListUtilityFunctionsLocals::AccessListHelper
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar5 = (double *)(*pcVar2)();
      return pdVar5;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (1 < (uint)param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar5 = (double *)(*pcVar2)();
      return pdVar5;
    }
  }
  return (double *)(pFVar1 + (longlong)param_3 * 8 + (longlong)param_2 * 0x10);
}

// AccessListHelper @ 14cdbf070

double * __cdecl
UE::ListUtilityFunctionsLocals::AccessListHelper
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar5 = (double *)(*pcVar2)();
      return pdVar5;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (2 < (uint)param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar5 = (double *)(*pcVar2)();
      return pdVar5;
    }
  }
  return (double *)(pFVar1 + (longlong)param_3 * 8 + (longlong)param_2 * 0x18);
}

// AccessListHelper @ 14cdbf130

double __cdecl
UE::ListUtilityFunctionsLocals::AccessListHelper
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (1 < (uint)param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  return *(double *)(pFVar1 + (longlong)param_3 * 8 + (longlong)param_2 * 0x10);
}

// AccessListHelper @ 14cdbf1e0

double __cdecl
UE::ListUtilityFunctionsLocals::AccessListHelper
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  uVar4 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (2 < (uint)param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  return *(double *)(pFVar1 + (longlong)param_3 * 8 + (longlong)param_2 * 0x18);
}

// AppendError @ 14cdbfcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Geometry::AppendError
          (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *param_1,
          EGeometryScriptErrorType param_2,FText *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  ITextData *local_20;
  uint local_18;
  
  if (1 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_3);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_20 = (param_3->TextData).Reference;
  local_28 = (FScriptContainerElement)0x0;
  local_27 = (FScriptContainerElement)param_2;
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 8))(local_20,local_res10);
  }
  local_18 = param_3->Flags;
  if (param_1 != (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
    *pFVar1 = local_28;
    pFVar1[1] = local_27;
    *(undefined8 *)(pFVar1 + 8) = 0;
    *(ITextData **)(pFVar1 + 8) = local_20;
    if (local_20 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20 + 8))(local_20,local_res8);
    }
    *(uint *)(pFVar1 + 0x10) = local_18;
  }
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 0x10))();
  }
  return;
}

// AppendError @ 14cdbfe50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Geometry::AppendError
          (UGeometryScriptDebug *param_1,EGeometryScriptErrorType param_2,FText *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  ITextData *local_20;
  uint local_18;
  
  if (1 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_3);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_20 = (param_3->TextData).Reference;
  local_28 = (FScriptContainerElement)0x0;
  local_27 = (FScriptContainerElement)param_2;
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 8))(local_20,local_res10);
  }
  local_18 = param_3->Flags;
  if (param_1 != (UGeometryScriptDebug *)0x0) {
    pFVar2 = (param_1->Messages).AllocatorInstance.Data;
    if (((pFVar2 <= &local_28) &&
        (&local_28 < pFVar2 + (longlong)(param_1->Messages).ArrayMax * 0x18)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (param_1->Messages).ArrayNum;
    piVar1 = &(param_1->Messages).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Messages).AllocatorInstance,piVar1);
    }
    (param_1->Messages).ArrayNum = iVar5 + 1;
    pFVar2 = (param_1->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
    *pFVar2 = local_28;
    pFVar2[1] = local_27;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(ITextData **)(pFVar2 + 8) = local_20;
    if (local_20 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20 + 8))(local_20,local_res8);
    }
    *(uint *)(pFVar2 + 0x10) = local_18;
  }
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 0x10))();
  }
  return;
}

// AppendMaterials @ 14cdbffe0

void __cdecl
UE::Private::AppendHelpers::AppendMaterials
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int local_48 [2];
  longlong local_40;
  
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=(param_5,param_1);
  iVar5 = param_2->ArrayNum;
  local_48[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(param_4,local_48,iVar5);
  uVar7 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    local_40 = (longlong)iVar5;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      if (param_3) {
        uVar4 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (pFVar1 != pFVar1 + (longlong)param_1->ArrayNum * 8) {
          pFVar6 = pFVar1;
          do {
            if (*(longlong *)pFVar6 == *(longlong *)((param_2->AllocatorInstance).Data + lVar9 * 8))
            {
              iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
              if (iVar5 != -1) {
                uVar4 = 0;
                if ((int)uVar7 < param_4->ArrayNum) {
                  uVar4 = uVar8;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                goto LAB_14cdc026b;
              }
              break;
            }
            pFVar6 = pFVar6 + 8;
          } while (pFVar6 != pFVar1 + (longlong)param_1->ArrayNum * 8);
        }
      }
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (param_5->AllocatorInstance).Data;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar9 * 8;
      if (((pFVar6 <= pFVar1) && (pFVar1 < pFVar6 + (longlong)param_5->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_5->ArrayNum;
      if (iVar5 == param_5->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      pFVar6 = (param_5->AllocatorInstance).Data;
      param_5->ArrayNum = iVar5 + 1;
      *(undefined8 *)(pFVar6 + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1;
      uVar4 = 0;
      if ((int)uVar7 < param_4->ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14cdc026b:
      uVar7 = uVar7 + 1;
      *(int *)((param_4->AllocatorInstance).Data + lVar9 * 4) = iVar5;
      lVar9 = lVar9 + 1;
    } while (lVar9 < local_40);
  }
  return;
}

// AppendMeshRepeated @ 14cdc0410

/* WARNING: Type propagation algorithm not settling */

UDynamicMesh * __cdecl
UE::Private::AppendHelpers::AppendMeshRepeated
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TTransform<double> *param_4,int param_5,
          bool param_6,bool param_7,FGeometryScriptAppendMeshOptions param_8,
          UGeometryScriptDebug *param_9)

{
  short sVar1;
  int iVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  TVar7;
  UDynamicMesh *pUVar8;
  uint uVar9;
  FDynamicMeshAttributeSet *pFVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FDynamicMesh3 *local_348;
  code *local_340;
  FDynamicMesh3 **local_338;
  code *local_330;
  FGeometryScriptAppendMeshOptions **local_328;
  FGeometryScriptAppendMeshOptions *local_320;
  TQuaternion<double>_u_0 *local_318;
  FDynamicMesh3 *local_310;
  int local_308;
  FText local_300;
  FText local_2f0;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  TQuaternion<double>_u_0 local_2a8;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  FDynamicMesh3 local_258;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput1",
                        L"AppendMeshRepeated: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar6);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_2f0,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput2",
                        L"AppendMeshRepeated: AppendMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar6);
    if (local_2f0.TextData.Reference == (ITextData *)0x0) {
      return param_1;
    }
    (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
    return param_1;
  }
  if (param_5 < 1) {
    return param_1;
  }
  local_2a8._s_0.X = (param_4->Rotation).XY.m128d_f64[0];
  local_2a8._s_0.Y = (param_4->Rotation).XY.m128d_f64[1];
  local_2a8._s_0.Z = (param_4->Rotation).ZW.m128d_f64[0];
  local_2a8._s_0.W = (param_4->Rotation).ZW.m128d_f64[1];
  local_2d0 = (param_4->Translation).ZW.m128d_f64[0];
  local_2b8 = (param_4->Scale3D).ZW.m128d_f64[0];
  local_2e0 = (param_4->Translation).XY.m128d_f64[0];
  dStack_2d8 = (param_4->Translation).XY.m128d_f64[1];
  local_2c8 = (param_4->Scale3D).XY.m128d_f64[0];
  dStack_2c0 = (param_4->Scale3D).XY.m128d_f64[1];
  local_288 = local_2e0;
  dStack_280 = dStack_2d8;
  local_278 = local_2d0;
  local_270 = local_2c8;
  dStack_268 = dStack_2c0;
  local_260 = local_2b8;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258);
  local_348 = &local_258;
  local_338 = &local_348;
  local_340 = Core::Private::Function::
              TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  UDynamicMesh::ProcessMesh
            (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_340);
  if ((param_3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_258.AttributeSet.Ptr == (FDynamicMeshAttributeSet *)0x0)) goto LAB_14cdc0736;
  pFVar10 = (FDynamicMeshAttributeSet *)0x0;
  TVar7.Ptr = pFVar10;
  if (local_258.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
    TVar7.Ptr = local_258.AttributeSet.Ptr;
  }
  if (((TVar7.Ptr)->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)
  goto LAB_14cdc0736;
  TVar7.Ptr = pFVar10;
  if (local_258.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
    TVar7.Ptr = local_258.AttributeSet.Ptr;
  }
  pTVar3 = ((TVar7.Ptr)->MaterialIDAttrib).Ptr;
  uVar11 = local_258.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           local_258.TriangleRefCounts.RefCounts.CurBlockUsed;
  FVar12.Data = local_258.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  if ((uVar11 == 0) ||
     ((ushort)(**(short **)local_258.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U)
      < 0xfffe)) {
LAB_14cdc0637:
    uVar9 = (uint)pFVar10;
  }
  else {
    pFVar10 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar9 = 1;
    if (1 < (int)uVar11) {
      do {
        sVar1 = *(short *)(*(longlong *)
                            (local_258.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                            ((ulonglong)pFVar10 >> 9) * 8) + (ulonglong)((uint)pFVar10 & 0x1ff) * 2)
        ;
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar9 = (uint)pFVar10 + 1;
        pFVar10 = (FDynamicMeshAttributeSet *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar11);
      goto LAB_14cdc0637;
    }
  }
joined_r0x00014cdc0639:
  if (uVar9 != uVar11) {
    do {
      uVar9 = (uint)pFVar10;
      iVar2 = *(int *)(*(longlong *)
                        (*(longlong *)&pTVar3->field_0x20 + ((ulonglong)pFVar10 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4);
      if ((-1 < iVar2) && (iVar2 < param_3->ArrayNum)) {
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar8 = (UDynamicMesh *)(*pcVar4)();
          return pUVar8;
        }
        *(undefined4 *)
         (*(longlong *)(*(longlong *)&pTVar3->field_0x20 + ((ulonglong)pFVar10 >> 9) * 8) +
         (ulonglong)(uVar9 & 0x1ff) * 4) =
             *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar2 * 4);
        FVar12.Data = local_258.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      }
      do {
        uVar9 = uVar9 + 1;
        pFVar10 = (FDynamicMeshAttributeSet *)(ulonglong)uVar9;
        if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cdc0639;
        sVar1 = *(short *)(*(longlong *)(FVar12.Data + (ulonglong)(uVar9 >> 9) * 8) +
                          (ulonglong)(uVar9 & 0x1ff) * 2);
      } while ((sVar1 == 0) || (sVar1 == -1));
    } while( true );
  }
LAB_14cdc0736:
  if (param_6) {
    MeshTransforms::ApplyTransform(&local_258,(TTransformSRT3<double> *)&local_2a8._s_0,true,All);
  }
  local_320 = &param_8;
  local_318 = &local_2a8;
  local_310 = &local_258;
  local_328 = &local_320;
  local_330 = Core::Private::Function::
              TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
              ::Call;
  local_308 = param_5;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_330,
             GeneralEdit,Unknown,param_7);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
  return param_1;
}

// AppendMeshTransformed @ 14cdc0b20

UDynamicMesh * __cdecl
UE::Private::AppendHelpers::AppendMeshTransformed
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TTransform<double> *param_5,bool param_6,bool param_7,
          FGeometryScriptAppendMeshOptions param_8,UGeometryScriptDebug *param_9)

{
  FText *pFVar1;
  UDynamicMesh *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_48 [16];
  FGeometryScriptAppendMeshOptions *local_38;
  TArray<int,TSizedDefaultAllocator<32>_> **local_30;
  UDynamicMesh **local_28;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_20;
  bool local_18;
  TTransform<double> *local_10;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_InvalidInput1",
                        L"AppendMeshTransformed: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_InvalidInput2",
                        L"AppendMeshTransformed: AppendMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      return param_1;
    }
  }
  else if (param_4->ArrayNum == 0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_NoTransforms",
                        L"AppendMeshTransformed: AppendTransforms array is empty");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_38 = &param_8;
    local_30 = &local_res18;
    local_28 = &local_res10;
    local_18 = param_6;
    local_10 = param_5;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshTransformed'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_20 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,param_7);
  }
  return param_1;
}

// AppendWarning @ 14cdc1360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Geometry::AppendWarning
          (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *param_1,
          EGeometryScriptErrorType param_2,FText *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  ITextData *local_20;
  uint local_18;
  
  if (2 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_3);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_20 = (param_3->TextData).Reference;
  local_28 = (FScriptContainerElement)0x1;
  local_27 = (FScriptContainerElement)param_2;
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 8))(local_20,local_res10);
  }
  local_18 = param_3->Flags;
  if (param_1 != (TArray<FGeometryScriptDebugMessage,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
    *pFVar1 = local_28;
    pFVar1[1] = local_27;
    *(undefined8 *)(pFVar1 + 8) = 0;
    *(ITextData **)(pFVar1 + 8) = local_20;
    if (local_20 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20 + 8))(local_20,local_res8);
    }
    *(uint *)(pFVar1 + 0x10) = local_18;
  }
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 0x10))();
  }
  return;
}

// AppendWarning @ 14cdc14f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Geometry::AppendWarning
          (UGeometryScriptDebug *param_1,EGeometryScriptErrorType param_2,FText *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  ITextData *local_20;
  uint local_18;
  
  if (2 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_3);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_20 = (param_3->TextData).Reference;
  local_28 = (FScriptContainerElement)0x1;
  local_27 = (FScriptContainerElement)param_2;
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 8))(local_20,local_res10);
  }
  local_18 = param_3->Flags;
  if (param_1 != (UGeometryScriptDebug *)0x0) {
    pFVar2 = (param_1->Messages).AllocatorInstance.Data;
    if (((pFVar2 <= &local_28) &&
        (&local_28 < pFVar2 + (longlong)(param_1->Messages).ArrayMax * 0x18)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (param_1->Messages).ArrayNum;
    piVar1 = &(param_1->Messages).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Messages).AllocatorInstance,piVar1);
    }
    (param_1->Messages).ArrayNum = iVar5 + 1;
    pFVar2 = (param_1->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
    *pFVar2 = local_28;
    pFVar2[1] = local_27;
    *(undefined8 *)(pFVar2 + 8) = 0;
    *(ITextData **)(pFVar2 + 8) = local_20;
    if (local_20 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20 + 8))(local_20,local_res8);
    }
    *(uint *)(pFVar2 + 0x10) = local_18;
  }
  if (local_20 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20 + 0x10))();
  }
  return;
}

// ApplyMaterialRemap @ 14cdc1f60

void __cdecl
UE::Private::AppendHelpers::ApplyMaterialRemap
          (FMeshIndexMappings *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FDynamicMesh3 *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar5 = (param_3->AttributeSet).Ptr;
  if ((pFVar5 != (FDynamicMeshAttributeSet *)0x0) &&
     (pTVar6 = (pFVar5->MaterialIDAttrib).Ptr,
     pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    iVar13 = 0;
    uVar9 = 1;
    puVar1 = &(param_1->TriangleMap).ForwardMap.field_0x10;
    iVar3 = *(int *)&(param_1->TriangleMap).ForwardMap.field_0x28;
    iVar15 = 0;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(param_1->TriangleMap).ForwardMap.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cdc203d;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = iVar15 + -1 + local_res20;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_14cdc203d:
    uVar12 = *(uint *)&(param_1->TriangleMap).ForwardMap.field_0x28;
    TStack_60._padding_ = CONCAT44(uVar9,iVar13);
    uVar9 = uVar12 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar10;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iVar10;
    TStack_60.BaseBitIndex = iVar15;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(param_1->TriangleMap).ForwardMap.field_0x8 -
                         *(int *)&(param_1->TriangleMap).ForwardMap.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&(param_1->TriangleMap).ForwardMap.field_0x28;
    if (uVar12 != uVar4) {
      puVar14 = *(undefined1 **)&(param_1->TriangleMap).ForwardMap.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar9 = uVar9 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14cdc2141;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar9;
      if ((int)uVar4 < (int)uVar12) {
        uVar12 = uVar4;
      }
    }
LAB_14cdc2141:
    while( true ) {
      if (*(int *)&(param_1->TriangleMap).ForwardMap.field_0x8 -
          *(int *)&(param_1->TriangleMap).ForwardMap.field_0x34 != (int)uStack_40) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x10 +
               *(longlong *)&(param_1->TriangleMap).ForwardMap;
      uVar9 = *(uint *)(lVar11 + 4);
      iVar3 = *(int *)(*(longlong *)(*(longlong *)&pTVar6->field_0x20 + (ulonglong)(uVar9 >> 9) * 8)
                      + (ulonglong)(uVar9 & 0x1ff) * 4);
      if ((-1 < iVar3) && (iVar3 < param_2->ArrayNum)) {
        if ((iVar3 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = *(uint *)(lVar11 + 4);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)&pTVar6->field_0x20 + (ulonglong)(uVar9 >> 9) * 8) +
         (ulonglong)(uVar9 & 0x1ff) * 4) =
             *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 4);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// EnumerateUniqueEdgesInEdgeSelection @ 14cdd4000

void __cdecl
UE::Private::GeometryScriptSelectionLocal::EnumerateUniqueEdgesInEdgeSelection
          (FDynamicMesh3 *param_1,FGeometrySelection *param_2,
          TFunctionRef<void___cdecl(int)> *param_3)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_d8 [8];
  uint local_d0 [2];
  undefined8 local_c8;
  undefined8 local_b8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  uint local_74;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar12 = *(int *)&(param_2->Selection).Elements.field_0x28;
  puVar1 = &(param_2->Selection).Elements.field_0x10;
  iStack_a0 = 0;
  pTVar2 = &param_2->Selection;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar12 != 0) {
    puVar18 = *(uint **)&(param_2->Selection).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14cdd40ad;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_78 = (int)lVar13;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar12 < iStack_8c) {
      iStack_8c = iVar12;
    }
  }
LAB_14cdd40ad:
  uVar16 = *(uint *)&(param_2->Selection).Elements.field_0x28;
  iStack_80 = *(int *)&(param_2->Selection).Elements.field_0x8 -
              *(int *)&(param_2->Selection).Elements.field_0x34;
  uVar19 = uVar16 & 0xffffffe0;
  uStack_90 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_68.CurrentBitIndex = iStack_8c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iStack_8c;
  TStack_68.BaseBitIndex = local_88;
  uStack_48 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar12 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(param_2->Selection).Elements.field_0x28;
  if (uVar16 != uVar11) {
    puVar17 = *(undefined1 **)&(param_2->Selection).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14cdd41ab;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_14cdd41ab:
  do {
    pTVar9 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      return;
    }
    uVar19 = *(uint *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
    uVar11 = uVar19 & 0xfffffff;
    local_74 = uVar11 * 4 | uVar19 >> 0x1e;
    if ((int)uVar11 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
      lVar13 = (ulonglong)(uVar11 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar13) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
        pFVar5 = (param_1->TriangleEdges).Blocks.AllocatorInstance.Data;
        bVar10 = false;
        uVar4 = *(uint *)(*(longlong *)(pFVar5 + lVar13) +
                         ((ulonglong)(uVar19 >> 0x1e) + (ulonglong)(uVar19 & 0x1ff) * 3) * 4);
        pFVar6 = (param_1->Edges).Blocks.AllocatorInstance.Data;
        uVar19 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                          (ulonglong)(uVar4 & 0x1ff) * 0x10);
        local_c8 = *(undefined8 *)
                    (*(longlong *)(pFVar5 + (ulonglong)(uVar19 >> 9) * 8) +
                    (ulonglong)(uVar19 & 0x1ff) * 0xc);
        uVar19 = uVar19 * 4;
        if ((uint)local_c8 != uVar4) {
          uVar19 = uVar19 | ((uint)((ulonglong)local_c8 >> 0x20) != uVar4) + 1;
        }
        if (uVar19 >> 2 < uVar11) {
          uVar19 = uVar19 >> 2 | uVar19 << 0x1e;
          if (*(int *)&(param_2->Selection).Elements.field_0x8 !=
              *(int *)&(param_2->Selection).Elements.field_0x34) {
            FVar7 = (param_2->Selection).Hash.SecondaryData;
            FVar14 = (ForElementType<FSetElementId>)&(param_2->Selection).Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = FVar7;
            }
            iVar12 = *(int *)((longlong)FVar14 +
                             (ulonglong)((param_2->Selection).HashSize - 1U & uVar19) * 4);
            if (iVar12 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)&pTVar2->Elements + (longlong)iVar12 * 0x10) ==
                    (ulonglong)uVar19) {
                  bVar10 = true;
                  break;
                }
                iVar12 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar12 * 0x10);
              } while (iVar12 != -1);
            }
          }
        }
        uVar3 = *(ulonglong *)
                 (*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                 (ulonglong)(uVar4 & 0x1ff) * 0x10);
        uVar19 = (uint)(uVar3 >> 0x20);
        if (uVar19 != 0xffffffff) {
          local_b8 = *(undefined8 *)
                      (*(longlong *)(pFVar5 + (uVar3 >> 0x29) * 8) +
                      (ulonglong)(uVar19 & 0x1ff) * 0xc);
          uVar19 = uVar19 * 4;
          if ((uint)local_b8 != uVar4) {
            uVar19 = uVar19 | ((uint)((ulonglong)local_b8 >> 0x20) != uVar4) + 1;
          }
          if (uVar19 >> 2 < uVar11) {
            uVar19 = uVar19 >> 2 | uVar19 << 0x1e;
            if (*(int *)&(param_2->Selection).Elements.field_0x8 !=
                *(int *)&(param_2->Selection).Elements.field_0x34) {
              FVar7 = (param_2->Selection).Hash.SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&(param_2->Selection).Hash;
              if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar7;
              }
              iVar12 = *(int *)((longlong)FVar14 +
                               (ulonglong)((param_2->Selection).HashSize - 1U & uVar19) * 4);
              if (iVar12 != -1) {
                do {
                  if (*(ulonglong *)(*(longlong *)&pTVar2->Elements + (longlong)iVar12 * 0x10) ==
                      (ulonglong)uVar19) goto LAB_14cdd4411;
                  iVar12 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar12 * 0x10);
                } while (iVar12 != -1);
              }
            }
          }
        }
        if (!bVar10) {
          local_d0[0] = uVar4;
          (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_d0);
        }
      }
    }
LAB_14cdd4411:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// MakeScriptError @ 14cddcfc0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptDebugMessage * __cdecl
UE::Geometry::MakeScriptError
          (FGeometryScriptDebugMessage *__return_storage_ptr__,EGeometryScriptErrorType param_1,
          FText *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res10 [8];
  
  if (1 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_2);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  __return_storage_ptr__->MessageType = ErrorMessage;
  __return_storage_ptr__->ErrorType = param_1;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (__return_storage_ptr__->Message).Flags = param_2->Flags;
  return __return_storage_ptr__;
}

// MakeScriptWarning @ 14cddd060

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptDebugMessage * __cdecl
UE::Geometry::MakeScriptWarning
          (FGeometryScriptDebugMessage *__return_storage_ptr__,EGeometryScriptErrorType param_1,
          FText *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res10 [8];
  
  if (2 < (byte)LogGeometry._0_1_) {
    FText::ToString(param_2);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  __return_storage_ptr__->MessageType = WarningMessage;
  __return_storage_ptr__->ErrorType = param_1;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (__return_storage_ptr__->Message).Flags = param_2->Flags;
  return __return_storage_ptr__;
}

// Construct<FGeometryScriptFillHolesOptions> @ 14ce16d20

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptFillHolesOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  return;
}

// ConstructForTests<FGeometryScriptFillHolesOptions> @ 14ce16d30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptFillHolesOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  return;
}

// Destruct<FGeometryScriptFillHolesOptions> @ 14ce16d40

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptFillHolesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptFillHolesOptions> @ 14ce16e10

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptFillHolesOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptUVTexelDensityOptions> @ 14ce16f60

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptUVTexelDensityOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  return;
}

// ConstructForTests<FGeometryScriptUVTexelDensityOptions> @ 14ce16fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUVTexelDensityOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x44800000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FGeometryScriptUVTexelDensityOptions> @ 14ce17010

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptUVTexelDensityOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FGeometryScriptUVTexelDensityOptions> @ 14ce17090

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptUVTexelDensityOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x10);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0x18),
                 (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + lVar1 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x68);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSplitNormalsOptions> @ 14ce171d0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSplitNormalsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FGeometryScriptSplitNormalsOptions> @ 14ce171f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSplitNormalsOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptSplitNormalsOptions> @ 14ce17210

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSplitNormalsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSplitNormalsOptions> @ 14ce17240

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSplitNormalsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPlanarSimplifyOptions> @ 14ce174a0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPlanarSimplifyOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FGeometryScriptPlanarSimplifyOptions> @ 14ce17500

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPlanarSimplifyOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FGeometryScriptPlanarSimplifyOptions> @ 14ce175e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPlanarSimplifyOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPlanarSimplifyOptions> @ 14ce176f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPlanarSimplifyOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSnapBoundariesOptions> @ 14ce17720

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSnapBoundariesOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  return;
}

// ConstructForTests<FGeometryScriptSnapBoundariesOptions> @ 14ce17740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSnapBoundariesOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  return;
}

// Destruct<FGeometryScriptSnapBoundariesOptions> @ 14ce17820

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSnapBoundariesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSnapBoundariesOptions> @ 14ce17870

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSnapBoundariesOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptXAtlasOptions> @ 14ce17900

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptXAtlasOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 2;
  return;
}

// ConstructForTests<FGeometryScriptXAtlasOptions> @ 14ce17950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptXAtlasOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 2;
  return;
}

// Destruct<FGeometryScriptXAtlasOptions> @ 14ce17960

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptXAtlasOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptXAtlasOptions> @ 14ce179f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptXAtlasOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptCalculateNormalsOptions> @ 14ce17f20

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCalculateNormalsOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// ConstructForTests<FGeometryScriptCalculateNormalsOptions> @ 14ce17ff0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCalculateNormalsOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// Destruct<FGeometryScriptCalculateNormalsOptions> @ 14ce18000

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCalculateNormalsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCalculateNormalsOptions> @ 14ce18150

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCalculateNormalsOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptResolveTJunctionOptions> @ 14ce18770

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptResolveTJunctionOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  return;
}

// ConstructForTests<FGeometryScriptResolveTJunctionOptions> @ 14ce18780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptResolveTJunctionOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  return;
}

// Destruct<FGeometryScriptResolveTJunctionOptions> @ 14ce18790

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptResolveTJunctionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptResolveTJunctionOptions> @ 14ce188a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptResolveTJunctionOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSculptLayerUpdateOptions> @ 14ce188d0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSculptLayerUpdateOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptSculptLayerUpdateOptions> @ 14ce189a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSculptLayerUpdateOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptSculptLayerUpdateOptions> @ 14ce18a70

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSculptLayerUpdateOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSculptLayerUpdateOptions> @ 14ce18a90

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSculptLayerUpdateOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPatchBuilderOptions> @ 14ce18ac0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPatchBuilderOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  *(undefined4 *)param_1 = 100;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FGeometryScriptPatchBuilderOptions> @ 14ce18b20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPatchBuilderOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 100;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Destruct<FGeometryScriptPatchBuilderOptions> @ 14ce18b70

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPatchBuilderOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPatchBuilderOptions> @ 14ce18c00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPatchBuilderOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshBevelSelectionOptions> @ 14ce18cb0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshBevelSelectionOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptMeshBevelSelectionOptions> @ 14ce18cf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshBevelSelectionOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptMeshBevelSelectionOptions> @ 14ce18d60

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshBevelSelectionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshBevelSelectionOptions> @ 14ce18db0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshBevelSelectionOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptWeldEdgesOptions> @ 14ce19440

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptWeldEdgesOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x358637bd;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FGeometryScriptWeldEdgesOptions> @ 14ce19470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptWeldEdgesOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x358637bd;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FGeometryScriptWeldEdgesOptions> @ 14ce194a0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptWeldEdgesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptWeldEdgesOptions> @ 14ce19550

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptWeldEdgesOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptNonUniformPointSamplingOptions> @ 14ce19610

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptNonUniformPointSamplingOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// ConstructForTests<FGeometryScriptNonUniformPointSamplingOptions> @ 14ce19640

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptNonUniformPointSamplingOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// Construct<FGeometryScriptRecomputeUVsOptions> @ 14ce19670

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRecomputeUVsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)param_1 = 0x102;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FGeometryScriptNonUniformPointSamplingOptions> @ 14ce196a0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptNonUniformPointSamplingOptions>(void *param_1)

{
  return;
}

// ConstructForTests<FGeometryScriptRecomputeUVsOptions> @ 14ce19730

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRecomputeUVsOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x102;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FGeometryScriptRecomputeUVsOptions> @ 14ce19770

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRecomputeUVsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptNonUniformPointSamplingOptions> @ 14ce19810

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptNonUniformPointSamplingOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptRecomputeUVsOptions> @ 14ce19850

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRecomputeUVsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshBevelOptions> @ 14ce19f10

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshBevelOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshBevelOptions> @ 14ce19fe0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshBevelOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// Destruct<FGeometryScriptMeshBevelOptions> @ 14ce1a0c0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshBevelOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshBevelOptions> @ 14ce1a200

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshBevelOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  
  if (param_3 != 0) {
    puVar25 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar25);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      *puVar25 = *puVar1;
      puVar25[1] = uVar2;
      puVar25[2] = uVar3;
      puVar25[3] = uVar4;
      puVar25[4] = uVar5;
      puVar25[5] = uVar6;
      puVar25[6] = uVar7;
      puVar25[7] = uVar8;
      puVar25[8] = uVar9;
      puVar25[9] = uVar10;
      puVar25[10] = uVar11;
      puVar25[0xb] = uVar12;
      puVar25[0xc] = uVar13;
      puVar25[0xd] = uVar14;
      puVar25[0xe] = uVar15;
      puVar25[0xf] = uVar16;
      puVar25[0x10] = uVar17;
      puVar25[0x11] = uVar18;
      puVar25[0x12] = uVar19;
      puVar25[0x13] = uVar20;
      puVar25[0x14] = uVar21;
      puVar25[0x15] = uVar22;
      puVar25[0x16] = uVar23;
      puVar25[0x17] = uVar24;
      param_3 = param_3 + -1;
      puVar25 = puVar25 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshPointSamplingOptions> @ 14ce1a910

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshPointSamplingOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4024000000000000;
  *(undefined8 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// ConstructForTests<FGeometryScriptMeshPointSamplingOptions> @ 14ce1a950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshPointSamplingOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4024000000000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// Construct<FGeometryScriptSpectralConformalUVOptions> @ 14ce1a9c0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSpectralConformalUVOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptMeshPointSamplingOptions> @ 14ce1a9d0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshPointSamplingOptions>(void *param_1)

{
  return;
}

// ConstructForTests<FGeometryScriptSpectralConformalUVOptions> @ 14ce1a9e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSpectralConformalUVOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptSpectralConformalUVOptions> @ 14ce1a9f0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSpectralConformalUVOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshPointSamplingOptions> @ 14ce1aa00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshPointSamplingOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptSpectralConformalUVOptions> @ 14ce1aa80

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSpectralConformalUVOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshInsetOutsetFacesOptions> @ 14ce1ac30

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshInsetOutsetFacesOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptMeshInsetOutsetFacesOptions> @ 14ce1aca0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshInsetOutsetFacesOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptMeshInsetOutsetFacesOptions> @ 14ce1acd0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshInsetOutsetFacesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshInsetOutsetFacesOptions> @ 14ce1ad20

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshInsetOutsetFacesOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptUniformRemeshOptions> @ 14ce1ad60

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptUniformRemeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 5000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptUniformRemeshOptions> @ 14ce1ad80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptUniformRemeshOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 5000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptUniformRemeshOptions> @ 14ce1ade0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptUniformRemeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptUniformRemeshOptions> @ 14ce1ae40

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptUniformRemeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptExpMapUVOptions> @ 14ce1b1e0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptExpMapUVOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  return;
}

// ConstructForTests<FGeometryScriptExpMapUVOptions> @ 14ce1b200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptExpMapUVOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  return;
}

// Destruct<FGeometryScriptExpMapUVOptions> @ 14ce1b240

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptExpMapUVOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptExpMapUVOptions> @ 14ce1b330

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptExpMapUVOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshOffsetFacesOptions> @ 14ce1b560

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshOffsetFacesOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshOffsetFacesOptions> @ 14ce1b590

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshOffsetFacesOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 4) = 2;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FGeometryScriptMeshOffsetFacesOptions> @ 14ce1b5c0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshOffsetFacesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshOffsetFacesOptions> @ 14ce1b6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshOffsetFacesOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRemeshOptions> @ 14ce1b720

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRemeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x14;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined2 *)((longlong)param_1 + 1) = 0x201;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1020202;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1010101;
  return;
}

// ConstructForTests<FGeometryScriptRemeshOptions> @ 14ce1b760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemeshOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1020202;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x14;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FGeometryScriptRemeshOptions> @ 14ce1b7b0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRemeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRemeshOptions> @ 14ce1b850

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRemeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptLayoutUVsOptions> @ 14ce1bf50

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptLayoutUVsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x400;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  return;
}

// ConstructForTests<FGeometryScriptLayoutUVsOptions> @ 14ce1bfb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptLayoutUVsOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x400;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FGeometryScriptLayoutUVsOptions> @ 14ce1c000

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptLayoutUVsOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  return;
}

// Copy<FGeometryScriptLayoutUVsOptions> @ 14ce1c190

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptLayoutUVsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x21);
      *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x22);
      *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x23);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0x28),
                 (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + lVar2 + 0x28));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x78);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshLinearExtrudeOptions> @ 14ce1c480

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshLinearExtrudeOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshLinearExtrudeOptions> @ 14ce1c4d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshLinearExtrudeOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Destruct<FGeometryScriptMeshLinearExtrudeOptions> @ 14ce1c5d0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshLinearExtrudeOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshLinearExtrudeOptions> @ 14ce1c720

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshLinearExtrudeOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRepackUVsOptions> @ 14ce1cbe0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRepackUVsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x200;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FGeometryScriptRepackUVsOptions> @ 14ce1ccc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRepackUVsOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x200;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FGeometryScriptRepackUVsOptions> @ 14ce1cce0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRepackUVsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRepackUVsOptions> @ 14ce1cd70

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRepackUVsOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshExtrudeOptions> @ 14ce1d050

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshExtrudeOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// ConstructForTests<FGeometryScriptMeshExtrudeOptions> @ 14ce1d090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshExtrudeOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Destruct<FGeometryScriptMeshExtrudeOptions> @ 14ce1d0c0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshExtrudeOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshExtrudeOptions> @ 14ce1d190

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshExtrudeOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPolygonsTriangulationOptions> @ 14ce1d990

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPolygonsTriangulationOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptPolygonsTriangulationOptions> @ 14ce1d9b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolygonsTriangulationOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptPolygonsTriangulationOptions> @ 14ce1d9c0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPolygonsTriangulationOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPolygonsTriangulationOptions> @ 14ce1daa0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPolygonsTriangulationOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshOffsetOptions> @ 14ce1dbf0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMeshOffsetOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e4ccccd;
  return;
}

// ConstructForTests<FGeometryScriptMeshOffsetOptions> @ 14ce1dc20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshOffsetOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e4ccccd;
  return;
}

// Destruct<FGeometryScriptMeshOffsetOptions> @ 14ce1dc50

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMeshOffsetOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshOffsetOptions> @ 14ce1dcb0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshOffsetOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSelectiveTessellateOptions> @ 14ce1e210

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSelectiveTessellateOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptSelectiveTessellateOptions> @ 14ce1e220

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSelectiveTessellateOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptSelectiveTessellateOptions> @ 14ce1e270

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSelectiveTessellateOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSelectiveTessellateOptions> @ 14ce1e310

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSelectiveTessellateOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptConstrainedDelaunayTriangulationOptions> @ 14ce1e440

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptConstrainedDelaunayTriangulationOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// ConstructForTests<FGeometryScriptConstrainedDelaunayTriangulationOptions> @ 14ce1e490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptConstrainedDelaunayTriangulationOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FGeometryScriptConstrainedDelaunayTriangulationOptions> @ 14ce1e4a0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptConstrainedDelaunayTriangulationOptions>
          (void *param_1)

{
  return;
}

// Copy<FGeometryScriptConstrainedDelaunayTriangulationOptions> @ 14ce1e500

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptConstrainedDelaunayTriangulationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshEditPolygroupOptions> @ 14ce1e580

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshEditPolygroupOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptMeshEditPolygroupOptions> @ 14ce1e590

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshEditPolygroupOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FGeometryScriptMeshEditPolygroupOptions> @ 14ce1e5b0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshEditPolygroupOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshEditPolygroupOptions> @ 14ce1e640

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshEditPolygroupOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPNTessellateOptions> @ 14ce1ebf0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPNTessellateOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptPNTessellateOptions> @ 14ce1ec50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPNTessellateOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FGeometryScriptPNTessellateOptions> @ 14ce1ec70

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPNTessellateOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPNTessellateOptions> @ 14ce1ecb0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPNTessellateOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptVoronoiOptions> @ 14ce1ed40

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptVoronoiOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// ConstructForTests<FGeometryScriptVoronoiOptions> @ 14ce1ed90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptVoronoiOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Destruct<FGeometryScriptVoronoiOptions> @ 14ce1ee10

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptVoronoiOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptVoronoiOptions> @ 14ce1ef00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptVoronoiOptions>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x40);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + (longlong)param_1);
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x40)) {
        iVar4 = *(int *)((longlong)param_2 + 0x48);
        piVar2 = (int *)((longlong)param_1 + 0x4c);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x40))->Data;
        *(int *)((longlong)param_1 + 0x48) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 << 2);
          }
        }
      }
      puVar3 = (undefined1 *)((longlong)param_2 + 0x50);
      param_2 = (void *)((longlong)param_2 + 0x58);
      *(undefined1 *)((longlong)param_1 + 0x50) = *puVar3;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRevolveOptions> @ 14ce1f430

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRevolveOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x100;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41f00000;
  return;
}

// ConstructForTests<FGeometryScriptRevolveOptions> @ 14ce1f460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRevolveOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x43b40000;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41f00000;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x100;
  return;
}

// Destruct<FGeometryScriptRevolveOptions> @ 14ce1f490

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRevolveOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptRayHitResult> @ 14ce1f5a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptRayHitResult>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FGeometryScriptRayHitResult> @ 14ce1f600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRayHitResult>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Copy<FGeometryScriptRevolveOptions> @ 14ce1f690

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRevolveOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptRayHitResult> @ 14ce1f6d0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptRayHitResult>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRayHitResult> @ 14ce1f730

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRayHitResult>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPrimitiveOptions> @ 14ce20030

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPrimitiveOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScriptPrimitiveOptions> @ 14ce20040

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPrimitiveOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FGeometryScriptPrimitiveOptions> @ 14ce20060

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPrimitiveOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptSpatialQueryOptions> @ 14ce200f0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSpatialQueryOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  return;
}

// ConstructForTests<FGeometryScriptSpatialQueryOptions> @ 14ce20110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSpatialQueryOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  return;
}

// Copy<FGeometryScriptPrimitiveOptions> @ 14ce20130

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPrimitiveOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FGeometryScriptSpatialQueryOptions> @ 14ce20160

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSpatialQueryOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSpatialQueryOptions> @ 14ce20280

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSpatialQueryOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptDegenerateTriangleOptions> @ 14ce20300

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptDegenerateTriangleOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f1a36e2eb1c432d;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// ConstructForTests<FGeometryScriptDegenerateTriangleOptions> @ 14ce20340

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDegenerateTriangleOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f1a36e2eb1c432d;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FGeometryScriptDegenerateTriangleOptions> @ 14ce20370

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptDegenerateTriangleOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptDegenerateTriangleOptions> @ 14ce20400

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptDegenerateTriangleOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptClusterSimplifyMeshOptions> @ 14ce207d0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptClusterSimplifyMeshOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x101;
  return;
}

// ConstructForTests<FGeometryScriptClusterSimplifyMeshOptions> @ 14ce20840

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptClusterSimplifyMeshOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4046800000000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x101;
  return;
}

// Destruct<FGeometryScriptClusterSimplifyMeshOptions> @ 14ce20870

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptClusterSimplifyMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptClusterSimplifyMeshOptions> @ 14ce208c0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptClusterSimplifyMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions> @ 14ce20940

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>
          (void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4046800000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions> @ 14ce20990

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4046800000000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions> @ 14ce209e0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions> @ 14ce20a00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSelectHiddenTrianglesFromOutsideOptions>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
        iVar3 = *(int *)((longlong)param_2 + 0x20);
        piVar1 = (int *)((longlong)param_1 + 0x24);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,*piVar1,pFVar4,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      puVar2 = (undefined8 *)((longlong)param_2 + 0x28);
      param_2 = (void *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptClusterSimplifyEdgeConstraintOptions> @ 14ce214b0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptClusterSimplifyEdgeConstraintOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  return;
}

// ConstructForTests<FGeometryScriptClusterSimplifyEdgeConstraintOptions> @ 14ce214d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptClusterSimplifyEdgeConstraintOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  return;
}

// Destruct<FGeometryScriptClusterSimplifyEdgeConstraintOptions> @ 14ce21530

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptClusterSimplifyEdgeConstraintOptions>
          (void *param_1)

{
  return;
}

// Copy<FGeometryScriptClusterSimplifyEdgeConstraintOptions> @ 14ce21580

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptClusterSimplifyEdgeConstraintOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRemoveHiddenTrianglesOptions> @ 14ce215d0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptRemoveHiddenTrianglesOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x358637bd;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  return;
}

// ConstructForTests<FGeometryScriptRemoveHiddenTrianglesOptions> @ 14ce21640

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemoveHiddenTrianglesOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x358637bd;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FGeometryScriptRemoveHiddenTrianglesOptions> @ 14ce216f0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptRemoveHiddenTrianglesOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRemoveHiddenTrianglesOptions> @ 14ce21740

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRemoveHiddenTrianglesOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMeshProjectionSettings> @ 14ce218f0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptMeshProjectionSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x55000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xd5000000;
  return;
}

// ConstructForTests<FGeometryScriptMeshProjectionSettings> @ 14ce21950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMeshProjectionSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x55000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xd5000000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FGeometryScriptMeshProjectionSettings> @ 14ce21970

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptMeshProjectionSettings>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMeshProjectionSettings> @ 14ce21a40

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMeshProjectionSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSimplifyMeshOptions> @ 14ce21e70

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSimplifyMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010102;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// ConstructForTests<FGeometryScriptSimplifyMeshOptions> @ 14ce21e90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSimplifyMeshOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010102;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// Destruct<FGeometryScriptSimplifyMeshOptions> @ 14ce21eb0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSimplifyMeshOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSimplifyMeshOptions> @ 14ce21f40

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSimplifyMeshOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptRemoveSmallComponentOptions> @ 14ce21f80

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptRemoveSmallComponentOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x38d1b717;
  *(undefined4 *)((longlong)param_1 + 4) = 0x38d1b717;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FGeometryScriptRemoveSmallComponentOptions> @ 14ce21fe0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptRemoveSmallComponentOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x38d1b717;
  *(undefined4 *)((longlong)param_1 + 4) = 0x38d1b717;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FGeometryScriptRemoveSmallComponentOptions> @ 14ce22000

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptRemoveSmallComponentOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptRemoveSmallComponentOptions> @ 14ce22110

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptRemoveSmallComponentOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptTangentsOptions> @ 14ce22310

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptTangentsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGeometryScriptTangentsOptions> @ 14ce22320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTangentsOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FGeometryScriptTangentsOptions> @ 14ce22340

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptTangentsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptTangentsOptions> @ 14ce22360

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTangentsOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPolygroupSimplifyOptions> @ 14ce225d0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPolygroupSimplifyOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FGeometryScriptPolygroupSimplifyOptions> @ 14ce225f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolygroupSimplifyOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FGeometryScriptPolygroupSimplifyOptions> @ 14ce22630

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPolygroupSimplifyOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPolygroupSimplifyOptions> @ 14ce22690

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPolygroupSimplifyOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_> @ 14ce22880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::PrivateSimplifyHelper::
DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_>
          (FDynamicMesh3 *param_1,FGeometryScriptSimplifyMeshOptions *param_2,
          ESimplifyTargetMode param_3,int param_4,double param_5,FMeshProjectionTarget *param_6,
          double param_7)

{
  bool bVar1;
  FDynamicMeshAttributeSet *this;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStackY_498 [32];
  FMeshConstraints local_448;
  char local_390;
  undefined1 local_388 [32];
  void *local_368;
  undefined4 local_360;
  uint local_35c;
  undefined4 local_358;
  undefined4 local_354;
  void *local_348;
  undefined4 local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  TBitArray<FDefaultBitArrayAllocator> local_328;
  undefined4 local_308;
  undefined4 local_304;
  void *local_2f8;
  undefined4 local_2f0;
  int local_2e8;
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8 [200];
  char local_200;
  FMeshProjectionTarget *local_1f8;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  ESimplificationCollapseModes local_188;
  bool local_184;
  bool local_182;
  EGeometricErrorCriteria local_174;
  double local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>
            ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2c8,param_1);
  local_1a0 = 0;
  if (param_6 != (FMeshProjectionTarget *)0x0) {
    local_1f8 = param_6;
  }
  bVar1 = param_2->bAllowSeamCollapse;
  local_184 = param_2->bRetainQuadricMemory;
  local_19c = 0;
  local_182 = bVar1;
  if (bVar1 != false) {
    this = (param_1->AttributeSet).Ptr;
    local_198 = __real_3ee4f8b588e368f1;
    if (this != (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(this,true);
    }
  }
  local_388._0_8_ = (FScriptContainerElement *)0x0;
  local_388._8_8_ = 0;
  local_368 = (void *)0x0;
  local_360 = 0;
  local_35c = 0x80;
  local_358 = 0xffffffff;
  local_354 = 0;
  local_348 = (void *)0x0;
  local_340 = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  local_328.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_328.NumBits = 0;
  local_328.MaxBits = 0x80;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8._0_4_ = 0;
  local_2d8._4_4_ = 0;
  local_2e8 = 0;
  UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
            ((FMeshConstraints *)local_388,param_1,NoFlip,NoConstraint,NoConstraint,
             param_2->bAllowSeamSplits,param_2->bAllowSeamSmoothing,bVar1,true);
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_448,(FMeshConstraints *)local_388);
  local_390 = '\x01';
  if (local_200 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints((FMeshConstraints *)(local_2c8 + 0x10));
  }
  UE::Geometry::FMeshConstraints::FMeshConstraints
            ((FMeshConstraints *)(local_2c8 + 0x10),&local_448);
  local_200 = 1;
  if (local_390 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_448);
  }
  if (param_2->bPreserveVertexPositions != false) {
    local_188 = MinimalExistingVertexError;
  }
  if ((param_6 != (FMeshProjectionTarget *)0x0) && (0.0 <= param_7)) {
    local_170 = param_7;
    local_174 = PredictedPointToProjectionTarget;
  }
  if (param_3 == TriangleCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToTriangleCount
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2c8,param_4);
  }
  else if (param_3 == VertexCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToVertexCount
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2c8,param_4);
  }
  else {
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToEdgeLength
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2c8,param_5);
  }
  if (param_2->bAutoCompact != false) {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2e0.Data,(int)local_2d8);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2e0.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  local_2f0 = 0;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  uVar3 = local_330 >> 0x20;
  local_330 = local_330 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_338,0,(int *)((longlong)&local_330 + 4));
  }
  local_308 = 0xffffffff;
  local_304 = 0;
  local_328.NumBits = 0;
  if (0x80 < (uint)local_328.MaxBits) {
    local_328.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_328,0);
  }
  if (local_328.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_328.AllocatorInstance.SecondaryData);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  local_340 = 0;
  if (local_348 != (void *)0x0) {
    FMemory::Free(local_348);
  }
  iVar2 = SUB84(local_388._8_8_,4);
  local_388._8_8_ = local_388._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_388,0,(int *)(local_388 + 0xc));
  }
  local_358 = 0xffffffff;
  local_354 = 0;
  local_360 = 0;
  if (0x80 < local_35c) {
    local_35c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_388 + 0x10),0);
  }
  if (local_368 != (void *)0x0) {
    FMemory::Free(local_368);
  }
  if ((FScriptContainerElement *)local_388._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_388._0_8_);
  }
  UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  ~TMeshSimplification<UE::Geometry::TQuadricError<double>_>
            ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2c8);
  return;
}

// DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_> @ 14ce22c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::PrivateSimplifyHelper::
DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_>
          (FDynamicMesh3 *param_1,FGeometryScriptSimplifyMeshOptions *param_2,
          ESimplifyTargetMode param_3,int param_4,double param_5,FMeshProjectionTarget *param_6,
          double param_7)

{
  bool bVar1;
  FDynamicMeshAttributeSet *this;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStackY_4a8 [32];
  FMeshConstraints local_458;
  char local_3a0;
  undefined1 local_398 [32];
  void *local_378;
  undefined4 local_370;
  uint local_36c;
  undefined4 local_368;
  undefined4 local_364;
  void *local_358;
  undefined4 local_350;
  ForAnyElementType local_348;
  undefined8 local_340;
  TBitArray<FDefaultBitArrayAllocator> local_338;
  undefined4 local_318;
  undefined4 local_314;
  void *local_308;
  undefined4 local_300;
  int local_2f8;
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  undefined **local_2d8;
  FDynamicMesh3 *local_2d0;
  FMeshConstraints local_2c8;
  char local_210;
  FMeshProjectionTarget *local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1e8 [3];
  longlong *local_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  ushort local_1b0;
  undefined1 local_1ae;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ESimplificationCollapseModes local_198;
  undefined4 local_194;
  EGeometricErrorCriteria local_184;
  double local_180;
  float local_178;
  double local_170;
  undefined8 local_168;
  ulong64 local_160;
  double local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  TBitArray<FDefaultBitArrayAllocator> local_130;
  undefined8 uStack_110;
  void *local_100;
  undefined4 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  FIndexPriorityQueue local_b8;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_170 = __real_7fefffffffffffff;
  local_208 = (FMeshProjectionTarget *)0x0;
  uStack_200 = 0;
  local_1c8 = 0;
  pvStack_1c0 = (void *)0x0;
  local_1a8 = ___xmm_3e45798ee00000000000000000000000;
  uStack_1a0 = _UNK_1528cb7a8;
  local_158 = __real_4070000000000000;
  local_130._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_110 = _UNK_150631d98;
  local_180 = 0.0;
  local_210 = '\0';
  local_1f8 = 0;
  local_1d0 = (longlong *)0x0;
  local_1b8 = 0;
  local_1b0 = 0x100;
  local_1ae = 0;
  local_1ac = 0;
  local_2d8 = &___7__TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  local_198 = MinimalQuadricPositionError;
  local_194._0_1_ = false;
  local_194._1_1_ = true;
  local_194._2_1_ = true;
  local_194._3_1_ = false;
  local_184 = None;
  local_178 = 3.4028235e+38;
  local_168._0_4_ = 0x7fffffff;
  local_168._4_4_ = TriangleCount;
  local_160 = 0;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_130.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_2d0 = param_1;
  UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(&local_b8);
  uVar4 = local_194;
  this = (param_1->AttributeSet).Ptr;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if ((this != (FDynamicMeshAttributeSet *)0x0) &&
     (local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
     0 < (this->NormalLayers).Array.ArrayNum)) {
    local_d0 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (this->NormalLayers).Array.AllocatorInstance.Data;
  }
  if (param_6 != (FMeshProjectionTarget *)0x0) {
    local_208 = param_6;
  }
  bVar1 = param_2->bAllowSeamCollapse;
  local_194._0_1_ = param_2->bRetainQuadricMemory;
  uVar5 = local_194;
  local_1b0 = local_1b0 & 0xff00;
  local_1ac = 0;
  local_194._3_1_ = SUB41(uVar4,3);
  local_194._0_2_ = (undefined2)uVar5;
  local_194._2_1_ = bVar1;
  if ((bVar1 != false) &&
     (local_1a8 = __real_3ee4f8b588e368f1, this != (FDynamicMeshAttributeSet *)0x0)) {
    UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(this,true);
  }
  local_398._0_8_ = (FScriptContainerElement *)0x0;
  local_398._8_8_ = 0;
  local_378 = (void *)0x0;
  local_370 = 0;
  local_36c = 0x80;
  local_368 = 0xffffffff;
  local_364 = 0;
  local_358 = (void *)0x0;
  local_350 = 0;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  local_338.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_338.NumBits = 0;
  local_338.MaxBits = 0x80;
  local_318 = 0xffffffff;
  local_314 = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8._0_4_ = 0;
  local_2e8._4_4_ = 0;
  local_2f8 = 0;
  UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
            ((FMeshConstraints *)local_398,param_1,NoFlip,NoConstraint,NoConstraint,
             param_2->bAllowSeamSplits,param_2->bAllowSeamSmoothing,bVar1,true);
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_458,(FMeshConstraints *)local_398);
  local_3a0 = '\x01';
  if (local_210 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_2c8);
  }
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_2c8,&local_458);
  local_210 = '\x01';
  if (local_3a0 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_458);
  }
  if (param_2->bPreserveVertexPositions != false) {
    local_198 = MinimalExistingVertexError;
  }
  if ((param_6 != (FMeshProjectionTarget *)0x0) && (0.0 <= param_7)) {
    local_180 = param_7;
    local_184 = PredictedPointToProjectionTarget;
  }
  if (param_3 == TriangleCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
    SimplifyToTriangleCount
              ((TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *)&local_2d8,
               param_4);
  }
  else if (param_3 == VertexCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
    SimplifyToVertexCount
              ((TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *)&local_2d8,
               param_4);
  }
  else {
    UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
    SimplifyToEdgeLength
              ((TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *)&local_2d8,
               param_5);
  }
  if (param_2->bAutoCompact != false) {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2f0.Data,(int)local_2e8);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2f0.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
  local_300 = 0;
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
  uVar3 = local_340 >> 0x20;
  local_340 = local_340 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_348,0,(int *)((longlong)&local_340 + 4));
  }
  local_318 = 0xffffffff;
  local_314 = 0;
  local_338.NumBits = 0;
  if (0x80 < (uint)local_338.MaxBits) {
    local_338.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_338,0);
  }
  if (local_338.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_338.AllocatorInstance.SecondaryData);
  }
  if (local_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data);
  }
  local_350 = 0;
  if (local_358 != (void *)0x0) {
    FMemory::Free(local_358);
  }
  iVar2 = SUB84(local_398._8_8_,4);
  local_398._8_8_ = local_398._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_398,0,(int *)(local_398 + 0xc));
  }
  local_368 = 0xffffffff;
  local_364 = 0;
  local_370 = 0;
  if (0x80 < local_36c) {
    local_36c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_398 + 0x10),0);
  }
  if (local_378 != (void *)0x0) {
    FMemory::Free(local_378);
  }
  if ((FScriptContainerElement *)local_398._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_398._0_8_);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_b8.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.id_to_index.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_b8.nodes);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  uVar3 = local_138 >> 0x20;
  local_138 = local_138 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&local_140,0,(int *)((longlong)&local_138 + 4));
  }
  iVar2 = local_130.MaxBits;
  uStack_110 = 0xffffffff;
  local_130._24_8_ = (ulonglong)(uint)local_130.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_130.NumBits = 0;
    local_130.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_130,0);
  }
  if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_130.AllocatorInstance.SecondaryData);
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  local_2d8 = &___7FMeshRefinerBase_Geometry_UE__6B_;
  if (pvStack_1c0 != (void *)0x0) {
    FMemory::Free(pvStack_1c0);
  }
  if (local_1f8 != 0) {
    plVar6 = local_1e8;
    if (local_1d0 != (longlong *)0x0) {
      plVar6 = local_1d0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_210 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_2c8);
  }
  return;
}

// DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_> @ 14ce232e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::PrivateSimplifyHelper::
DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_>
          (FDynamicMesh3 *param_1,FGeometryScriptSimplifyMeshOptions *param_2,
          ESimplifyTargetMode param_3,int param_4,double param_5,FMeshProjectionTarget *param_6,
          double param_7)

{
  bool bVar1;
  FDynamicMeshAttributeSet *this;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStackY_4a8 [32];
  FMeshConstraints local_458;
  char local_3a0;
  undefined1 local_398 [32];
  void *local_378;
  undefined4 local_370;
  uint local_36c;
  undefined4 local_368;
  undefined4 local_364;
  void *local_358;
  undefined4 local_350;
  ForAnyElementType local_348;
  undefined8 local_340;
  TBitArray<FDefaultBitArrayAllocator> local_338;
  undefined4 local_318;
  undefined4 local_314;
  void *local_308;
  undefined4 local_300;
  int local_2f8;
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  undefined **local_2d8;
  FDynamicMesh3 *local_2d0;
  FMeshConstraints local_2c8;
  char local_210;
  FMeshProjectionTarget *local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1e8 [3];
  longlong *local_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  ushort local_1b0;
  undefined1 local_1ae;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ESimplificationCollapseModes local_198;
  undefined4 local_194;
  EGeometricErrorCriteria local_184;
  double local_180;
  float local_178;
  double local_170;
  undefined8 local_168;
  ulong64 local_160;
  double local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  TBitArray<FDefaultBitArrayAllocator> local_130;
  undefined8 uStack_110;
  void *local_100;
  undefined4 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  FIndexPriorityQueue local_b8;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_170 = __real_7fefffffffffffff;
  local_208 = (FMeshProjectionTarget *)0x0;
  uStack_200 = 0;
  local_1c8 = 0;
  pvStack_1c0 = (void *)0x0;
  local_1a8 = ___xmm_3e45798ee00000000000000000000000;
  uStack_1a0 = _UNK_1528cb7a8;
  local_158 = __real_4070000000000000;
  local_130._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_110 = _UNK_150631d98;
  local_180 = 0.0;
  local_210 = '\0';
  local_1f8 = 0;
  local_1d0 = (longlong *)0x0;
  local_1b8 = 0;
  local_1b0 = 0x100;
  local_1ae = 0;
  local_1ac = 0;
  local_2d8 = &___7__TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__6B_;
  local_198 = MinimalQuadricPositionError;
  local_194._0_1_ = false;
  local_194._1_1_ = true;
  local_194._2_1_ = true;
  local_194._3_1_ = false;
  local_184 = None;
  local_178 = 3.4028235e+38;
  local_168._0_4_ = 0x7fffffff;
  local_168._4_4_ = TriangleCount;
  local_160 = 0;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_130.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_2d0 = param_1;
  UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(&local_b8);
  uVar4 = local_194;
  this = (param_1->AttributeSet).Ptr;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if ((this != (FDynamicMeshAttributeSet *)0x0) &&
     (local_d0 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
     0 < (this->NormalLayers).Array.ArrayNum)) {
    local_d0 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (this->NormalLayers).Array.AllocatorInstance.Data;
  }
  if (param_6 != (FMeshProjectionTarget *)0x0) {
    local_208 = param_6;
  }
  bVar1 = param_2->bAllowSeamCollapse;
  local_194._0_1_ = param_2->bRetainQuadricMemory;
  uVar5 = local_194;
  local_1b0 = local_1b0 & 0xff00;
  local_1ac = 0;
  local_194._3_1_ = SUB41(uVar4,3);
  local_194._0_2_ = (undefined2)uVar5;
  local_194._2_1_ = bVar1;
  if ((bVar1 != false) &&
     (local_1a8 = __real_3ee4f8b588e368f1, this != (FDynamicMeshAttributeSet *)0x0)) {
    UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(this,true);
  }
  local_398._0_8_ = (FScriptContainerElement *)0x0;
  local_398._8_8_ = 0;
  local_378 = (void *)0x0;
  local_370 = 0;
  local_36c = 0x80;
  local_368 = 0xffffffff;
  local_364 = 0;
  local_358 = (void *)0x0;
  local_350 = 0;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  local_338.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_338.NumBits = 0;
  local_338.MaxBits = 0x80;
  local_318 = 0xffffffff;
  local_314 = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8._0_4_ = 0;
  local_2e8._4_4_ = 0;
  local_2f8 = 0;
  UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
            ((FMeshConstraints *)local_398,param_1,NoFlip,NoConstraint,NoConstraint,
             param_2->bAllowSeamSplits,param_2->bAllowSeamSmoothing,bVar1,true);
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_458,(FMeshConstraints *)local_398);
  local_3a0 = '\x01';
  if (local_210 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_2c8);
  }
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_2c8,&local_458);
  local_210 = '\x01';
  if (local_3a0 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_458);
  }
  if (param_2->bPreserveVertexPositions != false) {
    local_198 = MinimalExistingVertexError;
  }
  if ((param_6 != (FMeshProjectionTarget *)0x0) && (0.0 <= param_7)) {
    local_180 = param_7;
    local_184 = PredictedPointToProjectionTarget;
  }
  if (param_3 == TriangleCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
    SimplifyToTriangleCount
              ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)&local_2d8,
               param_4);
  }
  else if (param_3 == VertexCount) {
    if (param_4 < 1) {
      param_4 = 1;
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
    SimplifyToVertexCount
              ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)&local_2d8,
               param_4);
  }
  else {
    UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
    SimplifyToEdgeLength
              ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)&local_2d8,
               param_5);
  }
  if (param_2->bAutoCompact != false) {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2f0.Data,(int)local_2e8);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2f0.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
  local_300 = 0;
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
  uVar3 = local_340 >> 0x20;
  local_340 = local_340 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_348,0,(int *)((longlong)&local_340 + 4));
  }
  local_318 = 0xffffffff;
  local_314 = 0;
  local_338.NumBits = 0;
  if (0x80 < (uint)local_338.MaxBits) {
    local_338.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_338,0);
  }
  if (local_338.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_338.AllocatorInstance.SecondaryData);
  }
  if (local_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data);
  }
  local_350 = 0;
  if (local_358 != (void *)0x0) {
    FMemory::Free(local_358);
  }
  iVar2 = SUB84(local_398._8_8_,4);
  local_398._8_8_ = local_398._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_398,0,(int *)(local_398 + 0xc));
  }
  local_368 = 0xffffffff;
  local_364 = 0;
  local_370 = 0;
  if (0x80 < local_36c) {
    local_36c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_398 + 0x10),0);
  }
  if (local_378 != (void *)0x0) {
    FMemory::Free(local_378);
  }
  if ((FScriptContainerElement *)local_398._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_398._0_8_);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_b8.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.id_to_index.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_b8.nodes);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  uVar3 = local_138 >> 0x20;
  local_138 = local_138 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&local_140,0,(int *)((longlong)&local_138 + 4));
  }
  iVar2 = local_130.MaxBits;
  uStack_110 = 0xffffffff;
  local_130._24_8_ = (ulonglong)(uint)local_130.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_130.NumBits = 0;
    local_130.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_130,0);
  }
  if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_130.AllocatorInstance.SecondaryData);
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  local_2d8 = &___7FMeshRefinerBase_Geometry_UE__6B_;
  if (pvStack_1c0 != (void *)0x0) {
    FMemory::Free(pvStack_1c0);
  }
  if (local_1f8 != 0) {
    plVar6 = local_1e8;
    if (local_1d0 != (longlong *)0x0) {
      plVar6 = local_1d0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_210 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_2c8);
  }
  return;
}

// UniformSampleTrianglePoint<double> @ 14ce260e0

TVector<double> * __cdecl
UE::Geometry::VectorUtil::UniformSampleTrianglePoint<double>
          (TVector<double> *__return_storage_ptr__,double param_1,double param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  if (__real_3ff0000000000000 < param_1 + param_2) {
    param_2 = __real_3ff0000000000000 - param_2;
    param_1 = __real_3ff0000000000000 - param_1;
  }
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  dVar5 = ((param_4->field0_0x0)._s_0.Y - dVar3) * param_1 + dVar3 +
          ((param_5->field0_0x0)._s_0.Y - dVar3) * param_2;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = ((param_4->field0_0x0)._s_0.X - dVar6) * param_1 + dVar6 +
                 ((param_5->field0_0x0)._s_0.X - dVar6) * param_2;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar3 - dVar1) * param_1 + dVar1 + (dVar2 - dVar1) * param_2;
  return __return_storage_ptr__;
}

// operator() @ 14ce477c0

void __thiscall
`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  TVector<double>_u_0 *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulong64 local_res10;
  ulonglong local_res18;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  TVector<double> local_38;
  
  uVar8 = 0;
  uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar9 != 0) &&
     (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto joined_r0x00014ce47856;
    do {
      lVar3 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(pFVar2 + (uVar8 >> 9) * 8)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(pFVar2 + (uVar8 >> 9) * 8)) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
joined_r0x00014ce47856:
  do {
    if (uVar7 == uVar9) {
      return;
    }
    while( true ) {
      uVar7 = (uint)uVar8;
      if (*(char *)((longlong)this + 0x10) == '\0') {
        pTVar6 = &local_68;
        local_68._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_68._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_68._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar6 = &UE::Geometry::FMeshNormals::ComputeVertexNormal(&local_38,param_1,uVar7,true,true)
                  ->field0_0x0;
      }
      local_50 = (((TVector<double>_u_0 *)&(pTVar6->_s_0).X)->_s_0).X;
      dStack_48 = (pTVar6->_s_0).Y;
      local_40 = (pTVar6->_s_0).Z;
      lVar3 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar8 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      local_68._s_0.X = *pdVar1;
      local_68._s_0.Y = pdVar1[1];
      local_68._s_0.Z = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      cVar5 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_68,&local_50);
      if (cVar5 != '\0') {
        local_res18 = uVar8;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(*(longlong *)((longlong)this + 8) + 8),&local_res10,(bool *)&local_res18);
      }
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar9 <= (int)uVar7) break;
      pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (uVar8 >> 9) * 8;
        lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != -1)) break;
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        if ((int)uVar9 <= (int)uVar7) goto joined_r0x00014ce47856;
      }
    }
  } while( true );
}

// operator() @ 14ce4bff0

void __thiscall
`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l9::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  double *pdVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  TVector<double>_u_0 *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulong64 local_res18;
  ulong64 local_res20;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  TVector<double>_u_0 local_a0;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_70 [2];
  
  iVar14 = 2;
  if (*(int *)((longlong)this + 0x14) < 2) {
    iVar14 = *(int *)((longlong)this + 0x14);
  }
  iVar8 = 1;
  if (1 < iVar14) {
    iVar8 = iVar14;
  }
  uVar12 = 0;
  uVar16 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  if ((uVar16 != 0) &&
     (pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014ce4c0a9;
    do {
      lVar2 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      if ((*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar12 >> 9) * 8)) != 0) &&
         (*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar12 >> 9) * 8)) != -1)) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar16);
  }
  uVar11 = (uint)uVar12;
joined_r0x00014ce4c0a9:
  do {
    if (uVar11 == uVar16) {
      return;
    }
    while( true ) {
      uVar11 = (uint)uVar12;
      uVar15 = (ulonglong)(uVar11 & 0x1ff);
      lVar2 = (uVar12 >> 9) * 8;
      uVar12 = *(ulonglong *)
                (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) +
                uVar15 * 0x10);
      local_c8 = uVar12 >> 0x20;
      if (*(char *)((longlong)this + 0x10) == '\0') {
        pTVar10 = &local_a0;
        local_a0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_a0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_a0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar10 = &UE::Geometry::FDynamicMesh3::GetEdgeNormal
                             (param_1,(TVector<double> *)&local_70[0]._s_0,uVar11)->field0_0x0;
      }
      pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      puVar4 = *(undefined8 **)this;
      local_88 = (((TVector<double>_u_0 *)&(pTVar10->_s_0).X)->_s_0).X;
      dStack_80 = (pTVar10->_s_0).Y;
      local_78 = (pTVar10->_s_0).Z;
      uVar13 = (ulonglong)((uint)uVar12 & 0x1ff);
      lVar5 = *(longlong *)(pFVar3 + ((uVar12 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar13 * 0x18);
      local_70[0]._0_8_ = *pdVar1;
      local_70[0]._8_8_ = pdVar1[1];
      local_70[0]._16_8_ = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
      uVar12 = (ulonglong)((uint)local_c8 & 0x1ff);
      lVar5 = *(longlong *)(pFVar3 + ((local_c8 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
      local_a0._s_0.X = *pdVar1;
      local_a0._s_0.Y = pdVar1[1];
      local_a0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
      bVar6 = (*(code *)*puVar4)(puVar4[1],&local_a0,&local_88);
      bVar7 = (*(code *)*puVar4)(puVar4[1],local_70,&local_88);
      if (iVar8 <= (int)((uint)bVar7 + (uint)bVar6)) {
        uVar9 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) + 8
                         + uVar15 * 0x10);
        local_c0 = *(undefined8 *)
                    (*(longlong *)
                      ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        uVar9 = uVar9 * 4;
        if ((uint)local_c0 != uVar11) {
          uVar9 = uVar9 | ((uint)((ulonglong)local_c0 >> 0x20) != uVar11) + 1;
        }
        this_00 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *
                  )(*(longlong *)((longlong)this + 8) + 8);
        local_c8 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(this_00,&local_res18,(bool *)&local_c8);
        uVar12 = *(ulonglong *)
                  (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) + 8 +
                  uVar15 * 0x10);
        uVar9 = (uint)(uVar12 >> 0x20);
        if (uVar9 != 0xffffffff) {
          local_b0 = *(undefined8 *)
                      (*(longlong *)
                        ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                        (uVar12 >> 0x29) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          uVar9 = uVar9 * 4;
          if ((uint)local_b0 != uVar11) {
            uVar9 = uVar9 | ((uint)((ulonglong)local_b0 >> 0x20) != uVar11) + 1;
          }
          local_c8 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(this_00,&local_res20,(bool *)&local_c8);
        }
      }
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar16 <= (int)uVar11) break;
      pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = (uVar12 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != 0) &&
           (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != -1)) break;
        uVar11 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        if ((int)uVar16 <= (int)uVar11) goto joined_r0x00014ce4c0a9;
      }
    }
  } while( true );
}

// operator() @ 14ce4d6f0

void __thiscall
`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l11::<lambda_3>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  TVector<double>_u_0 *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulong64 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulong64 local_res10;
  ulong64 local_res18;
  ulonglong local_res20;
  uint local_b8;
  uint uStack_b4;
  TVector<double>_u_0 local_a0;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar16 = 0;
  uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar17 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar16 = 1;
    uVar15 = 1;
    if ((int)uVar17 < 2) goto joined_r0x00014ce4d785;
    do {
      lVar7 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
      lVar6 = *(longlong *)(pFVar5 + (uVar16 >> 9) * 8);
      if ((*(short *)(lVar7 + lVar6) != 0) && (*(short *)(lVar7 + lVar6) != -1)) break;
      uVar15 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar17);
  }
  uVar15 = (uint)uVar16;
joined_r0x00014ce4d785:
  do {
    if (uVar15 == uVar17) {
      return;
    }
    while( true ) {
      uVar15 = (uint)uVar16;
      if (*(char *)((longlong)this + 0x18) == '\0') {
        pTVar11 = &local_a0;
        local_a0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_a0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_a0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar11 = &UE::Geometry::FDynamicMesh3::GetTriNormal
                             (param_1,(TVector<double> *)&local_70._s_0,uVar15)->field0_0x0;
      }
      uVar12 = (ulonglong)(uVar15 & 0x1ff);
      local_88 = (((TVector<double>_u_0 *)&(pTVar11->_s_0).X)->_s_0).X;
      dStack_80 = (pTVar11->_s_0).Y;
      local_78 = (pTVar11->_s_0).Z;
      local_res20 = (uVar16 >> 9) * 8;
      lVar6 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + local_res20);
      uVar3 = *(undefined8 *)(lVar6 + uVar12 * 0xc);
      uVar4 = *(uint *)(lVar6 + 8 + uVar12 * 0xc);
      local_b8 = (uint)uVar3;
      lVar6 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_b8 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(local_b8 & 0x1ff) * 0x18);
      local_a0._s_0.X = *pdVar1;
      local_a0._s_0.Y = pdVar1[1];
      local_a0._s_0.Z = *(double *)(lVar6 + 0x10 + (ulonglong)(local_b8 & 0x1ff) * 0x18);
      cVar8 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_a0,&local_88);
      uStack_b4 = (uint)((ulonglong)uVar3 >> 0x20);
      lVar6 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uStack_b4 >> 9) * 8)
      ;
      puVar2 = (undefined4 *)(lVar6 + (ulonglong)(uStack_b4 & 0x1ff) * 0x18);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      local_48 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(uStack_b4 & 0x1ff) * 0x18);
      cVar9 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_58,&local_88);
      uVar13 = (ulonglong)(uVar4 & 0x1ff);
      lVar6 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8);
      puVar2 = (undefined4 *)(lVar6 + uVar13 * 0x18);
      local_70._0_4_ = *puVar2;
      local_70._4_4_ = puVar2[1];
      local_70._8_4_ = puVar2[2];
      local_70._12_4_ = puVar2[3];
      local_70._s_0.Z = *(double *)(lVar6 + 0x10 + uVar13 * 0x18);
      cVar10 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_70,&local_88);
      if (*(int *)((longlong)this + 0x14) <=
          (int)((uint)(cVar8 != '\0') + (uint)(cVar10 != '\0') + (uint)(cVar9 != '\0'))) {
        if (*(char *)((longlong)this + 0x10) == '\x01') {
          puVar14 = &local_res10;
          local_res20 = uVar16;
        }
        else {
          if ((param_1->TriangleGroups).bIsSet == false) {
            uVar12 = 0xffffffff;
          }
          else if ((((int)uVar15 < 0) ||
                   ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar15)) ||
                  (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                                  AllocatorInstance.Data + local_res20) + uVar12 * 2
                                               ) - 1U))) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulonglong)
                     *(uint *)(*(longlong *)
                                ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + local_res20) + uVar12 * 4);
          }
          puVar14 = &local_res18;
          local_res20 = uVar12 << 0x20 | uVar16;
        }
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(*(longlong *)((longlong)this + 8) + 8),puVar14,(bool *)&local_res20);
      }
      uVar15 = uVar15 + 1;
      uVar16 = (ulonglong)uVar15;
      if ((int)uVar17 <= (int)uVar15) break;
      pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar6 = (uVar16 >> 9) * 8;
        lVar7 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar6)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar6)) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        if ((int)uVar17 <= (int)uVar15) goto joined_r0x00014ce4d785;
      }
    }
  } while( true );
}

// AppendBoundingBox @ 14ce4f690

UDynamicMesh * __cdecl
UE::Private::AppendMeshHelper::AppendBoundingBox
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,TBox<double> *param_5,
          int param_6,int param_7,int param_8,UGeometryScriptDebug *param_9)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  bool bVar14;
  int iVar15;
  FText *pFVar16;
  UDynamicMesh *pUVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  FGridBoxMeshGenerator *local_678;
  FGeometryScriptPrimitiveOptions local_670;
  undefined1 local_668 [25];
  FScriptContainerElement local_64f;
  undefined4 local_648;
  undefined1 *local_640;
  TVector<double>_u_0 local_638;
  double local_620;
  double dStack_618;
  double local_610;
  float local_608;
  float local_604;
  float local_600;
  FDynamicMesh3 *local_5f8 [2];
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  code *local_5c8;
  FGridBoxMeshGenerator ***local_5c0;
  code *local_5b8;
  FDynamicMesh3 **local_5b0;
  FGridBoxMeshGenerator **local_5a8;
  TTransform<double> *local_5a0;
  FGeometryScriptPrimitiveOptions *local_598;
  double *local_590;
  double *local_588;
  FText local_580;
  FText local_570;
  TVector<double>_u_0 local_558;
  TRotator<double> local_538;
  undefined1 local_518 [16];
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  char local_4d8;
  FGridBoxMeshGenerator local_4c8;
  TQuaternion<double>_u_0 local_3c8;
  char local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  undefined1 local_388 [16];
  double local_378;
  undefined1 local_370 [16];
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined1 local_340 [16];
  double local_330;
  TTransform<double> local_328;
  FDynamicMesh3 local_2c8;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_580,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendBoundingBox",
                         L"AppendBoundingBox: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar16);
    if (local_580.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_580.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_5->IsValid == '\0') {
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_570,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendBoundingBox_InvalidBox",
                         L"AppendBoundingBox: Bounding Box is empty, and cannot be appended.");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar16);
    if (local_570.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_570.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator(&local_4c8);
    dVar9 = __real_3fe0000000000000;
    local_340 = *(undefined1 (*) [16])&(param_5->Max).field0_0x0;
    local_358 = (param_5->Min).field0_0x0._s_0.X;
    dStack_350 = (param_5->Min).field0_0x0._s_0.Y;
    local_4c8.Box.Frame.Rotation.field0_0x0._s_0.W = 1.0;
    local_330 = (param_5->Max).field0_0x0._s_0.Z;
    auVar12._4_8_ = in_XMM2_Qb;
    auVar12._0_4_ = local_340._4_4_;
    auVar26._0_8_ = auVar12._0_8_ << 0x20;
    auVar26._8_4_ = local_340._8_4_;
    auVar26._12_4_ = local_340._12_4_;
    local_348 = (param_5->Min).field0_0x0._s_0.Z;
    iVar15 = 0;
    local_4c8.EdgeVertices.field0_0x0._s_0.A = param_6;
    if (param_6 < 0) {
      local_4c8.EdgeVertices.field0_0x0._s_0.A = iVar15;
    }
    local_4c8.Box.Frame.Origin.field0_0x0._s_0.X =
         (local_340._0_8_ + local_358) * __real_3fe0000000000000;
    local_4c8.EdgeVertices.field0_0x0._s_0.B = param_7;
    if (param_7 < 0) {
      local_4c8.EdgeVertices.field0_0x0._s_0.B = iVar15;
    }
    local_4c8.Box.Frame.Rotation.field0_0x0._s_0.X = 0.0;
    local_4c8.Box.Extents.field0_0x0._s_0.X =
         (local_340._0_8_ - local_358) * __real_3fe0000000000000;
    local_4c8.EdgeVertices.field0_0x0._s_0.C = param_8;
    if (param_8 < 0) {
      local_4c8.EdgeVertices.field0_0x0._s_0.C = iVar15;
    }
    local_4c8.bPolygroupPerQuad = param_3.PolygroupMode == PerQuad;
    local_4c8.Box.Frame.Origin.field0_0x0._s_0.Y =
         (auVar26._8_8_ + dStack_350) * __real_3fe0000000000000;
    local_4c8.Box.Extents.field0_0x0._s_0.Y = (auVar26._8_8_ - dStack_350) * __real_3fe0000000000000
    ;
    local_4c8.Box.Frame.Origin.field0_0x0._s_0.Z = (local_330 + local_348) * __real_3fe0000000000000
    ;
    local_4c8.Box.Extents.field0_0x0._s_0.Z = (local_330 - local_348) * __real_3fe0000000000000;
    local_4c8.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_4c8.Box.Frame.Rotation.field0_0x0._s_0.Z = 0.0;
    UE::Geometry::FGridBoxMeshGenerator::Generate(&local_4c8);
    local_678 = &local_4c8;
    local_4d8 = '\0';
    local_328.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
    local_328.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
    local_5e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_5e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_328.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
    local_328.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
    local_328.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
    local_328.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
    local_328.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
    local_328.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
    local_328.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
    local_328.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
    local_328.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
    local_328.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
    local_670 = param_3;
    bVar14 = UDynamicMesh::IsEmpty(param_1);
    if (bVar14) {
      local_5a8 = &local_678;
      local_5a0 = &local_328;
      local_598 = &local_670;
      local_590 = &local_5e8;
      local_588 = &local_4f8;
      local_5c0 = &local_5a8;
      local_5c8 = Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5c8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2c8,(FMeshShapeGenerator *)local_678);
      local_3a8 = local_4d8;
      if (local_4d8 != '\0') {
        local_3c8._s_0.X = local_4f8;
        local_3c8._s_0.Y = dStack_4f0;
        local_3c8._s_0.Z = local_4e8;
        local_3c8._s_0.W = dStack_4e0;
      }
      local_558._s_0.X = local_5e8;
      local_558._s_0.Y = dStack_5e0;
      local_558._s_0.Z = local_5d8;
      ApplyPrimitiveOptionsToMesh
                (&local_2c8,&local_328,local_670,(TVector<double> *)&local_558._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_3c8._s_0);
      local_5f8[0] = &local_2c8;
      local_5b0 = local_5f8;
      local_5b8 = Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5b8,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2c8);
    }
    if (param_2 != (FGeometryScriptSimpleCollision *)0x0) {
      dVar2 = (param_5->Max).field0_0x0._s_0.X;
      local_640 = local_668;
      dVar3 = (param_5->Max).field0_0x0._s_0.Y;
      local_390 = (param_4->Scale3D).ZW.m128d_f64[0];
      local_3a0 = (param_4->Scale3D).XY.m128d_f64[0];
      dStack_398 = (param_4->Scale3D).XY.m128d_f64[1];
      local_668[0x18] = local_668[0x18] | 1;
      dVar4 = (param_5->Max).field0_0x0._s_0.Z;
      local_620 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_618 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_668._8_4_ = 0;
      local_668._12_4_ = 0;
      local_610 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      dVar5 = (param_5->Min).field0_0x0._s_0.Y;
      dVar6 = (param_5->Min).field0_0x0._s_0.X;
      dVar13 = (param_4->Rotation).ZW.m128d_f64[1];
      dVar7 = (param_5->Min).field0_0x0._s_0.Z;
      local_668._16_4_ = 0;
      local_668._20_4_ = 1;
      dVar10 = (dVar5 + dVar3) * dVar9;
      local_64f = (FScriptContainerElement)0x3;
      dVar11 = (dVar6 + dVar2) * dVar9;
      local_648 = 6;
      local_608 = (float)((dVar2 - dVar6) * local_3a0);
      local_668._0_8_ = &___7FKBoxElem__6B_;
      local_388._8_4_ = SUB84(dVar10,0);
      local_388._0_8_ = dVar11;
      local_388._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar11 = dVar11 * (param_4->Scale3D).XY.m128d_f64[0];
      dVar10 = dVar10 * (param_4->Scale3D).XY.m128d_f64[1];
      uVar27 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_604 = (float)((dVar3 - dVar5) * dStack_398);
      auVar29._8_4_ = SUB84(dVar10,0);
      auVar29._0_8_ = dVar11;
      auVar29._12_4_ = uVar27;
      local_378 = (dVar7 + dVar4) * dVar9;
      local_600 = (float)((dVar4 - dVar7) * local_390);
      auVar26 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
      auVar19 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      dVar4 = local_378 * local_390;
      dVar2 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar21 = blendpd(auVar19,auVar26,2);
      dVar9 = auVar26._0_8_;
      auVar30._0_8_ = auVar29._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar11;
      auVar30._8_8_ = dVar4 * auVar19._8_8_ - dVar9 * dVar10;
      auVar31._8_4_ = SUB84(dVar10,0);
      auVar31._0_8_ = dVar11;
      auVar31._12_4_ = uVar27;
      auVar19._8_4_ = SUB84(dVar2,0);
      auVar19._0_8_ = dVar4;
      auVar19._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar19 = blendpd(auVar31,auVar19,2);
      auVar20._0_8_ = auVar19._0_8_ * dVar9 - auVar21._0_8_ * dVar4;
      auVar20._8_8_ = auVar19._8_8_ * auVar26._8_8_ - auVar21._8_8_ * dVar2;
      auVar19 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      dVar2 = auVar30._8_8_ + auVar30._8_8_;
      dVar3 = auVar20._0_8_ + auVar20._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar31 = blendpd(auVar30,auVar20,2);
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar2;
      auVar24._12_4_ = uVar27;
      auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar22._8_4_ = SUB84(dVar3,0);
      auVar22._0_8_ = dVar2;
      auVar22._12_4_ = uVar27;
      auVar31 = blendpd(auVar22,auVar32,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar2;
      auVar25._8_8_ = auVar32._0_8_ * auVar19._8_8_ - dVar9 * dVar3;
      auVar19 = blendpd(auVar19,auVar26,2);
      local_518 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      auVar21._8_4_ = SUB84(auVar25._8_8_,0);
      auVar21._0_8_ = auVar25._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar23._0_8_ = auVar31._0_8_ * dVar9 - auVar19._0_8_ * auVar32._0_8_;
      auVar23._8_8_ = auVar31._8_8_ * auVar26._8_8_ - auVar19._8_8_ * auVar32._8_8_;
      local_508 = (param_4->Rotation).ZW.m128d_f64[0];
      dStack_500 = (param_4->Rotation).ZW.m128d_f64[1];
      dVar9 = dVar2 * dVar13 + dVar11 + auVar21._8_8_ + (param_4->Translation).XY.m128d_f64[0];
      dVar2 = dVar3 * dVar13 + dVar10 + auVar23._0_8_ + (param_4->Translation).XY.m128d_f64[1];
      uVar27 = SUB84(dVar2,0);
      uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar26 = blendpd(auVar25,auVar23,2);
      local_370._8_4_ = uVar27;
      local_370._0_8_ = dVar9;
      local_370._12_4_ = uVar28;
      local_638._s_0.Z =
           auVar32._0_8_ * dVar13 + dVar4 + auVar26._0_8_ + (param_4->Translation).ZW.m128d_f64[0];
      local_638._8_4_ = uVar27;
      local_638._s_0.X = dVar9;
      local_638._12_4_ = uVar28;
      local_360 = local_638._s_0.Z;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_518,&local_538);
      pFVar18 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
      local_610 = local_538.Roll;
      local_620 = local_538.Pitch;
      dStack_618 = local_538.Yaw;
      if (((pFVar18 <= (FScriptContainerElement *)local_668) &&
          ((FScriptContainerElement *)local_668 <
           pFVar18 + (longlong)(param_2->AggGeom).BoxElems.ArrayMax * 0x70)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        pUVar17 = (UDynamicMesh *)(*pcVar8)();
        return pUVar17;
      }
      iVar15 = (param_2->AggGeom).BoxElems.ArrayNum;
      piVar1 = &(param_2->AggGeom).BoxElems.ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&(param_2->AggGeom).BoxElems.AllocatorInstance,piVar1);
      }
      (param_2->AggGeom).BoxElems.ArrayNum = iVar15 + 1;
      pFVar18 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar15 * 0x70;
      *(undefined ***)pFVar18 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar18 + 8) = local_668._8_4_;
      *(ulonglong *)(pFVar18 + 0xc) = CONCAT44(local_668._16_4_,local_668._12_4_);
      *(undefined4 *)(pFVar18 + 0x14) = local_668._20_4_;
      pFVar18[0x18] = (FScriptContainerElement)(local_668[0x18] & 1 | (byte)pFVar18[0x18] & 0xfe);
      pFVar18[0x19] = local_64f;
      *(undefined4 *)(pFVar18 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar18 + 0x28) = pFVar18;
      *(undefined ***)pFVar18 = &___7FKBoxElem__6B_;
      *(double *)(pFVar18 + 0x30) = local_638._s_0.X;
      *(double *)(pFVar18 + 0x38) = local_638._s_0.Y;
      *(double *)(pFVar18 + 0x40) = local_638._s_0.Z;
      *(double *)(pFVar18 + 0x48) = local_620;
      *(double *)(pFVar18 + 0x50) = dStack_618;
      *(double *)(pFVar18 + 0x58) = local_610;
      *(float *)(pFVar18 + 0x60) = local_608;
      *(float *)(pFVar18 + 100) = local_604;
      *(float *)(pFVar18 + 0x68) = local_600;
      FKBoxElem::~FKBoxElem((FKBoxElem *)local_668);
    }
    local_4c8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
  }
  return param_1;
}

// AppendBox @ 14ce500a0

UDynamicMesh * __cdecl
UE::Private::AppendMeshHelper::AppendBox
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,
          TOrientedBox3<double> *param_5,int param_6,int param_7,int param_8,
          UGeometryScriptDebug *param_9)

{
  int *piVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  FText *pFVar18;
  TRotator<double> *pTVar19;
  UDynamicMesh *pUVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  FGridBoxMeshGenerator *local_res8;
  FGeometryScriptPrimitiveOptions local_618 [2];
  undefined1 local_608 [25];
  FScriptContainerElement local_5ef;
  undefined4 local_5e8;
  undefined1 *local_5e0;
  TVector<double>_u_0 local_5d8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  FDynamicMesh3 *local_598 [2];
  double local_588;
  double dStack_580;
  double local_578;
  code *local_568;
  FGridBoxMeshGenerator ***local_560;
  code *local_558;
  FDynamicMesh3 **local_550;
  FGridBoxMeshGenerator **local_548;
  TTransform<double> *local_540;
  FGeometryScriptPrimitiveOptions *local_538;
  double *local_530;
  double *local_528;
  FText local_520;
  TVector<double>_u_0 local_508;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  char local_4a8;
  TQuaternion<double>_u_0 local_4a0;
  char local_480;
  FGridBoxMeshGenerator local_478;
  double local_378;
  double dStack_370;
  double local_368;
  double local_360;
  double dStack_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  TTransform<double> local_328;
  TRotator<double> local_2c8;
  FDynamicMesh3 local_2a8;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_520,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendBox",L"AppendBox: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar18);
    if (local_520.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_520.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator(&local_478);
  local_478.Box.Frame.Origin.field0_0x0._s_0.X = (param_5->Frame).Origin.field0_0x0._s_0.X;
  local_478.Box.Frame.Origin.field0_0x0._s_0.Y = (param_5->Frame).Origin.field0_0x0._s_0.Y;
  iVar17 = 0;
  local_478.EdgeVertices.field0_0x0._s_0.A = param_6;
  if (param_6 < 0) {
    local_478.EdgeVertices.field0_0x0._s_0.A = iVar17;
  }
  local_478.Box.Frame.Origin.field0_0x0._s_0.Z = (param_5->Frame).Origin.field0_0x0._s_0.Z;
  local_478.Box.Frame.Rotation.field0_0x0._s_0.X = (param_5->Frame).Rotation.field0_0x0._s_0.X;
  local_478.Box.Frame.Rotation.field0_0x0._s_0.Y = (param_5->Frame).Rotation.field0_0x0._s_0.Y;
  local_478.Box.Frame.Rotation.field0_0x0._s_0.Z = (param_5->Frame).Rotation.field0_0x0._s_0.Z;
  local_478.EdgeVertices.field0_0x0._s_0.B = param_7;
  if (param_7 < 0) {
    local_478.EdgeVertices.field0_0x0._s_0.B = iVar17;
  }
  local_478.Box.Frame.Rotation.field0_0x0._s_0.W = (param_5->Frame).Rotation.field0_0x0._s_0.W;
  local_478.Box.Extents.field0_0x0._s_0.X = (param_5->Extents).field0_0x0._s_0.X;
  local_478.Box.Extents.field0_0x0._s_0.Y = (param_5->Extents).field0_0x0._s_0.Y;
  local_478.Box.Extents.field0_0x0._s_0.Z = (param_5->Extents).field0_0x0._s_0.Z;
  local_478.EdgeVertices.field0_0x0._s_0.C = param_8;
  if (param_8 < 0) {
    local_478.EdgeVertices.field0_0x0._s_0.C = iVar17;
  }
  local_478.bPolygroupPerQuad = param_3.PolygroupMode == PerQuad;
  UE::Geometry::FGridBoxMeshGenerator::Generate(&local_478);
  local_res8 = &local_478;
  local_328.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_328.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_588 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_580 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_578 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_328.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_328.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_328.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_328.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_328.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_328.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_328.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_328.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  local_328.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_328.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_4a8 = '\0';
  local_618[0] = param_3;
  bVar16 = UDynamicMesh::IsEmpty(param_1);
  if (bVar16) {
    local_548 = &local_res8;
    local_540 = &local_328;
    local_538 = local_618;
    local_530 = &local_588;
    local_528 = &local_4c8;
    local_560 = &local_548;
    local_568 = Core::Private::Function::
                TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_568,
               GeneralEdit,Unknown,false);
  }
  else {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2a8,(FMeshShapeGenerator *)local_res8);
    local_480 = local_4a8;
    if (local_4a8 != '\0') {
      local_4a0._s_0.X = local_4c8;
      local_4a0._s_0.Y = dStack_4c0;
      local_4a0._s_0.Z = local_4b8;
      local_4a0._s_0.W = dStack_4b0;
    }
    local_508._s_0.X = local_588;
    local_508._s_0.Y = dStack_580;
    local_508._s_0.Z = local_578;
    ApplyPrimitiveOptionsToMesh
              (&local_2a8,&local_328,local_618[0],(TVector<double> *)&local_508._s_0,
               (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_4a0._s_0);
    local_598[0] = &local_2a8;
    local_550 = local_598;
    local_558 = Core::Private::Function::
                TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_558,
               GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2a8);
  }
  if (param_2 != (FGeometryScriptSimpleCollision *)0x0) {
    local_378 = (param_4->Scale3D).XY.m128d_f64[0];
    dStack_370 = (param_4->Scale3D).XY.m128d_f64[1];
    local_5e0 = local_608;
    local_368 = (param_4->Scale3D).ZW.m128d_f64[0];
    local_608[0x18] = local_608[0x18] | 1;
    local_5c0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_5b8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_608._8_4_ = 0;
    local_608._12_4_ = 0;
    local_5b0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_608._16_4_ = 0;
    dVar11 = (param_4->Rotation).ZW.m128d_f64[1];
    local_608._20_4_ = 1;
    local_5ef = (FScriptContainerElement)0x3;
    local_5a8 = (float)((local_378 + local_378) * (param_5->Extents).field0_0x0._s_0.X);
    local_5e8 = 6;
    local_608._0_8_ = &___7FKBoxElem__6B_;
    local_5a4 = (float)((dStack_370 + dStack_370) * (param_5->Extents).field0_0x0._s_0.Y);
    local_360 = (param_5->Frame).Origin.field0_0x0._s_0.X;
    dStack_358 = (param_5->Frame).Origin.field0_0x0._s_0.Y;
    local_5a0 = (float)((local_368 + local_368) * (param_5->Extents).field0_0x0._s_0.Z);
    dVar7 = (param_4->Scale3D).XY.m128d_f64[0] * local_360;
    dVar8 = (param_4->Scale3D).XY.m128d_f64[1] * dStack_358;
    uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
    local_350 = (param_5->Frame).Origin.field0_0x0._s_0.Z;
    auVar33._8_4_ = SUB84(dVar8,0);
    auVar33._0_8_ = dVar7;
    auVar33._12_4_ = uVar31;
    auVar22 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    dVar9 = local_350 * (param_4->Scale3D).ZW.m128d_f64[0];
    dVar10 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar2 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
    dVar4 = auVar2._0_8_;
    auVar26 = blendpd(auVar22,auVar2,2);
    auVar34._0_8_ = auVar33._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar7;
    auVar34._8_8_ = dVar9 * auVar22._8_8_ - dVar4 * dVar8;
    auVar35._8_4_ = SUB84(dVar8,0);
    auVar35._0_8_ = dVar7;
    auVar35._12_4_ = uVar31;
    auVar22._8_4_ = SUB84(dVar10,0);
    auVar22._0_8_ = dVar9;
    auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar22 = blendpd(auVar35,auVar22,2);
    dVar5 = auVar2._8_8_;
    auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar26._0_8_ * dVar9;
    auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar26._8_8_ * dVar10;
    auVar22 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    auVar35 = blendpd(auVar34,auVar23,2);
    dVar10 = auVar34._8_8_ + auVar34._8_8_;
    dVar6 = auVar23._0_8_ + auVar23._0_8_;
    uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    auVar29._8_4_ = SUB84(dVar6,0);
    auVar29._0_8_ = dVar10;
    auVar29._12_4_ = uVar31;
    auVar27._8_4_ = SUB84(dVar6,0);
    auVar27._0_8_ = dVar10;
    auVar27._12_4_ = uVar31;
    auVar35 = blendpd(auVar27,auVar36,2);
    auVar30._0_8_ = auVar29._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar10;
    auVar30._8_8_ = auVar36._0_8_ * auVar22._8_8_ - dVar4 * dVar6;
    auVar22 = blendpd(auVar22,auVar2,2);
    auVar28._0_8_ = auVar35._0_8_ * dVar4 - auVar22._0_8_ * auVar36._0_8_;
    auVar28._8_8_ = auVar35._8_8_ * dVar5 - auVar22._8_8_ * auVar36._8_8_;
    dVar12 = (param_4->Rotation).XY.m128d_f64[0];
    dVar13 = (param_4->Rotation).XY.m128d_f64[1];
    auVar26._8_4_ = SUB84(auVar30._8_8_,0);
    auVar26._0_8_ = auVar30._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
    auVar22 = blendpd(auVar30,auVar28,2);
    dVar10 = dVar10 * dVar11 + dVar7 + auVar26._8_8_ + (param_4->Translation).XY.m128d_f64[0];
    dVar6 = dVar6 * dVar11 + dVar8 + auVar28._0_8_ + (param_4->Translation).XY.m128d_f64[1];
    uVar31 = SUB84(dVar6,0);
    uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar7 = (param_5->Frame).Rotation.field0_0x0._s_0.X;
    dVar8 = (param_5->Frame).Rotation.field0_0x0._s_0.Y;
    local_348._8_4_ = uVar31;
    local_348._0_8_ = dVar10;
    local_348._12_4_ = uVar32;
    local_5d8._8_4_ = uVar31;
    local_5d8._s_0.X = dVar10;
    local_5d8._12_4_ = uVar32;
    auVar24._8_4_ = auVar2._8_4_;
    auVar24._0_8_ = dVar5;
    auVar24._12_4_ = auVar2._12_4_;
    dVar14 = (param_5->Frame).Rotation.field0_0x0._s_0.Z;
    dVar15 = (param_5->Frame).Rotation.field0_0x0._s_0.W;
    local_5d8._s_0.Z =
         auVar36._0_8_ * dVar11 + dVar9 + auVar22._0_8_ + (param_4->Translation).ZW.m128d_f64[0];
    auVar25._8_4_ = auVar2._0_4_;
    auVar25._0_8_ = dVar4;
    auVar25._12_4_ = auVar2._4_4_;
    dVar10 = dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar24._8_8_ * dVar8 +
             dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar25._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
    ;
    dVar6 = dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar5 * dVar15 +
            dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar4 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_4e8._8_4_ = SUB84(dVar10,0);
    local_4e8._0_8_ =
         dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar5 * dVar7 +
         dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_4e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_4d8._8_4_ = SUB84(dVar6,0);
    local_4d8._0_8_ =
         dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar5 * dVar14 +
         dVar13 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar4 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_4d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_338 = local_5d8._s_0.Z;
    pTVar19 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_4e8,&local_2c8);
    pFVar21 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
    local_5c0 = pTVar19->Pitch;
    dStack_5b8 = pTVar19->Yaw;
    local_5b0 = pTVar19->Roll;
    if ((pFVar21 <= (FScriptContainerElement *)local_608) &&
       ((FScriptContainerElement *)local_608 <
        pFVar21 + (longlong)(param_2->AggGeom).BoxElems.ArrayMax * 0x70)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        pUVar20 = (UDynamicMesh *)(*pcVar3)();
        return pUVar20;
      }
    }
    iVar17 = (param_2->AggGeom).BoxElems.ArrayNum;
    piVar1 = &(param_2->AggGeom).BoxElems.ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&(param_2->AggGeom).BoxElems.AllocatorInstance,piVar1);
    }
    (param_2->AggGeom).BoxElems.ArrayNum = iVar17 + 1;
    pFVar21 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)iVar17 * 0x70;
    *(undefined ***)pFVar21 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar21 + 8) = local_608._8_4_;
    *(ulonglong *)(pFVar21 + 0xc) = CONCAT44(local_608._16_4_,local_608._12_4_);
    *(undefined4 *)(pFVar21 + 0x14) = local_608._20_4_;
    pFVar21[0x18] = (FScriptContainerElement)(local_608[0x18] & 1 | (byte)pFVar21[0x18] & 0xfe);
    pFVar21[0x19] = local_5ef;
    *(undefined4 *)(pFVar21 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar21 + 0x28) = pFVar21;
    *(undefined ***)pFVar21 = &___7FKBoxElem__6B_;
    *(double *)(pFVar21 + 0x30) = local_5d8._s_0.X;
    *(double *)(pFVar21 + 0x38) = local_5d8._s_0.Y;
    *(double *)(pFVar21 + 0x40) = local_5d8._s_0.Z;
    *(double *)(pFVar21 + 0x48) = local_5c0;
    *(double *)(pFVar21 + 0x50) = dStack_5b8;
    *(double *)(pFVar21 + 0x58) = local_5b0;
    *(float *)(pFVar21 + 0x60) = local_5a8;
    *(float *)(pFVar21 + 100) = local_5a4;
    *(float *)(pFVar21 + 0x68) = local_5a0;
    FKBoxElem::~FKBoxElem((FKBoxElem *)local_608);
  }
  local_478._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  if ((void *)local_478._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_478._padding_);
  }
  return param_1;
}

// AppendCapsule @ 14ce50b20

UDynamicMesh * __cdecl
UE::Private::AppendMeshHelper::AppendCapsule
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          float param_6,int param_7,int param_8,int param_9,
          EGeometryScriptPrimitiveOriginMode param_10,UGeometryScriptDebug *param_11)

{
  int *piVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  FText *pFVar14;
  UDynamicMesh *pUVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  FMeshShapeGenerator *local_res8;
  FGeometryScriptPrimitiveOptions local_5b8 [2];
  undefined1 local_5a8 [25];
  FScriptContainerElement local_58f;
  undefined4 local_588;
  undefined1 *local_580;
  TVector<double>_u_0 local_578;
  double local_560;
  double dStack_558;
  double local_550;
  float local_548;
  float local_544;
  undefined1 local_538 [160];
  double local_498;
  double local_490;
  int local_488;
  int local_484;
  int local_480;
  bool local_47c;
  FDynamicMesh3 *local_478 [2];
  double local_468;
  double dStack_460;
  double local_458;
  TRotator<double> local_448;
  code *local_430;
  FMeshShapeGenerator ***local_428;
  code *local_420;
  FDynamicMesh3 **local_418;
  FMeshShapeGenerator **local_410;
  TTransform<double> *local_408;
  FGeometryScriptPrimitiveOptions *local_400;
  double *local_3f8;
  double *local_3f0;
  FText local_3e8;
  TVector<double>_u_0 local_3d8;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  char local_378;
  TQuaternion<double>_u_0 local_370;
  char local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  undefined1 local_330 [16];
  double local_320;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  double local_308;
  TTransform<double> local_2f8;
  FDynamicMesh3 local_298;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_3e8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendCapsule",L"AppendCapsule: TargetMesh is Null");
    UE::Geometry::AppendError(param_11,InvalidInputs,pFVar14);
    if (local_3e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_538._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
  if (param_7 < 2) {
    param_7 = 2;
  }
  local_538._8_8_ = (FScriptContainerElement *)0x0;
  fVar10 = param_5;
  if (param_5 <= __real_358637bd) {
    fVar10 = __real_358637bd;
  }
  if (param_8 < 3) {
    param_8 = 3;
  }
  local_538._16_8_ = 0;
  local_538._24_8_ = (FScriptContainerElement *)0x0;
  local_538._32_8_ = 0;
  fVar21 = param_6;
  if (param_6 <= __real_358637bd) {
    fVar21 = __real_358637bd;
  }
  local_480 = param_9;
  if (param_9 < 0) {
    local_480 = 0;
  }
  local_538._40_8_ = (FScriptContainerElement *)0x0;
  local_47c = param_3.PolygroupMode == PerQuad;
  local_498 = (double)fVar10;
  local_538._48_8_ = 0;
  local_538._56_8_ = (FScriptContainerElement *)0x0;
  local_538._64_8_ = 0;
  local_538._72_8_ = (FScriptContainerElement *)0x0;
  local_538._80_8_ = 0;
  local_538._88_8_ = (FScriptContainerElement *)0x0;
  local_490 = (double)fVar21;
  local_488 = 2;
  if (2 < param_7) {
    local_488 = param_7;
  }
  local_538._96_8_ = 0;
  local_538._104_8_ = (FScriptContainerElement *)0x0;
  local_484 = 3;
  if (3 < param_8) {
    local_484 = param_8;
  }
  local_538._112_8_ = 0;
  iVar16 = local_480 + local_488 * 2 + -2;
  local_538._120_8_ = (FScriptContainerElement *)0x0;
  iVar18 = iVar16 * local_484;
  local_538._128_8_ = 0;
  local_538._136_8_ = (FScriptContainerElement *)0x0;
  local_538._144_8_ = 0;
  local_538[0x98] = false;
  iVar13 = iVar18 + 2;
  UE::Geometry::FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)local_538,iVar13,iVar18 * 2,
             (local_484 + 1) * iVar16 + local_484 * 2,iVar13);
  UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_538);
  UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_538);
  UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_538);
  UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_538);
  if (param_10 == Center) {
    param_5 = param_6 * __real_bf000000;
  }
  local_458 = (double)param_5;
  local_res8 = (FMeshShapeGenerator *)local_538;
  local_378 = '\0';
  local_468 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_460 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2f8.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_2f8.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_2f8.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_2f8.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_2f8.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_2f8.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_2f8.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_2f8.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_2f8.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_2f8.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_2f8.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_2f8.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  local_5b8[0] = param_3;
  local_448.Roll = local_458;
  bVar12 = UDynamicMesh::IsEmpty(param_1);
  if (bVar12) {
    local_410 = &local_res8;
    local_408 = &local_2f8;
    local_400 = local_5b8;
    local_3f8 = &local_468;
    local_3f0 = &local_398;
    local_428 = &local_410;
    local_430 = Core::Private::Function::
                TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_430,
               GeneralEdit,Unknown,false);
  }
  else {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_298,local_res8);
    local_350 = local_378;
    if (local_378 != '\0') {
      local_370._s_0.X = local_398;
      local_370._s_0.Y = dStack_390;
      local_370._s_0.Z = local_388;
      local_370._s_0.W = dStack_380;
    }
    local_3d8._s_0.X = local_468;
    local_3d8._s_0.Y = dStack_460;
    local_3d8._s_0.Z = local_458;
    ApplyPrimitiveOptionsToMesh
              (&local_298,&local_2f8,local_5b8[0],(TVector<double> *)&local_3d8._s_0,
               (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_370._s_0);
    local_478[0] = &local_298;
    local_418 = local_478;
    local_420 = Core::Private::Function::
                TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_420,
               GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_298);
  }
  if (param_2 != (FGeometryScriptSimpleCollision *)0x0) {
    local_5a8[0x18] = local_5a8[0x18] | 1;
    local_580 = local_5a8;
    local_560 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_558 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_5a8._8_4_ = 0;
    local_5a8._12_4_ = 0;
    local_5a8._16_4_ = 0;
    local_550 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_5a8._20_4_ = 2;
    local_58f = (FScriptContainerElement)0x3;
    local_588 = 6;
    local_5a8._0_8_ = &___7FKSphylElem__6B_;
    local_548 = 1.0;
    local_544 = 1.0;
    if (param_10 == Center) {
      local_338 = 0.0;
    }
    else {
      local_338 = local_490 * __real_3fe0000000000000 + local_498;
    }
    dVar11 = (param_4->Rotation).ZW.m128d_f64[1];
    dVar6 = (param_4->Scale3D).XY.m128d_f64[0] * 0.0;
    dVar7 = (param_4->Scale3D).XY.m128d_f64[1] * 0.0;
    uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
    local_348 = 0;
    uStack_340 = 0;
    auVar19 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    auVar2 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
    dVar8 = local_338 * (param_4->Scale3D).ZW.m128d_f64[0];
    dVar9 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar31._8_4_ = SUB84(dVar7,0);
    auVar31._0_8_ = dVar6;
    auVar31._12_4_ = uVar29;
    dVar4 = auVar2._0_8_;
    auVar24 = blendpd(auVar19,auVar2,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar6;
    auVar32._8_8_ = dVar8 * auVar19._8_8_ - dVar4 * dVar7;
    auVar33._8_4_ = SUB84(dVar7,0);
    auVar33._0_8_ = dVar6;
    auVar33._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(dVar9,0);
    auVar19._0_8_ = dVar8;
    auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar19 = blendpd(auVar33,auVar19,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar4 - auVar24._0_8_ * dVar8;
    auVar20._8_8_ = auVar19._8_8_ * auVar2._8_8_ - auVar24._8_8_ * dVar9;
    auVar19 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    auVar33 = blendpd(auVar32,auVar20,2);
    dVar9 = auVar32._8_8_ + auVar32._8_8_;
    dVar5 = auVar20._0_8_ + auVar20._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar34._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar34._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar27._8_4_ = SUB84(dVar5,0);
    auVar27._0_8_ = dVar9;
    auVar27._12_4_ = uVar29;
    auVar25._8_4_ = SUB84(dVar5,0);
    auVar25._0_8_ = dVar9;
    auVar25._12_4_ = uVar29;
    auVar33 = blendpd(auVar25,auVar34,2);
    auVar28._0_8_ = auVar27._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar9;
    auVar28._8_8_ = auVar34._0_8_ * auVar19._8_8_ - dVar4 * dVar5;
    auVar19 = blendpd(auVar19,auVar2,2);
    local_3b8 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    auVar24._8_4_ = SUB84(auVar28._8_8_,0);
    auVar24._0_8_ = auVar28._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar26._0_8_ = auVar33._0_8_ * dVar4 - auVar19._0_8_ * auVar34._0_8_;
    auVar26._8_8_ = auVar33._8_8_ * auVar2._8_8_ - auVar19._8_8_ * auVar34._8_8_;
    local_3a8 = (param_4->Rotation).ZW.m128d_f64[0];
    dStack_3a0 = (param_4->Rotation).ZW.m128d_f64[1];
    dVar4 = dVar9 * dVar11 + dVar6 + auVar24._8_8_ + (param_4->Translation).XY.m128d_f64[0];
    dVar9 = dVar5 * dVar11 + dVar7 + auVar26._0_8_ + (param_4->Translation).XY.m128d_f64[1];
    uVar29 = SUB84(dVar9,0);
    uVar30 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar19 = blendpd(auVar28,auVar26,2);
    local_330._8_4_ = uVar29;
    local_330._0_8_ = dVar4;
    local_330._12_4_ = uVar30;
    local_578._s_0.Z =
         auVar34._0_8_ * dVar11 + dVar8 + auVar19._0_8_ + (param_4->Translation).ZW.m128d_f64[0];
    local_578._8_4_ = uVar29;
    local_578._s_0.X = dVar4;
    local_578._12_4_ = uVar30;
    local_320 = local_578._s_0.Z;
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_3b8,&local_448);
    local_318 = *(uint *)(param_4->Scale3D).XY.m128d_f64;
    uStack_314 = *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4);
    uStack_310 = *(uint *)((param_4->Scale3D).XY.m128d_f64 + 1);
    uStack_30c = *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc);
    local_560 = local_448.Pitch;
    dStack_558 = local_448.Yaw;
    local_308 = (param_4->Scale3D).ZW.m128d_f64[0];
    local_550 = local_448.Roll;
    local_544 = (float)(local_308 * local_490);
    pFVar17 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
    uVar22 = local_318 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar23 = uStack_314 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uStack_314 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_318 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        (double)CONCAT44(uStack_30c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uStack_310 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar22 = uStack_310 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar23 = uStack_30c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
    local_548 = (float)((double)CONCAT44(uVar23,uVar22) * local_498);
    if (((pFVar17 <= (FScriptContainerElement *)local_5a8) &&
        ((FScriptContainerElement *)local_5a8 <
         pFVar17 + (longlong)(param_2->AggGeom).SphylElems.ArrayMax * 0x68)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      pUVar15 = (UDynamicMesh *)(*pcVar3)();
      return pUVar15;
    }
    iVar13 = (param_2->AggGeom).SphylElems.ArrayNum;
    piVar1 = &(param_2->AggGeom).SphylElems.ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x868,&(param_2->AggGeom).SphylElems.AllocatorInstance,piVar1);
    }
    (param_2->AggGeom).SphylElems.ArrayNum = iVar13 + 1;
    pFVar17 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data + (longlong)iVar13 * 0x68;
    *(undefined ***)pFVar17 = &___7FKShapeElem__6B_;
    *(undefined4 *)(pFVar17 + 8) = local_5a8._8_4_;
    *(ulonglong *)(pFVar17 + 0xc) = CONCAT44(local_5a8._16_4_,local_5a8._12_4_);
    *(undefined4 *)(pFVar17 + 0x14) = local_5a8._20_4_;
    pFVar17[0x18] = (FScriptContainerElement)(local_5a8[0x18] & 1 | (byte)pFVar17[0x18] & 0xfe);
    pFVar17[0x19] = local_58f;
    *(undefined4 *)(pFVar17 + 0x20) = 6;
    *(FScriptContainerElement **)(pFVar17 + 0x28) = pFVar17;
    *(undefined ***)pFVar17 = &___7FKSphylElem__6B_;
    *(double *)(pFVar17 + 0x30) = local_578._s_0.X;
    *(double *)(pFVar17 + 0x38) = local_578._s_0.Y;
    *(double *)(pFVar17 + 0x40) = local_578._s_0.Z;
    *(double *)(pFVar17 + 0x48) = local_560;
    *(double *)(pFVar17 + 0x50) = dStack_558;
    *(double *)(pFVar17 + 0x58) = local_550;
    *(float *)(pFVar17 + 0x60) = local_548;
    *(float *)(pFVar17 + 100) = local_544;
    FKSphylElem::~FKSphylElem((FKSphylElem *)local_5a8);
  }
  local_538._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_538._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._136_8_);
  }
  if ((FScriptContainerElement *)local_538._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._120_8_);
  }
  if ((FScriptContainerElement *)local_538._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._104_8_);
  }
  if ((FScriptContainerElement *)local_538._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._88_8_);
  }
  if ((FScriptContainerElement *)local_538._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._72_8_);
  }
  if ((FScriptContainerElement *)local_538._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._56_8_);
  }
  if ((FScriptContainerElement *)local_538._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._40_8_);
  }
  if ((FScriptContainerElement *)local_538._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._24_8_);
  }
  if ((FScriptContainerElement *)local_538._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._8_8_);
  }
  return param_1;
}

// AppendSphereBox @ 14ce55810

UDynamicMesh * __cdecl
UE::Private::AppendMeshHelper::AppendSphereBox
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          int param_6,int param_7,int param_8,EGeometryScriptPrimitiveOriginMode param_9,
          UGeometryScriptDebug *param_10)

{
  undefined8 uVar1;
  bool bVar2;
  FText *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ITextData local_res8;
  FGeometryScriptPrimitiveOptions local_498 [2];
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 *local_450;
  undefined1 *local_448;
  undefined1 local_438 [64];
  double dStack_3f8;
  double local_3f0;
  double dStack_3e8;
  char local_3e0;
  TTransform<double> local_3d8;
  undefined1 local_378 [253];
  bool local_27b;
  float local_278;
  ESphereProjectionMethod local_274;
  FDynamicMesh3 local_268;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_468._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSphereBox",L"AppendSphereBox: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar3);
    if ((longlong *)local_468._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_468._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_378);
    local_278 = param_5;
    if (param_5 <= __real_358637bd) {
      local_278 = __real_358637bd;
    }
    local_378._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
    local_274 = CubeMapping;
    if (param_6 < 0) {
      param_6 = 0;
    }
    if (param_7 < 0) {
      param_7 = 0;
    }
    local_378._248_4_ = param_8;
    if (param_8 < 0) {
      local_378._248_4_ = 0;
    }
    local_27b = param_3.PolygroupMode == PerQuad;
    local_378._240_4_ = param_6;
    local_378._244_4_ = param_7;
    UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_378);
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_9 == Base) {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar1 = (FGeometryScriptPrimitiveOptions *)(double)param_5;
    }
    local_3d8.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
    local_3d8.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
    local_res8 = (ITextData)local_378;
    local_3d8.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
    local_3d8.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
    local_3d8.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
    local_3d8.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
    local_3d8.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
    local_3d8.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
    local_3d8.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
    local_3d8.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
    local_3d8.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
    local_3d8.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
    local_438[0x30] = '\0';
    local_498[0] = param_3;
    local_488._0_4_ = uVar4;
    local_488._4_4_ = uVar5;
    local_488._8_4_ = uVar6;
    local_488._12_4_ = uVar7;
    local_488._s_0.Z = (double)uVar1;
    bVar2 = UDynamicMesh::IsEmpty(param_1);
    if (bVar2) {
      local_468._s_0.X = (double)&local_res8;
      local_468._s_0.Y = (double)&local_3d8;
      local_468._s_0.Z = (double)local_498;
      local_450 = &local_488;
      local_448 = local_438 + 0x10;
      local_438._8_8_ = &local_468;
      local_438._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_438,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268,(FMeshShapeGenerator *)local_res8);
      local_3e0 = local_438[0x30];
      if (local_438[0x30] != '\0') {
        local_438._56_8_ = local_438._16_8_;
        dStack_3f8 = (double)local_438._24_8_;
        local_3f0 = (double)local_438._32_8_;
        dStack_3e8 = (double)local_438._40_8_;
      }
      local_468._s_0.X = (double)CONCAT44(local_488._4_4_,local_488._0_4_);
      local_468._s_0.Y = (double)CONCAT44(local_488._12_4_,local_488._8_4_);
      local_468._s_0.Z = local_488._s_0.Z;
      ApplyPrimitiveOptionsToMesh
                (&local_268,&local_3d8,local_498[0],(TVector<double> *)&local_468._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_438 + 0x38));
      local_438._0_8_ = &local_268;
      local_468._s_0.Y = (double)local_438;
      local_468._s_0.X =
           (double)Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_468._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
    }
    if (param_2 != (FGeometryScriptSimpleCollision *)0x0) {
      local_488._0_4_ = uVar4;
      local_488._4_4_ = uVar5;
      local_488._8_4_ = uVar6;
      local_488._12_4_ = uVar7;
      local_488._16_8_ = uVar1;
      AppendSphereSimpleCollision
                (&param_2->AggGeom,param_4,param_5,(TVector<double> *)&local_488._s_0);
    }
    local_378._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_378._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._136_8_);
    }
    if ((FScriptContainerElement *)local_378._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._120_8_);
    }
    if ((FScriptContainerElement *)local_378._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._104_8_);
    }
    if ((FScriptContainerElement *)local_378._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._88_8_);
    }
    if ((FScriptContainerElement *)local_378._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._72_8_);
    }
    if ((FScriptContainerElement *)local_378._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._56_8_);
    }
    if ((FScriptContainerElement *)local_378._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._40_8_);
    }
    if ((FScriptContainerElement *)local_378._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._24_8_);
    }
    if ((FScriptContainerElement *)local_378._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_378._8_8_);
    }
  }
  return param_1;
}

// AppendSphereLatLong @ 14ce56290

UDynamicMesh * __cdecl
UE::Private::AppendMeshHelper::AppendSphereLatLong
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          int param_6,int param_7,EGeometryScriptPrimitiveOriginMode param_8,
          UGeometryScriptDebug *param_9)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  FText *pFVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ITextData local_res8;
  FGeometryScriptPrimitiveOptions local_448 [2];
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 *local_400;
  double *local_3f8;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [160];
  double local_338;
  int local_330;
  int local_32c;
  bool local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  char local_2f8;
  TQuaternion<double>_u_0 local_2f0;
  char local_2d0;
  TTransform<double> local_2c8;
  FDynamicMesh3 local_268;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_418._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSphereLatLong",
                        L"AppendSphereLatLong: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar4);
    if ((longlong *)local_418._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_418._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    fVar6 = param_5;
    if (param_5 <= __real_358637bd) {
      fVar6 = __real_358637bd;
    }
    local_3d8._8_8_ = (FScriptContainerElement *)0x0;
    local_3d8._16_8_ = 0.0;
    if (param_6 < 3) {
      param_6 = 3;
    }
    local_3d8._24_8_ = (FScriptContainerElement *)0x0;
    local_3d8._32_8_ = 0.0;
    local_3d8._40_8_ = (FScriptContainerElement *)0x0;
    local_3d8._48_8_ = 0.0;
    local_3d8._56_8_ = (FScriptContainerElement *)0x0;
    local_3d8._64_8_ = 0.0;
    local_3d8._72_8_ = (FScriptContainerElement *)0x0;
    local_3d8._80_8_ = 0;
    local_3d8._88_8_ = (FScriptContainerElement *)0x0;
    local_3d8._96_8_ = 0;
    local_3d8._104_8_ = (FScriptContainerElement *)0x0;
    local_3d8._112_8_ = 0;
    local_3d8._120_8_ = (FScriptContainerElement *)0x0;
    local_3d8._128_8_ = 0;
    local_3d8._136_8_ = (FScriptContainerElement *)0x0;
    local_3d8._144_8_ = 0;
    local_3d8[0x98] = false;
    local_3d8._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
    local_338 = (double)fVar6;
    if (param_7 < 3) {
      param_7 = 3;
    }
    local_328 = param_3.PolygroupMode == PerQuad;
    local_330 = 3;
    if (3 < param_6) {
      local_330 = param_6;
    }
    local_32c = 3;
    if (3 < param_7) {
      local_32c = param_7;
    }
    iVar5 = (local_330 + -2) * local_32c;
    iVar1 = iVar5 + 2;
    UE::Geometry::FMeshShapeGenerator::SetBufferSizes
              ((FMeshShapeGenerator *)local_3d8,iVar1,iVar5 * 2,
               (local_32c + 1) * (local_330 + -2) + local_32c * 2,iVar1);
    UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_3d8);
    UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_3d8);
    UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_3d8);
    UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_3d8);
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_8 == Base) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar2 = (FGeometryScriptPrimitiveOptions *)(double)param_5;
    }
    local_2c8.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
    local_2c8.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
    local_res8 = (ITextData)local_3d8;
    local_2c8.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
    local_2c8.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
    local_2c8.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
    local_2c8.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
    local_2c8.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
    local_2c8.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
    local_2c8.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
    local_2c8.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
    local_2c8.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
    local_2c8.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
    local_2f8 = '\0';
    local_448[0] = param_3;
    local_438._0_4_ = uVar7;
    local_438._4_4_ = uVar8;
    local_438._8_4_ = uVar9;
    local_438._12_4_ = uVar10;
    local_438._s_0.Z = (double)uVar2;
    bVar3 = UDynamicMesh::IsEmpty(param_1);
    if (bVar3) {
      local_418._s_0.X = (double)&local_res8;
      local_418._s_0.Y = (double)&local_2c8;
      local_418._s_0.Z = (double)local_448;
      local_400 = &local_438;
      local_3f8 = &local_318;
      local_3e8._8_8_ = &local_418;
      local_3e8._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_3e8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268,(FMeshShapeGenerator *)local_res8);
      local_2d0 = local_2f8;
      if (local_2f8 != '\0') {
        local_2f0._s_0.X = local_318;
        local_2f0._s_0.Y = dStack_310;
        local_2f0._s_0.Z = local_308;
        local_2f0._s_0.W = dStack_300;
      }
      local_418._s_0.X = (double)CONCAT44(local_438._4_4_,local_438._0_4_);
      local_418._s_0.Y = (double)CONCAT44(local_438._12_4_,local_438._8_4_);
      local_418._s_0.Z = local_438._s_0.Z;
      ApplyPrimitiveOptionsToMesh
                (&local_268,&local_2c8,local_448[0],(TVector<double> *)&local_418._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_2f0._s_0);
      local_3e8._0_8_ = &local_268;
      local_418._s_0.Y = (double)local_3e8;
      local_418._s_0.X =
           (double)Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_418._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
    }
    if (param_2 != (FGeometryScriptSimpleCollision *)0x0) {
      local_438._0_4_ = uVar7;
      local_438._4_4_ = uVar8;
      local_438._8_4_ = uVar9;
      local_438._12_4_ = uVar10;
      local_438._16_8_ = uVar2;
      AppendSphereSimpleCollision
                (&param_2->AggGeom,param_4,param_5,(TVector<double> *)&local_438._s_0);
    }
    local_3d8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_3d8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._136_8_);
    }
    if ((FScriptContainerElement *)local_3d8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._120_8_);
    }
    if ((FScriptContainerElement *)local_3d8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._104_8_);
    }
    if ((FScriptContainerElement *)local_3d8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._88_8_);
    }
    if ((FScriptContainerElement *)local_3d8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._72_8_);
    }
    if ((FScriptContainerElement *)local_3d8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._56_8_);
    }
    if ((FScriptContainerElement *)local_3d8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._40_8_);
    }
    if ((FScriptContainerElement *)local_3d8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._24_8_);
    }
    if ((FScriptContainerElement *)local_3d8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._8_8_);
    }
  }
  return param_1;
}

// AppendSphereSimpleCollision @ 14ce56840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Private::AppendMeshHelper::AppendSphereSimpleCollision
          (FKAggregateGeom *param_1,TTransform<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_a8 [25];
  FScriptContainerElement local_8f;
  undefined4 local_88;
  undefined1 *local_80;
  TVector<double>_u_0 local_78;
  float local_60;
  
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar17 = auVar26._0_8_;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[0] * (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_2->Scale3D).XY.m128d_f64[1] * (param_4->field0_0x0)._s_0.Y;
  uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_8f = (FScriptContainerElement)0x3;
  local_88 = 6;
  local_a8._0_8_ = &___7FKSphereElem__6B_;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar33._8_4_ = SUB84(dVar5,0);
  auVar33._0_8_ = dVar4;
  auVar33._12_4_ = uVar31;
  dVar6 = (param_4->field0_0x0)._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_a8[0x18] = local_a8[0x18] | 1;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_80 = local_a8;
  auVar20 = blendpd(auVar12,auVar26,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar34._8_8_ = dVar6 * auVar12._8_8_ - dVar17 * dVar5;
  auVar35._8_4_ = SUB84(dVar5,0);
  auVar35._0_8_ = dVar4;
  auVar35._12_4_ = uVar31;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar35,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar17 - auVar20._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * auVar26._8_8_ - auVar20._8_8_ * dVar7;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar35 = blendpd(auVar34,auVar13,2);
  dVar7 = auVar34._8_8_ + auVar34._8_8_;
  dVar3 = auVar13._0_8_ + auVar13._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
  auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
  auVar24._8_4_ = SUB84(dVar3,0);
  auVar24._0_8_ = dVar7;
  auVar24._12_4_ = uVar31;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar7;
  auVar22._12_4_ = uVar31;
  auVar35 = blendpd(auVar22,auVar36,2);
  auVar25._0_8_ = auVar24._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar7;
  auVar25._8_8_ = auVar36._0_8_ * auVar12._8_8_ - dVar17 * dVar3;
  auVar20._8_4_ = SUB84(auVar25._8_8_,0);
  auVar20._0_8_ = auVar25._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar26,2);
  auVar23._0_8_ = auVar35._0_8_ * dVar17 - auVar12._0_8_ * auVar36._0_8_;
  auVar23._8_8_ = auVar35._8_8_ * auVar26._8_8_ - auVar12._8_8_ * auVar36._8_8_;
  auVar26 = blendpd(auVar25,auVar23,2);
  dVar3 = dVar3 * dVar8 + dVar5 + auVar23._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_78._s_0.Z =
       auVar36._0_8_ * dVar8 + dVar6 + auVar26._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  auVar27._0_8_ =
       CONCAT44(*(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                *(uint *)(param_2->Scale3D).ZW.m128d_f64 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar27._8_4_ = *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
  auVar27._12_4_ = *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
  local_78._8_4_ = SUB84(dVar3,0);
  local_78._s_0.X = dVar7 * dVar8 + dVar4 + auVar20._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_78._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  uVar28 = *(uint *)(param_2->Scale3D).XY.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  uVar32 = *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar14._4_4_ = uVar29;
  auVar14._0_4_ = uVar28;
  auVar14._8_4_ = uVar30;
  auVar14._12_4_ = uVar32;
  auVar15._8_8_ = auVar27._0_8_;
  auVar15._0_8_ = auVar14._8_8_;
  auVar21._4_4_ = uVar29;
  auVar21._0_4_ = uVar28;
  auVar21._8_4_ = uVar30;
  auVar21._12_4_ = uVar32;
  pFVar11 = (param_1->SphereElems).AllocatorInstance.Data;
  auVar18._12_4_ = uVar29;
  auVar18._8_4_ = uVar28;
  auVar18._0_8_ = auVar27._0_8_;
  auVar12 = minpd(auVar21,auVar15);
  auVar16._4_4_ = uVar29;
  auVar16._0_4_ = uVar28;
  auVar16._8_4_ = uVar30;
  auVar16._12_4_ = uVar32;
  auVar26._4_4_ = uVar32;
  auVar26._0_4_ = uVar30;
  auVar35 = minpd(auVar12,auVar18);
  auVar19._8_4_ = auVar27._8_4_;
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = auVar27._12_4_;
  auVar12 = blendpd(auVar16,auVar27,2);
  auVar12 = minpd(auVar19,auVar12);
  auVar26._8_4_ = auVar27._8_4_;
  auVar26._12_4_ = auVar27._12_4_;
  minpd(auVar12,auVar26);
  local_60 = (float)auVar35._0_8_ * param_3;
  if ((pFVar11 <= (FScriptContainerElement *)local_a8) &&
     ((FScriptContainerElement *)local_a8 <
      pFVar11 + (longlong)(param_1->SphereElems).ArrayMax * 0x50)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar10 = (param_1->SphereElems).ArrayNum;
  piVar1 = &(param_1->SphereElems).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->SphereElems).ArrayNum = iVar10 + 1;
  pFVar11 = (param_1->SphereElems).AllocatorInstance.Data + (longlong)iVar10 * 0x50;
  *(undefined ***)pFVar11 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar11 + 8) = local_a8._8_4_;
  *(ulonglong *)(pFVar11 + 0xc) = CONCAT44(local_a8._16_4_,local_a8._12_4_);
  *(undefined4 *)(pFVar11 + 0x14) = local_a8._20_4_;
  pFVar11[0x18] = (FScriptContainerElement)((byte)pFVar11[0x18] & 0xfe | local_a8[0x18] & 1);
  pFVar11[0x19] = local_8f;
  *(undefined4 *)(pFVar11 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar11 + 0x28) = pFVar11;
  *(undefined ***)pFVar11 = &___7FKSphereElem__6B_;
  *(double *)(pFVar11 + 0x30) = local_78._s_0.X;
  *(double *)(pFVar11 + 0x38) = local_78._s_0.Y;
  *(double *)(pFVar11 + 0x40) = local_78._s_0.Z;
  *(float *)(pFVar11 + 0x48) = local_60;
  FKSphereElem::~FKSphereElem((FKSphereElem *)local_a8);
  return;
}

// GlobalMeshPoolHelper @ 14ce6e840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMeshPool * __cdecl UE::Private::MeshPoolHelper::GlobalMeshPoolHelper(bool param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDynamicMeshPool *pUVar3;
  FUObjectItem *pFVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (MeshPool == (UDynamicMeshPool *)0x0) {
    if (!param_1) {
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UDynamicMeshPool_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar2);
      local_98._8_8_ = pUVar1;
      pUVar3 = (UDynamicMeshPool *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar5 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      MeshPool = pUVar3;
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar4,RootSet);
      return MeshPool;
    }
  }
  else if (!param_1) {
    return MeshPool;
  }
  UDynamicMeshPool::FreeAllMeshes(MeshPool);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&MeshPool->_padding_ + 4))
  ;
  FUObjectItem::ClearRootFlags(pFVar4,RootSet);
  MeshPool = (UDynamicMeshPool *)0x0;
  return (UDynamicMeshPool *)0x0;
}

// SelectByTriangleAttribute @ 14ce71bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MeshSelectionLocals::SelectByTriangleAttribute
          (FDynamicMesh3 *param_1,FGeometryScriptMeshSelection *param_2,
          EGeometryScriptMeshSelectionType param_3,TFunctionRef<bool___cdecl(int)> *param_4)

{
  FRefCountVector *pFVar1;
  uint *puVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  ForElementType<unsigned_int> FVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined1 auStackY_1c8 [32];
  uint local_198 [2];
  TFunctionRef<bool___cdecl(int)> *local_190;
  ulong64 local_188;
  IndexIterator local_180;
  IndexIterator local_170;
  FSparseArrayAllocationInfo local_160;
  int local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FGeometryScriptMeshSelection *local_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  undefined1 local_f8 [8];
  undefined1 local_f0 [32];
  ForElementType<unsigned_int> local_d0;
  int local_c8;
  int iStack_c0;
  int iStack_bc;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  uint local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar1 = &param_1->TriangleRefCounts;
  local_f0._0_8_ = (FScriptContainerElement *)0x0;
  local_f0._8_8_ = 0;
  local_d0 = (ForElementType<unsigned_int>)0x0;
  _local_c8 = ___xmm_00000000ffffffff0000008000000000;
  _iStack_c0 = _UNK_150631d98;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_190 = param_4;
  local_130 = param_2;
  if (param_3 == Vertices) {
    local_f8._0_4_ = Vertex;
    local_f8._4_4_ = Triangle;
    iVar15 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar16 = 0;
    if (((iVar15 != 0) &&
        (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar16 = 1, 1 < iVar15)) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar15);
    }
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_160,pFVar1,iVar15,iVar15);
joined_r0x00014ce71cc4:
    if (uVar16 != (uint)local_160.Pointer) {
      local_198[0] = uVar16;
      cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_198);
      if (cVar8 != '\0') {
        lVar17 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8
                  );
        local_170._0_8_ = *(ulonglong *)(lVar17 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        uVar21 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        local_190 = (TFunctionRef<bool___cdecl(int)> *)(local_170._0_8_ & 0xffffffff);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
        local_190 = (TFunctionRef<bool___cdecl(int)> *)((ulonglong)local_170._0_8_ >> 0x20);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
        local_190 = (TFunctionRef<bool___cdecl(int)> *)(ulonglong)uVar21;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
      }
      uVar16 = uVar16 + 1;
      if ((int)uVar16 < iVar15) {
        do {
          lVar5 = (ulonglong)(uVar16 & 0x1ff) * 2;
          lVar17 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar5 + lVar17) != 0) && (*(short *)(lVar5 + lVar17) != -1)) break;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < iVar15);
      }
      goto joined_r0x00014ce71cc4;
    }
  }
  else if (param_3 == Triangles) {
    local_f8._0_4_ = Face;
    local_f8._4_4_ = Triangle;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_180,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar15 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_170,pFVar1,iVar15,iVar15);
    uVar16 = local_170._8_4_;
    if (local_180._8_4_ != local_170._8_4_) {
      do {
        uVar7 = local_180._8_4_;
        local_198[0] = local_180._8_4_;
        cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_198);
        if (cVar8 != '\0') {
          if (iStack_bc == 0) {
            iVar15 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_f0,(int *)(local_f0 + 8),
                                (int *)(local_f0 + 0xc));
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),1);
            FVar13 = (ForElementType<unsigned_int>)((longlong)local_f0 + 0x10);
            if (local_d0 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_d0;
            }
            bVar11 = (byte)iVar9 & 0x1f;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 0x1f;
              bVar11 = bVar11 - 0x20;
            }
            puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar9 >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
          }
          else {
            iVar15 = iStack_c0;
            lVar17 = (longlong)iStack_c0;
            iStack_bc = iStack_bc + -1;
            iStack_c0 = *(int *)(local_f0._0_8_ + lVar17 * 0x10 + 4);
            if (iStack_bc != 0) {
              *(undefined4 *)
               (local_f0._0_8_ + (longlong)*(int *)(local_f0._0_8_ + lVar17 * 0x10 + 4) * 0x10) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_f0,&local_160,iVar15);
          puVar6 = (ulonglong *)CONCAT44(local_160.Pointer._4_4_,(uint)local_160.Pointer);
          if (puVar6 != (ulonglong *)0x0) {
            *puVar6 = (ulonglong)(uint)uVar7;
            *(undefined4 *)(puVar6 + 1) = 0xffffffff;
          }
          uVar14 = *puVar6;
          local_198[0] = (int)(uVar14 >> 0x20) * 0x17 + (int)uVar14;
          if ((local_f0._8_4_ - iStack_bc != 1) && (local_f0._8_4_ != iStack_bc)) {
            FVar12.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar12.Data = local_b0.Data;
            }
            for (iVar15 = *(int *)((longlong)FVar12.Data +
                                  (ulonglong)(local_a8 - 1 & local_198[0]) * 4); iVar15 != -1;
                iVar15 = *(int *)(local_f0._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
              if (*(ulonglong *)(local_f0._0_8_ + (longlong)iVar15 * 0x10) == uVar14) {
                if (iVar15 != -1) {
                  *(ulonglong *)(local_f0._0_8_ + (longlong)iVar15 * 0x10) = uVar14;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_f0,local_160.Index,1);
                  param_4 = local_190;
                  uVar16 = local_170._8_4_;
                  goto LAB_14ce7222d;
                }
                break;
              }
            }
          }
          uVar21 = local_f0._8_4_ - iStack_bc;
          uVar16 = 1;
          if (3 < uVar21) {
            uVar14 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar16 = 1 << ((byte)lVar17 & 0x1f);
          }
          if (((int)uVar21 < 1) || ((int)uVar16 <= (int)local_a8)) {
            uVar16 = local_a8 - 1 & local_198[0];
            *(uint *)((longlong)puVar6 + 0xc) = uVar16;
            FVar12.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar12.Data = local_b0.Data;
            }
            uVar14 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)FVar12.Data + uVar14 * 4);
            *(int *)((longlong)FVar12.Data + uVar14 * 4) = local_160.Index;
            param_4 = local_190;
            uVar16 = local_170._8_4_;
          }
          else {
            local_a8 = uVar16;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,4);
            }
            if (uVar16 != 0) {
              uVar21 = uVar16;
              if (uVar16 < 2) {
                if ((ForElementType<FSetElementId>)local_b0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar21 = 0;
                  goto LAB_14ce72043;
                }
              }
              else {
LAB_14ce72043:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_b0,0,uVar21,4);
              }
              if (0 < (int)uVar16) {
                uVar19 = (ulonglong)uVar16;
                uVar14 = 0;
                do {
                  FVar12.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar12.Data = local_b0.Data;
                  }
                  uVar10 = uVar14 & (longlong)(int)uVar16 - 1U;
                  uVar14 = uVar14 + 1;
                  *(undefined4 *)((longlong)FVar12.Data + uVar10 * 4) = 0xffffffff;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
            param_4 = local_190;
            uVar16 = local_170._8_4_;
            if (local_a8 != 0) {
              pTStack_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10);
              uStack_14c = 1;
              local_150 = 0;
              iStack_13c = 0;
              iStack_138 = 0;
              if (local_c8 != 0) {
                FVar13 = (ForElementType<unsigned_int>)((longlong)local_f0 + 0x10);
                if (local_d0 != (ForElementType<unsigned_int>)0x0) {
                  FVar13 = local_d0;
                }
                uVar21 = *(uint *)FVar13;
                iStack_138 = 0;
                local_150 = 0;
                while (uVar21 == 0) {
                  iStack_138 = iStack_138 + 0x20;
                  lVar17 = (longlong)local_150;
                  local_150 = local_150 + 1;
                  if ((int)(local_c8 + -1 + (local_c8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_150)
                  goto LAB_14ce7214c;
                  uVar21 = ((uint *)((longlong)FVar13 + 4))[lVar17];
                }
                uStack_14c = -uVar21 & uVar21;
                uVar14 = (ulonglong)uStack_14c * 2 + 1;
                lVar17 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iStack_13c = iStack_138 + -1 + (int)lVar17;
                if (local_c8 < iStack_13c) {
LAB_14ce7214c:
                  iStack_13c = local_c8;
                }
              }
              local_140 = 0xffffffff;
              local_128 = (longlong *)local_f0;
              local_120._padding_ = CONCAT44(uStack_14c,local_150);
              local_120.CurrentBitIndex = iStack_13c;
              local_120.UnvisitedBitMask = 0xffffffff;
              local_120._28_4_ = uStack_134;
              local_120.BaseBitIndex = iStack_138;
              iVar15 = iStack_13c;
              local_120.Array = pTStack_148;
              if (iStack_13c < local_c8) {
                do {
                  puVar20 = (undefined8 *)((longlong)iVar15 * 0x10 + *local_128);
                  uVar16 = (int)((ulonglong)*puVar20 >> 0x20) * 0x17 + (int)*puVar20 & local_a8 - 1;
                  *(uint *)((longlong)puVar20 + 0xc) = uVar16;
                  FVar12.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar12.Data = local_b0.Data;
                  }
                  uVar14 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar16;
                  *(undefined4 *)(puVar20 + 1) = *(undefined4 *)((longlong)FVar12.Data + uVar14 * 4)
                  ;
                  *(int *)((longlong)FVar12.Data + uVar14 * 4) = iVar15;
                  local_120.UnvisitedBitMask =
                       local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
                  param_4 = local_190;
                  uVar16 = local_170._8_4_;
                  iVar15 = local_120.CurrentBitIndex;
                } while (local_120.CurrentBitIndex < (local_120.Array)->NumBits);
              }
            }
          }
        }
LAB_14ce7222d:
        local_180._8_4_ = uVar7 + 1;
        if ((int)local_180._8_4_ < (int)local_180._12_4_) {
          do {
            lVar17 = (ulonglong)(local_180._8_4_ & 0x1ff) * 2;
            if ((*(short *)(lVar17 + *(longlong *)
                                      (*(longlong *)(local_180._0_8_ + 8) +
                                      (ulonglong)((uint)local_180._8_4_ >> 9) * 8)) != 0) &&
               (*(short *)(lVar17 + *(longlong *)
                                     (*(longlong *)(local_180._0_8_ + 8) +
                                     (ulonglong)((uint)local_180._8_4_ >> 9) * 8)) != -1)) break;
            local_180._8_4_ = local_180._8_4_ + 1;
          } while ((int)local_180._8_4_ < (int)local_180._12_4_);
        }
      } while (local_180._8_4_ != uVar16);
    }
  }
  else if (param_3 == Edges) {
    local_f8._0_4_ = Edge;
    local_f8._4_4_ = Triangle;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_180,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar15 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_160,pFVar1,iVar15,iVar15);
    uVar16 = local_180._8_4_;
joined_r0x00014ce722ea:
    local_180._8_4_ = uVar16;
    if (uVar16 != (uint)local_160.Pointer) {
      local_198[0] = uVar16;
      cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_198);
      if (cVar8 != '\0') {
        local_190 = (TFunctionRef<bool___cdecl(int)> *)(ulonglong)(uVar16 & 0x3fffffff);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
        local_190 = (TFunctionRef<bool___cdecl(int)> *)
                    ((ulonglong)(uVar16 & 0x3fffffff) | 0x40000000);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
        local_190 = (TFunctionRef<bool___cdecl(int)> *)
                    ((ulonglong)(uVar16 & 0x3fffffff) | 0x80000000);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_190);
      }
      uVar16 = uVar16 + 1;
      if ((int)uVar16 < (int)local_180._12_4_) {
        do {
          lVar17 = (ulonglong)(uVar16 & 0x1ff) * 2;
          if ((*(short *)(lVar17 + *(longlong *)
                                    (*(longlong *)(local_180._0_8_ + 8) +
                                    (ulonglong)(uVar16 >> 9) * 8)) != 0) &&
             (*(short *)(lVar17 + *(longlong *)
                                   (*(longlong *)(local_180._0_8_ + 8) +
                                   (ulonglong)(uVar16 >> 9) * 8)) != -1)) break;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_180._12_4_);
      }
      goto joined_r0x00014ce722ea;
    }
  }
  else {
    local_f8._0_4_ = Face;
    local_f8._4_4_ = Polygroup;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_180,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar15 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_160,pFVar1,iVar15,iVar15);
    uVar16 = local_180._8_4_;
joined_r0x00014ce72473:
    local_180._8_4_ = uVar16;
    if (uVar16 != (uint)local_160.Pointer) {
      local_198[0] = uVar16;
      cVar8 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_198);
      if (cVar8 != '\0') {
        local_198[0] = UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,uVar16);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_98.Hash.SecondaryData;
          }
          for (iVar15 = *(int *)((longlong)FVar18 +
                                (ulonglong)(local_98.HashSize - 1U & local_198[0]) * 4);
              iVar15 != -1; iVar15 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar15 * 0xc))
          {
            if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar15 * 0xc) == local_198[0])
            goto LAB_14ce72542;
          }
        }
        local_170._0_8_ = CONCAT44(local_198[0],uVar16);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_188,(bool *)&local_170);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,(int *)&local_190,(bool *)local_198);
      }
LAB_14ce72542:
      uVar16 = uVar16 + 1;
      if ((int)uVar16 < (int)local_180._12_4_) {
        do {
          lVar17 = (ulonglong)(uVar16 & 0x1ff) * 2;
          if ((*(short *)(lVar17 + *(longlong *)
                                    (*(longlong *)(local_180._0_8_ + 8) +
                                    (ulonglong)(uVar16 >> 9) * 8)) != 0) &&
             (*(short *)(lVar17 + *(longlong *)
                                   (*(longlong *)(local_180._0_8_ + 8) +
                                   (ulonglong)(uVar16 >> 9) * 8)) != -1)) break;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_180._12_4_);
      }
      goto joined_r0x00014ce72473;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  FGeometryScriptMeshSelection::SetSelection(local_130,(FGeometrySelection *)local_f8);
  local_a8 = 0;
  if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_b0.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f0);
  return;
}

// SelectEdgesWithFilter @ 14ce72640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MeshSelectionLocals::SelectEdgesWithFilter
          (FDynamicMesh3 *param_1,FGeometryScriptMeshSelection *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,bool param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined1 local_c0 [8];
  FGeometryScriptMeshSelection *local_b8;
  FGeometrySelection local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a8.Selection.Elements._0_8_ = 0;
  local_a8.Selection.Elements._8_8_ = 0;
  local_a8.Selection.Elements._32_8_ = 0;
  local_a8.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.Selection.HashSize = 0;
  local_a8.ElementType = Edge;
  local_a8.TopologyType = Triangle;
  uVar8 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar7 = 0;
  local_b8 = param_2;
  local_a8.Selection.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a8.Selection.Elements._48_8_ = _UNK_150631d98;
  if ((uVar8 != 0) &&
     (pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar7 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar7 = 1;
    uVar6 = 1;
    if ((int)uVar8 < 2) goto joined_r0x00014ce72729;
    do {
      lVar1 = (ulonglong)((uint)uVar7 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar7 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar7 >> 9) * 8)) != -1)) break;
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)uVar8);
  }
  uVar6 = (uint)uVar7;
joined_r0x00014ce72729:
  do {
    if (uVar6 == uVar8) {
      FGeometryScriptMeshSelection::SetSelection(local_b8,&local_a8);
      local_a8.Selection.HashSize = 0;
      if (local_a8.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Selection.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Selection.Elements);
      return;
    }
    while( true ) {
      uVar6 = (uint)uVar7;
      if ((!param_4) ||
         ((int)((ulonglong)
                *(undefined8 *)
                 (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar7 >> 9) * 8) +
                  8 + (ulonglong)(uVar6 & 0x1ff) * 0x10) >> 0x20) != -1)) {
        local_e8 = CONCAT44(local_e8._4_4_,uVar6);
        cVar4 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_e8);
        if (cVar4 != '\0') {
          lVar1 = (uVar7 >> 9) * 8;
          uVar5 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) +
                            8 + (ulonglong)(uVar6 & 0x1ff) * 0x10);
          local_e0 = *(undefined8 *)
                      (*(longlong *)
                        ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0xc);
          uVar5 = uVar5 * 4;
          if ((uint)local_e0 != uVar6) {
            uVar5 = uVar5 | ((uint)((ulonglong)local_e0 >> 0x20) != uVar6) + 1;
          }
          local_e8 = (ulonglong)(uVar5 << 0x1e | uVar5 >> 2);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(&local_a8.Selection,(ulong64 *)local_c0,(bool *)&local_e8);
          uVar7 = *(ulonglong *)
                   (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                   (ulonglong)(uVar6 & 0x1ff) * 0x10);
          uVar5 = (uint)(uVar7 >> 0x20);
          if (uVar5 != 0xffffffff) {
            local_d0 = *(undefined8 *)
                        (*(longlong *)
                          ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                          (uVar7 >> 0x29) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0xc);
            uVar5 = uVar5 * 4;
            if ((uint)local_d0 != uVar6) {
              uVar5 = uVar5 | ((uint)((ulonglong)local_d0 >> 0x20) != uVar6) + 1;
            }
            local_e8 = (ulonglong)(uVar5 << 0x1e | uVar5 >> 2);
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Emplace<unsigned___int64>
                      (&local_a8.Selection,(ulong64 *)(local_c0 + 4),(bool *)&local_e8);
          }
        }
      }
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      if ((int)uVar8 <= (int)uVar6) break;
      pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar7 >> 9) * 8;
        lVar3 = (ulonglong)((uint)uVar7 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
        uVar6 = (uint)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if ((int)uVar8 <= (int)uVar6) goto joined_r0x00014ce72729;
      }
    }
  } while( true );
}

// SelectMeshElementsWithContainmentTest @ 14ce734c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
          (UDynamicMesh *param_1,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_2,FGeometryScriptMeshSelection *param_3,EGeometryScriptMeshSelectionType param_4,
          int param_5,bool param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  **local_a0;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_98;
  undefined1 *local_90;
  bool local_88;
  int local_84;
  bool local_80;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  iVar2 = 3;
  if (param_5 < 3) {
    iVar2 = param_5;
  }
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  if (param_4 == Vertices) {
    local_78._0_4_ = Vertex;
    local_88 = param_6;
    local_a8 = Core::Private::Function::
               TFunctionRefCaller<`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_78._4_4_ = Triangle;
  }
  else {
    local_84 = iVar3;
    if (param_4 == Edges) {
      local_78._0_4_ = Edge;
      local_88 = param_6;
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l9::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_78._4_4_ = Triangle;
    }
    else {
      local_78._0_4_ = Face;
      local_78._4_4_ = (param_4 != Triangles) + Triangle;
      local_80 = param_6;
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest'::__l11::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_88 = (bool)param_4;
    }
  }
  local_90 = local_78;
  local_a0 = &local_98;
  local_98 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8);
  FGeometryScriptMeshSelection::SetSelection(param_3,(FGeometrySelection *)local_78);
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  uVar1 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar2 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// UEStandardEditorSimplify @ 14ce75b50

bool __cdecl
UE::PrivateSimplifyHelper::UEStandardEditorSimplify(FDynamicMesh3 *param_1,bool param_2,int param_3)

{
  return false;
}

// ValidateMeshTriangleID @ 14ce75ce0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(FDynamicMesh3 *param_1,int param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FGeometryScriptDebugMessage local_28;
  
  if (((-1 < param_2) &&
      (param_2 < (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  if (param_3) {
    uVar1 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    uVar2 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshQueryFunctions",
                        L"MeshQueryInvalidTriangleID",
                        L"Mesh queried with invalid triangle ID: {0} (Max ID: {1})");
    pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar3,Default);
    pFVar3 = FText::Format<int,int>(&local_58,pFVar4,param_2,uVar1 * 0x200 + uVar2);
    UE::Geometry::MakeScriptError(&local_28,InvalidInputs,pFVar3);
    if (local_28.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.Message.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// ValidateMeshVertexID @ 14ce75df0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::MeshQueryFunctionLocals::ValidateMeshVertexID(FDynamicMesh3 *param_1,int param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FGeometryScriptDebugMessage local_28;
  
  if (((-1 < param_2) &&
      (param_2 < (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  if (param_3) {
    uVar1 = (param_1->VertexRefCounts).RefCounts.CurBlock;
    uVar2 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshQueryFunctions",
                        L"MeshQueryInvalidVertexID",
                        L"Mesh queried with invalid vertex ID: {0} (Max ID: {1})");
    pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar3,Default);
    pFVar3 = FText::Format<int,int>(&local_58,pFVar4,param_2,uVar1 * 0x200 + uVar2);
    UE::Geometry::MakeScriptError(&local_28,InvalidInputs,pFVar3);
    if (local_28.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.Message.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// Construct<FGeometryScriptSplineSamplingOptions> @ 14cea2d80

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptSplineSamplingOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptSplineSamplingOptions> @ 14cea2df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSplineSamplingOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 10;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptSplineSamplingOptions> @ 14cea2e20

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSplineSamplingOptions>(void *param_1)

{
  return;
}

// Construct<FGeometryScriptDetermineMeshOcclusionOptions> @ 14cea2e30

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptDetermineMeshOcclusionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80;
  return;
}

// ConstructForTests<FGeometryScriptDetermineMeshOcclusionOptions> @ 14cea2e60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptDetermineMeshOcclusionOptions>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80;
  return;
}

// Destruct<FGeometryScriptDetermineMeshOcclusionOptions> @ 14cea2e80

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptDetermineMeshOcclusionOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSplineSamplingOptions> @ 14cea2e90

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSplineSamplingOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGeometryScriptDetermineMeshOcclusionOptions> @ 14cea2f10

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptDetermineMeshOcclusionOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptCopyMeshFromComponentOptions> @ 14cea3250

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptCopyMeshFromComponentOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FGeometryScriptCopyMeshFromComponentOptions> @ 14cea3280

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptCopyMeshFromComponentOptions>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FGeometryScriptCopyMeshFromComponentOptions> @ 14cea32a0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptCopyMeshFromComponentOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptCopyMeshFromComponentOptions> @ 14cea32b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptCopyMeshFromComponentOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptOpenPathOffsetOptions> @ 14cea3330

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptOpenPathOffsetOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x4024000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FGeometryScriptOpenPathOffsetOptions> @ 14cea3370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptOpenPathOffsetOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x4024000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Destruct<FGeometryScriptOpenPathOffsetOptions> @ 14cea33b0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptOpenPathOffsetOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptOpenPathOffsetOptions> @ 14cea3400

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptOpenPathOffsetOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPolygonOffsetOptions> @ 14cea3590

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPolygonOffsetOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x4024000000000000;
  return;
}

// ConstructForTests<FGeometryScriptPolygonOffsetOptions> @ 14cea35d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPolygonOffsetOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x4024000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryScriptPolygonOffsetOptions> @ 14cea3610

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPolygonOffsetOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPolygonOffsetOptions> @ 14cea3620

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPolygonOffsetOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPointFlatteningOptions> @ 14cea4100

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPointFlatteningOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined1 *)((longlong)param_1 + 0x60) = 2;
  return;
}

// ConstructForTests<FGeometryScriptPointFlatteningOptions> @ 14cea4170

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPointFlatteningOptions>(void *param_1)

{
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined1 *)((longlong)param_1 + 0x60) = 2;
  return;
}

// Destruct<FGeometryScriptPointFlatteningOptions> @ 14cea41c0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPointFlatteningOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptPointFlatteningOptions> @ 14cea41e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPointFlatteningOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_3 != 0) {
    lVar15 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar15 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar15 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar15 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      param_1 = (void *)((longlong)param_1 + 0x70);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPointPriorityOptions> @ 14cea48a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptPointPriorityOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FGeometryScriptPointPriorityOptions> @ 14cea48c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPointPriorityOptions>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryScriptPointPriorityOptions> @ 14cea4920

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptPointPriorityOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptPointPriorityOptions> @ 14cea4940

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPointPriorityOptions>
          (void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined1 *)&this[1].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[1].AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (TArray<float,TSizedDefaultAllocator<32>_> *)&this[1].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptPointClusteringOptions> @ 14cea5060

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptPointClusteringOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 500;
  return;
}

// ConstructForTests<FGeometryScriptPointClusteringOptions> @ 14cea50d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptPointClusteringOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 3;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 500;
  return;
}

// Destruct<FGeometryScriptPointClusteringOptions> @ 14cea5100

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptPointClusteringOptions>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryScriptPointClusteringOptions> @ 14cea51a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptPointClusteringOptions>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      *(undefined1 *)((longlong)&pFVar5[2].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 4);
      *(undefined4 *)&pFVar5[3].Data = *(undefined4 *)&pFVar2[3].Data;
      *(undefined4 *)((longlong)&pFVar5[3].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[3].Data + 4);
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptMorphologyOptions> @ 14cea6010

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptMorphologyOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  return;
}

// ConstructForTests<FGeometryScriptMorphologyOptions> @ 14cea6080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptMorphologyOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x40;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  return;
}

// Destruct<FGeometryScriptMorphologyOptions> @ 14cea60e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptMorphologyOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptMorphologyOptions> @ 14cea6130

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptMorphologyOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSolidifyOptions> @ 14cea64d0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSolidifyOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  return;
}

// ConstructForTests<FGeometryScriptSolidifyOptions> @ 14cea6550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSolidifyOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  return;
}

// Destruct<FGeometryScriptSolidifyOptions> @ 14cea65c0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSolidifyOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSolidifyOptions> @ 14cea6610

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSolidifyOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar14 + 0x60 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar14 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar14 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x68);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScript3DGridParameters> @ 14cea69a0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScript3DGridParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryScript3DGridParameters> @ 14cea69d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScript3DGridParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40;
  return;
}

// Destruct<FGeometryScript3DGridParameters> @ 14cea69f0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScript3DGridParameters>(void *param_1)

{
  return;
}

// Copy<FGeometryScript3DGridParameters> @ 14cea6be0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScript3DGridParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDistanceFieldToTextureSettings> @ 14cea7730

void __cdecl UE::CoreUObject::Private::Construct<FDistanceFieldToTextureSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// ConstructForTests<FDistanceFieldToTextureSettings> @ 14cea7780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDistanceFieldToTextureSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// Destruct<FDistanceFieldToTextureSettings> @ 14cea7790

void __cdecl UE::CoreUObject::Private::Destruct<FDistanceFieldToTextureSettings>(void *param_1)

{
  return;
}

// Copy<FDistanceFieldToTextureSettings> @ 14cea77c0

bool __cdecl
UE::CoreUObject::Private::Copy<FDistanceFieldToTextureSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeDistanceFieldSettings> @ 14cea8110

void __cdecl UE::CoreUObject::Private::Construct<FComputeDistanceFieldSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x20;
  return;
}

// ConstructForTests<FComputeDistanceFieldSettings> @ 14cea8150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FComputeDistanceFieldSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FComputeDistanceFieldSettings> @ 14cea8180

void __cdecl UE::CoreUObject::Private::Destruct<FComputeDistanceFieldSettings>(void *param_1)

{
  return;
}

// Copy<FComputeDistanceFieldSettings> @ 14cea81d0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeDistanceFieldSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptTransferMeshVertexColorsOptions> @ 14cea82e0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptTransferMeshVertexColorsOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x38d1b717;
  return;
}

// ConstructForTests<FGeometryScriptTransferMeshVertexColorsOptions> @ 14cea8360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptTransferMeshVertexColorsOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x38d1b717;
  return;
}

// Destruct<FGeometryScriptTransferMeshVertexColorsOptions> @ 14cea8390

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptTransferMeshVertexColorsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptTransferMeshVertexColorsOptions> @ 14cea83e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptTransferMeshVertexColorsOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptSampleTextureOptions> @ 14cea8520

void __cdecl UE::CoreUObject::Private::Construct<FGeometryScriptSampleTextureOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 0;
  *(undefined2 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FGeometryScriptSampleTextureOptions> @ 14cea8550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptSampleTextureOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGeometryScriptSampleTextureOptions> @ 14cea8580

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryScriptSampleTextureOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptSampleTextureOptions> @ 14cea8650

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptSampleTextureOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryScriptBlurMeshVertexColorsOptions> @ 14cea8690

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryScriptBlurMeshVertexColorsOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// ConstructForTests<FGeometryScriptBlurMeshVertexColorsOptions> @ 14cea86a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryScriptBlurMeshVertexColorsOptions>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  return;
}

// Destruct<FGeometryScriptBlurMeshVertexColorsOptions> @ 14cea86b0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryScriptBlurMeshVertexColorsOptions>(void *param_1)

{
  return;
}

// Copy<FGeometryScriptBlurMeshVertexColorsOptions> @ 14cea8780

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryScriptBlurMeshVertexColorsOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ArcLength<double,UE::Math::TVector2<double>_> @ 14cea8960

double __cdecl
UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>
          (TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,bool param_2)

{
  int iVar1;
  TVector2<double> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar12 [16];
  double dVar13;
  
  iVar1 = param_1->ArrayNum;
  uVar6 = 1;
  dVar10 = 0.0;
  dVar11 = 0.0;
  if (1 < (longlong)iVar1) {
    lVar8 = 0x10;
    lVar9 = (longlong)iVar1 + -1;
    do {
      uVar7 = 0;
      if ((int)(uVar6 - 1) < param_1->ArrayNum) {
        uVar7 = -uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        dVar10 = (double)(*pcVar3)();
        return dVar10;
      }
      pTVar2 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        dVar10 = (double)(*pcVar3)();
        return dVar10;
      }
      uVar6 = uVar6 + 1;
      dVar11 = *(double *)(lVar8 + -8 + (longlong)pTVar2) -
               *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 8);
      dVar13 = *(double *)((longlong)&pTVar2[-1].field0_0x0 + lVar8) -
               *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8);
      lVar8 = lVar8 + 0x10;
      auVar12._0_8_ = dVar11 * dVar11 + dVar13 * dVar13;
      auVar12._8_8_ = 0;
      in_XMM0 = sqrtpd(auVar12,auVar12);
      dVar10 = dVar10 + in_XMM0._0_8_;
      lVar9 = lVar9 + -1;
      dVar11 = dVar10;
    } while (lVar9 != 0);
  }
  if ((param_2) && (1 < iVar1)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       in_XMM0 = extraout_XMM0, bVar5)) {
      pcVar3 = (code *)swi(3);
      dVar10 = (double)(*pcVar3)();
      return dVar10;
    }
    uVar7 = iVar1 - 1;
    pTVar2 = param_1->DataPtr;
    uVar6 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       in_XMM0 = extraout_XMM0_00, bVar5)) {
      pcVar3 = (code *)swi(3);
      dVar10 = (double)(*pcVar3)();
      return dVar10;
    }
    dVar10 = (pTVar2->field0_0x0)._s_0.Y - param_1->DataPtr[(int)uVar7].field0_0x0._s_0.Y;
    dVar13 = (pTVar2->field0_0x0)._s_0.X - param_1->DataPtr[(int)uVar7].field0_0x0._s_0.X;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar10 * dVar10 + dVar13 * dVar13;
    auVar12 = sqrtpd(in_XMM0,auVar4);
    dVar11 = auVar12._0_8_ + dVar11;
  }
  return dVar11;
}

// ArcLength<double,UE::Math::TVector<double>_> @ 14cea8ba0

double __cdecl
UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector<double>_>
          (TArrayView<UE::Math::TVector<double>_const_,int> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 extraout_XMM0 [16];
  double dVar15;
  double dVar16;
  
  iVar1 = param_1->ArrayNum;
  uVar8 = 1;
  dVar11 = 0.0;
  dVar12 = 0.0;
  if (1 < (longlong)iVar1) {
    lVar9 = 0x18;
    lVar10 = (longlong)iVar1 + -1;
    do {
      uVar5 = 0;
      if ((int)(uVar8 - 1) < param_1->ArrayNum) {
        uVar5 = -uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        dVar11 = (double)(*pcVar2)();
        return dVar11;
      }
      pTVar6 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        dVar11 = (double)(*pcVar2)();
        return dVar11;
      }
      pTVar7 = param_1->DataPtr;
      uVar8 = uVar8 + 1;
      dVar16 = *(double *)(lVar9 + -0x10 + (longlong)pTVar6) -
               *(double *)((longlong)&pTVar7->field0_0x0 + lVar9 + 8);
      dVar12 = *(double *)(lVar9 + -8 + (longlong)pTVar6) -
               *(double *)((longlong)&pTVar7->field0_0x0 + lVar9 + 0x10);
      dVar15 = *(double *)((longlong)&pTVar6[-1].field0_0x0 + lVar9) -
               *(double *)((longlong)&pTVar7->field0_0x0 + lVar9);
      lVar9 = lVar9 + 0x18;
      auVar13._0_8_ = dVar12 * dVar12;
      auVar13._8_8_ = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar16 * dVar16 + dVar15 * dVar15 + auVar13._0_8_;
      auVar14 = sqrtpd(auVar13,auVar14);
      dVar11 = dVar11 + auVar14._0_8_;
      lVar10 = lVar10 + -1;
      dVar12 = dVar11;
    } while (lVar10 != 0);
  }
  if ((param_2) && (1 < iVar1)) {
    pTVar6 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,0);
    pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar1 + -1);
    dVar16 = (pTVar6->field0_0x0)._s_0.Y - (pTVar7->field0_0x0)._s_0.Y;
    dVar15 = (pTVar6->field0_0x0)._s_0.X - (pTVar7->field0_0x0)._s_0.X;
    dVar11 = (pTVar6->field0_0x0)._s_0.Z - (pTVar7->field0_0x0)._s_0.Z;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar16 * dVar16 + dVar15 * dVar15 + dVar11 * dVar11;
    auVar14 = sqrtpd(extraout_XMM0,auVar3);
    return auVar14._0_8_ + dVar12;
  }
  return dVar12;
}

// FindNearestIndex<double,UE::Math::TVector<double>_> @ 14ceac3c0

int __cdecl
UE::Geometry::CurveUtil::FindNearestIndex<double,UE::Math::TVector<double>_>
          (TArrayView<UE::Math::TVector<double>_const_,int> *param_1,TVector<double> *param_2)

{
  TVector<double> *pTVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  
  lVar10 = (longlong)param_1->ArrayNum;
  uVar7 = 0;
  uVar13 = (undefined4)__real_7fefffffffffffff;
  uVar15 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar5 = 0xffffffff;
  if (0 < lVar10) {
    lVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pTVar1 = param_1->DataPtr;
      dVar14 = (param_2->field0_0x0)._s_0.Y - *(double *)((longlong)&pTVar1->field0_0x0 + lVar8 + 8)
      ;
      dVar12 = (param_2->field0_0x0)._s_0.X - *(double *)((longlong)&pTVar1->field0_0x0 + lVar8);
      dVar11 = (param_2->field0_0x0)._s_0.Z -
               *(double *)((longlong)&pTVar1->field0_0x0 + lVar8 + 0x10);
      dVar11 = dVar14 * dVar14 + dVar12 * dVar12 + dVar11 * dVar11;
      bVar4 = (double)CONCAT44(uVar15,uVar13) == dVar11;
      bVar2 = (double)CONCAT44(uVar15,uVar13) < dVar11;
      if ((double)CONCAT44(uVar15,uVar13) <= dVar11) {
        dVar11 = (double)CONCAT44(uVar15,uVar13);
      }
      uVar5 = uVar7;
      if (bVar2 || bVar4) {
        uVar5 = uVar9;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
      uVar13 = SUB84(dVar11,0);
      uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
      lVar10 = lVar10 + -1;
      uVar9 = uVar5;
    } while (lVar10 != 0);
  }
  return uVar5;
}

// DistanceToTime @ 14ceb8ba0

float __cdecl
UE::Local::SplinePathHelpers::DistanceToTime(USplineComponent *param_1,float param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3) {
    fVar2 = param_1->Duration;
    fVar1 = USplineComponent::GetSplineLength(param_1);
    return (param_2 * fVar2) / fVar1;
  }
  fVar2 = USplineComponent::GetTimeAtDistanceAlongSpline(param_1,param_2);
  return fVar2;
}

// ErrorBasedSampleInRange @ 14ceb90c0

bool __cdecl
UE::Local::SplinePathHelpers::ErrorBasedSampleInRange
          (USplineComponent *param_1,FGeometryScriptSplineSamplingOptions *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  EGeometryScriptEvaluateSplineRange EVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2->SampleSpacing != ErrorTolerance) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9101315457213792627>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolyPathFunctions.cpp"
                         ,0x173,
                         "SamplingOptions.SampleSpacing == EGeometryScriptSampleSpacing::ErrorTolerance"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = USplineComponent::IsClosedLoop(param_1);
  if ((bVar3) && (param_2->RangeMethod == FullSpline)) {
    EVar8 = FullSpline;
    fVar12 = param_2->ErrorTolerance * param_2->ErrorTolerance;
    bVar3 = true;
    if (fVar12 <= __real_38d1b717) {
      fVar12 = __real_38d1b717;
    }
    fVar10 = USplineComponent::GetSplineLength(param_1);
    fVar13 = 0.0;
  }
  else {
    EVar8 = param_2->RangeMethod;
    fVar13 = param_2->RangeStart;
    fVar10 = param_2->RangeEnd;
    fVar12 = param_2->ErrorTolerance * param_2->ErrorTolerance;
    if (fVar12 <= __real_38d1b717) {
      fVar12 = __real_38d1b717;
    }
    if (DistanceRange < EVar8) {
      USplineComponent::ConvertSplineToPolyline_InTimeRange
                (param_1,(uint)(param_2->CoordinateSpace).Value,fVar12,fVar13,fVar10,
                 EVar8 == TimeRange_ConstantSpeed,param_3,param_4,true);
      return false;
    }
    fVar11 = USplineComponent::GetSplineLength(param_1);
    bVar3 = false;
    if (EVar8 == FullSpline) {
      fVar13 = 0.0;
      fVar10 = fVar11;
    }
  }
  USplineComponent::ConvertSplineToPolyline_InDistanceRange
            (param_1,(uint)(param_2->CoordinateSpace).Value,fVar12,fVar13,fVar10,param_3,param_4,
             EVar8 != FullSpline);
  if ((bVar3 != false) && (iVar7 = param_3->ArrayNum, iVar7 != 0)) {
    uVar9 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar9 < iVar7) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x18;
    iVar7 = param_3->ArrayNum + ~uVar9;
    if (iVar7 != 0) {
      memmove(pFVar1,pFVar1 + 0x18,(longlong)iVar7 * 0x18);
    }
    param_3->ArrayNum = param_3->ArrayNum + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
    uVar9 = param_4->ArrayNum - 1;
    uVar6 = 0;
    if ((int)uVar9 < param_4->ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
    iVar7 = param_4->ArrayNum + ~uVar9;
    if (iVar7 != 0) {
      memmove(pFVar1,pFVar1 + 8,(longlong)iVar7 << 3);
    }
    param_4->ArrayNum = param_4->ArrayNum + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
  }
  return bVar3;
}

// GetClustering @ 14ceba8a0

FClusterKMeans * __cdecl
UE::Private::PointSetFunctionLocals::GetClustering
          (FClusterKMeans *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPointClusteringOptions *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar6;
  FClusterKMeans *pFVar7;
  FGeometryScriptPointClusteringOptions *pFVar8;
  undefined1 local_88 [24];
  int iStack_70;
  int iStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  TArrayView<UE::Math::TVector<double>_const_,int> local_38;
  TArrayView<UE::Math::TVector<double>_const_,int> local_28;
  
  __return_storage_ptr__->MaxIterations = 500;
  __return_storage_ptr__->RandomSeed = 0;
  (__return_storage_ptr__->ClusterIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ClusterIDs).ArrayNum = 0;
  (__return_storage_ptr__->ClusterIDs).ArrayMax = 0;
  (__return_storage_ptr__->ClusterSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ClusterSizes).ArrayNum = 0;
  (__return_storage_ptr__->ClusterSizes).ArrayMax = 0;
  __return_storage_ptr__->RandomSeed = param_2->RandomSeed;
  __return_storage_ptr__->MaxIterations = param_2->MaxIterations;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  pFVar8 = param_2;
  if (((param_2->InitialClusterCenters).ArrayNum == 0) &&
     (pFVar8 = (FGeometryScriptPointClusteringOptions *)local_88,
     param_2->InitializeMethod == UniformSpacing)) {
    iVar1 = param_2->TargetNumClusters;
    pTVar6 = TArrayView<UE::Math::TVector<double>_const_,int>::
             TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_28,param_1);
    local_58.DataPtr = pTVar6->DataPtr;
    local_58.ArrayNum = pTVar6->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    UE::Geometry::FClusterKMeans::GetUniformSpacedInitialCenters<UE::Math::TVector<double>_>
              (__return_storage_ptr__,&local_58,iVar1,
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_88);
  }
  local_88._16_8_ = (pFVar8->InitialClusterCenters).AllocatorInstance.Data;
  iVar1 = (pFVar8->InitialClusterCenters).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FClusterKMeans *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_68 = (param_1->AllocatorInstance).Data;
  iVar2 = param_2->TargetNumClusters;
  iVar3 = param_1->ArrayNum;
  iStack_70 = iVar1;
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FClusterKMeans *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_48._12_4_ = iStack_6c;
  local_48.ArrayNum = iStack_70;
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iVar3;
  local_38.DataPtr = (TVector<double> *)local_68;
  local_48.DataPtr = (TVector<double> *)local_88._16_8_;
  iStack_60 = iVar3;
  UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<double>,0>
            (__return_storage_ptr__,&local_38,iVar2,&local_48,
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// GetRangeFromSamplingOptions @ 14cebd670

void __cdecl
UE::Local::SplinePathHelpers::GetRangeFromSamplingOptions
          (USplineComponent *param_1,FGeometryScriptSplineSamplingOptions *param_2,float *param_3,
          float *param_4,bool *param_5)

{
  float fVar1;
  
  *param_3 = param_2->RangeStart;
  *param_4 = param_2->RangeEnd;
  if ((param_2->RangeMethod != FullSpline) && (param_2->RangeMethod != DistanceRange)) {
    *param_5 = false;
    return;
  }
  *param_5 = true;
  fVar1 = USplineComponent::GetSplineLength(param_1);
  if (param_2->RangeMethod == FullSpline) {
    *param_3 = 0.0;
    *param_4 = fVar1;
  }
  return;
}

// IterateSamplesInRange @ 14cebed10

bool __cdecl
UE::Local::SplinePathHelpers::IterateSamplesInRange
          (USplineComponent *param_1,FGeometryScriptSplineSamplingOptions *param_2,bool param_3,
          TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&)> *param_4,bool param_5,
          TFunctionRef<void___cdecl(float)> *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res18 [2];
  TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&)> *local_res20;
  TVector<double> local_b8 [5];
  
  if ((param_3) || (param_5)) {
    fVar11 = param_2->RangeStart;
    fVar9 = param_2->RangeEnd;
    local_res20 = param_4;
    if (param_2->RangeMethod < TimeRange_ConstantSpeed) {
      fVar7 = USplineComponent::GetSplineLength(param_1);
      if (param_2->RangeMethod == FullSpline) {
        fVar11 = 0.0;
        fVar9 = fVar7;
      }
      fVar7 = USplineComponent::GetSplineLength(param_1);
      fVar7 = param_1->Duration / fVar7;
      fVar11 = fVar11 * fVar7;
      fVar9 = fVar9 * fVar7;
    }
    bVar1 = USplineComponent::IsClosedLoop(param_1);
    if ((bVar1) && (param_2->RangeMethod != FullSpline)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    bVar5 = param_2->RangeMethod != TimeRange_VariableSpeed;
    bVar6 = param_2->SampleSpacing == UniformDistance;
    local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,bVar6);
    if (bVar6 != bVar5) {
      fVar11 = SwitchTimeType(param_1,fVar11,bVar5,bVar1);
      fVar9 = SwitchTimeType(param_1,fVar9,bVar5,bVar1);
    }
    fVar7 = param_1->Duration;
    fVar10 = fVar9;
    if (bVar1 == false) {
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar10 = fVar7;
      if (fVar9 <= fVar7) {
        fVar10 = fVar9;
      }
    }
    fVar10 = fVar10 - fVar11;
    if (0.0 <= fVar10) {
      iVar4 = 1;
      iVar3 = param_2->NumSamples;
      if (param_2->NumSamples < 2) {
        iVar3 = 2;
      }
      if (fVar10 == 0.0) {
        iVar3 = 1;
      }
      bVar5 = USplineComponent::IsClosedLoop(param_1);
      iVar2 = 0;
      if ((bVar5) && (param_2->RangeMethod == FullSpline)) {
        iVar4 = 0;
      }
      if (0 < iVar3) {
        bVar5 = local_res18[0]._0_1_;
        fVar9 = __real_3f800000 / (float)(iVar3 - iVar4);
        if (bVar1 == false) {
          do {
            fVar7 = (float)iVar2 * fVar9 * fVar10 + fVar11;
            if (param_3) {
              USplineComponent::GetLocationAtTime
                        (param_1,local_b8,fVar7,(uint)(param_2->CoordinateSpace).Value,bVar5);
              (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,local_b8);
            }
            if (param_5) {
              local_res18[0] = fVar7;
              (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_res18);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
        }
        else {
          do {
            fVar8 = FGenericPlatformMath::Fmod((float)iVar2 * fVar9 * fVar10 + fVar11,fVar7);
            if (fVar8 < 0.0) {
              fVar8 = fVar8 + fVar7;
            }
            if (param_3) {
              USplineComponent::GetLocationAtTime
                        (param_1,local_b8,fVar8,(uint)(param_2->CoordinateSpace).Value,bVar5);
              (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,local_b8);
            }
            if (param_5) {
              local_res18[0] = fVar8;
              (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_res18);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar3);
        }
      }
      return true;
    }
  }
  return false;
}

// SampleImageBuilderAtUVPositions @ 14cec1090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Geometry::`anonymous_namespace'::SampleImageBuilderAtUVPositions
          (TImageBuilder<UE::Math::TVector4<float>_> *param_1,FGeometryScriptUVList *param_2,
          FGeometryScriptSampleTextureOptions *param_3,FGeometryScriptColorList *param_4)

{
  int *piVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FGeometryScriptSampleTextureOptions *pFVar14;
  TVector4<float> *pTVar15;
  FLinearColor *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  TVector4<float>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  TVector4<float>_u_0 local_98;
  TVector4<float>_u_0 local_88;
  FLinearColor local_78 [5];
  
  FGeometryScriptColorList::Reset(param_4,0);
  pTVar2 = (param_2->List).Object;
  if ((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar2->ArrayNum != 0)) {
    uVar13 = pTVar2->ArrayNum;
    lVar19 = (longlong)(int)uVar13;
    if (((param_4->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (param_4->List).Object;
    iVar12 = pTVar3->ArrayNum;
    piVar1 = &pTVar3->ArrayNum;
    if (iVar12 < (int)uVar13) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar13 - iVar12,&pTVar3->AllocatorInstance,piVar1,&pTVar3->ArrayMax);
    }
    else {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)uVar13 < iVar12) {
        uVar21 = iVar12 - uVar13;
        if (((int)(uVar13 | uVar21) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar21 != 0) {
          pFVar17 = (pTVar3->AllocatorInstance).Data + lVar19 * 0x10;
          iVar12 = (*piVar1 - uVar21) - uVar13;
          if (iVar12 != 0) {
            memmove(pFVar17,pFVar17 + (longlong)(int)uVar21 * 0x10,(longlong)iVar12 << 4);
          }
          *piVar1 = *piVar1 - uVar21;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&pTVar3->AllocatorInstance,*piVar1,&pTVar3->ArrayMax);
        }
      }
    }
    uVar10 = _UNK_150689648;
    uVar9 = ___xmm_3f800000000000000000000000000000;
    dVar8 = __real_3ff0000000000000;
    uVar21 = 0;
    if (0 < (int)uVar13) {
      lVar20 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar21 < pTVar2->ArrayNum) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (pTVar2->AllocatorInstance).Data + lVar20;
        local_e8._0_8_ = uVar9;
        local_e8._8_8_ = uVar10;
        dVar25 = *(double *)(pFVar17 + 8) * (param_3->UVScale).field0_0x0._s_0.Y +
                 (param_3->UVOffset).field0_0x0._s_0.Y;
        dVar24 = *(double *)pFVar17 * (param_3->UVScale).field0_0x0._s_0.X +
                 (param_3->UVOffset).field0_0x0._s_0.X;
        if (param_3->bWrap == false) {
          if (param_3->SamplingMethod != Bilinear) {
            if (0.0 <= dVar24) {
              if (dVar8 <= dVar24) {
                dVar24 = dVar8;
              }
            }
            else {
              dVar24 = 0.0;
            }
            if (0.0 <= dVar25) {
              if (dVar8 <= dVar25) {
                dVar25 = dVar8;
              }
            }
            else {
              dVar25 = 0.0;
            }
            iVar12 = (param_1->Dimensions).Width;
            lVar18 = (longlong)(int)((double)(param_1->Dimensions).Height * dVar25) *
                     (longlong)iVar12;
            dVar24 = (double)iVar12 * dVar24;
            goto LAB_14cec149a;
          }
          local_98._0_8_ = 0;
          local_98._8_8_ = 0;
          if (0.0 <= dVar24) {
            if (dVar8 <= dVar24) {
              dVar24 = dVar8;
            }
          }
          else {
            dVar24 = 0.0;
          }
          if (0.0 <= dVar25) {
            if (dVar8 <= dVar25) {
              dVar25 = dVar8;
            }
          }
          else {
            dVar25 = 0.0;
          }
          local_c8._s_0.X = (double)(param_1->Dimensions).Width * dVar24;
          local_c8._s_0.Y = (double)(param_1->Dimensions).Height * dVar25;
          TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,0>
                    (param_1,(TVector4<float> *)&local_88._s_0,(TVector2<double> *)&local_c8._s_0,
                     (TVector4<float> *)&local_98._s_0);
          local_e8._0_8_ = local_88._0_8_;
          local_e8._8_8_ = local_88._8_8_;
        }
        else {
          iVar12 = (param_1->Dimensions).Width;
          lVar18 = (longlong)dVar24;
          pFVar14 = param_3;
          dVar22 = dVar24;
          if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar24)) {
            auVar23._8_8_ = dVar24;
            auVar23._0_8_ = dVar24;
            uVar13 = movmskpd((int)param_3,auVar23);
            pFVar14 = (FGeometryScriptSampleTextureOptions *)(ulonglong)(uVar13 & 1);
            dVar22 = (double)(lVar18 - (longlong)pFVar14);
          }
          lVar18 = (longlong)dVar25;
          dVar24 = (dVar24 - dVar22) * (double)iVar12;
          dVar22 = dVar25;
          if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar25)) {
            auVar5._8_4_ = SUB84(dVar25,0);
            auVar5._0_8_ = dVar25;
            auVar5._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            uVar13 = movmskpd((int)pFVar14,auVar5);
            dVar22 = (double)(longlong)(lVar18 - (ulonglong)(uVar13 & 1));
          }
          dVar25 = (dVar25 - dVar22) * (double)(param_1->Dimensions).Height;
          if (param_3->SamplingMethod == Bilinear) {
            local_b8._0_8_ = 0;
            local_b8._8_8_ = 0;
            local_d8._s_0.X = dVar24;
            local_d8._s_0.Y = dVar25;
            TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,1>
                      (param_1,(TVector4<float> *)&local_a8._s_0,(TVector2<double> *)&local_d8._s_0,
                       (TVector4<float> *)&local_b8._s_0);
            local_e8._0_8_ = local_a8._0_8_;
            local_e8._8_8_ = local_a8._8_8_;
          }
          else {
            lVar18 = (longlong)(int)dVar25 * (longlong)iVar12;
LAB_14cec149a:
            pTVar15 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                (&param_1->Image,lVar18 + (int)dVar24);
            local_e8._0_8_ = *(undefined8 *)&pTVar15->field0_0x0;
            local_e8._8_8_ = *(undefined8 *)((longlong)&pTVar15->field0_0x0 + 8);
          }
        }
        pFVar16 = FLinearColor::FLinearColor(local_78,(TVector4<float> *)&local_e8._s_0);
        uVar6 = *(undefined8 *)&pFVar16->field0_0x0;
        uVar7 = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
        uVar13 = 0;
        if ((int)uVar21 < *piVar1) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar21 = uVar21 + 1;
        pFVar17 = (pTVar3->AllocatorInstance).Data + lVar20;
        *(undefined8 *)pFVar17 = uVar6;
        *(undefined8 *)(pFVar17 + 8) = uVar7;
        lVar20 = lVar20 + 0x10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  return;
}

// SwitchTimeType @ 14cec29c0

float __cdecl
UE::Local::SplinePathHelpers::SwitchTimeType
          (USplineComponent *param_1,float param_2,bool param_3,bool param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = param_1->Duration;
  auVar5 = ZEXT816(0);
  if (param_4) {
    fVar4 = FGenericPlatformMath::Fmod(param_2,fVar1);
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + fVar1;
    }
    auVar5 = roundps(auVar5,ZEXT416((uint)(param_2 / fVar1)),1);
    auVar5._0_4_ = auVar5._0_4_ * fVar1;
  }
  else {
    fVar4 = fVar1;
    if (param_2 <= fVar1) {
      fVar4 = param_2;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  if (param_3) {
    fVar3 = USplineComponent::GetSplineLength(param_1);
    fVar4 = USplineComponent::GetTimeAtDistanceAlongSpline(param_1,fVar3 * (fVar4 / fVar1));
  }
  else {
    iVar2 = USplineComponent::GetNumberOfSplineSegments(param_1);
    fVar3 = USplineComponent::GetDistanceAlongSplineAtSplineInputKey
                      (param_1,(float)iVar2 * (fVar4 / fVar1));
    fVar1 = param_1->Duration;
    fVar4 = USplineComponent::GetSplineLength(param_1);
    fVar4 = (fVar3 * fVar1) / fVar4;
  }
  return fVar4 + auVar5._0_4_;
}

