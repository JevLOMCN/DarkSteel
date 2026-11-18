// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 4

// ComputeBoundingBox @ 14dad05e0

TBox<double> * __thiscall
FDataflowDebugDrawSkeletonObject::ComputeBoundingBox
          (FDataflowDebugDrawSkeletonObject *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TBox<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  uVar10 = (uint)this->_padding_;
  uVar11 = *(int *)((longlong)&this->_padding_ + 4) + uVar10;
  while( true ) {
    if (uVar11 <= uVar10) {
      return __return_storage_ptr__;
    }
    plVar4 = (longlong *)this->_padding_;
    uVar8 = 0;
    if ((int)uVar10 < (int)plVar4[1]) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    lVar5 = *plVar4;
    if ((*(longlong *)(lVar5 + (longlong)(int)uVar10 * 0x10) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TBox<double> *)(*pcVar6)();
      return pTVar9;
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(int)uVar10 * 0x10);
    if (__return_storage_ptr__->IsValid == '\0') {
      if (*(char *)(lVar5 + 0x50) != '\0') {
        dVar1 = *(double *)(lVar5 + 0x28);
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)(lVar5 + 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
        dVar1 = *(double *)(lVar5 + 0x38);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *(double *)(lVar5 + 0x30);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
        dVar1 = *(double *)(lVar5 + 0x48);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = *(double *)(lVar5 + 0x40);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
        uVar3 = *(undefined8 *)(lVar5 + 0x50);
        __return_storage_ptr__->IsValid = (char)uVar3;
        __return_storage_ptr__->Pad[0] = (char)((ulonglong)uVar3 >> 8);
        __return_storage_ptr__->Pad[1] = (char)((ulonglong)uVar3 >> 0x10);
        __return_storage_ptr__->Pad[2] = (char)((ulonglong)uVar3 >> 0x18);
        __return_storage_ptr__->Pad[3] = (char)((ulonglong)uVar3 >> 0x20);
        __return_storage_ptr__->Pad[4] = (char)((ulonglong)uVar3 >> 0x28);
        __return_storage_ptr__->Pad[5] = (char)((ulonglong)uVar3 >> 0x30);
        __return_storage_ptr__->Pad[6] = (char)((ulonglong)uVar3 >> 0x38);
      }
    }
    else if (*(char *)(lVar5 + 0x50) != '\0') {
      dVar1 = *(double *)(lVar5 + 0x20);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      if (dVar2 <= dVar1) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar13,uVar12);
      dVar1 = *(double *)(lVar5 + 0x28);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar2 <= dVar1) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
      dVar1 = *(double *)(lVar5 + 0x30);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      if (dVar2 <= dVar1) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
      dVar1 = *(double *)(lVar5 + 0x38);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      if (dVar1 <= dVar2) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar13,uVar12);
      dVar1 = *(double *)(lVar5 + 0x40);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
      if (dVar1 <= dVar2) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
      dVar1 = *(double *)(lVar5 + 0x48);
      uVar12 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      if (dVar1 <= dVar2) {
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
    }
    uVar10 = uVar10 + 1;
  }
  pcVar6 = (code *)swi(3);
  pTVar9 = (TBox<double> *)(*pcVar6)();
  return pTVar9;
}

// DrawDataflowElements @ 14dad3720

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

void __thiscall
FDataflowDebugDrawSkeletonObject::DrawDataflowElements
          (FDataflowDebugDrawSkeletonObject *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  TRefCountPtr<HHitProxy> TVar6;
  code *pcVar7;
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
  bool bVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  FName *pFVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  FName local_res18;
  FName local_res20;
  uint local_1a8;
  undefined2 local_1a4 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> local_190;
  ForAnyElementType local_180;
  undefined8 local_178;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  FName local_160;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_158;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_148;
  FSkelDebugDrawConfig local_138;
  FDestructionSentinel local_d8;
  TVector<double>_u_0 local_c0 [5];
  
  uVar30 = 0;
  uVar27 = (this->ReferenceSkeleton->FinalRefBoneInfo).ArrayNum;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  FReferenceSkeleton::GetBoneAbsoluteTransforms(this->ReferenceSkeleton,&local_158);
  lpCriticalSection = &this->TransformOverridesLockGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((uVar27 != local_158.ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBones == WorldTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowSkeletalMeshNodes.cpp"
                          ,0x6e,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar33 = (longlong)(int)uVar27;
  uVar32 = uVar30;
  if (0 < (int)uVar27) {
    do {
      uVar26 = (uint)uVar30;
      if ((-1 < (int)uVar26) && ((int)uVar26 < (this->TransformOverrides).ArrayNum)) {
        uVar23 = 0;
        if ((int)uVar26 < (this->TransformOverrides).ArrayNum) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar29 = (this->TransformOverrides).AllocatorInstance.Data;
        uVar8 = *(undefined8 *)(pFVar29 + uVar32);
        uVar9 = *(undefined8 *)(pFVar29 + uVar32 + 8);
        uVar10 = *(undefined8 *)(pFVar29 + uVar32 + 0x10);
        uVar11 = *(undefined8 *)(pFVar29 + uVar32 + 0x10 + 8);
        uVar12 = *(undefined8 *)(pFVar29 + uVar32 + 0x20);
        uVar13 = *(undefined8 *)(pFVar29 + uVar32 + 0x20 + 8);
        uVar14 = *(undefined8 *)(pFVar29 + uVar32 + 0x30);
        uVar15 = *(undefined8 *)(pFVar29 + uVar32 + 0x30 + 8);
        uVar16 = *(undefined8 *)(pFVar29 + uVar32 + 0x40);
        uVar17 = *(undefined8 *)(pFVar29 + uVar32 + 0x40 + 8);
        uVar18 = *(undefined8 *)(pFVar29 + uVar32 + 0x50);
        uVar19 = *(undefined8 *)(pFVar29 + uVar32 + 0x50 + 8);
        uVar23 = 0;
        if ((int)uVar26 < local_158.ArrayNum) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32) = uVar8;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 8) = uVar9;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x10) = uVar10;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x10 + 8) = uVar11;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x20) = uVar12;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x20 + 8) = uVar13;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x30) = uVar14;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x30 + 8) = uVar15;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x40) = uVar16;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x40 + 8) = uVar17;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x50) = uVar18;
        *(undefined8 *)(local_158.AllocatorInstance.Data + uVar32 + 0x50 + 8) = uVar19;
      }
      uVar30 = (ulonglong)(uVar26 + 1);
      lVar33 = lVar33 + -1;
      uVar32 = uVar32 + 0x60;
    } while (lVar33 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (local_1a0.ArrayMax < (int)uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar27,&local_1a0.AllocatorInstance,local_1a0.ArrayNum,&local_1a0.ArrayMax);
  }
  uVar26 = *(uint *)((longlong)&this->_padding_ + 4);
  bVar20 = false;
  if ((uVar27 == uVar26) && (local_1a8 = 0, 0 < (int)uVar26)) {
    do {
      uVar26 = (int)this->_padding_ + local_1a8;
      plVar4 = (longlong *)this->_padding_;
      uVar27 = 0;
      if ((int)uVar26 < (int)plVar4[1]) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar33 = *plVar4;
      lVar31 = (longlong)(int)uVar26;
      lVar28 = *(longlong *)(lVar33 + lVar31 * 0x10);
      if (lVar28 != 0) {
        if (*(char *)(lVar28 + 0x59) != '\0') {
          local_1a4[0] = (undefined2)local_1a8;
          if (((local_1a0.AllocatorInstance.Data <= (FScriptContainerElement *)local_1a4) &&
              ((FScriptContainerElement *)local_1a4 <
               local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 2)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_1a0.ArrayNum;
          if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
          }
          local_1a0.ArrayNum = iVar24 + 1;
          *(undefined2 *)(local_1a0.AllocatorInstance.Data + (longlong)iVar24 * 2) = local_1a4[0];
        }
        lVar28 = (longlong)(int)local_1a8;
        uVar27 = 0;
        if ((int)local_1a8 < (this->PreviousSelection).ArrayNum) {
          uVar27 = ~local_1a8 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar29 = (this->PreviousSelection).AllocatorInstance.Data;
        if ((*(longlong *)(lVar33 + lVar31 * 0x10) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)(lVar33 + lVar31 * 0x10);
        if (*(FScriptContainerElement *)(lVar5 + 0x5a) != pFVar29[lVar28]) {
          if ((lVar5 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar28 = (longlong)(int)local_1a8;
          FVar2 = *(FScriptContainerElement *)(*(longlong *)(lVar33 + lVar31 * 0x10) + 0x5a);
          uVar27 = 0;
          if ((int)local_1a8 < (this->PreviousSelection).ArrayNum) {
            uVar27 = ~local_1a8 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar20 = true;
          (this->PreviousSelection).AllocatorInstance.Data[lVar28] = FVar2;
        }
        if ((*(longlong *)(lVar33 + lVar31 * 0x10) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar33 + lVar31 * 0x10) + 0x5a) != '\0') {
          if (((local_170.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a8) &&
              ((FScriptContainerElement *)&local_1a8 <
               local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 4)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_170.ArrayNum;
          if (local_170.ArrayNum == local_170.ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
          }
          local_170.ArrayNum = iVar24 + 1;
          *(uint *)(local_170.AllocatorInstance.Data + (longlong)iVar24 * 4) = local_1a8;
          if ((*(longlong *)(lVar33 + lVar31 * 0x10) == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar28 = *(longlong *)(lVar33 + lVar31 * 0x10);
          iVar3 = *(int *)(lVar28 + 0x10);
          iVar24 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar24 = 0;
          }
          pFVar25 = ::FName::FName(&local_res20,iVar24,*(wchar_t **)(lVar28 + 8),FNAME_Add);
          local_160 = *pFVar25;
          if (((local_180.Data <= &local_160) &&
              (&local_160 < (FName *)(local_180.Data + (longlong)local_178._4_4_ * 8))) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = (int)local_178;
          if ((int)local_178 == local_178._4_4_) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_180,(int *)((longlong)&local_178 + 4));
          }
          local_178 = CONCAT44(local_178._4_4_,iVar24 + 1);
          *(FName *)(local_180.Data + (longlong)iVar24 * 8) = local_160;
        }
        if ((*(longlong *)(lVar33 + lVar31 * 0x10) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar4 = *(longlong **)(lVar33 + lVar31 * 0x10);
        pcVar7 = *(code **)(*plVar4 + 8);
        ::FName::FName(&local_res18,"FDatafloProxyElement");
        cVar22 = (*pcVar7)(plVar4,local_res18);
        if ((cVar22 != '\0') && (lVar33 = *(longlong *)(lVar33 + lVar31 * 0x10), lVar33 != 0)) {
          pFVar29 = (FScriptContainerElement *)(lVar33 + 0x60);
          if ((local_190.AllocatorInstance.Data <= pFVar29) &&
             ((pFVar29 < local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 8 &&
              (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_190.ArrayNum;
          if (local_190.ArrayNum == local_190.ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_190.AllocatorInstance,&local_190.ArrayMax);
          }
          local_190.ArrayNum = iVar24 + 1;
          *(undefined8 *)(local_190.AllocatorInstance.Data + (longlong)iVar24 * 8) = 0;
          TVar6.Reference = *(HHitProxy **)pFVar29;
          *(HHitProxy **)(local_190.AllocatorInstance.Data + (longlong)iVar24 * 8) = TVar6.Reference
          ;
          if (TVar6.Reference != (HHitProxy *)0x0) {
            *(int *)&(TVar6.Reference)->_padding_ = (int)(TVar6.Reference)->_padding_ + 1;
          }
        }
      }
      local_1a8 = local_1a8 + 1;
    } while ((int)local_1a8 < *(int *)((longlong)&this->_padding_ + 4));
    if (bVar20) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnBoneSelectionChanged,(FWriteAccessScope *)&local_d8);
      puVar1 = &(this->OnBoneSelectionChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar20 = false;
      uVar27 = *(int *)&(this->OnBoneSelectionChanged).field_0x10 - 1;
      if (-1 < (int)uVar27) {
        lVar33 = (longlong)(int)uVar27 << 4;
        bVar20 = false;
        do {
          uVar26 = 0;
          if ((int)uVar27 < *(int *)&(this->OnBoneSelectionChanged).field_0x10) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar28 = *(longlong *)&(this->OnBoneSelectionChanged).field_0x8;
          if (((*(int *)(lVar33 + 8 + lVar28) == 0) ||
              (plVar4 = *(longlong **)(lVar33 + lVar28), plVar4 == (longlong *)0x0)) ||
             (cVar22 = (**(code **)(*plVar4 + 0x68))(), cVar22 == '\0')) {
            bVar20 = true;
          }
          lVar33 = lVar33 + -0x10;
          uVar27 = uVar27 - 1;
        } while (-1 < (int)uVar27);
      }
      puVar1 = &(this->OnBoneSelectionChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar20) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnBoneSelectionChanged,false);
      }
      if (local_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
      }
    }
  }
  if (this->bBonesVisible != false) {
    local_138.DefaultBoneColor.field0_0x0._4_8_ = ___xmm_3f8000003f8000003ccccccd00000000;
    local_138._24_8_ = _UNK_152c78628;
    local_138.SelectedBoneColor.field0_0x0._4_8_ = ___xmm_3f59999a3f8000003e4ccccd3f800000;
    local_138._56_8_ = _UNK_152c78618;
    local_c0[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_c0[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_138.AxisConfig.bDraw = false;
    local_138.AxisConfig.Thickness = 0.0;
    local_138.AxisConfig.Length = 0.0;
    local_138.bAddHitProxy = true;
    local_138.bUseMultiColorAsDefaultColor = true;
    local_138.BoneDrawMode = Selected;
    local_138.BoneDrawSize = 1.0;
    local_138.bForceDraw = true;
    local_138.DefaultBoneColor.field0_0x0._s_0.R = 0.0;
    local_138.AffectedBoneColor.field0_0x0._4_8_ = ___xmm_3e4ccccd3f8000003f8000003f800000;
    local_138._40_8_ = _UNK_150925158;
    local_138.ParentOfSelectedBoneColor.field0_0x0._s_0.G = 0.45;
    local_138.ParentOfSelectedBoneColor.field0_0x0._s_0.B = 0.12;
    local_138.ParentOfSelectedBoneColor.field0_0x0._s_0.A = 1.0;
    local_c0[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    SkeletalDebugRendering::DrawBones
              (param_1,(TVector<double> *)&local_c0[0]._s_0,&local_1a0,this->ReferenceSkeleton,
               &local_158,&local_170,&local_148,&local_190,&local_138);
  }
  if ((FName *)local_180.Data != (FName *)0x0) {
    FMemory::Free(local_180.Data);
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  return;
}

// OverrideBoneTransforms @ 14dad7170

void __thiscall
FDataflowDebugDrawSkeletonObject::OverrideBoneTransforms
          (FDataflowDebugDrawSkeletonObject *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  lpCriticalSection = &this->TransformOverridesLockGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = &this->TransformOverrides;
  if (pTVar4 != param_1) {
    iVar2 = (this->TransformOverrides).ArrayMax;
    piVar1 = &(this->TransformOverrides).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    (this->TransformOverrides).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar3,iVar2,&pTVar4->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014dad7222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PopulateDataflowElements @ 14dad7240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowDebugDrawSkeletonObject::PopulateDataflowElements(FDataflowDebugDrawSkeletonObject *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  FReferenceSkeleton *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  FName FVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  FString *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  FName *pFVar19;
  HHitProxy *this_00;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_218 [32];
  bool local_1c8 [8];
  TReferenceControllerBase<1> *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  FName local_18c;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  FName local_148;
  FString local_140;
  double local_130;
  double dStack_128;
  double local_120;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar3 = (ForAnyElementType *)this->_padding_;
  iVar15 = *(int *)&pFVar3[1].Data;
  *(int *)&this->_padding_ = iVar15;
  iVar2 = (this->ReferenceSkeleton->FinalRefBoneInfo).ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  uVar22 = iVar2 + iVar15;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (*piVar1 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar22,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
  }
  local_1c8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->PreviousSelection,local_1c8,*(int *)((longlong)&this->_padding_ + 4));
  uVar22 = 0;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    local_1b0 = 0;
    do {
      lVar21 = local_1b0;
      pFVar4 = this->ReferenceSkeleton;
      uVar20 = 0;
      uVar14 = uVar20;
      if ((int)uVar22 < (pFVar4->FinalRefBoneInfo).ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = *(int *)((pFVar4->FinalRefBoneInfo).AllocatorInstance.Data + lVar21 + 8);
      pTVar16 = FReferenceSkeleton::GetBoneAbsoluteTransform
                          (this->ReferenceSkeleton,&local_118,uVar22);
      local_150 = 1;
      local_180 = (pTVar16->Translation).XY.m128d_f64[0];
      dStack_178 = (pTVar16->Translation).XY.m128d_f64[1];
      local_170 = (pTVar16->Translation).ZW.m128d_f64[0];
      dStack_168 = local_180;
      dStack_160 = dStack_178;
      dStack_158 = local_170;
      local_130 = local_180;
      dStack_128 = dStack_178;
      local_120 = local_170;
      if ((iVar15 != -1) &&
         (uVar20 = iVar15 + (int)this->_padding_, (int)uVar20 < *(int *)(this->_padding_ + 8))) {
        pTVar16 = FReferenceSkeleton::GetBoneAbsoluteTransform
                            (this->ReferenceSkeleton,&local_b8,uVar22);
        plVar6 = (longlong *)this->_padding_;
        dVar28 = (pTVar16->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar16->Translation).XY.m128d_f64[1];
        dVar29 = (pTVar16->Translation).ZW.m128d_f64[0];
        uVar14 = 0;
        if ((int)uVar20 < (int)plVar6[1]) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        local_1a8 = dVar28;
        dStack_1a0 = dVar12;
        local_198 = dVar29;
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar5 = *plVar6;
        if ((*(longlong *)(lVar5 + (longlong)(int)uVar20 * 0x10) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar5 = *(longlong *)(lVar5 + (longlong)(int)uVar20 * 0x10);
        if (*(char *)(lVar5 + 0x50) == '\0') {
          *(double *)(lVar5 + 0x38) = dVar28;
          *(double *)(lVar5 + 0x40) = dVar12;
          *(undefined1 *)(lVar5 + 0x50) = 1;
          *(double *)(lVar5 + 0x20) = dVar28;
          *(double *)(lVar5 + 0x28) = dVar12;
          *(double *)(lVar5 + 0x48) = dVar29;
          *(double *)(lVar5 + 0x30) = dVar29;
        }
        else {
          uVar24 = SUB84(local_1a8,0);
          uVar25 = (undefined4)((ulonglong)local_1a8 >> 0x20);
          dVar29 = *(double *)(lVar5 + 0x20);
          if (dVar29 <= local_1a8) {
            uVar24 = SUB84(dVar29,0);
            uVar25 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          uVar26 = SUB84(local_198,0);
          uVar27 = (undefined4)((ulonglong)local_198 >> 0x20);
          dVar29 = local_1a8;
          if (local_1a8 <= *(double *)(lVar5 + 0x38)) {
            dVar29 = *(double *)(lVar5 + 0x38);
          }
          *(ulonglong *)(lVar5 + 0x20) = CONCAT44(uVar25,uVar24);
          uVar24 = SUB84(dStack_1a0,0);
          uVar25 = (undefined4)((ulonglong)dStack_1a0 >> 0x20);
          dVar28 = *(double *)(lVar5 + 0x28);
          if (dVar28 <= dStack_1a0) {
            uVar24 = SUB84(dVar28,0);
            uVar25 = (undefined4)((ulonglong)dVar28 >> 0x20);
          }
          dVar28 = dStack_1a0;
          if (dStack_1a0 <= *(double *)(lVar5 + 0x40)) {
            dVar28 = *(double *)(lVar5 + 0x40);
          }
          *(double *)(lVar5 + 0x38) = dVar29;
          *(ulonglong *)(lVar5 + 0x28) = CONCAT44(uVar25,uVar24);
          dVar29 = *(double *)(lVar5 + 0x30);
          uVar24 = uVar26;
          uVar25 = uVar27;
          if (dVar29 <= local_198) {
            uVar24 = SUB84(dVar29,0);
            uVar25 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          dVar29 = *(double *)(lVar5 + 0x48);
          if (local_198 <= dVar29) {
            uVar26 = SUB84(dVar29,0);
            uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          *(double *)(lVar5 + 0x40) = dVar28;
          *(ulonglong *)(lVar5 + 0x30) = CONCAT44(uVar25,uVar24);
          *(ulonglong *)(lVar5 + 0x48) = CONCAT44(uVar27,uVar26);
        }
      }
      plVar6 = (longlong *)this->_padding_;
      if ((int)uVar20 < (int)plVar6[1]) {
        if (((int)uVar20 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar4 = this->ReferenceSkeleton;
        uVar7 = *(undefined8 *)(*plVar6 + (longlong)(int)uVar20 * 0x10);
        uVar14 = 0;
        if ((int)uVar22 < (pFVar4->FinalRefBoneInfo).ArrayNum) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_18c = *(FName *)((pFVar4->FinalRefBoneInfo).AllocatorInstance.Data + lVar21);
        pFVar17 = ::FName::ToString(&local_18c,&local_140);
        pTVar18 = ::operator_new(0x78);
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
          pTVar23 = (TReferenceControllerBase<1> *)&DAT_00000010;
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar18->SharedReferenceCount = (atomic<int>)0x1;
          pTVar18->WeakReferenceCount = (atomic<int>)0x1;
          pTVar18->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFDataflowProxyElement___00_SharedPointerInternals__6B_
          ;
          pTVar18[1]._padding_ = (longlong)&___7FDataflowBaseElement__6B_;
          ::FString::FString((FString *)&pTVar18[1].SharedReferenceCount,pFVar17);
          pTVar18[2].SharedReferenceCount = (atomic<int>)(int)uVar7;
          pTVar18[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
          pTVar23 = pTVar18 + 1;
          *(undefined2 *)&pTVar18[6].SharedReferenceCount = 0x101;
          pTVar18[6].SharedReferenceCount.field_0x2 = 0;
          pTVar18[1]._padding_ = (longlong)&___7FDataflowProxyElement__6B_;
          pTVar18[3]._padding_ = (longlong)local_180;
          *(double *)&pTVar18[3].SharedReferenceCount = dStack_178;
          pTVar18[4]._padding_ = (longlong)local_170;
          *(double *)&pTVar18[4].SharedReferenceCount = dStack_168;
          pTVar18[5]._padding_ = (longlong)dStack_160;
          *(double *)&pTVar18[5].SharedReferenceCount = dStack_158;
          pTVar18[6]._padding_ = CONCAT71(uStack_14f,local_150);
          pTVar18[7]._padding_ = 0;
          if ((pTVar23 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if ((pTVar23 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar2 = (int)pTVar23[1]._padding_;
        iVar15 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar15 = 0;
        }
        pFVar19 = ::FName::FName(&local_148,iVar15,*(wchar_t **)&pTVar23->SharedReferenceCount,
                                 FNAME_Add);
        lVar21 = this->_padding_;
        FVar8 = *pFVar19;
        this_00 = ::operator_new(0x30);
        if (this_00 == (HHitProxy *)0x0) {
          this_00 = (HHitProxy *)0x0;
        }
        else {
          HHitProxy::HHitProxy(this_00,HPP_Foreground);
          *(FName *)((longlong)&this_00[1]._padding_ + 4) = FVar8;
          this_00->_padding_ = (longlong)&___7HDataflowElementHitProxy__6B_;
          *(uint *)&this_00[1]._padding_ = (int)lVar21 + uVar22;
          *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
        }
        if ((pTVar23 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar9 = (undefined8 *)pTVar23[6]._padding_;
        pTVar23[6]._padding_ = (longlong)this_00;
        if (puVar9 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar9 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
        pFVar3 = (ForAnyElementType *)this->_padding_;
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1c0 = pTVar23;
        local_1b8 = pTVar18;
        if (((pFVar3->Data <= (FScriptContainerElement *)&local_1c0) &&
            ((FScriptContainerElement *)&local_1c0 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar15 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar15 + 1;
        pFVar10 = pFVar3->Data;
        *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar15 * 0x10) = local_1c0;
        *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)iVar15 * 0x10 + 8) = local_1b8;
        local_1b8 = (TReferenceControllerBase<1> *)0x0;
        local_1c0 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        lVar21 = local_1b0;
      }
      local_1b0 = lVar21 + 0xc;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < *(int *)((longlong)&this->_padding_ + 4));
  }
  return;
}

