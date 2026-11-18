// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// ~FSkinWeightProfilesData @ 1475aa1a0

void __thiscall FSkinWeightProfilesData::~FSkinWeightProfilesData(FSkinWeightProfilesData *this)

{
  void *pvVar1;
  
  ReleaseResources(this);
  FSkinWeightReadbackData::~FSkinWeightReadbackData(&this->ReadbackData);
  *(undefined4 *)&(this->OverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OverrideData);
  *(undefined4 *)&(this->ProfileStackToBuffer).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProfileStackToBuffer).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProfileStackToBuffer);
  return;
}

// operator() @ 1475ac8a0

void __thiscall
`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  void *_Src;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(*(longlong *)this + 0x28);
  if (lVar1 == 0) goto LAB_1475ac958;
  if (*(longlong *)(lVar1 + 8) != 0) {
    if (*(int *)(*(longlong *)(lVar1 + 8) + 0x18) == 0) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))();
      if (cVar3 != '\0') goto LAB_1475ac91e;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8836850427896005302>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                       ,0x2b6,"Data.BufferReadback->IsReady()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_1475ac91e:
  _Src = FRHIGPUBufferReadback::Lock
                   (*(FRHIGPUBufferReadback **)(*(longlong *)this + 0x28),
                    *(uint *)(*(longlong *)this + 0x38));
  memcpy(*(void **)(*(longlong *)this + 0x30),_Src,(longlong)*(int *)(*(longlong *)this + 0x38));
  FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)(*(longlong *)this + 0x28));
  *(uint *)(*(longlong *)this + 0x40) = GFrameNumberRenderThread;
LAB_1475ac958:
                    /* WARNING: Could not recover jumptable at 0x0001475ac965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 1475aca60

void __thiscall
`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  FRHIGPUBufferReadback *this_00;
  FRHIGPUBufferReadback *pFVar2;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x20) + 0xd8) != 0) {
      lVar1 = *(longlong *)this;
      this_00 = ::operator_new(0x58);
      pFVar2 = (FRHIGPUBufferReadback *)0x0;
      if (this_00 != (FRHIGPUBufferReadback *)0x0) {
        pFVar2 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,ReadbackName);
      }
      TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::Reset
                ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)
                 (lVar1 + 0x28),pFVar2);
      FRHIGPUBufferReadback::EnqueueCopy
                (*(FRHIGPUBufferReadback **)(*(longlong *)this + 0x28),(FRHICommandList *)param_1,
                 *(FRHIBuffer **)(*(longlong *)((longlong)this + 8) + 0x20),0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001475acafe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1475ad730

void __thiscall
`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  FRHIBuffer *pFVar2;
  FRHIGPUBufferReadback *this_00;
  FRHIGPUBufferReadback *pFVar3;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar1 = *(longlong *)this;
    this_00 = ::operator_new(0x58);
    pFVar3 = (FRHIGPUBufferReadback *)0x0;
    if (this_00 != (FRHIGPUBufferReadback *)0x0) {
      pFVar3 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,ReadbackName);
    }
    TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::Reset
              ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)
               (lVar1 + 0x28),pFVar3);
    if ((*(FRHIGPUBufferReadback **)(*(longlong *)this + 0x28) != (FRHIGPUBufferReadback *)0x0) &&
       (pFVar2 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 8) + 0x20),
       (pFVar2->Desc).Size != 0)) {
      FRHIGPUBufferReadback::EnqueueCopy
                (*(FRHIGPUBufferReadback **)(*(longlong *)this + 0x28),(FRHICommandList *)param_1,
                 pFVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001475ad7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddOverrideData @ 1475b26f0

FRuntimeSkinWeightProfileData * __thiscall
FSkinWeightProfilesData::AddOverrideData(FSkinWeightProfilesData *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FRuntimeSkinWeightProfileData *pFVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                       *)&this->OverrideData,uVar2 + FVar1.Number,param_1);
  return pFVar3;
}

// ApplyOverrideProfileStack @ 1475b3550

void __thiscall
FSkinWeightProfilesData::ApplyOverrideProfileStack
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1,
          FSkinWeightVertexBuffer *param_2,uchar *param_3)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  FRuntimeSkinWeightProfileData *pFVar4;
  undefined1 *puVar5;
  
  if (param_3 == (uchar *)0x0) {
    param_3 = (this->BaseBuffer->DataVertexBuffer).Data;
  }
  FSkinWeightVertexBuffer::CopyMetaData(param_2,this->BaseBuffer);
  FSkinWeightVertexBuffer::CopySkinWeightRawDataFromBuffer
            (param_2,param_3,(this->BaseBuffer->DataVertexBuffer).NumVertices);
  FVar1 = (param_1->Layers).Elements[0];
  if (FVar1 != (FName)0x0) {
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->OverrideData).field_0x8 != *(int *)&(this->OverrideData).field_0x34) {
      puVar5 = *(undefined1 **)&(this->OverrideData).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->OverrideData).field_0x38;
      }
      uVar2 = *(uint *)(puVar5 + (ulonglong)
                                 (*(int *)&(this->OverrideData).field_0x48 - 1U &
                                 FVar1.Number + uVar2) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          pFVar3 = (FName *)((longlong)(int)uVar2 * 0x88 + *(longlong *)&this->OverrideData);
          if (*pFVar3 == FVar1) {
            pFVar4 = (FRuntimeSkinWeightProfileData *)(pFVar3 + 1);
            if (pFVar3 == (FName *)0x0) {
              pFVar4 = (FRuntimeSkinWeightProfileData *)0x0;
            }
            if (pFVar4 != (FRuntimeSkinWeightProfileData *)0x0) {
              FRuntimeSkinWeightProfileData::ApplyOverrides(pFVar4,param_2);
            }
            break;
          }
          uVar2 = pFVar3[0x10].ComparisonIndex.Value;
        } while (uVar2 != 0xffffffff);
      }
    }
  }
  FVar1 = (param_1->Layers).Elements[1];
  if (FVar1 != (FName)0x0) {
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->OverrideData).field_0x8 != *(int *)&(this->OverrideData).field_0x34) {
      puVar5 = *(undefined1 **)&(this->OverrideData).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->OverrideData).field_0x38;
      }
      uVar2 = *(uint *)(puVar5 + (ulonglong)
                                 (*(int *)&(this->OverrideData).field_0x48 - 1U &
                                 FVar1.Number + uVar2) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          pFVar3 = (FName *)((longlong)(int)uVar2 * 0x88 + *(longlong *)&this->OverrideData);
          if (*pFVar3 == FVar1) {
            pFVar4 = (FRuntimeSkinWeightProfileData *)(pFVar3 + 1);
            if (pFVar3 == (FName *)0x0) {
              pFVar4 = (FRuntimeSkinWeightProfileData *)0x0;
            }
            if (pFVar4 == (FRuntimeSkinWeightProfileData *)0x0) {
              return;
            }
            FRuntimeSkinWeightProfileData::ApplyOverrides(pFVar4,param_2);
            return;
          }
          uVar2 = pFVar3[0x10].ComparisonIndex.Value;
        } while (uVar2 != 0xffffffff);
      }
    }
  }
  return;
}

// ClearDynamicDefaultSkinWeightProfile @ 1475ba0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::ClearDynamicDefaultSkinWeightProfile
          (FSkinWeightProfilesData *this,USkeletalMesh *param_1,int param_2)

{
  FName local_28 [2];
  FString local_18;
  
  if (this->bStaticOverridden == false) {
    if (this->bDefaultOverridden != false) {
      if (this->DefaultOverrideSkinWeightBuffer != (FSkinWeightVertexBuffer *)0x0) {
        ReleaseBuffer(this,&this->DefaultProfileStack,true);
        this->DefaultOverrideSkinWeightBuffer = (FSkinWeightVertexBuffer *)0x0;
      }
      this->bDefaultOverridden = false;
      (this->DefaultProfileStack).Layers.Elements[0].ComparisonIndex = 0;
      (this->DefaultProfileStack).Layers.Elements[0].Number = 0;
      (this->DefaultProfileStack).Layers.Elements[1].ComparisonIndex = 0;
      (this->DefaultProfileStack).Layers.Elements[1].Number = 0;
    }
  }
  else if (1 < (byte)LogSkeletalMesh._0_1_) {
    local_28[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_28,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ContainsOverrideBuffer @ 1475bb310

bool __thiscall
FSkinWeightProfilesData::ContainsOverrideBuffer
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  FNameEntryId FVar9;
  FName local_18;
  longlong local_10;
  
  FVar1 = (param_1->Layers).Elements[0];
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  local_10 = 0;
  FVar2 = (param_1->Layers).Elements[1];
  if (FVar1 != (FName)0x0) {
    local_18 = FVar1;
  }
  FVar9.Value = 0;
  if (FVar2 != (FName)0x0) {
    *(FName *)((longlong)&local_18.ComparisonIndex.Value +
              (ulonglong)(-(uint)(FVar1 != (FName)0x0) & 8)) = FVar2;
    FVar9.Value = (uint)local_10;
  }
  FVar1 = local_18;
  uVar4 = ::GetTypeHash(local_18.ComparisonIndex.Value);
  uVar8 = FVar1.Number + uVar4 + 0x9e3779b9;
  uVar4 = ::GetTypeHash(FVar9);
  if (*(int *)&(this->ProfileStackToBuffer).field_0x8 !=
      *(int *)&(this->ProfileStackToBuffer).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ProfileStackToBuffer).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ProfileStackToBuffer).field_0x48 - 1U &
                              ((int)((ulonglong)local_10 >> 0x20) + uVar8 * 0x40 + (uVar8 >> 2) +
                               uVar4 + 0x9e3779b9 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->ProfileStackToBuffer;
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        if ((*(FName *)(lVar6 + lVar3) == FVar1) && (*(longlong *)(lVar6 + 8 + lVar3) == local_10))
        goto LAB_1475bb3f3;
        iVar5 = *(int *)(lVar6 + 0x18 + lVar3);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1475bb3f3:
  return iVar5 != -1;
}

// ContainsProfile @ 1475bb4a0

bool __thiscall
FSkinWeightProfilesData::ContainsProfile(FSkinWeightProfilesData *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->OverrideData).field_0x8 != *(int *)&(this->OverrideData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->OverrideData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->OverrideData).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->OverrideData).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x88 + *(longlong *)&this->OverrideData) == FVar1)
        goto LAB_1475bb522;
        iVar3 = *(int *)((longlong)iVar3 * 0x88 + 0x80 + *(longlong *)&this->OverrideData);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1475bb522:
  return iVar3 != -1;
}

// CreateRHIBuffers @ 1475bcf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::CreateRHIBuffers
          (FSkinWeightProfilesData *this,FRHICommandListBase *param_1,
          TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FSkinWeightRHIInfo *pFVar10;
  longlong lVar11;
  FName *pFVar12;
  uint uVar13;
  uint uVar14;
  FSkinWeightProfileStack *pFVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res20 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FSkinWeightRHIInfo local_70 [2];
  undefined4 local_44;
  
  uVar13 = *(int *)&(this->ProfileStackToBuffer).field_0x8 -
           *(int *)&(this->ProfileStackToBuffer).field_0x34;
  if (this->BaseBuffer == (FSkinWeightVertexBuffer *)0x0) {
    if (uVar13 == 0) goto LAB_1475bcf8f;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseBuffer || !NumActiveProfiles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
LAB_1475bcf8f:
  DestructItems<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,int>
            ((TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo> *)(param_2->AllocatorInstance).Data
             ,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar13,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar9 = *(int *)&(this->ProfileStackToBuffer).field_0x28;
  puVar2 = &(this->ProfileStackToBuffer).field_0x10;
  iVar16 = 0;
  iVar18 = 0;
  uVar13 = 1;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar14 = *puVar19;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1475bd06d;
      uVar14 = puVar19[lVar11 + 1];
    }
    uVar13 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar18 + -1 + (int)lVar11;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_1475bd06d:
  uVar14 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  TStack_98._padding_ = CONCAT44(uVar13,iVar16);
  uVar13 = uVar14 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar14 >> 5;
  TStack_98._28_4_ = local_44;
  TStack_98.BaseBitIndex = iVar18;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->ProfileStackToBuffer).field_0x8 -
                       *(int *)&(this->ProfileStackToBuffer).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      uVar13 = uVar13 + 0x20;
      iVar16 = iVar16 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1475bd170;
      uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1475bd170:
  while( true ) {
    if (*(int *)&(this->ProfileStackToBuffer).field_0x8 -
        *(int *)&(this->ProfileStackToBuffer).field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_98.CurrentBitIndex == uVar14) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar15 = (FSkinWeightProfileStack *)
              ((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)&this->ProfileStackToBuffer
              );
    FVar5 = pFVar15[1].Layers.Elements[0];
    ApplyOverrideProfileStack(this,pFVar15,(FSkinWeightVertexBuffer *)FVar5,(uchar *)0x0);
    pFVar10 = FSkinWeightVertexBuffer::CreateRHIBuffer
                        ((FSkinWeightVertexBuffer *)FVar5,local_70,param_1);
    iVar9 = param_2->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar9 + 1;
    FVar5 = (pFVar15->Layers).Elements[1];
    pFVar12 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x20);
    *pFVar12 = (pFVar15->Layers).Elements[0];
    pFVar12[1] = FVar5;
    pFVar12[2].ComparisonIndex = 0;
    pFVar12[2].Number = 0;
    pFVar12[2] = (FName)(pFVar10->DataVertexBufferRHI).Reference;
    (pFVar10->DataVertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    pFVar12[3].ComparisonIndex = 0;
    pFVar12[3].Number = 0;
    pFVar12[3] = (FName)(pFVar10->LookupVertexBufferRHI).Reference;
    (pFVar10->LookupVertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    if (local_70[0].LookupVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_70[0].LookupVertexBufferRHI.Reference);
    }
    if (local_70[0].DataVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_70[0].DataVertexBufferRHI.Reference);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return;
}

// EnqueueDataReadback @ 1475c4200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkinWeightProfilesData::EnqueueDataReadback(FSkinWeightProfilesData *this)

{
  int *piVar1;
  FSkinWeightReadbackData *lpCriticalSection;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FRHIGPUBufferReadback *pFVar4;
  longlong lVar5;
  FSkinWeightVertexBuffer *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  FScriptContainerElement *_Dst;
  undefined ***pppuVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_d8 [32];
  code *local_98 [2];
  undefined **local_88;
  FSkinWeightReadbackData *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FSkinWeightReadbackData *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection == (FSkinWeightReadbackData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ReadbackData).ReadbackData.ArrayNum == 0) {
    pFVar4 = (this->ReadbackData).BufferReadback.Ptr;
    lVar5 = pFVar4->_padding_;
    if ((lVar5 == 0) ||
       ((*(int *)(lVar5 + 0x18) == 0 &&
        (cVar8 = (**(code **)(*(longlong *)pFVar4->_padding_ + 0x20))(), cVar8 != '\0'))))
    goto LAB_1475c4296;
  }
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8836850427896005289>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                     ,0x2a9,
                     "ReadbackData.ReadbackData.Num() == 0 && ReadbackData.BufferReadback->IsReady()"
                    );
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1475c4296:
  pFVar6 = this->BaseBuffer;
  if (pFVar6 != (FSkinWeightVertexBuffer *)0x0) {
    pTVar2 = &(this->ReadbackData).ReadbackData;
    piVar1 = &(this->ReadbackData).ReadbackData.ArrayNum;
    uVar3 = ((uint)((pFVar6->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((pFVar6->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
            (pFVar6->DataVertexBuffer).NumBoneWeights + (pFVar6->LookupVertexBuffer).NumVertices * 4
    ;
    iVar11 = *piVar1;
    if (iVar11 < (int)uVar3) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar3 - iVar11,&pTVar2->AllocatorInstance,piVar1,
                          &(this->ReadbackData).ReadbackData.ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + iVar10,0,(longlong)(int)(uVar3 - iVar11));
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar11) {
        uVar15 = iVar11 - uVar3;
        if (((int)(uVar15 | uVar3) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar15 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (int)uVar3;
          iVar11 = (*piVar1 - uVar15) - uVar3;
          if (iVar11 != 0) {
            memmove(_Dst,_Dst + (int)uVar15,(longlong)iVar11);
          }
          *piVar1 = *piVar1 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar2->AllocatorInstance,*piVar1,
                     &(this->ReadbackData).ReadbackData.ArrayMax);
        }
      }
    }
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_80 = lpCriticalSection;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueDataReadback_::__l5::TSTR_FSkinWeightProfilesData_EnqueueDataReadback687>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::TSTR_FSkinWeightProfilesData_EnqueueDataReadback687>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar12);
      uVar14 = (ulonglong)local_38;
      if ((2 < uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar13 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar13 = local_40;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar13 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar13 = local_70;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EnqueueGPUReadback @ 1475c4520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkinWeightProfilesData::EnqueueGPUReadback(FSkinWeightProfilesData *this)

{
  FSkinWeightReadbackData *lpCriticalSection;
  FSkinWeightVertexBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *pFVar4;
  FCommandList *pFVar5;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStackY_128 [32];
  code *local_f8 [2];
  undefined **local_e8;
  FSkinWeightReadbackData *pFStack_e0;
  FSkinWeightVertexBuffer *local_d8;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  FSkinWeightReadbackData *pFStack_b0;
  FSkinWeightVertexBuffer *local_a8;
  undefined ***local_a0;
  undefined1 local_98 [16];
  undefined **local_88;
  FSkinWeightReadbackData *pFStack_80;
  FSkinWeightVertexBuffer *local_78;
  undefined ***local_70;
  byte local_68;
  undefined1 local_58 [16];
  undefined **local_48;
  FSkinWeightReadbackData *pFStack_40;
  FSkinWeightVertexBuffer *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection == (FSkinWeightReadbackData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ReadbackData).BufferReadback.Ptr != (FRHIGPUBufferReadback *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8836850427896005236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                       ,0x274,"!ReadbackData.BufferReadback.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->BaseBuffer;
  if (GHandleDelayedLoads == 0) {
    if (pFVar1 == (FSkinWeightVertexBuffer *)0x0) goto LAB_1475c489e;
    bVar3 = FSkinWeightDataVertexBuffer::IsWeightDataValid(&pFVar1->DataVertexBuffer);
    if ((!bVar3) ||
       (pFVar1 = this->BaseBuffer,
       ((uint)((pFVar1->DataVertexBuffer).bUse16BitBoneWeight != false) +
       ((pFVar1->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
       (pFVar1->DataVertexBuffer).NumBoneWeights == 0)) goto LAB_1475c489e;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&ReadbackName,"ReadbackSkinWeightBuffer");
        _Init_thread_footer(&::_TSS1);
      }
    }
    local_a0 = (undefined ***)0x0;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`13'::<lambda_2>,1,0>
                ::_vftable_;
    local_a8 = this->BaseBuffer;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_b0 = lpCriticalSection;
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l13::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback655>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_58._0_8_ = local_c8[0];
      local_30 = local_a0;
      local_48 = local_b8;
      pFStack_40 = pFStack_b0;
      local_38 = local_a8;
      local_c8[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback655>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_58,pFVar6);
      uVar9 = (ulonglong)local_28;
      if (2 < uVar9) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar8 = local_30;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_58);
      }
    }
    if (local_c8[0] == (code *)0x0) goto LAB_1475c489e;
    pppuVar8 = &local_b8;
    pppuVar7 = local_a0;
  }
  else {
    if ((pFVar1 == (FSkinWeightVertexBuffer *)0x0) ||
       (((uint)((pFVar1->DataVertexBuffer).bUse16BitBoneWeight != false) +
        ((pFVar1->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
        (pFVar1->DataVertexBuffer).NumBoneWeights == 0)) goto LAB_1475c489e;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&ReadbackName,"ReadbackSkinWeightBuffer");
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_d0 = (undefined ***)0x0;
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_d8 = this->BaseBuffer;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_e0 = lpCriticalSection;
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l8::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback635>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_98._0_8_ = local_f8[0];
      local_70 = local_d0;
      local_88 = local_e8;
      pFStack_80 = pFStack_e0;
      local_78 = local_d8;
      local_f8[0] = (code *)0x0;
      local_68 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback635>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_98,pFVar6);
      uVar9 = (ulonglong)local_68;
      if (2 < uVar9) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_98 + 0x10);
          if (local_70 != (undefined ***)0x0) {
            pppuVar8 = local_70;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_98);
      }
    }
    if (local_f8[0] == (code *)0x0) goto LAB_1475c489e;
    pppuVar8 = &local_e8;
    pppuVar7 = local_d0;
  }
  if (pppuVar7 != (undefined ***)0x0) {
    pppuVar8 = pppuVar7;
  }
  (*(code *)(*pppuVar8)[2])();
LAB_1475c489e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetCPUAccessMemoryOverhead @ 1475d2a50

ulong64 __thiscall
FSkinWeightProfilesData::GetCPUAccessMemoryOverhead(FSkinWeightProfilesData *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar2 = *(int *)&(this->ProfileStackToBuffer).field_0x28;
  puVar1 = &(this->ProfileStackToBuffer).field_0x10;
  uVar8 = 0;
  iVar13 = 0;
  iVar14 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar13) goto LAB_1475d2aed;
      uVar12 = puVar15[lVar7 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar9 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    iVar6 = local_res10 + -1 + iVar14;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_1475d2aed:
  uVar12 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar13);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProfileStackToBuffer).field_0x8 -
                       *(int *)&(this->ProfileStackToBuffer).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar5 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  if (uVar12 != uVar5) {
    puVar10 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_1475d2bf0;
      uVar12 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar12 = (int)lVar7 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_1475d2bf0:
  while( true ) {
    if (*(int *)&(this->ProfileStackToBuffer).field_0x8 -
        *(int *)&(this->ProfileStackToBuffer).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar7 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
             *(longlong *)&this->ProfileStackToBuffer);
    if (*(char *)(lVar7 + 0x30) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)
              (((uint)(*(char *)(lVar7 + 0x39) != '\0') + (*(char *)(lVar7 + 0x38) != '\0') + 2) *
               *(int *)(lVar7 + 0x54) + *(int *)(lVar7 + 0xa0) * 4);
    }
    uVar8 = uVar8 + uVar9;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar8;
}

// GetOverrideBuffer @ 1475d6680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSkinWeightVertexBuffer * __thiscall
FSkinWeightProfilesData::GetOverrideBuffer
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkinWeightVertexBuffer *pFVar3;
  TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *pTVar4;
  FName FVar5;
  FName FVar6;
  FName FVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  FSkinWeightProfileStack local_28;
  ulonglong local_18;
  FName FVar7;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"FSkinWeightProfilesData_GetOverrideBuffer");
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId450,"FSkinWeightProfilesData_GetOverrideBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
               ,0x1c2);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId450);
  }
  FVar8 = (param_1->Layers).Elements[0];
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar5 = (param_1->Layers).Elements[1];
  local_28.Layers.Elements[0] = FVar7;
  if (FVar8 != (FName)0x0) {
    local_28.Layers.Elements[0] = FVar8;
  }
  local_28.Layers.Elements[1].ComparisonIndex.Value = 0;
  local_28.Layers.Elements[1].Number = 0;
  if (FVar5 != (FName)0x0) {
    *(FName *)((longlong)&local_28.Layers.Elements[0].ComparisonIndex.Value +
              (ulonglong)(-(uint)(FVar8 != (FName)0x0) & 8)) = FVar5;
  }
  FVar8 = FVar6;
  if ((this->bDefaultOverridden == false) ||
     (((FVar5 = (this->DefaultProfileStack).Layers.Elements[0], local_28.Layers.Elements[0] != FVar5
       || (local_28.Layers.Elements[1] != (this->DefaultProfileStack).Layers.Elements[1])) &&
      (this->bStaticOverridden == false)))) {
    if (this->BaseBuffer != (FSkinWeightVertexBuffer *)0x0) {
      if (((this->BaseBuffer->DataVertexBuffer).NumVertices == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseBuffer->GetNumVertices() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                             ,0x1d3,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSkinWeightVertexBuffer *)(*pcVar1)();
        return pFVar3;
      }
      pTVar4 = TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                       *)&this->ProfileStackToBuffer,&local_28);
      FVar5 = (FName)&pTVar4->field_0x10;
      if (pTVar4 == (TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *)0x0) {
        FVar5 = FVar7;
      }
      if (FVar5 != (FName)0x0) {
        FVar8 = *(FName *)FVar5;
      }
    }
  }
  else {
    FVar8 = FVar7;
    if ((this->bStaticOverridden != false) &&
       (((local_28.Layers.Elements[0] != FVar5 ||
         (local_28.Layers.Elements[1] != (this->DefaultProfileStack).Layers.Elements[1])) &&
        (1 < (byte)LogSkeletalMesh._0_1_)))) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      FVar8 = FVar6;
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (FSkinWeightVertexBuffer *)FVar8;
}

// GetOverrideData @ 1475d6830

FRuntimeSkinWeightProfileData * __thiscall
FSkinWeightProfilesData::GetOverrideData(FSkinWeightProfilesData *this,FName *param_1)

{
  FRuntimeSkinWeightProfileData *pFVar1;
  
  pFVar1 = TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
           ::Find((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                   *)&this->OverrideData,*param_1);
  return pFVar1;
}

// GetResourcesSize @ 1475dd3d0

ulong64 __thiscall FSkinWeightProfilesData::GetResourcesSize(FSkinWeightProfilesData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ProfileStackToBuffer).field_0x28;
  puVar1 = &(this->ProfileStackToBuffer).field_0x10;
  uVar9 = 0;
  iVar13 = 0;
  iVar14 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_1475dd46d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475dd46d:
  uVar12 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProfileStackToBuffer).field_0x8 -
                       *(int *)&(this->ProfileStackToBuffer).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar6 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_1475dd570;
      uVar12 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_1475dd570:
  while( true ) {
    if (*(int *)&(this->ProfileStackToBuffer).field_0x8 -
        *(int *)&(this->ProfileStackToBuffer).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
             *(longlong *)&this->ProfileStackToBuffer);
    uVar9 = uVar9 + (((uint)(*(char *)(lVar8 + 0x39) != '\0') +
                     (*(char *)(lVar8 + 0x38) != '\0') + 2) * *(int *)(lVar8 + 0x54) +
                    *(int *)(lVar8 + 0xa0) * 4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar9;
}

// HasProfileStack @ 1475dfeb0

bool __thiscall
FSkinWeightProfilesData::HasProfileStack
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FVar1 = (param_1->Layers).Elements[0];
  local_18[1].ComparisonIndex.Value = 0;
  local_18[1].Number = 0;
  FVar2 = (param_1->Layers).Elements[1];
  if (FVar1 != (FName)0x0) {
    local_18[0] = FVar1;
  }
  if (FVar2 != (FName)0x0) {
    *(FName *)((longlong)&local_18[0].ComparisonIndex.Value +
              (ulonglong)(-(uint)(FVar1 != (FName)0x0) & 8)) = FVar2;
  }
  if ((FVar1 != local_18[0]) || (FVar2 != local_18[1])) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProfileStack == InProfileStack.Normalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                       ,0x2da,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  FVar1 = (param_1->Layers).Elements[0];
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->Layers).Elements[1];
  uVar7 = FVar1.Number + 0x9e3779b9 + uVar7;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->ProfileStackToBuffer).field_0x8 !=
      *(int *)&(this->ProfileStackToBuffer).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ProfileStackToBuffer).field_0x38;
    }
    iVar9 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ProfileStackToBuffer).field_0x48 - 1U &
                    (uVar7 * 0x40 + FVar2.Number + (uVar7 >> 2) + uVar8 + 0x9e3779b9 ^ uVar7)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->ProfileStackToBuffer;
      do {
        lVar11 = (longlong)iVar9 * 0x20;
        if ((*(FName *)(lVar11 + lVar3) == (param_1->Layers).Elements[0]) &&
           (*(FName *)(lVar11 + 8 + lVar3) == (param_1->Layers).Elements[1])) goto LAB_1475dffd7;
        iVar9 = *(int *)(lVar11 + 0x18 + lVar3);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_1475dffd7:
  return iVar9 != -1;
}

// Init @ 1475e0290

void __thiscall
FSkinWeightProfilesData::Init(FSkinWeightProfilesData *this,FSkinWeightVertexBuffer *param_1)

{
  this->BaseBuffer = param_1;
  return;
}

// InitRHIForStreaming @ 1475e0410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::InitRHIForStreaming
          (FSkinWeightProfilesData *this,
          TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
          *param_1,FRHIResourceReplaceBatcher *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FSkinWeightDataVertexBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *pTVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pTVar6 = TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                       *)&this->ProfileStackToBuffer,(FSkinWeightProfileStack *)(pFVar1 + lVar9));
      if ((pTVar6 == (TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FSkinWeightDataVertexBuffer **)&pTVar6->field_0x10;
      FSkinWeightDataVertexBuffer::InitRHIForStreaming
                (this_00,*(FRHIBuffer **)(pFVar2 + lVar9 + 0x10),param_2);
      FSkinWeightLookupVertexBuffer::InitRHIForStreaming
                ((FSkinWeightLookupVertexBuffer *)(this_00 + 1),
                 *(FRHIBuffer **)(pFVar2 + lVar9 + 0x18),param_2);
      iVar8 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar7 < iVar8);
  }
  return;
}

// InitialiseProfileBuffer @ 1475e07e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkinWeightProfilesData::InitialiseProfileBuffer
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1)

{
  FSkinWeightProfileStack *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  FSkinWeightVertexBuffer *this_00;
  void *pvVar6;
  FName *pFVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 auStackY_318 [32];
  FLLMScope local_2e8 [2];
  FSkinWeightVertexBuffer *local_2e0;
  FString local_2d8;
  TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&> local_2c8;
  FName local_2b8;
  FMemScope local_2b0;
  FString local_2a8;
  FSkinWeightProfileStack *local_298;
  FSkinWeightVertexBuffer **local_290;
  FString local_288;
  FName local_278 [2];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  FLLMScope::FLLMScope(local_2e8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_2b0,SkeletalMesh,true);
  bVar4 = HasProfileStack(this,param_1);
  if ((bVar4) || (this->BaseBuffer == (FSkinWeightVertexBuffer *)0x0)) goto LAB_1475e0ba1;
  if (GAllowCPU == 0) {
LAB_1475e087f:
    if (GHandleDelayedLoads == 0) {
LAB_1475e0888:
      if ((this->BaseBuffer->DataVertexBuffer).bNeedsCPUAccess != false) goto LAB_1475e0891;
    }
    bVar4 = false;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ReadbackData);
    bVar5 = IsDataReadbackFinished(this);
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8836850427896005371>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                           ,0x2fb,"IsDataReadbackFinished()"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->ReadbackData).ReadbackData.AllocatorInstance.Data;
  }
  else {
    if (GHandleDelayedLoads == 0) goto LAB_1475e0888;
    bVar4 = FSkinWeightDataVertexBuffer::IsWeightDataValid(&this->BaseBuffer->DataVertexBuffer);
    if (!bVar4) goto LAB_1475e087f;
LAB_1475e0891:
    bVar4 = true;
    pFVar9 = (FScriptContainerElement *)(this->BaseBuffer->DataVertexBuffer).Data;
  }
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8836850427896005375>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                       ,0x2ff,"BaseBufferData");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (!bVar4) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadbackData);
    }
  }
  else {
    this_00 = ::operator_new(0xa8);
    local_2e0 = (FSkinWeightVertexBuffer *)0x0;
    if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
      local_2e0 = FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(this_00);
    }
    bVar5 = (this->BaseBuffer->DataVertexBuffer).bNeedsCPUAccess;
    local_290 = &local_2e0;
    (local_2e0->DataVertexBuffer).bNeedsCPUAccess = bVar5;
    (local_2e0->LookupVertexBuffer).bNeedsCPUAccess = bVar5;
    local_298 = param_1;
    TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&>_>
              ((TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                *)&this->ProfileStackToBuffer,&local_2c8,(bool *)&local_298);
    ApplyOverrideProfileStack(this,param_1,local_2e0,(uchar *)pFVar9);
    if (!bVar4) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadbackData);
    }
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    pFVar1 = param_1 + 1;
    local_268.End = (wchar_t *)local_48;
    bVar4 = true;
    local_268.CurPos = local_248;
    for (; param_1 != pFVar1; param_1 = (FSkinWeightProfileStack *)((longlong)param_1 + 8)) {
      if (bVar4) {
        bVar4 = false;
      }
      else {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"-",2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
      }
      local_2c8.Value = *(FSkinWeightVertexBuffer ***)param_1;
      ::FName::ToString((FName *)&local_2c8.Value,&local_2d8);
      FVar3.Data = local_2d8.Data.AllocatorInstance.Data;
      iVar10 = local_2d8.Data.ArrayNum + -1;
      if (local_2d8.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      uVar8 = (ulong64)iVar10;
      if (local_268.End < local_268.CurPos + uVar8) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
      }
      if (iVar10 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar8 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    ::FString::FString(&local_288,local_268.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    ::FString::ConcatFC(&local_2a8,&local_288,L"_FSkinWeightProfilesData");
    iVar10 = local_2a8.Data.ArrayNum + -1;
    if (local_2a8.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    pFVar7 = ::FName::FName(local_278,iVar10,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_2b8 = *pFVar7;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    FSkinWeightVertexBuffer::SetOwnerName(local_2e0,&local_2b8);
    FSkinWeightVertexBuffer::BeginInitResources(local_2e0);
  }
LAB_1475e0ba1:
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(local_2e8);
  return;
}

// IsDataReadbackFinished @ 1475e2050

bool __thiscall FSkinWeightProfilesData::IsDataReadbackFinished(FSkinWeightProfilesData *this)

{
  FSkinWeightReadbackData *lpCriticalSection;
  uint uVar1;
  FRHIGPUBufferReadback *pFVar2;
  bool bVar3;
  
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection == (FSkinWeightReadbackData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->ReadbackData).BufferReadback.Ptr;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar2 != (FRHIGPUBufferReadback *)0x0) {
    bVar3 = IsGPUReadbackFinished(this);
    if (((bVar3) && (uVar1 = (this->ReadbackData).ReadbackFinishedFrameIndex, uVar1 != 0xffffffff))
       && (uVar1 < GFrameNumberRenderThread)) {
      bVar3 = true;
      goto LAB_1475e20ba;
    }
  }
  bVar3 = false;
LAB_1475e20ba:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// IsDataReadbackPending @ 1475e20f0

bool __thiscall FSkinWeightProfilesData::IsDataReadbackPending(FSkinWeightProfilesData *this)

{
  FSkinWeightReadbackData *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection != (FSkinWeightReadbackData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ReadbackData).ReadbackData.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsGPUReadbackFinished @ 1475e21e0

bool __thiscall FSkinWeightProfilesData::IsGPUReadbackFinished(FSkinWeightProfilesData *this)

{
  FSkinWeightReadbackData *lpCriticalSection;
  FRHIGPUBufferReadback *pFVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection == (FSkinWeightReadbackData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->ReadbackData).BufferReadback.Ptr;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
    pFVar1 = (this->ReadbackData).BufferReadback.Ptr;
    lVar2 = pFVar1->_padding_;
    if (lVar2 == 0) {
LAB_1475e224b:
      bVar4 = true;
      goto LAB_1475e2251;
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
      cVar3 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar3 != '\0') goto LAB_1475e224b;
    }
  }
  bVar4 = false;
LAB_1475e2251:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// IsPendingReadback @ 1475e28f0

bool __thiscall FSkinWeightProfilesData::IsPendingReadback(FSkinWeightProfilesData *this)

{
  FSkinWeightReadbackData *lpCriticalSection;
  FRHIGPUBufferReadback *pFVar1;
  
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection != (FSkinWeightReadbackData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->ReadbackData).BufferReadback.Ptr;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar1 == (FRHIGPUBufferReadback *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OverrideBaseBufferSkinWeightData @ 1475e8f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkinWeightProfilesData::OverrideBaseBufferSkinWeightData
          (FSkinWeightProfilesData *this,USkeletalMesh *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FRuntimeSkinWeightProfileData *this_00;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((GSkinWeightProfilesLoadByDefaultMode == 1) &&
     (USkeletalMesh::WaitUntilAsyncPropertyReleased(param_1,SkinWeightProfiles,ReadWrite),
     GSkinWeightProfilesAllowedFromLOD <= param_2)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnPickOverrideSkinWeightProfile,&local_90);
    if ((OnPickOverrideSkinWeightProfile._16_4_ == 0) ||
       ((OnPickOverrideSkinWeightProfile._8_8_ == 0 ||
        (cVar5 = (**(code **)(*(longlong *)OnPickOverrideSkinWeightProfile._8_8_ + 0x38))(),
        cVar5 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      pFVar2 = (param_1->SkinWeightProfiles).AllocatorInstance.Data;
      for (pFVar10 = pFVar2;
          pFVar10 != pFVar2 + (longlong)(param_1->SkinWeightProfiles).ArrayNum * 0x10;
          pFVar10 = pFVar10 + 0x10) {
        local_58 = *(undefined4 *)pFVar10;
        uStack_54 = *(undefined4 *)(pFVar10 + 4);
        uStack_50 = *(undefined4 *)(pFVar10 + 8);
        iStack_4c = *(int *)(pFVar10 + 0xc);
        iVar1 = iStack_4c;
        if (-1 < GSkinWeightProfilesDefaultLODOverride) {
          iVar1 = GSkinWeightProfilesDefaultLODOverride;
        }
        if (((char)uStack_50 != '\0') && (iVar1 <= param_2)) {
          uVar7 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 4);
          goto LAB_1475e90ef;
        }
      }
      uVar7 = 0xffffffff;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      local_a8 = (param_1->SkinWeightProfiles).AllocatorInstance.Data;
      iVar1 = (param_1->SkinWeightProfiles).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _iStack_a0 = CONCAT44(uStack_3c,iVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &OnPickOverrideSkinWeightProfile,&local_78);
      plVar9 = (longlong *)0x0;
      if (OnPickOverrideSkinWeightProfile._16_4_ != 0) {
        plVar9 = (longlong *)OnPickOverrideSkinWeightProfile._8_8_;
      }
      uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1,&local_a8,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
    }
LAB_1475e90ef:
    if (uVar7 != 0xffffffff) {
      iVar1 = (param_1->SkinWeightProfiles).ArrayNum;
      uVar8 = 0;
      if ((int)uVar7 < iVar1) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_c8 = (longlong)(int)uVar7;
        local_c0 = (longlong)iVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar3 = *(FName *)((param_1->SkinWeightProfiles).AllocatorInstance.Data +
                        (longlong)(int)uVar7 * 0x10);
      this_00 = TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                ::Find((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                        *)&this->OverrideData,FVar3);
      if (this_00 != (FRuntimeSkinWeightProfileData *)0x0) {
        FRuntimeSkinWeightProfileData::ApplyDefaultOverride(this_00,this->BaseBuffer);
      }
      this->bDefaultOverridden = true;
      this->bStaticOverridden = true;
      (this->DefaultProfileStack).Layers.Elements[0] = FVar3;
      (this->DefaultProfileStack).Layers.Elements[1].ComparisonIndex = 0;
      (this->DefaultProfileStack).Layers.Elements[1].Number = 0;
    }
  }
  return;
}

// ReleaseBuffer @ 1475f0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::ReleaseBuffer
          (FSkinWeightProfilesData *this,FSkinWeightProfileStack *param_1,bool param_2)

{
  FName FVar1;
  longlong lVar2;
  FName FVar3;
  TAlignedBytes<8,8> TVar4;
  uint uVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  FName FVar13;
  FNameEntryId FVar14;
  undefined1 auStackY_e8 [32];
  FName local_88;
  FStatMessage local_80;
  code *local_68 [2];
  undefined **local_58;
  FName local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar1 = (param_1->Layers).Elements[0];
  local_80.StatData.Pad._0_4_ = 0;
  local_80.StatData.Pad._4_4_ = 0;
  local_80.NameAndInfo.Index.Value = 0;
  local_80.NameAndInfo.Number = 0;
  FVar13 = (param_1->Layers).Elements[1];
  if (FVar1 != (FName)0x0) {
    local_80.StatData.Pad = (uchar  [8])FVar1;
  }
  FVar14.Value = 0;
  if (FVar13 != (FName)0x0) {
    *(FName *)(local_80.StatData.Pad + (-(uint)(FVar1 != (FName)0x0) & 8)) = FVar13;
    FVar14.Value = local_80.NameAndInfo.Index.Value;
  }
  TVar4.Pad = local_80.StatData.Pad;
  uVar5 = ::GetTypeHash((FNameEntryId)local_80.StatData.Pad._0_4_);
  uVar11 = TVar4.Pad._4_4_ + uVar5 + 0x9e3779b9;
  uVar5 = ::GetTypeHash(FVar14);
  if (*(int *)&(this->ProfileStackToBuffer).field_0x8 !=
      *(int *)&(this->ProfileStackToBuffer).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ProfileStackToBuffer).field_0x38;
    }
    iVar12 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->ProfileStackToBuffer).field_0x48 - 1U &
                     (local_80.NameAndInfo.Number + uVar11 * 0x40 + (uVar11 >> 2) +
                      uVar5 + 0x9e3779b9 ^ uVar11)) * 4);
    if (iVar12 != -1) {
      lVar2 = *(longlong *)&this->ProfileStackToBuffer;
      do {
        lVar6 = (longlong)iVar12 * 0x20;
        if ((*(FName *)(lVar6 + lVar2) == (FName)TVar4.Pad) &&
           (*(FName *)(lVar6 + 8 + lVar2) == (FName)local_80.NameAndInfo)) {
          if (iVar12 == -1) {
            return;
          }
          if ((((this->bDefaultOverridden != false) &&
               ((FName)TVar4.Pad == (this->DefaultProfileStack).Layers.Elements[0])) &&
              ((FName)local_80.NameAndInfo == (this->DefaultProfileStack).Layers.Elements[1])) &&
             (!param_2)) {
            return;
          }
          local_88.ComparisonIndex.Value = 0;
          local_88.Number = 0;
          TMap<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
          ::RemoveAndCopyValue
                    (&this->ProfileStackToBuffer,(FSkinWeightProfileStack *)&local_80,
                     (FSkinWeightVertexBuffer **)&local_88);
          FVar1 = local_88;
          if (local_88 == (FName)0x0) {
            return;
          }
          uVar5 = ((uint)(*(char *)((longlong)local_88 + 0x39) != '\0') +
                  (*(char *)((longlong)local_88 + 0x38) != '\0') + 2) *
                  *(int *)((longlong)local_88 + 0x54) + *(int *)((longlong)local_88 + 0xa0) * 4;
          FVar13.Number = 0;
          FVar13.ComparisonIndex.Value = uVar5;
          if (uVar5 != 0) {
            FVar8 = StatPtr_STAT_SkeletalMeshVertexMemory;
            if (StatPtr_STAT_SkeletalMeshVertexMemory ==
                (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
              pFVar7 = ::FName::FName(&local_88,"STAT_SkeletalMeshVertexMemory");
              FVar8 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory
                                 ,*pFVar7,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                                 "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                                 MCR_Physical);
            }
            FVar3 = *(FName *)FVar8;
            local_88 = FVar3;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_80.NameAndInfo =
                   (FStatNameAndInfo)((ulonglong)FVar3 & 0xffffbfffffffffff | 0xb00000000000);
              local_88 = FVar3;
              local_80.StatData.Pad = (uchar  [8])FVar13;
              FThreadStats::AddStatMessage(this_00,&local_80);
              FStatsTrace::Add(&local_88,-(longlong)FVar13);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          local_40 = (undefined ***)0x0;
          local_58 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::<lambda_1>,1,0>
                      ::_vftable_;
          local_50 = FVar1;
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>
                    (&UE::RenderCommandPipe::SkeletalMesh,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
          if (local_68[0] == (code *)0x0) {
            return;
          }
          pppuVar9 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar9 = local_40;
          }
          (*(code *)(*pppuVar9)[2])();
          return;
        }
        iVar12 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar12 != -1);
    }
  }
  return;
}

// ReleaseCPUResources @ 1475f0ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkinWeightProfilesData::ReleaseCPUResources(FSkinWeightProfilesData *this)

{
  undefined1 *puVar1;
  TMap<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
  *pTVar2;
  void **ppvVar3;
  FSkinWeightReadbackData *lpCriticalSection;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  TMap<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  TMap<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_60;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  puVar1 = &(this->OverrideData).field_0x10;
  iStack_118 = 0;
  iVar5 = *(int *)&(this->OverrideData).field_0x28;
  pTVar2 = &this->OverrideData;
  local_100 = 0;
  uStack_114 = 1;
  iStack_104 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&(this->OverrideData).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_1475f0fae;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_114 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uStack_114 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f0 = (int)lVar10;
    iStack_104 = local_f0 + -1 + local_100;
    if (iVar5 < iStack_104) {
      iStack_104 = iVar5;
    }
  }
LAB_1475f0fae:
  uVar13 = *(uint *)&(this->OverrideData).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_f8 = *(int *)&(this->OverrideData).field_0x8 - *(int *)&(this->OverrideData).field_0x34;
  TStack_e0._padding_ = CONCAT44(uStack_114,iStack_118);
  uStack_108 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_104;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_e0._28_4_ = iStack_104;
  TStack_e0.BaseBitIndex = local_100;
  uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pTVar2;
  local_110 = puVar1;
  iStack_fc = iStack_104;
  local_e8 = pTVar2;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(this->OverrideData).field_0x28;
  if (uVar13 != uVar6) {
    puVar14 = *(undefined1 **)&(this->OverrideData).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475f10c0;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_1475f10c0:
  while( true ) {
    pTVar8 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_e0.CurrentBitIndex == uVar13) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    local_b8 = (void *)0x0;
    local_98._16_8_ = 0;
    uStack_80 = 0;
    local_60.InlineData[0] = '\0';
    local_60.InlineData[1] = '\0';
    local_60.InlineData[2] = '\0';
    local_60.InlineData[3] = '\0';
    local_60._padding_ = 0;
    lVar10 = (longlong)TStack_e0.CurrentBitIndex * 0x88 + *(longlong *)pTVar8;
    local_4c = 0;
    local_44 = 0;
    ppvVar3 = (void **)(lVar10 + 8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    if (ppvVar3 != &local_b8) {
      local_b0._4_4_ = 0;
      local_b0._0_4_ = 0;
      if (*ppvVar3 != (void *)0x0) {
        FMemory::Free(*ppvVar3);
      }
      *ppvVar3 = local_b8;
      *(undefined4 *)(lVar10 + 0x10) = (undefined4)local_b0;
      *(undefined4 *)(lVar10 + 0x14) = local_b0._4_4_;
    }
    local_b0 = 0;
    local_b8 = (void *)0x0;
    ppvVar3 = (void **)(lVar10 + 0x18);
    if (ppvVar3 != &local_a8) {
      if (*ppvVar3 != (void *)0x0) {
        FMemory::Free(*ppvVar3);
      }
      *ppvVar3 = local_a8;
      *(undefined4 *)(lVar10 + 0x20) = (undefined4)local_a0;
      *(undefined4 *)(lVar10 + 0x24) = local_a0._4_4_;
      local_a0 = 0;
      local_a8 = (void *)0x0;
    }
    if ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
         *)(lVar10 + 0x28) !=
        (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
         *)local_98) {
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)(lVar10 + 0x28),
                 (TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_98);
    }
    *(undefined1 *)(lVar10 + 0x78) = local_4c._4_1_;
    *(undefined1 *)(lVar10 + 0x79) = local_4c._5_1_;
    local_50 = 0;
    if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    bVar9 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection == (FSkinWeightReadbackData *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::Reset
            (&(this->ReadbackData).BufferReadback,(FRHIGPUBufferReadback *)0x0);
  iVar5 = (this->ReadbackData).ReadbackData.ArrayMax;
  (this->ReadbackData).ReadbackData.ArrayNum = 0;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ReadbackData).ReadbackData.AllocatorInstance,0,
               &(this->ReadbackData).ReadbackData.ArrayMax);
  }
  (this->ReadbackData).ReadbackFinishedFrameIndex = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleaseRHIForStreaming @ 1475f1340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::ReleaseRHIForStreaming
          (FSkinWeightProfilesData *this,FRHIResourceReplaceBatcher *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FSkinWeightDataVertexBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ProfileStackToBuffer).field_0x28;
  puVar1 = &(this->ProfileStackToBuffer).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475f13de;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475f13de:
  uVar10 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProfileStackToBuffer).field_0x8 -
                       *(int *)&(this->ProfileStackToBuffer).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ProfileStackToBuffer).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475f14e0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1475f14e0:
  while( true ) {
    if (*(int *)&(this->ProfileStackToBuffer).field_0x8 -
        *(int *)&(this->ProfileStackToBuffer).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FSkinWeightDataVertexBuffer **)
               ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
               *(longlong *)&this->ProfileStackToBuffer);
    FSkinWeightDataVertexBuffer::ReleaseRHIForStreaming(this_00,param_1);
    FSkinWeightLookupVertexBuffer::ReleaseRHIForStreaming
              ((FSkinWeightLookupVertexBuffer *)(this_00 + 1),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ReleaseResources @ 1475f17c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkinWeightProfilesData::ReleaseResources(FSkinWeightProfilesData *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  FSkinWeightVertexBuffer **ppFVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar15;
  uint uVar16;
  TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar17;
  undefined1 auStackY_118 [32];
  TArray<FSkinWeightVertexBuffer_*,TSizedDefaultAllocator<32>_> local_c8;
  longlong local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FSkinWeightVertexBuffer **local_a0;
  FSkinWeightProfilesData *local_98;
  TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&> local_90;
  FSkinWeightProfileStack *local_80;
  FSkinWeightVertexBuffer **local_78;
  code *local_68 [2];
  undefined **local_58;
  FScriptContainerElement *local_50;
  int local_48;
  undefined4 local_44;
  undefined ***local_40;
  ulonglong local_38;
  ulonglong uVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = (TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
             *)&this->ProfileStackToBuffer;
  iVar15 = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_98 = this;
  local_90.Value = (FSkinWeightVertexBuffer **)this_00;
  TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
              *)this_00,&local_c8);
  bVar4 = 1 < *(int *)&(this->ProfileStackToBuffer).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->ProfileStackToBuffer).field_0xc;
  *(undefined4 *)&(this->ProfileStackToBuffer).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProfileStackToBuffer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProfileStackToBuffer).field_0x34 = 0;
  iVar10 = *(int *)&(this->ProfileStackToBuffer).field_0x2c;
  *(undefined4 *)&(this->ProfileStackToBuffer).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->ProfileStackToBuffer).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProfileStackToBuffer).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ProfileStackToBuffer).field_0x48 = 1;
    TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if ((this->bDefaultOverridden != false) && (this->bStaticOverridden == false)) {
    ppFVar9 = &this->DefaultOverrideSkinWeightBuffer;
    local_a0 = ppFVar9;
    if ((*ppFVar9 == (FSkinWeightVertexBuffer *)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8836850427896005136>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                           ,0x210,"DefaultOverrideSkinWeightBuffer != nullptr"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((local_c8.AllocatorInstance.Data <= ppFVar9) &&
        (ppFVar9 < local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3.Data = local_c8.AllocatorInstance.Data;
    lVar5 = (longlong)local_c8.ArrayNum;
    local_78 = ppFVar9;
    if (local_c8.ArrayNum != 0) {
      bVar4 = *(FSkinWeightVertexBuffer **)local_c8.AllocatorInstance.Data != *ppFVar9;
      lVar7 = 0;
      iVar10 = iVar15;
      do {
        lVar7 = lVar7 + 1;
        iVar11 = iVar10 + 1;
        if (lVar7 < lVar5) {
          do {
            if (bVar4 != (*(FSkinWeightVertexBuffer **)(FVar3.Data + lVar7 * 8) != *ppFVar9)) break;
            iVar11 = iVar11 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar5);
        }
        if (bVar4 != false) {
          if (iVar15 != iVar10) {
            memmove(FVar3.Data + (longlong)iVar15 * 8,FVar3.Data + (longlong)iVar10 * 8,
                    (longlong)(iVar11 - iVar10) << 3);
          }
          iVar15 = iVar15 + (iVar11 - iVar10);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        ppFVar9 = local_a0;
        iVar10 = iVar11;
      } while (lVar7 < lVar5);
      local_c8.ArrayNum = iVar15;
      local_78 = local_a0;
      this = local_98;
      this_00 = (TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                 *)local_90.Value;
    }
    local_80 = &this->DefaultProfileStack;
    TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&>_>
              (this_00,&local_90,(bool *)&local_80);
  }
  uVar8 = 0;
  local_b8 = 0;
  if (((local_c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3.Data = local_c8.AllocatorInstance.Data;
  lVar5 = (longlong)local_c8.ArrayNum;
  if (local_c8.ArrayNum != 0) {
    bVar4 = *(longlong *)local_c8.AllocatorInstance.Data != local_b8;
    lVar7 = local_b8;
    uVar14 = uVar8;
    uVar17 = uVar8;
    do {
      uVar12 = (uint)uVar14;
      uVar13 = uVar12;
      do {
        uVar8 = uVar8 + 1;
        uVar13 = uVar13 + 1;
        uVar14 = (ulonglong)uVar13;
        if (lVar5 <= (longlong)uVar8) break;
      } while (bVar4 == (*(longlong *)(FVar3.Data + uVar8 * 8) != lVar7));
      if (bVar4 != false) {
        uVar16 = (uint)uVar17;
        if (uVar16 != uVar12) {
          memmove(FVar3.Data + (longlong)(int)uVar16 * 8,FVar3.Data + (longlong)(int)uVar12 * 8,
                  (longlong)(int)(uVar13 - uVar12) << 3);
          lVar7 = local_b8;
        }
        uVar17 = (ulonglong)(uVar16 + (uVar13 - uVar12));
      }
      bVar4 = (bool)(bVar4 ^ 1);
    } while ((longlong)uVar8 < lVar5);
    local_c8.ArrayNum = (int)uVar17;
    this = local_98;
  }
  ResetGPUReadback(this);
  FVar3.Data = local_c8.AllocatorInstance.Data;
  lVar5 = (longlong)local_c8.ArrayNum;
  if (local_c8.ArrayNum != 0) {
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8._0_4_ = local_c8.ArrayNum;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_c8.ArrayNum,0,&local_b0,local_c8.ArrayNum,(int *)((longlong)&local_a8 + 4))
    ;
    memcpy(local_b0.Data,FVar3.Data,lVar5 << 3);
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_50 = local_b0.Data;
    local_48 = (int)local_a8;
    local_44 = local_a8._4_4_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkinWeightProfilesData::ReleaseResources'::__l8::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar6 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar6 = local_40;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// ResetGPUReadback @ 1475f6e60

void __thiscall FSkinWeightProfilesData::ResetGPUReadback(FSkinWeightProfilesData *this)

{
  int *piVar1;
  FSkinWeightReadbackData *lpCriticalSection;
  
  lpCriticalSection = &this->ReadbackData;
  if (lpCriticalSection != (FSkinWeightReadbackData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>::Reset
              (&(this->ReadbackData).BufferReadback,(FRHIGPUBufferReadback *)0x0);
    piVar1 = &(this->ReadbackData).ReadbackData.ArrayMax;
    (this->ReadbackData).ReadbackData.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ReadbackData).ReadbackData.AllocatorInstance,0,piVar1);
    }
    (this->ReadbackData).ReadbackFinishedFrameIndex = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001475f6ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SerializeMetaData @ 1475faed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkinWeightProfilesData::SerializeMetaData(FSkinWeightProfilesData *this,FArchive *param_1)

{
  TMap<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<FName> FVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = &this->OverrideData;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 8;
  if ((param_1->field_0x28 & 4) == 0) {
    TArrayPrivateFriend::Serialize<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_68);
    TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
             *)this_00,local_68.ArrayNum);
    uVar5 = 0;
    if (0 < local_68.ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < local_68.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_70 = (longlong)local_68.ArrayNum;
          local_78 = (longlong)(int)uVar5;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FVar4 = (ForElementType<FName>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
          FVar4 = local_68.AllocatorInstance.SecondaryData;
        }
        TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
        ::Emplace<FName_const_&>
                  ((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                    *)this_00,(FName *)((longlong)FVar4 + (longlong)(int)uVar5 * 8));
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_68.ArrayNum);
    }
  }
  else {
    TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
    ::GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                *)this_00,&local_68);
    TArrayPrivateFriend::Serialize<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_68);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetDynamicDefaultSkinWeightProfile @ 1475fb910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile
          (FSkinWeightProfilesData *this,USkeletalMesh *param_1,int param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  UEngine *this_00;
  bool bVar5;
  FSkinWeightVertexBuffer *pFVar6;
  FRuntimeSkinWeightProfileData *pFVar7;
  FString *pFVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  FSkinWeightProfileManager **ppFVar11;
  undefined ***pppuVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FName *pFVar16;
  FSkinWeightVertexBuffer *pFVar17;
  longlong lVar18;
  undefined1 auStackY_148 [32];
  FSkinWeightVertexBuffer *local_118;
  undefined8 local_110;
  FSkinnedMeshComponentUpdateSkinWeightsContext local_108;
  TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&> local_f8;
  FName local_e8;
  FString local_e0;
  FSkinWeightProfileStack *local_d0;
  FSkinWeightVertexBuffer **local_c8;
  FName local_c0;
  FString local_b8;
  FSkinWeightProfileStack local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  FSkinWeightProfileStack local_88;
  code *local_78 [2];
  undefined **local_68;
  FSkinWeightProfilesData *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this->bStaticOverridden == false) {
    if (GSkinWeightProfilesLoadByDefaultMode == 3) {
      USkeletalMesh::WaitUntilAsyncPropertyReleased(param_1,SkinWeightProfiles,ReadWrite);
      pFVar2 = (param_1->SkinWeightProfiles).AllocatorInstance.Data;
      iVar1 = (param_1->SkinWeightProfiles).ArrayNum;
      for (pFVar15 = pFVar2; pFVar15 != pFVar2 + (longlong)iVar1 * 0x10; pFVar15 = pFVar15 + 0x10) {
        local_98 = *(undefined4 *)pFVar15;
        uStack_94 = *(undefined4 *)(pFVar15 + 4);
        uStack_90 = *(undefined4 *)(pFVar15 + 8);
        iStack_8c = *(int *)(pFVar15 + 0xc);
        if ((GSkinWeightProfilesAllowedFromLOD <= param_2) && ((char)uStack_90 != '\0')) {
          iVar4 = iStack_8c;
          if (-1 < GSkinWeightProfilesDefaultLODOverride) {
            iVar4 = GSkinWeightProfilesDefaultLODOverride;
          }
          if (iVar4 <= param_2) {
            uVar13 = (uint)((longlong)pFVar15 - (longlong)pFVar2 >> 4);
            if (uVar13 == 0xffffffff) {
              return;
            }
            pFVar17 = (FSkinWeightVertexBuffer *)0x0;
            uVar14 = 0;
            if ((int)uVar13 < iVar1) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar16 = (FName *)((param_1->SkinWeightProfiles).AllocatorInstance.Data +
                               (longlong)(int)uVar13 * 0x10);
            local_110 = 0;
            local_88.Layers.Elements[0] = *pFVar16;
            local_88.Layers.Elements[1].ComparisonIndex.Value = 0;
            local_88.Layers.Elements[1].Number = 0;
            if (this->DefaultOverrideSkinWeightBuffer != (FSkinWeightVertexBuffer *)0x0) {
              return;
            }
            pFVar6 = GetOverrideBuffer(this,&local_88);
            this_00 = GEngine;
            if (pFVar6 == (FSkinWeightVertexBuffer *)0x0) {
              if (param_3) {
                if ((this->BaseBuffer->DataVertexBuffer).Data == (uchar *)0x0) {
                  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<8836850427896004950>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                                     ,0x156,"BaseBufferData");
                  if (!bVar5) {
                    return;
                  }
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar7 = TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                         ::Find((TMapBase<FName,FRuntimeSkinWeightProfileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>_>
                                 *)&this->OverrideData,*pFVar16);
                if (pFVar7 == (FRuntimeSkinWeightProfileData *)0x0) {
                  return;
                }
                FSkinnedMeshComponentUpdateSkinWeightsContext::
                FSkinnedMeshComponentUpdateSkinWeightsContext(&local_108,(USkinnedAsset *)param_1);
                pFVar6 = ::operator_new(0xa8);
                local_118 = pFVar17;
                if (pFVar6 != (FSkinWeightVertexBuffer *)0x0) {
                  local_118 = FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(pFVar6);
                }
                local_d0 = &local_88;
                local_c8 = &local_118;
                TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<FSkinWeightProfileStack_const_&,FSkinWeightVertexBuffer_*_const_&>_>
                          ((TSet<TTuple<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>,FDefaultSetAllocator>
                            *)&this->ProfileStackToBuffer,&local_f8,(bool *)&local_d0);
                ApplyOverrideProfileStack(this,&local_88,local_118,(uchar *)0x0);
                this->DefaultOverrideSkinWeightBuffer = local_118;
                (this->DefaultProfileStack).Layers.Elements[0] = local_88.Layers.Elements[0];
                (this->DefaultProfileStack).Layers.Elements[1] = local_88.Layers.Elements[1];
                this->bDefaultOverridden = true;
                pFVar8 = USkinnedAsset::GetLODPathName(&local_b8,(USkinnedAsset *)param_1,param_2);
                iVar1 = (pFVar8->Data).ArrayNum;
                uVar13 = iVar1 - 1;
                if (iVar1 == 0) {
                  uVar13 = 0;
                }
                pFVar16 = ::FName::FName(&local_c0,uVar13,
                                         (wchar_t *)(pFVar8->Data).AllocatorInstance.Data,FNAME_Add)
                ;
                local_e8 = *pFVar16;
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                FSkinWeightVertexBuffer::SetOwnerName(local_118,&local_e8);
                FSkinWeightVertexBuffer::BeginInitResources(local_118);
                lVar18 = (longlong)local_108.MeshComponents.ArrayNum;
                pFVar6 = pFVar17;
                if (0 < lVar18) {
                  do {
                    uVar14 = (uint)pFVar17;
                    uVar13 = 0;
                    if ((int)uVar14 < local_108.MeshComponents.ArrayNum) {
                      uVar13 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    if (((*(USkinnedMeshComponent **)
                           (local_108.MeshComponents.AllocatorInstance.Data + (longlong)pFVar6 * 8))
                         ->_padding_ & 1) != 0) {
                      USkinnedMeshComponent::UpdateSkinWeightOverrideBuffer
                                (*(USkinnedMeshComponent **)
                                  (local_108.MeshComponents.AllocatorInstance.Data +
                                  (longlong)pFVar6 * 8));
                    }
                    pFVar17 = (FSkinWeightVertexBuffer *)(ulonglong)(uVar14 + 1);
                    pFVar6 = (FSkinWeightVertexBuffer *)
                             ((longlong)&(pFVar6->DataVertexBuffer)._padding_ + 1);
                  } while ((longlong)pFVar6 < lVar18);
                }
                if (local_108.MeshComponents.AllocatorInstance.Data ==
                    (FScriptContainerElement *)0x0) {
                  return;
                }
                FMemory::Free(local_108.MeshComponents.AllocatorInstance.Data);
                return;
              }
              local_68 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::`46'::<lambda_2>,0,0>
                          ::_vftable_;
              local_78[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::__l46::<lambda_2>,void,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack>
                            ::Call;
              local_50 = (undefined ***)0x0;
              local_60 = this;
              if (GEngine != (UEngine *)0x0) {
                pUVar9 = Z_Construct_UClass_UGameEngine_NoRegister();
                lVar18 = this_00->_padding_;
                iVar1 = (int)pUVar9->_padding_;
                if ((((iVar1 <= *(int *)(lVar18 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar1 * 8) ==
                      &pUVar9->_padding_)) &&
                    (pUVar10 = UGameEngine::GetGameWorld((UGameEngine *)this_00),
                    pUVar10 != (UWorld *)0x0)) &&
                   ((ppFVar11 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                                ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                                        *)&FSkinWeightProfileManager::WorldManagers,pUVar10),
                    ppFVar11 != (FSkinWeightProfileManager **)0x0 &&
                    (*ppFVar11 != (FSkinWeightProfileManager *)0x0)))) {
                  local_a8.Layers.Elements[0] = local_88.Layers.Elements[0];
                  local_a8.Layers.Elements[1] = local_88.Layers.Elements[1];
                  FSkinWeightProfileManager::RequestSkinWeightProfileStack
                            (*ppFVar11,&local_a8,(USkinnedAsset *)param_1,(UObject *)param_1,
                             (TFunction<void___cdecl(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack)>
                              *)local_78,param_2);
                }
              }
              if (local_78[0] == (code *)0x0) {
                return;
              }
              pppuVar12 = &local_68;
              if (local_50 != (undefined ***)0x0) {
                pppuVar12 = local_50;
              }
              (*(code *)(*pppuVar12)[2])();
              return;
            }
            (this->DefaultProfileStack).Layers.Elements[0] = local_88.Layers.Elements[0];
            (this->DefaultProfileStack).Layers.Elements[1] = local_88.Layers.Elements[1];
            this->bDefaultOverridden = true;
            SetupDynamicDefaultSkinWeightProfile(this);
            return;
          }
        }
      }
    }
  }
  else if (1 < (byte)LogSkeletalMesh._0_1_) {
    local_f8._4_8_ = param_1->_padding_;
    ::FName::ToString((FName *)((longlong)&local_f8.Key + 4),&local_e0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupDynamicDefaultSkinWeightProfile @ 1475fdcd0

void __thiscall
FSkinWeightProfilesData::SetupDynamicDefaultSkinWeightProfile(FSkinWeightProfilesData *this)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  FSkinWeightVertexBuffer **ppFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  
  FVar1 = (this->DefaultProfileStack).Layers.Elements[0];
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (this->DefaultProfileStack).Layers.Elements[1];
  uVar4 = FVar1.Number + 0x9e3779b9 + uVar4;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->ProfileStackToBuffer).field_0x8 !=
      *(int *)&(this->ProfileStackToBuffer).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ProfileStackToBuffer).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ProfileStackToBuffer).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ProfileStackToBuffer).field_0x48 - 1U &
                              (uVar4 * 0x40 + FVar2.Number + (uVar4 >> 2) + uVar5 + 0x9e3779b9 ^
                              uVar4)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->ProfileStackToBuffer;
      do {
        lVar7 = (longlong)iVar9 * 0x20;
        if ((*(FName *)(lVar7 + lVar3) == (this->DefaultProfileStack).Layers.Elements[0]) &&
           (*(FName *)(lVar7 + 8 + lVar3) == (this->DefaultProfileStack).Layers.Elements[1])) {
          if (iVar9 == -1) {
            return;
          }
          if (this->bDefaultOverridden == false) {
            return;
          }
          if (this->bStaticOverridden != false) {
            return;
          }
          ppFVar6 = TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
                    ::FindChecked((TMapBase<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
                                   *)&this->ProfileStackToBuffer,&this->DefaultProfileStack);
          this->DefaultOverrideSkinWeightBuffer = *ppFVar6;
          return;
        }
        iVar9 = *(int *)(lVar7 + 0x18 + lVar3);
      } while (iVar9 != -1);
    }
  }
  return;
}

