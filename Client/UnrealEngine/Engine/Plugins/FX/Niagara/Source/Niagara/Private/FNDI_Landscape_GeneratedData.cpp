// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// ~FNDI_Landscape_GeneratedData @ 14916b0f0

void __thiscall
FNDI_Landscape_GeneratedData::~FNDI_Landscape_GeneratedData(FNDI_Landscape_GeneratedData *this)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNDI_Landscape_SharedResource *this_00;
  code *pcVar3;
  bool bVar4;
  BOOLEAN BVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  SRWLock = &this->LandscapeDataGuard;
  this->_padding_ = (longlong)&___7FNDI_Landscape_GeneratedData__6B_;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = (this->LandscapeData).ArrayNum;
  pFVar6 = (this->LandscapeData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LandscapeData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FNDI_Landscape_SharedResource,1>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    this_00 = *(FNDI_Landscape_SharedResource **)pFVar6;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNDI_Landscape_SharedResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNDI_Landscape_SharedResource::Release(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar6 = pFVar6 + 0x10;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>
            ((TSharedPtr<FNDI_Landscape_SharedResource,1> *)
             (this->ReleasedLandscapeData).AllocatorInstance.Data,
             (this->ReleasedLandscapeData).ArrayNum);
  pFVar6 = (this->ReleasedLandscapeData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>
            ((TSharedPtr<FNDI_Landscape_SharedResource,1> *)
             (this->LandscapeData).AllocatorInstance.Data,(this->LandscapeData).ArrayNum);
  pFVar6 = (this->LandscapeData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014916b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// operator() @ 14916df90

bool __thiscall
`FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_2>::operator()
          (void *this,TIntPoint<int> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  if ((-1 < NiagaraDataInterfaceLandscape::GMaxRegionCaptureCount) &&
     (NiagaraDataInterfaceLandscape::GMaxRegionCaptureCount <= *(int *)(*(longlong *)this + 0x20)))
  {
    return false;
  }
  lVar1 = *(longlong *)this;
  if ((*(TIntPoint<int> **)(lVar1 + 0x18) <= param_1) &&
     (param_1 < *(TIntPoint<int> **)(lVar1 + 0x18) + *(int *)(lVar1 + 0x24))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x20);
  if (iVar5 == *(int *)(lVar1 + 0x24)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar5 + 1;
  ((TIntPoint<int>_u_0 *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar5 * 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)param_1->field0_0x0;
  lVar1 = *(longlong *)this;
  iVar5 = (param_1->field0_0x0)._s_0.X;
  iVar6 = (param_1->field0_0x0)._s_0.Y;
  if (*(int *)(lVar1 + 0x28) < iVar5) {
    iVar5 = *(int *)(lVar1 + 0x28);
  }
  if (*(int *)(lVar1 + 0x2c) < iVar6) {
    iVar6 = *(int *)(lVar1 + 0x2c);
  }
  *(ulonglong *)(lVar1 + 0x28) = CONCAT44(iVar6,iVar5);
  lVar1 = *(longlong *)this;
  iVar5 = (param_1->field0_0x0)._s_0.X;
  iVar6 = (param_1->field0_0x0)._s_0.Y;
  if (iVar5 < *(int *)(lVar1 + 0x30)) {
    iVar5 = *(int *)(lVar1 + 0x30);
  }
  if (iVar6 < *(int *)(lVar1 + 0x34)) {
    iVar6 = *(int *)(lVar1 + 0x34);
  }
  *(ulonglong *)(lVar1 + 0x30) = CONCAT44(iVar6,iVar5);
  return true;
}

// operator() @ 14916e820

void __thiscall
`FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_3>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TIntPoint<int>_u_0 *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  lVar4 = **(longlong **)this;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0xb0);
  iVar10 = *(int *)(lVar4 + 200);
  iVar9 = 0;
  if (iVar10 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0xc0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0xc0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14916e8cd;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14916e8cd:
  uVar12 = *(uint *)(lVar4 + 200);
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(lVar4 + 0xa8) - *(int *)(lVar4 + 0xd4));
  TStack_60.Array = pTVar1;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)(lVar4 + 200);
  if (uVar12 != uVar8) {
    pTVar14 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0xc0) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0xc0);
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14916e9e0;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14916e9e0:
  while( true ) {
    if (*(int *)(lVar4 + 0xa8) - *(int *)(lVar4 + 0xd4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar1)) {
      return;
    }
    pTVar2 = (TIntPoint<int>_u_0 *)
             (*(longlong *)(lVar4 + 0xa0) + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((-1 < NiagaraDataInterfaceLandscape::GMaxRegionSearchCount) &&
       (NiagaraDataInterfaceLandscape::GMaxRegionSearchCount <= **(int **)((longlong)this + 8))) {
      return;
    }
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    piVar5 = *(int **)((longlong)this + 0x10);
    iVar10 = (*(TIntPoint<int>_u_0 *)&pTVar2->_s_0).X;
    if (((((*piVar5 <= iVar10) && (iVar10 < piVar5[2])) &&
         (iVar10 = (*(TIntPoint<int>_u_0 *)&pTVar2->_s_0).Y, piVar5[1] <= iVar10)) &&
        ((iVar10 < piVar5[3] && (pTVar2[1] != (TIntPoint<int>_u_0)0x0)))) &&
       (bVar7 = __l2::<lambda_2>::operator()
                          (*(void **)((longlong)this + 0x18),(TIntPoint<int> *)&pTVar2->_s_0),
       !bVar7)) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

// operator() @ 14916eab0

void __thiscall
`FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_4>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TIntPoint<int> TVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int iStack_34;
  
  piVar9 = *(int **)this;
  iVar10 = piVar9[1];
  if (iVar10 < piVar9[3]) {
    do {
      iVar11 = *piVar9;
      if (iVar11 < piVar9[2]) {
        do {
          if ((-1 < NiagaraDataInterfaceLandscape::GMaxRegionSearchCount) &&
             (NiagaraDataInterfaceLandscape::GMaxRegionSearchCount <= **(int **)((longlong)this + 8)
             )) {
            return;
          }
          **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
          TVar4.field0_0x0._s_0.Y = iVar10;
          TVar4.field0_0x0._s_0.X = iVar11;
          local_38 = iVar11;
          iStack_34 = iVar10;
          pTVar8 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                           *)(**(longlong **)((longlong)this + 0x10) + 0xa0),TVar4);
          if ((pTVar8 != (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>
                          *)0x0) && (*(longlong *)&pTVar8->field_0x8 != 0)) {
            plVar1 = *(longlong **)((longlong)this + 0x18);
            if ((-1 < NiagaraDataInterfaceLandscape::GMaxRegionCaptureCount) &&
               (NiagaraDataInterfaceLandscape::GMaxRegionCaptureCount <= *(int *)(*plVar1 + 0x20)))
            {
              **(undefined1 **)((longlong)this + 0x20) = 1;
              return;
            }
            lVar2 = *plVar1;
            if (((*(int **)(lVar2 + 0x18) <= &local_38) &&
                (&local_38 < *(int **)(lVar2 + 0x18) + (longlong)*(int *)(lVar2 + 0x24) * 2)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = *(int *)(lVar2 + 0x20);
            if (iVar6 == *(int *)(lVar2 + 0x24)) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)(lVar2 + 0x18),(int *)(lVar2 + 0x24));
            }
            *(int *)(lVar2 + 0x20) = iVar6 + 1;
            *(ulonglong *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar6 * 8) =
                 CONCAT44(iStack_34,local_38);
            lVar2 = *plVar1;
            iVar6 = local_38;
            if (*(int *)(lVar2 + 0x28) < local_38) {
              iVar6 = *(int *)(lVar2 + 0x28);
            }
            iVar7 = iStack_34;
            if (*(int *)(lVar2 + 0x2c) < iStack_34) {
              iVar7 = *(int *)(lVar2 + 0x2c);
            }
            *(ulonglong *)(lVar2 + 0x28) = CONCAT44(iVar7,iVar6);
            lVar2 = *plVar1;
            if (local_38 < *(int *)(lVar2 + 0x30)) {
              local_38 = *(int *)(lVar2 + 0x30);
            }
            if (iStack_34 < *(int *)(lVar2 + 0x34)) {
              iStack_34 = *(int *)(lVar2 + 0x34);
            }
            *(ulonglong *)(lVar2 + 0x30) = CONCAT44(iStack_34,local_38);
          }
          piVar9 = *(int **)this;
          iVar11 = iVar11 + 1;
        } while (iVar11 < piVar9[2]);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < piVar9[3]);
  }
  return;
}

// GetLandscapeData @ 14917e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> * __thiscall
FNDI_Landscape_GeneratedData::GetLandscapeData
          (FNDI_Landscape_GeneratedData *this,
          FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
          *__return_storage_ptr__,UNiagaraDataInterfaceLandscape *param_1,
          FNiagaraSystemInstance *param_2,FNDILandscapeData_GameThread *param_3,
          FNDI_SharedResourceUsage param_4,bool param_5)

{
  int *piVar1;
  atomic<int> *paVar2;
  FWeakObjectPtr *this_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNDI_Landscape_SharedResource *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  FNiagaraSystemInstance *pFVar13;
  FNDI_Landscape_GeneratedData *pFVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *pFVar19;
  UObject *pUVar20;
  TMatrix<double> *pTVar21;
  TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *pTVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined4 uVar40;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  uint uVar72;
  uint uVar73;
  undefined1 auStackY_438 [32];
  char local_3e8;
  undefined1 local_3e7 [3];
  uint local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  FResourceKey local_3d8;
  TTypeCompatibleBytes<FNDI_Landscape_SharedResource> *local_398;
  TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *local_390;
  FNiagaraSystemInstance *local_388;
  longlong local_380;
  double local_378 [2];
  UObject *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  FResourceKey *local_350;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  FNiagaraSystemInstance *local_338;
  FNDI_Landscape_GeneratedData *local_330;
  double local_328;
  UObject *local_320;
  undefined1 local_318 [16];
  FNiagaraSystemInstance *local_308;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *local_2f8;
  double local_2e8;
  double dStack_2e0;
  longlong *local_2d8;
  undefined4 *local_2d0;
  int *local_2c8;
  FResourceKey **local_2c0;
  char *local_2b8;
  int *local_2b0;
  undefined4 *local_2a8;
  longlong *local_2a0;
  FResourceKey **local_298;
  char *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  undefined1 local_248 [16];
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  TVector<double>_u_0 local_218;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined1 local_188 [16];
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_388 = param_2;
  local_330 = this;
  local_2f8 = __return_storage_ptr__;
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                          ,0x446,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *)
              (*pcVar6)();
    return pFVar19;
  }
  pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_3);
  if ((pUVar20 == (UObject *)0x0) ||
     (local_380 = (**(code **)(*(longlong *)&pUVar20[0x11].field_0x18 + 0x18))
                            (&pUVar20[0x11].field_0x18), local_380 == 0)) {
    (__return_storage_ptr__->Usage).RequiresCpuAccess = false;
    (__return_storage_ptr__->Usage).RequiresGpuAccess = false;
    (__return_storage_ptr__->Resource).Object = (FNDI_Landscape_SharedResource *)0x0;
    (__return_storage_ptr__->Resource).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_3e4 = *(int *)(local_380 + 0xa8) - *(int *)(local_380 + 0xd4);
    dVar7 = (double)(param_2->LWCTile).field0_0x0._s_0.X * __real_4140000000000000;
    dVar66 = (double)(param_2->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000;
    dVar39 = (double)(param_2->LWCTile).field0_0x0._s_0.Z * __real_4140000000000000;
    pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_2->WorldTransform,&local_178);
    UE::Math::TBox<double>::TransformBy
              (&param_2->LocalBounds,(TBox<double> *)&local_218._s_0,pTVar21);
    local_328 = local_200 + dVar7;
    dVar7 = local_218._s_0.X + dVar7;
    dVar28 = local_218._s_0.Y + dVar66;
    dVar69 = local_218._s_0.Z + dVar39;
    local_368 = (UObject *)(dStack_1f8 + dVar66);
    local_378[0] = local_1f0 + dVar39;
    (**(code **)(*(longlong *)&pUVar20[0x11].field_0x18 + 0x20))
              (&pUVar20[0x11].field_0x18,&local_1d8);
    dStack_270 = local_1c8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dStack_2e0 = dStack_1c0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar61 = SUB84(dStack_2e0,0);
    uVar68 = (undefined4)((ulonglong)dStack_2e0 >> 0x20);
    local_288 = local_1d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_280 = dStack_1d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar29._8_4_ = uVar61;
    auVar29._0_8_ = dStack_270;
    auVar29._12_4_ = uVar68;
    local_2e8 = auVar29._8_8_;
    auVar46._8_4_ = SUB84(dStack_280,0);
    auVar46._0_8_ = local_288;
    uVar40 = (undefined4)((ulonglong)dStack_280 >> 0x20);
    auVar46._12_4_ = uVar40;
    auVar67._8_4_ = SUB84(dStack_280,0);
    auVar67._0_8_ = local_288;
    auVar67._12_4_ = uVar40;
    local_278 = auVar46._8_8_;
    auVar42._8_4_ = uVar61;
    auVar42._0_8_ = dStack_270;
    auVar42._12_4_ = uVar68;
    local_318 = blendpd(auVar67,auVar42,2);
    auVar30._8_4_ = SUB84(dStack_270,0);
    auVar30._0_8_ = local_278;
    auVar30._12_4_ = (int)((ulonglong)dStack_270 >> 0x20);
    dVar70 = dVar69 - local_1a8;
    local_218._8_4_ = SUB84(dVar28,0);
    local_218._s_0.X = dVar7;
    local_218._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    dVar7 = dVar7 - local_1b8;
    dVar28 = dVar28 - dStack_1b0;
    uVar40 = (undefined4)((ulonglong)dVar28 >> 0x20);
    auVar63._8_4_ = SUB84(dVar28,0);
    auVar63._0_8_ = dVar7;
    auVar63._12_4_ = uVar40;
    local_268._8_4_ = uVar61;
    local_268._0_8_ = dStack_270;
    local_268._12_4_ = uVar68;
    auVar41._8_4_ = SUB84(dVar28,0);
    auVar41._0_8_ = dVar7;
    auVar41._12_4_ = uVar40;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = dVar70;
    auVar42 = blendpd(auVar41,auVar71,2);
    auVar64._0_8_ = auVar63._8_8_ * local_288 - local_278 * dVar7;
    auVar64._8_8_ = dVar70 * dStack_280 - auVar30._8_8_ * dVar28;
    dVar27 = local_318._0_8_;
    auVar12._4_4_ = uStack_194;
    auVar12._0_4_ = local_198;
    auVar12._8_4_ = uStack_190;
    auVar12._12_4_ = uStack_18c;
    auVar71 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
    dVar38 = local_318._8_8_;
    auVar43._0_8_ = auVar42._0_8_ * dStack_270 - dVar27 * dVar70;
    auVar43._8_8_ = auVar42._8_8_ * dStack_2e0 - dVar38 * 0.0;
    auVar42 = blendpd(auVar64,auVar43,2);
    auVar65._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar65._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    dVar39 = auVar64._8_8_ + auVar64._8_8_;
    dVar66 = auVar43._0_8_ + auVar43._0_8_;
    uVar40 = SUB84(dVar66,0);
    uVar61 = (undefined4)((ulonglong)dVar66 >> 0x20);
    auVar59._8_4_ = uVar40;
    auVar59._0_8_ = dVar39;
    auVar59._12_4_ = uVar61;
    auVar31._8_4_ = uVar40;
    auVar31._0_8_ = dVar39;
    auVar31._12_4_ = uVar61;
    auVar53._8_4_ = uVar40;
    auVar53._0_8_ = dVar39;
    auVar53._12_4_ = uVar61;
    auVar42 = blendpd(auVar53,auVar65,2);
    auVar10._4_8_ = dStack_280;
    auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar49._0_8_ = auVar10._0_8_ << 0x20;
    auVar49._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar49._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar60._0_8_ = auVar59._8_8_ * local_288 - dVar39 * local_278;
    auVar60._8_8_ = auVar65._0_8_ * dStack_280 - auVar31._8_8_ * dStack_270;
    auVar32._8_4_ = SUB84(auVar65._8_8_,0);
    auVar32._0_8_ = auVar65._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    auVar54._0_8_ = auVar42._0_8_ * dStack_270 - auVar65._0_8_ * dVar27;
    auVar54._8_8_ = auVar42._8_8_ * dStack_2e0 - auVar32._8_8_ * dVar38;
    auVar50._8_8_ = auVar49._8_8_;
    auVar50._0_8_ = local_188._0_8_;
    lVar25 = -(ulonglong)
              ((double)CONCAT44(local_188._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_188._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50);
    uVar72 = ~(uint)lVar25 & auVar42._0_4_;
    uVar73 = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar42._4_4_;
    auVar33._0_8_ =
         (double)CONCAT44(uStack_194 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_198 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar33._8_4_ = uStack_190 & _UNK_15061cc88;
    auVar33._12_4_ = uStack_18c & _UNK_15061cc8c;
    lVar25 = -(ulonglong)(auVar33._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar26 = -(ulonglong)(auVar33._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_258 = ~(uint)lVar25 & auVar71._0_4_;
    uStack_254 = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar71._4_4_;
    uStack_250 = ~(uint)lVar26 & auVar71._8_4_;
    uStack_24c = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar71._12_4_;
    local_1f0 = local_378[0];
    auVar34._8_4_ = SUB84(auVar60._8_8_,0);
    auVar34._0_8_ = auVar60._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar42 = blendpd(auVar60,auVar54,2);
    local_238 = (auVar65._0_8_ * local_2e8 + dVar70 + auVar42._0_8_) *
                (double)CONCAT44(uVar73,uVar72);
    local_378[0] = local_378[0] - local_1a8;
    local_200 = local_328;
    dStack_1f8 = (double)local_368;
    local_1b8 = local_328 - local_1b8;
    dStack_1b0 = (double)local_368 - dStack_1b0;
    uVar40 = SUB84(dStack_1b0,0);
    auVar55._8_4_ = uVar40;
    auVar55._0_8_ = local_1b8;
    uVar61 = (undefined4)((ulonglong)dStack_1b0 >> 0x20);
    auVar55._12_4_ = uVar61;
    auVar35._8_4_ = uVar40;
    auVar35._0_8_ = local_1b8;
    auVar35._12_4_ = uVar61;
    auVar44._8_4_ = uVar40;
    auVar44._0_8_ = local_1b8;
    auVar44._12_4_ = uVar61;
    uVar8 = (double)CONCAT44(uStack_254,local_258) * (dVar39 * local_2e8 + dVar7 + auVar34._8_8_);
    uVar62 = (double)CONCAT44(uStack_24c,uStack_250) *
             (dVar66 * dStack_2e0 + dVar28 + auVar54._0_8_);
    local_248._8_4_ = (int)uVar62;
    local_248._0_8_ = uVar8;
    local_248._12_4_ = (int)((ulonglong)uVar62 >> 0x20);
    auVar56._0_8_ = auVar55._8_8_ * local_288 - local_1b8 * local_278;
    auVar56._8_8_ = local_378[0] * dStack_280 - auVar35._8_8_ * dStack_270;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_378[0];
    auVar42 = blendpd(auVar44,auVar9,2);
    auVar45._0_8_ = auVar42._0_8_ * dStack_270 - local_378[0] * dVar27;
    auVar45._8_8_ = auVar42._8_8_ * (double)local_268._8_8_ - dVar38 * 0.0;
    auVar36._8_4_ = SUB84(auVar56._8_8_,0);
    auVar36._0_8_ = auVar56._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    dVar28 = auVar36._8_8_ + auVar36._8_8_;
    dVar39 = auVar45._0_8_ + auVar45._0_8_;
    auVar42 = blendpd(auVar56,auVar45,2);
    auVar51._8_4_ = SUB84(dVar39,0);
    auVar51._0_8_ = dVar28;
    uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
    auVar51._12_4_ = uVar40;
    auVar57._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar57._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    lVar25 = -(ulonglong)
              ((double)CONCAT44(uStack_194 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_198 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uStack_18c & _UNK_15061cc8c,uStack_190 & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar52._0_8_ = auVar51._8_8_ * local_288 - local_278 * dVar28;
    auVar52._8_8_ = auVar57._0_8_ * dStack_280 - dStack_270 * dVar39;
    auVar47._8_4_ = SUB84(dVar39,0);
    auVar47._0_8_ = dVar28;
    auVar47._12_4_ = uVar40;
    auVar42 = blendpd(auVar47,auVar57,2);
    auVar37._8_4_ = SUB84(auVar52._8_8_,0);
    auVar37._0_8_ = auVar52._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    auVar48._0_8_ = auVar42._0_8_ * dStack_270 - dVar27 * auVar57._0_8_;
    auVar48._8_8_ = auVar42._8_8_ * (double)local_268._8_8_ - dVar38 * auVar57._8_8_;
    auVar42 = blendpd(auVar52,auVar48,2);
    dVar66 = __real_3ff0000000000000 / (double)*(int *)&pUVar20[0x2f].field_0x18;
    local_220 = (local_2e8 * auVar57._0_8_ + local_378[0] + auVar42._0_8_) *
                (double)CONCAT44(uVar73,uVar72);
    dVar28 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar71._4_4_,
                              ~(uint)lVar25 & auVar71._0_4_) *
             (local_2e8 * dVar28 + local_1b8 + auVar37._8_8_);
    dVar39 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar71._12_4_,
                              ~(uint)lVar26 & auVar71._8_4_) *
             (dStack_2e0 * dVar39 + dStack_1b0 + auVar48._0_8_);
    uVar58 = uVar8;
    if (dVar28 <= (double)uVar8) {
      uVar58 = dVar28;
    }
    if ((double)uVar8 <= dVar28) {
      uVar8 = dVar28;
    }
    uVar11 = uVar62;
    if ((double)uVar62 <= dVar39) {
      uVar11 = dVar39;
    }
    if ((double)uVar58 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    if (dVar39 <= (double)uVar62) {
      uVar62 = dVar39;
    }
    if ((double)uVar8 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    local_230._8_4_ = SUB84(dVar39,0);
    local_230._0_8_ = dVar28;
    local_230._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    if ((double)uVar11 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar62 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar62 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    dVar28 = (double)uVar58 * dVar66;
    if (__real_41dfffffffc00000 <= (double)uVar58 * dVar66) {
      dVar28 = __real_41dfffffffc00000;
    }
    dVar39 = (double)uVar8 * dVar66;
    if (__real_41dfffffffc00000 <= (double)uVar8 * dVar66) {
      dVar39 = __real_41dfffffffc00000;
    }
    dVar7 = (double)uVar11 * dVar66;
    if (__real_41dfffffffc00000 <= (double)uVar11 * dVar66) {
      dVar7 = __real_41dfffffffc00000;
    }
    dVar27 = (double)uVar62 * dVar66;
    if (__real_41dfffffffc00000 <= (double)uVar62 * dVar66) {
      dVar27 = __real_41dfffffffc00000;
    }
    local_340 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar39 + dVar39)) >> 1);
    local_33c = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar7 + dVar7)) >> 1);
    local_3d8.Source.WeakPtr.ObjectIndex = 0;
    local_3d8.Source.WeakPtr.ObjectSerialNumber = 0;
    local_378[0] = 0.0;
    local_348 = (int)((longlong)ROUND((dVar28 + dVar28) - __real_3fe0000000000000) >> 1);
    local_344 = (int)((longlong)ROUND((dVar27 + dVar27) - __real_3fe0000000000000) >> 1);
    uVar72 = local_3e4;
    if (local_340 - local_348 < (int)local_3e4) {
      uVar72 = local_340 - local_348;
    }
    uVar73 = local_3e4;
    if (local_33c - local_344 < (int)local_3e4) {
      uVar73 = local_33c - local_344;
    }
    uVar16 = 0;
    if (0 < (int)uVar73) {
      uVar16 = uVar73;
    }
    uVar73 = 0;
    if (0 < (int)uVar72) {
      uVar73 = uVar72;
    }
    local_3dc = (uint)((longlong)(int)uVar16 * (longlong)(int)uVar73);
    if (0x7fffffff < (longlong)(int)uVar16 * (longlong)(int)uVar73) {
      local_3dc = 0x7fffffff;
    }
    uVar72 = local_3e4;
    if ((int)local_3dc < (int)local_3e4) {
      uVar72 = local_3dc;
    }
    local_218._s_0.Z = dVar69;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_3d8,(FObjectPtr)local_378);
    local_3d8.CapturedRegions.ArrayNum = 0;
    local_3d8.CapturedRegions.ArrayMax = 0;
    local_3d8.MinCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    local_3d8.PhysicalMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.PhysicalMaterials.ArrayNum = 0;
    local_3d8.PhysicalMaterials.ArrayMax = 0;
    local_3d8.CapturedRegions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.MaxCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    local_3d8.IncludesCachedHeight = false;
    local_3d8.IncludesCachedPhysMat = false;
    local_368 = pUVar20;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar20);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_3d8,(FObjectPtr)&local_368);
    if ((int)uVar72 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar72);
    }
    if (local_3d8.CapturedRegions.ArrayMax < (int)uVar72) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar72,&local_3d8.CapturedRegions.AllocatorInstance,
                 local_3d8.CapturedRegions.ArrayNum,&local_3d8.CapturedRegions.ArrayMax);
    }
    uVar73 = (param_1->PhysicalMaterials).ArrayNum;
    local_360 = 0x7fffffff;
    uStack_35c = 0x7fffffff;
    local_3d8.MinCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x7fffffff7fffffff;
    local_358 = 0x80000000;
    uStack_354 = 0x80000000;
    local_3d8.MaxCaptureRegion.field0_0x0 = (TIntPoint<int>_u_0)0x8000000080000000;
    local_3d8.IncludesCachedHeight = param_3->RequiresCollisionCacheGpu;
    local_3d8.IncludesCachedPhysMat = param_3->RequiresPhysMatCacheGpu;
    if ((int)uVar73 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar73);
    }
    if (local_3d8.PhysicalMaterials.ArrayMax < (int)uVar73) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar73,&local_3d8.PhysicalMaterials.AllocatorInstance,
                 local_3d8.PhysicalMaterials.ArrayNum,&local_3d8.PhysicalMaterials.ArrayMax);
    }
    pFVar24 = (param_1->PhysicalMaterials).AllocatorInstance.Data;
    iVar18 = (param_1->PhysicalMaterials).ArrayNum;
    pFVar23 = pFVar24 + (longlong)iVar18 * 8;
    while( true ) {
      if ((param_1->PhysicalMaterials).ArrayNum != iVar18) {
        local_3e7[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPhysicalMaterial>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3e7);
      }
      __return_storage_ptr__ = local_2f8;
      pFVar13 = local_388;
      if (pFVar24 == pFVar23) break;
      pUVar20 = *(UObject **)pFVar24;
      iVar17 = local_3d8.PhysicalMaterials.ArrayNum;
      if (local_3d8.PhysicalMaterials.ArrayNum == local_3d8.PhysicalMaterials.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_3d8.PhysicalMaterials.AllocatorInstance,
                            &local_3d8.PhysicalMaterials.ArrayMax);
      }
      local_3d8.PhysicalMaterials.ArrayNum = iVar17 + 1;
      this_00 = (FWeakObjectPtr *)
                (local_3d8.PhysicalMaterials.AllocatorInstance.Data + (longlong)iVar17 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      local_320 = pUVar20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_320);
      pFVar24 = pFVar24 + 8;
    }
    if ((-1 < NiagaraDataInterfaceLandscape::GMaxRegionSearchCount) &&
       (NiagaraDataInterfaceLandscape::GMaxRegionSearchCount < (int)uVar72)) {
      local_308 = local_388;
      local_318._8_8_ = &local_3e4;
      local_318._0_8_ = &local_3dc;
      `FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_1>::operator()(local_318);
    }
    local_350 = &local_3d8;
    local_3e8 = '\0';
    local_2d8 = &local_380;
    local_3e0 = 0;
    local_2d0 = &local_3e0;
    local_2c8 = &local_348;
    local_2c0 = &local_350;
    local_2b8 = &local_3e8;
    local_2b0 = &local_348;
    local_2a8 = &local_3e0;
    local_2a0 = &local_380;
    local_298 = &local_350;
    local_290 = &local_3e8;
    if ((int)local_3e4 < (int)local_3dc) {
      `FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_3>::operator()(&local_2d8);
    }
    else {
      `FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_4>::operator()(&local_2b0);
    }
    if (local_3e8 != '\0') {
      local_338 = pFVar13;
      `FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_5>::operator()(&local_338);
    }
    pFVar14 = local_330;
    if (local_3d8.CapturedRegions.ArrayNum == 0) {
      (__return_storage_ptr__->Usage).RequiresCpuAccess = false;
      (__return_storage_ptr__->Usage).RequiresGpuAccess = false;
      (__return_storage_ptr__->Resource).Object = (FNDI_Landscape_SharedResource *)0x0;
      (__return_storage_ptr__->Resource).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)&local_330->LandscapeDataGuard);
      pFVar23 = (pFVar14->LandscapeData).AllocatorInstance.Data;
      pFVar24 = pFVar23 + (longlong)(pFVar14->LandscapeData).ArrayNum * 0x10;
      for (; pFVar23 != pFVar24; pFVar23 = pFVar23 + 0x10) {
        if ((*(longlong *)pFVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                     *)(*pcVar6)();
          return pFVar19;
        }
        bVar15 = FNDI_Landscape_SharedResource::CanRepresent
                           (*(FNDI_Landscape_SharedResource **)pFVar23,&local_3d8);
        if (bVar15) {
          __return_storage_ptr__->Usage = param_4;
          (__return_storage_ptr__->Resource).Object = *(FNDI_Landscape_SharedResource **)pFVar23;
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
          (__return_storage_ptr__->Resource).SharedReferenceCount.ReferenceController = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar5 = (__return_storage_ptr__->Resource).Object;
          if (pFVar5 != (FNDI_Landscape_SharedResource *)0x0) {
            if (((__return_storage_ptr__->Usage).RequiresCpuAccess != false) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Usage.RequiresCpuAccess == false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                                    ,0x36d,L""), bVar15)) {
              pcVar6 = (code *)swi(3);
              pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                         *)(*pcVar6)();
              return pFVar19;
            }
            if ((__return_storage_ptr__->Usage).RequiresGpuAccess != false) {
              LOCK();
              paVar2 = &pFVar5->ShaderPhysicsDataUserCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + 1);
              UNLOCK();
              if (((aVar3 == (atomic<int>)0x0) && (pFVar5->NextState = Initialized, param_5)) &&
                 (pFVar5->CurrentState != Initialized)) {
                FNDI_Landscape_SharedResource::Initialize(pFVar5);
                pFVar5->CurrentState = Initialized;
              }
            }
          }
          ReleaseSRWLockShared((PSRWLOCK)&pFVar14->LandscapeDataGuard);
          goto LAB_14917f3e2;
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&pFVar14->LandscapeDataGuard);
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar14->LandscapeDataGuard);
      pTVar22 = SharedPointerInternals::
                NewIntrusiveReferenceController<1,FNDI_Landscape_SharedResource,FNDI_Landscape_SharedResource::FResourceKey_&>
                          (&local_3d8);
      local_398 = &pTVar22->ObjectStorage;
      if ((local_398 == (TTypeCompatibleBytes<FNDI_Landscape_SharedResource> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                   *)(*pcVar6)();
        return pFVar19;
      }
      if (pTVar22 != (TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *)0x0) {
        LOCK();
        *(int *)&pTVar22->_padding_ = (int)pTVar22->_padding_ + 1;
        UNLOCK();
      }
      pFVar23 = (pFVar14->LandscapeData).AllocatorInstance.Data;
      local_390 = pTVar22;
      if (((pFVar23 <= (FScriptContainerElement *)&local_398) &&
          ((FScriptContainerElement *)&local_398 <
           pFVar23 + (longlong)(pFVar14->LandscapeData).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                   *)(*pcVar6)();
        return pFVar19;
      }
      iVar18 = (pFVar14->LandscapeData).ArrayNum;
      piVar1 = &(pFVar14->LandscapeData).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar14->LandscapeData).AllocatorInstance,piVar1);
      }
      lVar25 = (longlong)iVar18;
      pFVar23 = (pFVar14->LandscapeData).AllocatorInstance.Data;
      (pFVar14->LandscapeData).ArrayNum = iVar18 + 1;
      *(TTypeCompatibleBytes<FNDI_Landscape_SharedResource> **)(pFVar23 + lVar25 * 0x10) = local_398
      ;
      *(TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> **)
       (pFVar23 + lVar25 * 0x10 + 8) = local_390;
      __return_storage_ptr__->Usage = param_4;
      local_390 = (TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *)0x0;
      local_398 = (TTypeCompatibleBytes<FNDI_Landscape_SharedResource> *)0x0;
      (__return_storage_ptr__->Resource).Object =
           *(FNDI_Landscape_SharedResource **)(pFVar23 + lVar25 * 0x10);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar23 + lVar25 * 0x10 + 8);
      (__return_storage_ptr__->Resource).SharedReferenceCount.ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = (__return_storage_ptr__->Resource).Object;
      if (pFVar5 != (FNDI_Landscape_SharedResource *)0x0) {
        if (((__return_storage_ptr__->Usage).RequiresCpuAccess != false) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Usage.RequiresCpuAccess == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                                ,0x36d,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar19 = (FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                     *)(*pcVar6)();
          return pFVar19;
        }
        if ((__return_storage_ptr__->Usage).RequiresGpuAccess != false) {
          LOCK();
          paVar2 = &pFVar5->ShaderPhysicsDataUserCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
          if (((aVar3 == (atomic<int>)0x0) && (pFVar5->NextState = Initialized, param_5)) &&
             (pFVar5->CurrentState != Initialized)) {
            FNDI_Landscape_SharedResource::Initialize(pFVar5);
            pFVar5->CurrentState = Initialized;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_390);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar22);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar14->LandscapeDataGuard);
    }
LAB_14917f3e2:
    if (local_3d8.CapturedRegions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.CapturedRegions.AllocatorInstance.Data);
    }
    if (local_3d8.PhysicalMaterials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.PhysicalMaterials.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 1491808e0

uint __cdecl FNDI_Landscape_GeneratedData::GetTypeHash(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  ushort uVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar4 = L"FNDI_Landscape_GeneratedData";
      if (FCrc::CRCTable_DEPRECATED[1] == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      ::Hash = 0;
      uVar3 = 0x46;
      do {
        pwVar4 = pwVar4 + 1;
        uVar5 = (short)uVar3 - (-(ushort)(uVar3 - 0x61 < 0x1a) & 0x20);
        uVar3 = ::Hash >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)::Hash ^ (byte)uVar5)];
        ::Hash = uVar3 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar5 >> 8 ^ uVar3) & 0xff];
        uVar3 = (uint)(ushort)*pwVar4;
      } while (*pwVar4 != L'\0');
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::Hash;
}

// Tick @ 14918f360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNDI_Landscape_GeneratedData::Tick
          (FNDI_Landscape_GeneratedData *this,ETickingGroup param_1,float param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_> *this_00;
  EResourceState EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNDI_Landscape_SharedResource *this_01;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForElementType<int> FVar8;
  void *_Dst;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_138 [32];
  uint local_e8 [2];
  FNDI_Landscape_SharedResource *local_e0;
  TReferenceControllerBase<1> *local_d8;
  ForElementType<int> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  AcquireSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  iVar6 = (this->LandscapeData).ArrayNum;
  local_c8.SecondaryData = (ForElementType<int>)0x0;
  local_40 = 0;
  local_3c = 0x20;
  local_e8[0] = 0;
  if (0 < iVar6) {
    do {
      uVar11 = local_e8[0];
      uVar14 = 0;
      if ((int)local_e8[0] < (this->LandscapeData).ArrayNum) {
        uVar14 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (this->LandscapeData).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)(int)uVar11 * 0x10 + 8);
      this_01 = *(FNDI_Landscape_SharedResource **)(pFVar10 + (longlong)(int)uVar11 * 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_01 == (FNDI_Landscape_SharedResource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar2 = this_01->NextState;
      if (EVar2 != this_01->CurrentState) {
        if (EVar2 == Initialized) {
          FNDI_Landscape_SharedResource::Initialize(this_01);
        }
        else if (EVar2 == Released) {
          FNDI_Landscape_SharedResource::Release(this_01);
          this_01->CurrentState = Released;
          FVar8 = (ForElementType<int>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_c8.SecondaryData;
          }
          if ((ulonglong)FVar8 <= local_e8) {
            FVar8 = (ForElementType<int>)&local_c8;
            if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_c8.SecondaryData;
            }
            if ((local_e8 < (uint *)((longlong)FVar8 + (longlong)local_3c * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_c8,&local_3c);
          }
          lVar9 = (longlong)local_40;
          FVar8 = (ForElementType<int>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_c8.SecondaryData;
          }
          local_40 = local_40 + 1;
          *(uint *)((longlong)FVar8 + lVar9 * 4) = local_e8[0];
          goto LAB_14918f489;
        }
        this_01->CurrentState = EVar2;
      }
LAB_14918f489:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_e8[0] = local_e8[0] + 1;
    } while ((int)local_e8[0] < iVar6);
    if (local_40 != 0) {
      bVar5 = local_40 == 0;
      do {
        if ((bVar5 || local_40 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (ForElementType<int>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_c8.SecondaryData;
        }
        lVar9 = (longlong)(local_40 + -1) * 4;
        uVar11 = *(uint *)(lVar9 + (longlong)FVar8);
        FVar8 = (ForElementType<int>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_c8.SecondaryData;
        }
        _Dst = (void *)((longlong)FVar8 + lVar9);
        iVar6 = (local_40 - (local_40 + -1)) + -1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
        }
        local_40 = local_40 + -1;
        uVar14 = 0;
        if ((int)uVar11 < (this->LandscapeData).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (this->LandscapeData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
        local_e0 = *(FNDI_Landscape_SharedResource **)pFVar10;
        local_d8 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar14 = 0;
        if ((int)uVar11 < (this->LandscapeData).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->LandscapeData,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->LandscapeData).AllocatorInstance,(this->LandscapeData).ArrayNum,
                   &(this->LandscapeData).ArrayMax);
        if ((local_e0 == (FNDI_Landscape_SharedResource *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FNDI_Landscape_SharedResource::CanBeDestroyed(local_e0);
        if (!bVar5) {
          pFVar10 = (this->ReleasedLandscapeData).AllocatorInstance.Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               pFVar10 + (longlong)(this->ReleasedLandscapeData).ArrayMax * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (this->ReleasedLandscapeData).ArrayNum;
          piVar1 = &(this->ReleasedLandscapeData).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->ReleasedLandscapeData).AllocatorInstance,piVar1);
          }
          (this->ReleasedLandscapeData).ArrayNum = iVar6 + 1;
          pFVar10 = (this->ReleasedLandscapeData).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
          *(FNDI_Landscape_SharedResource **)pFVar10 = local_e0;
          *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_d8;
          if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
        bVar5 = local_40 == 0;
      } while (!bVar5);
    }
  }
  if (local_c8.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_c8.SecondaryData);
  }
  pFVar10 = (this->ReleasedLandscapeData).AllocatorInstance.Data;
  this_00 = &this->ReleasedLandscapeData;
  piVar1 = &(this->ReleasedLandscapeData).ArrayNum;
  pFVar15 = pFVar10 + (longlong)(this->ReleasedLandscapeData).ArrayNum * 0x10;
  pFVar12 = pFVar10;
  while (pFVar12 != pFVar15) {
    if ((*(longlong *)pFVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FNDI_Landscape_SharedResource::CanBeDestroyed
                      (*(FNDI_Landscape_SharedResource **)pFVar12);
    if (bVar5) {
      do {
        pFVar16 = pFVar15;
        pFVar15 = pFVar16 + -0x10;
        if (pFVar12 == pFVar15) goto LAB_14918f8f6;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FNDI_Landscape_SharedResource::CanBeDestroyed
                          (*(FNDI_Landscape_SharedResource **)pFVar15);
      } while (bVar5);
      *(longlong *)pFVar12 = *(longlong *)pFVar15;
      *(longlong *)pFVar15 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar12 + 8),(FSharedReferencer<1> *)(pFVar16 + -8));
      pFVar12 = pFVar12 + 0x10;
    }
    else {
      pFVar12 = pFVar12 + 0x10;
    }
  }
LAB_14918f8f6:
  iVar6 = *piVar1;
  uVar13 = (longlong)pFVar12 - (longlong)pFVar10 >> 4;
  uVar11 = (uint)uVar13;
  if (iVar6 < (int)uVar11) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar11 - iVar6,&this_00->AllocatorInstance,piVar1,
                       &(this->ReleasedLandscapeData).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
           (longlong)(int)(uVar11 - iVar6) << 4);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
    }
    if ((int)uVar11 < iVar6) {
      uVar14 = iVar6 - uVar11;
      if (((int)(uVar11 | uVar14) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar14 != 0) {
        TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar11,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,
                   &(this->ReleasedLandscapeData).ArrayMax);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->LandscapeDataGuard);
  return;
}

// operator() @ 15053e330

bool __thiscall
`FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6494258729309963405>);
  if (bVar3) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x50);
    if (lVar1 == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6494258729309963405>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15053e3e2;
    }
  }
  bVar3 = false;
LAB_15053e3e2:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15053e530

bool __thiscall
`FNDI_Landscape_GeneratedData::GetLandscapeData'::__l2::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6494258729309963480>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0x50) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x50) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6494258729309963480>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053e5c8;
    }
  }
  bVar2 = false;
LAB_15053e5c8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

