// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 39

// StaticClass @ 1496e83e0

UClass * __cdecl UDynamicMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMesh",
               &Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton,
               StaticRegisterNativesUDynamicMesh,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMesh>,InternalVTableHelperCtorCaller<UDynamicMesh>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton;
}

// UDynamicMesh @ 1496f9420

UDynamicMesh * __thiscall UDynamicMesh::UDynamicMesh(UDynamicMesh *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined8 *)&this->PreMeshChangedEvent = 0;
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshChangedEvent = 0;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshModifiedBPEvent = 0;
  *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshRealtimeUpdateEvent = 0;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x10 = 0;
  (this->Mesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->MeshGenerator).field0_0x0.DebugPtr = (UDynamicMeshGenerator *)0x0;
  this->bEnableMeshGenerator = false;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x18 = 2;
  return this;
}

// UDynamicMesh @ 1496f94e0

UDynamicMesh * __thiscall UDynamicMesh::UDynamicMesh(UDynamicMesh *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined8 *)&this->PreMeshChangedEvent = 0;
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreMeshChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshChangedEvent = 0;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshModifiedBPEvent = 0;
  *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshModifiedBPEvent).field_0x10 = 0;
  *(undefined8 *)&this->MeshRealtimeUpdateEvent = 0;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x10 = 0;
  (this->Mesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->MeshGenerator).field0_0x0.DebugPtr = (UDynamicMeshGenerator *)0x0;
  this->bEnableMeshGenerator = false;
  *(undefined8 *)&(this->MeshRealtimeUpdateEvent).field_0x18 = 2;
  InitializeNewMesh(this);
  return this;
}

// ~UDynamicMesh @ 1496fb210

void __thiscall UDynamicMesh::~UDynamicMesh(UDynamicMesh *this)

{
  FDynamicMesh3 *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  pFVar1 = (this->Mesh).Ptr;
  if (pFVar1 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshRealtimeUpdateEvent).field_0x8,
             *(int *)&(this->MeshRealtimeUpdateEvent).field_0x10);
  pvVar2 = *(void **)&(this->MeshRealtimeUpdateEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshRealtimeUpdateEvent);
  pvVar2 = *(void **)&(this->MeshModifiedBPEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshModifiedBPEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshChangedEvent).field_0x8,*(int *)&(this->MeshChangedEvent).field_0x10);
  pvVar2 = *(void **)&(this->MeshChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreMeshChangedEvent).field_0x8,*(int *)&(this->PreMeshChangedEvent).field_0x10
            );
  pvVar2 = *(void **)&(this->PreMeshChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreMeshChangedEvent);
  this->_padding_ = (longlong)&___7IMeshReplacementCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IMeshVertexCommandChangeTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1496fd1e0

void __thiscall
`UDynamicMesh::ApplyChange'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = 8;
  if (**(char **)((longlong)this + 8) == '\0') {
    lVar4 = 0x18;
  }
  lVar1 = **(longlong **)this;
  if (*(longlong *)(lVar4 + lVar1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::Copy(param_1,*(FDynamicMesh3 **)(lVar4 + lVar1),true,true,true,true);
  return;
}

// operator() @ 1496fd260

void __thiscall
`UDynamicMesh::ApplyChange'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  short sVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong local_70;
  
  lVar8 = **(longlong **)this;
  cVar5 = *(char *)(lVar8 + 8);
  if ((*(char *)(lVar8 + 9) == '\0') || (bVar16 = true, (param_1->VertexColors).bIsSet == false)) {
    bVar16 = false;
  }
  lVar19 = 0x20;
  if (**(char **)((longlong)this + 8) == '\0') {
    lVar19 = 0x30;
  }
  lVar20 = 0x40;
  if (**(char **)((longlong)this + 8) == '\0') {
    lVar20 = 0x50;
  }
  uVar23 = 0;
  iVar6 = *(int *)(lVar8 + 0x18);
  if (0 < (longlong)iVar6) {
    lVar24 = 0;
    local_70 = 0;
    lVar21 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      lVar9 = **(longlong **)this;
      uVar18 = 0;
      if ((int)uVar23 < *(int *)(lVar9 + 0x18)) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x10) + lVar24 * 4);
      if ((-1 < (int)uVar18) &&
         ((int)uVar18 <
          (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar26 = (ulonglong)(uVar18 & 0x1ff);
        uVar25 = (ulonglong)(uVar18 >> 9);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + uVar25 * 8) + uVar26 * 2) - 1U) < 0xfffe) {
          if (cVar5 != '\0') {
            uVar18 = 0;
            if ((int)uVar23 < (int)((longlong *)(lVar19 + lVar8))[1]) {
              uVar18 = uVar22;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar9 = *(longlong *)(lVar19 + lVar8);
            sVar17 = _dclass(*(undefined8 *)(lVar9 + lVar21));
            if (((sVar17 < 1) && (sVar17 = _dclass(*(undefined8 *)(lVar9 + 8 + lVar21)), sVar17 < 1)
                ) && (sVar17 = _dclass(*(undefined8 *)(lVar9 + 0x10 + lVar21)), sVar17 < 1)) {
              uVar14 = ((undefined8 *)(lVar9 + lVar21))[1];
              uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar21);
              lVar10 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar25 * 8)
              ;
              puVar2 = (undefined8 *)(lVar10 + uVar26 * 0x18);
              *puVar2 = *(undefined8 *)(lVar9 + lVar21);
              puVar2[1] = uVar14;
              *(undefined8 *)(lVar10 + 0x10 + uVar26 * 0x18) = uVar4;
              if ((param_1->ChangeStampShape).bIsEnabled != false) {
                this_00 = &(param_1->ChangeStampShape).Mutex;
                LOCK();
                bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
                if (bVar15) {
                  this_00->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar15) {
                  UE::FMutex::LockSlow(this_00);
                }
                puVar1 = &(param_1->ChangeStampShape).Value;
                *puVar1 = *puVar1 + 1;
                LOCK();
                aVar3 = this_00->State;
                this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                UNLOCK();
                if (((byte)aVar3 & 2) != 0) {
                  UE::FMutex::WakeWaitingThread(this_00);
                }
              }
            }
          }
          if (bVar16) {
            uVar18 = 0;
            if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
              uVar18 = uVar22;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar9 = *(longlong *)(lVar20 + lVar8);
            if ((param_1->VertexColors).bIsSet != false) {
              lVar10 = *(longlong *)
                        ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                        uVar25 * 8);
              uVar7 = *(undefined4 *)(local_70 + 8 + lVar9);
              *(undefined8 *)(lVar10 + uVar26 * 0xc) = *(undefined8 *)(local_70 + lVar9);
              *(undefined4 *)(lVar10 + 8 + uVar26 * 0xc) = uVar7;
            }
          }
        }
      }
      local_70 = local_70 + 0xc;
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 1;
      lVar21 = lVar21 + 0x18;
    } while (lVar24 < iVar6);
  }
  lVar8 = **(longlong **)this;
  if (((*(char *)(lVar8 + 0x60) != '\0') &&
      (pFVar11 = (param_1->AttributeSet).Ptr, pFVar11 != (FDynamicMeshAttributeSet *)0x0)) &&
     ((0 < (pFVar11->NormalLayers).Array.ArrayNum &&
      (pFVar12 = (pFVar11->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar12 != 0))))
  {
    lVar19 = *(longlong *)pFVar12;
    iVar6 = *(int *)(lVar8 + 0x70);
    lVar20 = 0x78;
    if (**(char **)((longlong)this + 8) == '\0') {
      lVar20 = 0x88;
    }
    uVar23 = 0;
    if (0 < (longlong)iVar6) {
      lVar21 = 0;
      lVar24 = 0;
      do {
        lVar9 = **(longlong **)this;
        uVar18 = 0;
        if ((int)uVar23 < *(int *)(lVar9 + 0x70)) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x68) + lVar21 * 4);
        if (((-1 < (int)uVar18) &&
            ((int)uVar18 < *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar18 >> 9) * 8) +
                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar22 = 0;
          if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar9 = *(longlong *)(lVar20 + lVar8);
          uVar18 = uVar18 * 3;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 >> 9) * 8) +
           (ulonglong)(uVar18 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + lVar24);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
           (ulonglong)(uVar18 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + 4 + lVar24);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 + 2 >> 9) * 8) +
           (ulonglong)(uVar18 + 2 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + 8 + lVar24);
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + 1;
        lVar24 = lVar24 + 0xc;
      } while (lVar21 < iVar6);
    }
  }
  lVar8 = **(longlong **)this;
  if (((*(char *)(lVar8 + 0x98) != '\0') &&
      (pFVar11 = (param_1->AttributeSet).Ptr, pFVar11 != (FDynamicMeshAttributeSet *)0x0)) &&
     ((0 < (pFVar11->UVLayers).Array.ArrayNum &&
      (pFVar12 = (pFVar11->UVLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar12 != 0)))) {
    lVar19 = *(longlong *)pFVar12;
    iVar6 = *(int *)(lVar8 + 0xa8);
    lVar20 = 0xb0;
    if (**(char **)((longlong)this + 8) == '\0') {
      lVar20 = 0xc0;
    }
    uVar23 = 0;
    if (0 < (longlong)iVar6) {
      lVar21 = 0;
      do {
        lVar24 = **(longlong **)this;
        uVar18 = 0;
        if ((int)uVar23 < *(int *)(lVar24 + 0xa8)) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar18 = *(uint *)(*(longlong *)(lVar24 + 0xa0) + lVar21 * 4);
        if (((-1 < (int)uVar18) &&
            ((int)uVar18 < *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar18 >> 9) * 8) +
                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar22 = 0;
          if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar24 = *(longlong *)(lVar20 + lVar8);
          *(undefined4 *)
           (*(longlong *)
             (*(longlong *)(lVar19 + 0x48) + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
           (ulonglong)(uVar18 * 2 & 0x1ff) * 4) = *(undefined4 *)(lVar24 + lVar21 * 8);
          *(undefined4 *)
           (*(longlong *)
             (*(longlong *)(lVar19 + 0x48) + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
           (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar24 + 4 + lVar21 * 8);
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar6);
    }
  }
  return;
}

// operator() @ 1496ff860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UDynamicMesh::ResetToCube'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FMeshShapeGenerator *pFVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMeshAttributeSet *this_00;
  FMinimalBoxMeshGenerator local_348;
  FDynamicMesh3 local_248;
  
  UE::Geometry::FDynamicMesh3::Clear(param_1);
  UE::Geometry::FMinimalBoxMeshGenerator::FMinimalBoxMeshGenerator(&local_348);
  local_348.Box.Extents.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4049000000000000;
  local_348.Box.Frame.Origin.field0_0x0._16_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  local_348.Box.Frame.Origin.field0_0x0._20_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  local_348.Box.Frame.Rotation.field0_0x0._0_4_ = 0;
  local_348.Box.Frame.Rotation.field0_0x0._4_4_ = 0;
  local_348.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  local_348.Box.Frame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_348.Box.Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_348.Box.Frame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_348.Box.Frame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
  local_348.Box.Extents.field0_0x0._16_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4049000000000000,0);
  local_348.Box.Extents.field0_0x0._8_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4049000000000000;
  local_348.Box.Extents.field0_0x0._20_4_ =
       (int)((ulonglong)
             (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4049000000000000) >>
            0x20);
  pFVar2 = UE::Geometry::FMinimalBoxMeshGenerator::Generate(&local_348);
  pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,pFVar2);
  UE::Geometry::FDynamicMesh3::operator=(param_1,pFVar3);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  UE::Geometry::FDynamicMesh3::EnableTriangleGroups(param_1,0);
  pFVar1 = (param_1->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  local_348._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  if ((void *)local_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_348._padding_);
  }
  return;
}

// ApplyChange @ 149702e70

void __thiscall UDynamicMesh::ApplyChange(UDynamicMesh *this,FMeshChange *param_1,bool param_2)

{
  undefined1 *puVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMeshAttributeSet *this_00;
  undefined8 uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  UDynamicMesh *local_res8;
  FMeshChange *local_res10;
  undefined1 local_res18;
  FDynamicMeshChangeInfo local_48 [2];
  
  puVar1 = &this[-1].MeshRealtimeUpdateEvent.field_0x8;
  local_48[0].bIsRevertChange = param_2;
  local_48[0].Type = MeshChange;
  local_48[0].Flags = Unknown;
  uVar3 = local_48[0]._0_8_;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_48[0].MeshChange = param_1;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)puVar1,local_48);
  (**(code **)(local_res10->_padding_ + 0x58))
            (local_res10,*(undefined8 *)&(this->MeshModifiedBPEvent).field_0x8,local_res18);
  pFVar2 = *(FDynamicMesh3 **)&(this->MeshModifiedBPEvent).field_0x8;
  if ((pFVar2->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar2,0);
  }
  pFVar2 = *(FDynamicMesh3 **)&(this->MeshModifiedBPEvent).field_0x8;
  if ((pFVar2->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar2);
  }
  this_00 = *(FDynamicMeshAttributeSet **)
             (*(longlong *)&(this->MeshModifiedBPEvent).field_0x8 + 0x208);
  pFVar4 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = this_00;
  }
  if ((pFVar4->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = uVar3;
  local_48[0].MeshChange = param_1;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)puVar1,local_48);
  local_res8 = (UDynamicMesh *)puVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->PreMeshChangedEvent).field_0x10,&local_res8);
  return;
}

// ApplyChange @ 149702f70

void __thiscall
UDynamicMesh::ApplyChange(UDynamicMesh *this,FMeshReplacementChange *param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(UDynamicMesh_*),FDefaultDelegateUserPolicy> *pTVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8;
  FMeshReplacementChange *local_res10;
  undefined1 local_res18 [8];
  FMeshReplacementChange **local_58;
  undefined1 *local_50;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined5 uStack_45;
  FMeshChange *pFStack_40;
  FMeshReplacementChange *local_38;
  FMeshVertexChange *pFStack_30;
  FDynamicMeshChangeInfo local_28;
  
  local_48 = 2;
  local_58 = &local_res10;
  pTVar1 = &this[-1].MeshRealtimeUpdateEvent;
  pFStack_40 = (FMeshChange *)0x0;
  local_50 = local_res18;
  pFStack_30 = (FMeshVertexChange *)0x0;
  local_28.bIsRevertChange = param_2;
  local_28.Type = MeshReplacementChange;
  local_28.Flags = Unknown;
  local_28._3_5_ = uStack_45;
  local_28.MeshChange = (FMeshChange *)0x0;
  local_28.VertexChange = (FMeshVertexChange *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  uStack_46 = param_2;
  local_38 = param_1;
  local_28.ReplaceChange = param_1;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)pTVar1,&local_28);
  `UDynamicMesh::ApplyChange'::__l2::<lambda_1>::operator()
            (&local_58,*(FDynamicMesh3 **)&this->MeshModifiedBPEvent);
  if (((*(FDynamicMesh3 **)&this->MeshModifiedBPEvent)->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups
              (*(FDynamicMesh3 **)&this->MeshModifiedBPEvent,0);
  }
  if (((*(FDynamicMesh3 **)&this->MeshModifiedBPEvent)->AttributeSet).Ptr ==
      (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)&this->MeshModifiedBPEvent);
  }
  this_00 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->MeshModifiedBPEvent + 0x208);
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_28.bIsRevertChange = (bool)uStack_46;
  local_28.Type = (undefined1)local_48;
  local_28.Flags = local_48._1_1_;
  local_28._3_5_ = uStack_45;
  local_28.MeshChange = pFStack_40;
  local_28.ReplaceChange = local_38;
  local_28.VertexChange = pFStack_30;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)pTVar1,&local_28);
  local_res8 = (UDynamicMesh *)pTVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->PreMeshChangedEvent).field_0x8,&local_res8);
  return;
}

// ApplyChange @ 149703090

void __thiscall
UDynamicMesh::ApplyChange(UDynamicMesh *this,FMeshVertexChange *param_1,bool param_2)

{
  undefined1 *puVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMeshAttributeSet *this_00;
  undefined8 uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  UDynamicMesh *local_res8;
  FMeshVertexChange *local_res10;
  undefined1 local_res18 [16];
  FMeshVertexChange **local_78;
  undefined1 *local_70;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined8 uStack_60;
  undefined8 uStack_58;
  FMeshVertexChange *pFStack_50;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_78 = &local_res10;
  local_68 = 3;
  puVar1 = &this[-1].MeshRealtimeUpdateEvent.field_0x10;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar3._2_1_ = param_2;
  uVar3._0_1_ = MeshVertexChange;
  uVar3._1_1_ = Unknown;
  uVar3._3_5_ = uStack_65;
  local_70 = local_res18;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  uStack_66 = param_2;
  pFStack_50 = param_1;
  local_48[0]._0_8_ = uVar3;
  local_48[0].VertexChange = param_1;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)puVar1,local_48);
  `UDynamicMesh::ApplyChange'::__l2::<lambda_1>::operator()
            (&local_78,*(FDynamicMesh3 **)&(this->MeshModifiedBPEvent).field_0x10);
  pFVar2 = *(FDynamicMesh3 **)&(this->MeshModifiedBPEvent).field_0x10;
  if ((pFVar2->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar2,0);
  }
  pFVar2 = *(FDynamicMesh3 **)&(this->MeshModifiedBPEvent).field_0x10;
  if ((pFVar2->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar2);
  }
  this_00 = *(FDynamicMeshAttributeSet **)
             (*(longlong *)&(this->MeshModifiedBPEvent).field_0x10 + 0x208);
  pFVar4 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = this_00;
  }
  if ((pFVar4->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0]._0_8_ = uVar3;
  local_48[0].VertexChange = param_1;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(UDynamicMesh *)puVar1,local_48);
  local_res8 = (UDynamicMesh *)puVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->PreMeshChangedEvent).field_0x18,&local_res8);
  return;
}

// ClearMeshGenerator @ 149704d80

void __thiscall UDynamicMesh::ClearMeshGenerator(UDynamicMesh *this)

{
  (this->MeshGenerator).field0_0x0.DebugPtr = (UDynamicMeshGenerator *)0x0;
  return;
}

// EditMesh @ 149708b90

void __thiscall
UDynamicMesh::EditMesh
          (UDynamicMesh *this,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,
          EDynamicMeshChangeType param_2,EDynamicMeshAttributeChangeFlags param_3,bool param_4)

{
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> local_38;
  FDynamicMeshChangeInfo local_28;
  
  local_38._0_8_ = *(undefined8 *)param_1;
  local_28.MeshChange = (FMeshChange *)0x0;
  local_28.ReplaceChange = (FMeshReplacementChange *)0x0;
  local_28.bIsRevertChange = false;
  local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28.VertexChange = (FMeshVertexChange *)0x0;
  local_28.Type = param_2;
  local_28.Flags = param_3;
  EditMeshInternal(this,&local_38,&local_28,param_4);
  return;
}

// EditMeshInternal @ 149708d80

void __thiscall
UDynamicMesh::EditMeshInternal
          (UDynamicMesh *this,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,
          FDynamicMeshChangeInfo *param_2,bool param_3)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8;
  FDynamicMeshChangeInfo local_28;
  
  if (!param_3) {
    local_28.Type = param_2->Type;
    local_28.Flags = param_2->Flags;
    local_28.bIsRevertChange = param_2->bIsRevertChange;
    local_28._3_5_ = *(undefined5 *)&param_2->field_0x3;
    local_28.MeshChange = param_2->MeshChange;
    local_28.ReplaceChange = param_2->ReplaceChange;
    local_28.VertexChange = param_2->VertexChange;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->PreMeshChangedEvent,this,&local_28);
  }
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
  }
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
  }
  this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  if (!param_3) {
    local_28.Type = param_2->Type;
    local_28.Flags = param_2->Flags;
    local_28.bIsRevertChange = param_2->bIsRevertChange;
    local_28._3_5_ = *(undefined5 *)&param_2->field_0x3;
    local_28.MeshChange = param_2->MeshChange;
    local_28.ReplaceChange = param_2->ReplaceChange;
    local_28.VertexChange = param_2->VertexChange;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->MeshChangedEvent,this,&local_28);
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
               &local_res8);
  }
  return;
}

// ExportCustomProperties @ 149709350

void __thiscall
UDynamicMesh::ExportCustomProperties(UDynamicMesh *this,FOutputDevice *param_1,uint param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  FDateTime FVar6;
  FDateTime *pFVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  FString local_168;
  undefined8 local_158;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_150;
  undefined1 local_140 [24];
  FUtf8String local_128;
  undefined8 local_118;
  UDynamicMesh *local_110;
  uint *local_108;
  undefined1 *local_100;
  FDateTime local_f0 [3];
  FArchiveState local_d8;
  undefined8 local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  
  pFVar1 = (this->Mesh).Ptr;
  if (((pFVar1->TriangleRefCounts).UsedCount != 0) || ((pFVar1->VertexRefCounts).UsedCount != 0)) {
    if ((0xff < param_2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FOutputDevice::LogfImpl(param_1,L"%sCustomProperties ");
    FOutputDevice::Log(param_1,L"MeshData ");
    uVar12 = 0;
    if (`public:_static_void___cdecl_UE::Local::FDynamicMeshCopyHelper::Initialize(void)'::__l2::
        bInitialized == false) {
      FVar6 = FDateTime::UtcNow();
      pFVar7 = FDateTime::FDateTime(local_f0,0x7b2,1,1,0,0,0,0);
      lVar9 = *(longlong *)FVar6.Ticks - pFVar7->Ticks;
      `public:_static_void___cdecl_UE::Local::FDynamicMeshCopyHelper::Initialize(void)'::__l2::
      bInitialized = true;
      lVar9 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar9),8) + lVar9;
      UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed =
           (int)(lVar9 >> 0x17) - (int)(lVar9 >> 0x3f);
      UE::Local::FDynamicMeshCopyHelper::KeyGenerator.InitialSeed =
           UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed;
    }
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    local_140._0_8_ = 0;
    local_140._16_8_ = 0;
    UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed =
         UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed * 0xbb38435 + 0x3619636b;
    local_140._8_8_ = 0;
    local_res8[0] = -UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed;
    if ((int)-UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed < 0) {
      local_res8[0] = UE::Local::FDynamicMeshCopyHelper::KeyGenerator.Seed;
    }
    FUtf8String::Reset(&local_128,0);
    local_118 = 0;
    FVar6 = FDateTime::Now();
    local_118 = *(undefined8 *)FVar6.Ticks;
    local_110 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_140,(FObjectPtr)&local_110);
    local_108 = local_res8;
    local_100 = local_140;
    TSet<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Local::FDynamicMeshCopyHelper::FStashedMesh_&&>_>
              ((TSet<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>,FDefaultSetAllocator>
                *)&UE::Local::FDynamicMeshCopyHelper::StashedMeshes,
               (TPairInitializer<int_const_&,UE::Local::FDynamicMeshCopyHelper::FStashedMesh_&&> *)
               &stack0x00000020,(bool *)&local_108);
    UE::Local::FDynamicMeshCopyHelper::DiscardExpiredMeshes();
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    FOutputDevice::LogfImpl(param_1,L"MESHKEY=%d ");
    pTVar3 = CVarDynamicMeshTextBasedDupeTriangleCountThreshold.Ref;
    iVar5 = (((this->Mesh).Ptr)->TriangleRefCounts).UsedCount;
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar5 < pTVar3->ShadowedValue[0]) {
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      local_d8._padding_ = 0;
      local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_158 = 0;
      local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_d8._40_8_ = 0;
      local_d8.ArSerializingDefaults = 0;
      local_d8.ArPortFlags = 0;
      local_d8.ArMaxSerializeSize = 0;
      local_d8.ArUEVer.FileVersionUE4 = 0;
      local_d8.ArUEVer.FileVersionUE5 = 0;
      local_d8.ArLicenseeUEVer = 0;
      local_d8.ArEngineVer.Major = 0;
      local_d8.ArEngineVer.Minor = 0;
      local_d8.ArEngineVer.Patch = 0;
      local_d8.ArEngineVer._6_2_ = 0;
      local_d8.ArEngineVer.Changelist = 0;
      local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_d8.SerializedProperty = (FProperty *)0x0;
      local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_d8.bCustomVersionsAreReset = false;
      local_d8._129_7_ = 0;
      local_d8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_d8);
      local_48 = 0;
      local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      local_40 = &local_150;
      local_38 = 0;
      FArchiveState::SetIsSaving(&local_d8,true);
      (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
      local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      UE::Geometry::FDynamicMesh3::Serialize((this->Mesh).Ptr,(FArchive *)&local_d8);
      FBase64::Encode(&local_168,&local_150,Standard);
      uVar10 = local_168.Data._8_8_;
      uVar13 = uVar12;
      while( true ) {
        iVar8 = (int)uVar10;
        iVar5 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar5 = 0;
        }
        iVar11 = (int)uVar12;
        if (iVar5 <= iVar11) break;
        if ((((iVar11 < 0) || (iVar8 == 0)) || (iVar8 + -1 <= iVar11)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), uVar10 = local_168.Data._8_8_, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(short *)(local_168.Data.AllocatorInstance.Data + uVar13) == 0x2f) {
          if (iVar11 < 0) {
code_r0x0001497096e1:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            iVar5 = (int)uVar10 + -1;
            if ((int)uVar10 == 0) {
              iVar5 = 0;
            }
            if (iVar5 <= iVar11) goto code_r0x0001497096e1;
          }
          *(undefined2 *)(local_168.Data.AllocatorInstance.Data + uVar13) = 0x2d;
          uVar10 = local_168.Data._8_8_;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar13 = uVar13 + 2;
      }
      FOutputDevice::LogfImpl(param_1,L"MESHDATALEN=%d MESHDATA=%s");
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_d8);
      if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
    }
    FOutputDevice::Log(param_1,L"\r\n");
  }
  return;
}

// ExtractMesh @ 1497097a0

TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> __thiscall
UDynamicMesh::ExtractMesh(UDynamicMesh *this)

{
  FDynamicMesh3 *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->Mesh).Ptr;
  (this->Mesh).Ptr = (FDynamicMesh3 *)0x0;
  InitializeNewMesh(this);
  return (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>)
         in_RDX;
}

// GetPrivateStaticClass @ 1497111d0

UClass * __cdecl UDynamicMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMesh",
               &Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton,
               StaticRegisterNativesUDynamicMesh,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMesh>,InternalVTableHelperCtorCaller<UDynamicMesh>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMesh.InnerSingleton;
}

// GetTriangleCount @ 149711910

int __thiscall UDynamicMesh::GetTriangleCount(UDynamicMesh *this)

{
  return (((this->Mesh).Ptr)->TriangleRefCounts).UsedCount;
}

// ImportCustomProperties @ 149711f70

/* WARNING: Removing unreachable block (ram,0x000149712135) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDynamicMesh::ImportCustomProperties(UDynamicMesh *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  uint uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UDynamicMesh *pUVar8;
  FDynamicMesh3 *this_00;
  FText *this_01;
  FMeshShapeGenerator *pFVar9;
  wchar_t wVar10;
  uint *puVar11;
  undefined8 uVar12;
  wchar_t wVar13;
  int iVar14;
  FDynamicMesh3 *pFVar15;
  FDynamicMesh3 *pFVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  wchar_t *local_res10;
  FDynamicMesh3 *local_res20;
  FString local_6c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6b8;
  FText local_6a8;
  FArchiveState local_698;
  undefined8 local_608;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_600;
  undefined8 local_5f8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  double local_5c0;
  double dStack_5b8;
  FMinimalBoxMeshGenerator local_598;
  FDynamicMesh3 local_498;
  FDynamicMesh3 local_268;
  
  local_res10 = param_1;
  bVar4 = FParse::Command(&local_res10,L"MeshData",true);
  if (!bVar4) {
    return;
  }
  pFVar16 = (FDynamicMesh3 *)0x0;
  if (local_res10 != (wchar_t *)0x0) {
    bVar4 = false;
    wVar10 = *local_res10;
    pwVar3 = local_res10;
    while (wVar10 != L'\0') {
      pwVar17 = pwVar3 + 1;
      wVar13 = wVar10 + L'￠';
      if (0x19 < (ushort)(wVar10 + L'ﾟ')) {
        wVar13 = wVar10;
      }
      if (((!bVar4) && (wVar13 == L'M')) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar17,L"ESHKEY=",7), iVar5 == 0)) {
        if (pwVar3 != (wchar_t *)0x0) {
          local_res10 = pwVar3 + 8;
          uVar6 = _wtoi(local_res10);
          local_res20 = (FDynamicMesh3 *)0x0;
          if (UE::Local::FDynamicMeshCopyHelper::StashedMeshes._8_4_ ==
              UE::Local::FDynamicMeshCopyHelper::StashedMeshes._52_4_) goto LAB_14971215f;
          lVar18 = 0x154c8bb58;
          if (UE::Local::FDynamicMeshCopyHelper::StashedMeshes._64_8_ != 0) {
            lVar18 = UE::Local::FDynamicMeshCopyHelper::StashedMeshes._64_8_;
          }
          uVar1 = *(uint *)(lVar18 + (ulonglong)
                                     (UE::Local::FDynamicMeshCopyHelper::StashedMeshes._72_4_ - 1 &
                                     uVar6) * 4);
          goto joined_r0x0001497120bc;
        }
        break;
      }
      if (((ushort)(wVar13 + L'﾿') < 0x1a) || ((ushort)(wVar13 + L'￐') < 10)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      pwVar3 = pwVar17;
      wVar10 = *pwVar17;
    }
  }
LAB_1497121c5:
  if (local_res10 != (wchar_t *)0x0) {
    bVar4 = false;
    wVar10 = *local_res10;
    pwVar3 = local_res10;
    while (wVar10 != L'\0') {
      pwVar17 = pwVar3 + 1;
      wVar13 = wVar10 + L'￠';
      if (0x19 < (ushort)(wVar10 + L'ﾟ')) {
        wVar13 = wVar10;
      }
      if (((!bVar4) && (wVar13 == L'M')) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar17,L"ESHDATALEN=",0xb), iVar5 == 0)) {
        if (pwVar3 != (wchar_t *)0x0) {
          local_res10 = pwVar3 + 0xc;
          iVar5 = _wtoi(local_res10);
          if (local_res10 != (wchar_t *)0x0) {
            wVar10 = *local_res10;
            bVar4 = false;
            pwVar3 = local_res10;
            if (wVar10 != L'\0') goto LAB_149712290;
          }
        }
        break;
      }
      if (((ushort)(wVar13 + L'﾿') < 0x1a) || ((ushort)(wVar13 + L'￐') < 10)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      pwVar3 = pwVar17;
      wVar10 = *pwVar17;
    }
  }
LAB_14971250b:
  this_01 = FText::AsLocalizable_Advanced_LocText
                      (&local_6a8,L"UDynamicMesh",L"DynamicMeshPasteFailed",
                       L"Dynamic Mesh paste failed! See log for details.");
  if (2 < (byte)LogGeometry._0_1_) {
    FText::ToString(this_01);
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u__s_151eb3870,(FLogCategoryBase *)&LogGeometry);
  }
  if (local_6a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.TextData.Reference + 0x10))();
  }
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  UE::Geometry::FMinimalBoxMeshGenerator::FMinimalBoxMeshGenerator(&local_598);
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_598.Box.Extents.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4049000000000000;
  local_598.Box.Extents.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4049000000000000;
  local_598.Box.Extents.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4049000000000000;
  local_5c0 = ___xmm_3ff00000000000000000000000000000;
  dStack_5b8 = _UNK_15061cbc8;
  local_598.Box.Frame.Origin.field0_0x0._16_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  local_598.Box.Frame.Origin.field0_0x0._20_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  local_598.Box.Frame.Rotation.field0_0x0._0_4_ = 0;
  local_598.Box.Frame.Rotation.field0_0x0._4_4_ = 0;
  local_598.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  local_598.Box.Frame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_598.Box.Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_598.Box.Frame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_598.Box.Frame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
  pFVar9 = UE::Geometry::FMinimalBoxMeshGenerator::Generate(&local_598);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268,pFVar9);
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(local_268.AttributeSet.Ptr);
  SetMesh(this,&local_268);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  local_598._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
  }
  local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_598._padding_;
  if ((void *)local_598._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_598._padding_);
    local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_598._padding_;
  }
LAB_149712701:
  if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
  }
  return;
joined_r0x0001497120bc:
  if (uVar1 == 0xffffffff) goto LAB_14971215f;
  puVar11 = (uint *)((longlong)(int)uVar1 * 0x40 +
                    UE::Local::FDynamicMeshCopyHelper::StashedMeshes._0_8_);
  if (*puVar11 == uVar6) {
    pFVar15 = (FDynamicMesh3 *)(puVar11 + 2);
    if (puVar11 == (uint *)0x0) {
      pFVar15 = pFVar16;
    }
    if ((pFVar15 != (FDynamicMesh3 *)0x0) &&
       (pUVar8 = TSoftObjectPtr<UDynamicMesh>::Get((TSoftObjectPtr<UDynamicMesh> *)pFVar15),
       pUVar8 != (UDynamicMesh *)0x0)) {
      this_00 = ::operator_new(0x230);
      local_res20 = pFVar16;
      if (this_00 != (FDynamicMesh3 *)0x0) {
        local_res20 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(this_00);
      }
      pUVar8 = TSoftObjectPtr<UDynamicMesh>::Get((TSoftObjectPtr<UDynamicMesh> *)pFVar15);
      if (pUVar8 != (UDynamicMesh *)0x0) {
        UE::Geometry::FDynamicMesh3::operator=(local_res20,(pUVar8->Mesh).Ptr);
      }
    }
    goto LAB_14971215f;
  }
  uVar1 = puVar11[0xe];
  goto joined_r0x0001497120bc;
LAB_14971215f:
  UE::Local::FDynamicMeshCopyHelper::DiscardExpiredMeshes();
  if (local_res20 != (FDynamicMesh3 *)0x0) {
    if (0 < (local_res20->TriangleRefCounts).UsedCount) {
      InitializeNewMesh(this);
      SetMesh(this,local_res20);
      if (local_res20 != (FDynamicMesh3 *)0x0) {
        (**(code **)local_res20->_padding_)(local_res20,1);
        return;
      }
      return;
    }
    if (local_res20 != (FDynamicMesh3 *)0x0) {
      (**(code **)local_res20->_padding_)();
    }
  }
  goto LAB_1497121c5;
  while( true ) {
    if (((ushort)(wVar13 + L'﾿') < 0x1a) || ((ushort)(wVar13 + L'￐') < 10)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    wVar10 = *pwVar17;
    pwVar3 = pwVar17;
    if (wVar10 == L'\0') break;
LAB_149712290:
    pwVar17 = pwVar3 + 1;
    wVar13 = wVar10 + L'￠';
    if (0x19 < (ushort)(wVar10 + L'ﾟ')) {
      wVar13 = wVar10;
    }
    if (((!bVar4) && (wVar13 == L'M')) &&
       (iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar17,L"ESHDATA=",8), iVar7 == 0)) {
      if (pwVar3 != (wchar_t *)0x0) {
        local_res10 = pwVar3 + 9;
        ::FString::ConstructFromPtrSize(&local_6c8,local_res10,iVar5);
        uVar12 = local_6c8.Data._8_8_;
        pFVar15 = pFVar16;
        goto LAB_149712320;
      }
      break;
    }
  }
  goto LAB_14971250b;
LAB_149712320:
  iVar7 = (int)uVar12;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  iVar14 = (int)pFVar16;
  if (iVar5 <= iVar14) {
    local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6b8.ArrayNum = 0;
    local_6b8.ArrayMax = 0;
    bVar4 = FBase64::Decode(&local_6c8,&local_6b8,Standard);
    if (bVar4) {
      local_698._padding_ = 0;
      local_698.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_698.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_698.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_698.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_698._40_8_ = 0;
      local_698.ArSerializingDefaults = 0;
      local_698.ArPortFlags = 0;
      local_698.ArMaxSerializeSize = 0;
      local_698.ArUEVer.FileVersionUE4 = 0;
      local_698.ArUEVer.FileVersionUE5 = 0;
      local_698.ArLicenseeUEVer = 0;
      local_698.ArEngineVer.Major = 0;
      local_698.ArEngineVer.Minor = 0;
      local_698.ArEngineVer.Patch = 0;
      local_698.ArEngineVer._6_2_ = 0;
      local_698.ArEngineVer.Changelist = 0;
      local_698.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_698.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_698.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_698.SerializedProperty = (FProperty *)0x0;
      local_698.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_698.bCustomVersionsAreReset = false;
      local_698._129_7_ = 0;
      local_698.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_698);
      local_608 = 0;
      local_698._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_600 = &local_6b8;
      local_5f8 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_698,true);
      (**(code **)(local_698._padding_ + 0x108))(&local_698,0);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_498);
      UE::Geometry::FDynamicMesh3::Serialize(&local_498,(FArchive *)&local_698);
      InitializeNewMesh(this);
      SetMesh(this,&local_498);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_498);
      FArchive::~FArchive((FArchive *)&local_698);
      if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.AllocatorInstance.Data);
      }
      goto LAB_149712701;
    }
    if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.AllocatorInstance.Data);
    }
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
    goto LAB_14971250b;
  }
  if ((((iVar14 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     uVar12 = local_6c8.Data._8_8_, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(short *)(local_6c8.Data.AllocatorInstance.Data + (longlong)pFVar15) == 0x2d) {
    if (iVar14 < 0) {
code_r0x0001497123b2:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar5 = (int)uVar12 + -1;
      if ((int)uVar12 == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar14) goto code_r0x0001497123b2;
    }
    *(undefined2 *)(local_6c8.Data.AllocatorInstance.Data + (longlong)pFVar15) = 0x2f;
    uVar12 = local_6c8.Data._8_8_;
  }
  pFVar16 = (FDynamicMesh3 *)(ulonglong)(iVar14 + 1);
  pFVar15 = (FDynamicMesh3 *)((longlong)&pFVar15->_padding_ + 2);
  goto LAB_149712320;
}

// InitializeMesh @ 1497138b0

void __thiscall UDynamicMesh::InitializeMesh(UDynamicMesh *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  UDynamicMeshGenerator *pUVar2;
  FDynamicMeshAttributeSet *this_00;
  
  UE::Geometry::FDynamicMesh3::Clear((this->Mesh).Ptr);
  UE::Geometry::FDynamicMesh3::EnableTriangleGroups((this->Mesh).Ptr,0);
  UE::Geometry::FDynamicMesh3::EnableAttributes((this->Mesh).Ptr);
  pFVar1 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  pUVar2 = (this->MeshGenerator).field0_0x0.DebugPtr;
  if ((pUVar2 != (UDynamicMeshGenerator *)0x0) && (this->bEnableMeshGenerator != false)) {
                    /* WARNING: Could not recover jumptable at 0x00014971391f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,(this->Mesh).Ptr);
    return;
  }
  return;
}

// InitializeNewMesh @ 149713970

void __thiscall UDynamicMesh::InitializeNewMesh(UDynamicMesh *this)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  FDynamicMesh3 *pFVar2;
  FDynamicMesh3 *pFVar3;
  undefined8 *puVar4;
  longlong local_18 [2];
  
  pFVar3 = ::operator_new(0x230);
  if (pFVar3 == (FDynamicMesh3 *)0x0) {
    pFVar3 = (FDynamicMesh3 *)0x0;
  }
  else {
    pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar3,FaceGroups);
  }
  pTVar1 = &this->Mesh;
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)local_18) {
    if (pFVar3 == (FDynamicMesh3 *)0x0) goto LAB_1497139cc;
    puVar4 = (undefined8 *)pFVar3->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar3;
    if (pFVar2 == (FDynamicMesh3 *)0x0) goto LAB_1497139cc;
    puVar4 = (undefined8 *)pFVar2->_padding_;
    pFVar3 = pFVar2;
  }
  (*(code *)*puVar4)(pFVar3,1);
LAB_1497139cc:
                    /* WARNING: Could not recover jumptable at 0x0001497139d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// IsEmpty @ 149713f50

bool __thiscall UDynamicMesh::IsEmpty(UDynamicMesh *this)

{
  return (((this->Mesh).Ptr)->TriangleRefCounts).UsedCount == 0;
}

// PostRealtimeUpdate @ 149714dd0

void __thiscall UDynamicMesh::PostRealtimeUpdate(UDynamicMesh *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->MeshRealtimeUpdateEvent,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->MeshRealtimeUpdateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->MeshRealtimeUpdateEvent).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->MeshRealtimeUpdateEvent).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->MeshRealtimeUpdateEvent).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->MeshRealtimeUpdateEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->MeshRealtimeUpdateEvent,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// ProcessMesh @ 149715390

void __thiscall
UDynamicMesh::ProcessMesh
          (UDynamicMesh *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001497153a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,(this->Mesh).Ptr);
  return;
}

// Regenerate @ 149715d80

void __thiscall UDynamicMesh::Regenerate(UDynamicMesh *this)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *apUStackX_8 [2];
  uint5 uStack_65;
  FDynamicMeshChangeInfo aFStack_48 [2];
  
  if (((this->MeshGenerator).field0_0x0.DebugPtr != (UDynamicMeshGenerator *)0x0) &&
     (this->bEnableMeshGenerator != false)) {
    aFStack_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
    aFStack_48[0].VertexChange = (FMeshVertexChange *)0x0;
    aFStack_48[0].MeshChange = (FMeshChange *)0x0;
    aFStack_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->PreMeshChangedEvent,this,aFStack_48);
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pFVar1 = (this->Mesh).Ptr;
    if ((pFVar1->TriangleGroups).bIsSet == false) {
      UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
    }
    pFVar1 = (this->Mesh).Ptr;
    if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
    }
    this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
    pFVar2 = (FDynamicMeshAttributeSet *)0x0;
    if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = this_00;
    }
    if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
    }
    aFStack_48[0].MeshChange = (FMeshChange *)0x0;
    aFStack_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
    aFStack_48[0].VertexChange = (FMeshVertexChange *)0x0;
    aFStack_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
    TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->MeshChangedEvent,this,aFStack_48);
    apUStackX_8[0] = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
               apUStackX_8);
    return;
  }
  return;
}

// Reset @ 149716820

UDynamicMesh * __thiscall UDynamicMesh::Reset(UDynamicMesh *this)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8 [2];
  uint5 uStack_65;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->PreMeshChangedEvent,this,local_48);
  (**(code **)(this->_padding_ + 0x2b0))(this);
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
  }
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
  }
  this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->MeshChangedEvent,this,local_48);
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
             local_res8);
  return this;
}

// ResetToCube @ 149716990

UDynamicMesh * __thiscall UDynamicMesh::ResetToCube(UDynamicMesh *this)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8;
  UDynamicMesh *local_res10;
  uint5 uStack_65;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_res8 = this;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->PreMeshChangedEvent,this,local_48);
  `UDynamicMesh::ResetToCube'::__l2::<lambda_1>::operator()(&local_res8,(this->Mesh).Ptr);
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
  }
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
  }
  this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->MeshChangedEvent,this,local_48);
  local_res10 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
             &local_res10);
  return this;
}

// Serialize @ 149718b00

void __thiscall UDynamicMesh::Serialize(UDynamicMesh *this,FArchive *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId315,"UDynamicMesh::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
               ,0x13b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
  }
  UObject::Serialize((UObject *)this,param_1);
  bVar1 = UE::Transaction::DiffUtil::IsGeneratingDiffableObject(param_1);
  if (!bVar1) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
    if ((param_1->field_0x28 & 1) != 0) {
      InitializeNewMesh(this);
    }
    UE::Geometry::FDynamicMesh3::Serialize((this->Mesh).Ptr,param_1);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 149718bc0

void __thiscall UDynamicMesh::Serialize(UDynamicMesh *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  bool bVar3;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  bVar3 = CpuChannel->Enabled < 0;
  if (!bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId315,"UDynamicMesh::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
               ,0x13b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
  }
  UObject::Serialize((UObject *)this,pFVar2);
  bVar1 = UE::Transaction::DiffUtil::IsGeneratingDiffableObject(pFVar2);
  if (bVar1) {
    if (bVar3) {
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FUE5MainStreamObjectVersion::GUID);
    if ((pFVar2->field_0x28 & 1) != 0) {
      InitializeNewMesh(this);
    }
    UE::Geometry::FDynamicMesh3::Serialize((this->Mesh).Ptr,pFVar2);
    if (bVar3) {
      return;
    }
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetMesh @ 1497199e0

void __thiscall UDynamicMesh::SetMesh(UDynamicMesh *this,FDynamicMesh3 *param_1)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8;
  uint5 uStack_65;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->PreMeshChangedEvent,this,local_48);
  UE::Geometry::FDynamicMesh3::operator=((this->Mesh).Ptr,param_1);
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
  }
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
  }
  this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->MeshChangedEvent,this,local_48);
  local_res8 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
             &local_res8);
  return;
}

// SetMesh @ 149719b00

void __thiscall UDynamicMesh::SetMesh(UDynamicMesh *this,FDynamicMesh3 *param_1)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  UDynamicMesh *local_res8;
  uint5 uStack_65;
  FDynamicMeshChangeInfo local_48 [2];
  
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->PreMeshChangedEvent,this,local_48);
  UE::Geometry::FDynamicMesh3::operator=((this->Mesh).Ptr,param_1);
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(pFVar1,0);
  }
  pFVar1 = (this->Mesh).Ptr;
  if ((pFVar1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar1);
  }
  this_00 = (((this->Mesh).Ptr)->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = this_00;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->MeshChangedEvent,this,local_48);
  local_res8 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->MeshModifiedBPEvent,
             &local_res8);
  return;
}

// SetMeshGenerator @ 149719ce0

void __thiscall
UDynamicMesh::SetMeshGenerator(UDynamicMesh *this,TObjectPtr<UDynamicMeshGenerator> param_1)

{
  if (!UE::GC::GIsIncrementalReachabilityPending) {
                    /* WARNING: Load size is inaccurate */
    (this->MeshGenerator).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
                    /* WARNING: Load size is inaccurate */
    (this->MeshGenerator).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  (this->MeshGenerator).field0_0x0.DebugPtr = (UDynamicMeshGenerator *)0x0;
  return;
}

// StaticRegisterNativesUDynamicMesh @ 14971aab0

void __cdecl UDynamicMesh::StaticRegisterNativesUDynamicMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDynamicMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14971dd20

UObject * __thiscall UDynamicMesh::_getUObject(UDynamicMesh *this)

{
  return (UObject *)&this[-1].MeshRealtimeUpdateEvent.field_0x10;
}

// _getUObject`adjustor{8}' @ 14971dd2c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UDynamicMesh::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UDynamicMesh::_getUObject_adjustor_8__(UDynamicMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMesh *)&this[-1].bEnableMeshGenerator);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14971dd3c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UDynamicMesh::_getUObject`adjustor{16}'
   (void)const __ptr64 */

UObject * __thiscall UDynamicMesh::_getUObject_adjustor_16__(UDynamicMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDynamicMesh *)&this[-1].MeshGenerator);
  return (UObject *)pUVar1;
}

// execGetTriangleCount @ 14971e6a0

void __cdecl UDynamicMesh::execGetTriangleCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[4].field_0x18 + 0x170);
  return;
}

// execIsEmpty @ 14971e7f0

void __cdecl UDynamicMesh::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)(*(longlong *)&param_1[4].field_0x18 + 0x170) == 0;
  return;
}

// execReset @ 14971ecf0

void __cdecl UDynamicMesh::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMesh *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = Reset((UDynamicMesh *)param_1);
  *(UDynamicMesh **)param_3 = pUVar1;
  return;
}

// execResetToCube @ 14971ed30

void __cdecl UDynamicMesh::execResetToCube(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDynamicMeshAttributeSet *this;
  FDynamicMeshAttributeSet *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  uint5 uStack_65;
  FDynamicMeshChangeInfo local_48 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_res8 = param_1;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&param_1[1].field_0x18,(UDynamicMesh *)param_1,local_48);
  `UDynamicMesh::ResetToCube'::__l2::<lambda_1>::operator()
            (&local_res8,*(FDynamicMesh3 **)&param_1[4].field_0x18);
  if (((*(FDynamicMesh3 **)&param_1[4].field_0x18)->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(*(FDynamicMesh3 **)&param_1[4].field_0x18,0);
  }
  if (((*(FDynamicMesh3 **)&param_1[4].field_0x18)->AttributeSet).Ptr ==
      (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)&param_1[4].field_0x18);
  }
  this = *(FDynamicMeshAttributeSet **)(*(longlong *)&param_1[4].field_0x18 + 0x208);
  pFVar1 = (FDynamicMeshAttributeSet *)0x0;
  if (this != (FDynamicMeshAttributeSet *)0x0) {
    pFVar1 = this;
  }
  if ((pFVar1->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this);
  }
  local_48[0].MeshChange = (FMeshChange *)0x0;
  local_48[0].ReplaceChange = (FMeshReplacementChange *)0x0;
  local_48[0].VertexChange = (FMeshVertexChange *)0x0;
  local_48[0]._0_8_ = (ulonglong)uStack_65 << 0x18;
  TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
               *)&param_1[2].field_0x10,(UDynamicMesh *)param_1,local_48);
  local_res10 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x8,
             &local_res10);
  *(UObject **)param_3 = param_1;
  return;
}

