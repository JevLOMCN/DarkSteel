// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 14732f460

UScriptStruct * __cdecl FStaticMeshComponentLODInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentLODInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMeshComponentLODInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo,(UObject *)pUVar1,
                         L"StaticMeshComponentLODInfo");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshComponentLODInfo.OuterSingleton;
}

// FStaticMeshComponentLODInfo @ 1479a5910

FStaticMeshComponentLODInfo * __thiscall
FStaticMeshComponentLODInfo::FStaticMeshComponentLODInfo
          (FStaticMeshComponentLODInfo *this,UStaticMeshComponent *param_1)

{
  this->OwningComponent = param_1;
  (this->OriginalMapBuildDataId).A = 0;
  (this->OriginalMapBuildDataId).B = 0;
  (this->OriginalMapBuildDataId).C = 0;
  (this->OriginalMapBuildDataId).D = 0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  this->LegacyMapBuildData = (FMeshMapBuildData *)0x0;
  (this->OverrideMapBuildData).Ptr = (FMeshMapBuildData *)0x0;
  (this->PaintedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PaintedVertices).ArrayNum = 0;
  (this->PaintedVertices).ArrayMax = 0;
  this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  return this;
}

// FStaticMeshComponentLODInfo @ 1479a5950

FStaticMeshComponentLODInfo * __thiscall
FStaticMeshComponentLODInfo::FStaticMeshComponentLODInfo(FStaticMeshComponentLODInfo *this)

{
  (this->OriginalMapBuildDataId).A = 0;
  (this->OriginalMapBuildDataId).B = 0;
  (this->OriginalMapBuildDataId).C = 0;
  (this->OriginalMapBuildDataId).D = 0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  this->LegacyMapBuildData = (FMeshMapBuildData *)0x0;
  (this->OverrideMapBuildData).Ptr = (FMeshMapBuildData *)0x0;
  (this->PaintedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PaintedVertices).ArrayNum = 0;
  (this->PaintedVertices).ArrayMax = 0;
  this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  this->OwningComponent = (UStaticMeshComponent *)0x0;
  return this;
}

// ~FStaticMeshComponentLODInfo @ 1479a92a0

void __thiscall
FStaticMeshComponentLODInfo::~FStaticMeshComponentLODInfo(FStaticMeshComponentLODInfo *this)

{
  FScriptContainerElement *pFVar1;
  FMeshMapBuildData *this_00;
  
  CleanUp(this);
  pFVar1 = (this->PaintedVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->OverrideMapBuildData).Ptr;
  if (this_00 != (FMeshMapBuildData *)0x0) {
    FMeshMapBuildData::~FMeshMapBuildData(this_00);
    ::operator_delete(this_00,0x38);
    return;
  }
  return;
}

// BeginReleaseOverrideVertexColors @ 1479b48c0

void __thiscall
FStaticMeshComponentLODInfo::BeginReleaseOverrideVertexColors(FStaticMeshComponentLODInfo *this)

{
  if (this->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
    BeginReleaseResource((FRenderResource *)this->OverrideVertexColors,(FRenderCommandPipe *)0x0);
    return;
  }
  return;
}

// CleanUp @ 1479b7d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStaticMeshComponentLODInfo::CleanUp(FStaticMeshComponentLODInfo *this)

{
  int *piVar1;
  FName FVar2;
  FColorVertexBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  uchar auVar12 [8];
  undefined1 auStackY_118 [32];
  FName local_b8;
  FStatMessage local_b0;
  FName local_a0;
  code *local_98 [2];
  undefined **local_88;
  FColorVertexBuffer *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FColorVertexBuffer *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
    uVar6 = FColorVertexBuffer::GetAllocatedSize(this->OverrideVertexColors);
    auVar12[4] = '\0';
    auVar12[5] = '\0';
    auVar12[6] = '\0';
    auVar12[7] = '\0';
    auVar12[0] = (char)uVar6;
    auVar12[1] = (char)(uVar6 >> 8);
    auVar12[2] = (char)(uVar6 >> 0x10);
    auVar12[3] = (char)(uVar6 >> 0x18);
    if (uVar6 != 0) {
      FVar8 = StatPtr_STAT_InstVertexColorMemory;
      if (StatPtr_STAT_InstVertexColorMemory ==
          (FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_a0,"STAT_InstVertexColorMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstVertexColorMemory,*pFVar7,
                           L"StaticMesh VxColor Inst Mem","STATGROUP_MemoryStaticMesh",
                           "STATCAT_Advanced",L"Memory StaticMesh",true,false,ST_int64,false,false,
                           MCR_Physical);
      }
      FVar2 = *(FName *)FVar8;
      local_b8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_b0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_b8 = FVar2;
        local_b0.StatData.Pad = auVar12;
        local_b0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_b0);
        FStatsTrace::Add(&local_b8,-(longlong)auVar12);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  pFVar3 = this->OverrideVertexColors;
  piVar1 = &(this->PaintedVertices).ArrayMax;
  this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  (this->PaintedVertices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->PaintedVertices).AllocatorInstance,0,piVar1);
  }
  if (pFVar3 != (FColorVertexBuffer *)0x0) {
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshComponentLODInfo::CleanUp'::`15'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStaticMeshComponentLODInfo::CleanUp'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_80 = pFVar3;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStaticMeshComponentLODInfo::CleanUp_::__l15::TSTR_FStaticMeshComponentLODInfoCleanUp3682>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`FStaticMeshComponentLODInfo::CleanUp'::__l15::TSTR_FStaticMeshComponentLODInfoCleanUp3682>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar9);
      uVar11 = (ulonglong)local_38;
      if ((2 < uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar10 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar10 = local_40;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar10 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar10 = local_70;
      }
      (*(code *)(*pppuVar10)[2])();
    }
  }
  return;
}

// CreateMapBuildDataId @ 1479bb880

bool __thiscall
FStaticMeshComponentLODInfo::CreateMapBuildDataId(FStaticMeshComponentLODInfo *this,int param_1)

{
  UStaticMeshComponent *pUVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  FGuid *pFVar8;
  FGuid local_28;
  FGuid local_18;
  
  bVar6 = false;
  if ((((this->OriginalMapBuildDataId).D == 0 && (this->OriginalMapBuildDataId).C == 0) &&
      (this->OriginalMapBuildDataId).B == 0) && (this->OriginalMapBuildDataId).A == 0) {
    if ((param_1 == 0) || (pUVar1 = this->OwningComponent, pUVar1 == (UStaticMeshComponent *)0x0)) {
      pFVar8 = FGuid::NewGuid(&local_18);
    }
    else {
      if ((pUVar1->LODData).ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      pFVar8 = GetMapDataIdForLOD(&local_28,(FGuid *)(pUVar1->LODData).AllocatorInstance.Data,
                                  param_1);
    }
    uVar3 = pFVar8->B;
    uVar4 = pFVar8->C;
    uVar5 = pFVar8->D;
    bVar6 = true;
    (this->OriginalMapBuildDataId).A = pFVar8->A;
    (this->OriginalMapBuildDataId).B = uVar3;
    (this->OriginalMapBuildDataId).C = uVar4;
    (this->OriginalMapBuildDataId).D = uVar5;
  }
  if (((((this->MapBuildDataId).D == 0 && (this->MapBuildDataId).C == 0) &&
       (this->MapBuildDataId).B == 0) && (this->MapBuildDataId).A == 0) &&
     (pUVar1 = this->OwningComponent, pUVar1 != (UStaticMeshComponent *)0x0)) {
    UStaticMeshComponent::UpdateMapBuildDataId(pUVar1);
    return true;
  }
  return bVar6;
}

// ExportText @ 1479c0d60

void __thiscall
FStaticMeshComponentLODInfo::ExportText(FStaticMeshComponentLODInfo *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::PrintfImpl(&local_58,L"PaintedVertices(%d)=");
  uVar4 = 0;
  uVar6 = 0;
  uVar7 = local_58.Data.ArrayNum - 1;
  if (local_58.Data.ArrayNum == 0) {
    uVar7 = uVar6;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar5 = (this->PaintedVertices).ArrayNum * 0x7d;
  iVar8 = (param_1->Data).ArrayNum;
  iVar2 = iVar8 + -1 + iVar5;
  if (iVar8 == 0) {
    iVar2 = iVar5;
  }
  ::FString::Reserve(param_1,iVar2);
  if (0 < (this->PaintedVertices).ArrayNum) {
    do {
      uVar7 = uVar6;
      if ((int)uVar4 < (this->PaintedVertices).ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::PrintfImpl(&local_48,L"((Position=(X=%.6f,Y=%.6f,Z=%.6f),");
      iVar8 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_38,L"(Normal=(X=%f,Y=%f,Z=%f,W=%f),");
      uVar7 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar7 = uVar6;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar7);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_28,L"(Color=(B=%d,G=%d,R=%d,A=%d))");
      uVar7 = local_28.Data.ArrayNum - 1;
      if (local_28.Data.ArrayNum == 0) {
        uVar7 = uVar6;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,uVar7);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar4 = uVar4 + 1;
      if (uVar4 != (this->PaintedVertices).ArrayNum) {
        ::FString::AppendChars(param_1,L",",1);
      }
    } while ((int)uVar4 < (this->PaintedVertices).ArrayNum);
  }
  ::FString::AppendChars(param_1,L" ",1);
  return;
}

// ImportText @ 1479d5df0

void __thiscall
FStaticMeshComponentLODInfo::ImportText(FStaticMeshComponentLODInfo *this,wchar_t **param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  wchar_t *pwVar17;
  TArray<FPaintedVertex,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  uint uVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  int local_res18 [2];
  TArray<FPaintedVertex,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  bVar5 = FParse::Value(*param_1,L"PaintedVertices(",local_res18);
  if (bVar5) {
    ::FString::PrintfImpl(&local_58,L"%d");
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
    uVar26 = 0;
    bVar5 = local_58.Data.ArrayNum == 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = local_58.Data.ArrayNum + 0x11;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (bVar5) {
      iVar16 = 0x12;
    }
    *param_1 = *param_1 + iVar16;
    ::FString::FString(&local_48,*param_1);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    uVar21 = 0;
    bVar25 = 1;
    ::FString::ParseIntoArray(&local_48,&local_68,L",",false);
    if ((local_68.ArrayNum * 0xb < local_res18[0]) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tokens.Num() * 11 >= VertCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                           ,0xeab,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar18 = &this->PaintedVertices;
    piVar1 = &(this->PaintedVertices).ArrayNum;
    local_res20 = pTVar18;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,local_res18[0],&pTVar18->AllocatorInstance,piVar1,
               &(this->PaintedVertices).ArrayMax);
    piVar28 = piVar1;
    uVar23 = uVar26;
    if (0 < local_res18[0]) {
      do {
        uVar20 = ~uVar26 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar26 < *piVar28) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pTVar18->AllocatorInstance).Data;
        lVar29 = (longlong)(int)uVar26 * 0x40;
        uVar21 = 0;
        if ((int)uVar23 < local_68.ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 1;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10);
        }
        bVar5 = FParse::Value(pwVar17,L"X=",(double *)(pFVar2 + lVar29));
        uVar22 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar22 = uVar20;
        }
        if ((uVar22 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = uVar23 + 2;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
        }
        bVar6 = FParse::Value(pwVar17,L"Y=",(double *)(pFVar2 + lVar29 + 8));
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar22 < local_68.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 3;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10);
        }
        bVar7 = FParse::Value(pwVar17,L"Z=",(double *)(pFVar2 + lVar29 + 0x10));
        uVar22 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar22 = uVar20;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = uVar23 + 4;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
        }
        bVar8 = FParse::Value(pwVar17,L"X=",(double *)(pFVar2 + lVar29 + 0x20));
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar22 < local_68.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 5;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10);
        }
        bVar9 = FParse::Value(pwVar17,L"Y=",(double *)(pFVar2 + lVar29 + 0x28));
        uVar22 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar22 = uVar20;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = uVar23 + 6;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
        }
        bVar10 = FParse::Value(pwVar17,L"Z=",(double *)(pFVar2 + lVar29 + 0x30));
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar22 < local_68.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 7;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10);
        }
        bVar11 = FParse::Value(pwVar17,L"W=",(double *)(pFVar2 + lVar29 + 0x38));
        uVar22 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar22 = uVar20;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = uVar23 + 8;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
        }
        bVar12 = FParse::Value(pwVar17,L"B=",(uchar *)(pFVar2 + lVar29 + 0x18));
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar22 < local_68.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 9;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10);
        }
        bVar13 = FParse::Value(pwVar17,L"G=",(uchar *)(pFVar2 + lVar29 + 0x19));
        uVar22 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar22 = uVar20;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = uVar23 + 10;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
        }
        bVar14 = FParse::Value(pwVar17,L"R=",(uchar *)(pFVar2 + lVar29 + 0x1a));
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (local_res20->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar22 < local_68.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = uVar23 + 0xb;
        if (*(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10);
        }
        bVar15 = FParse::Value(pwVar17,L"A=",(uchar *)(pFVar2 + lVar29 + 0x1b));
        bVar25 = bVar25 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13
                 & bVar14 & bVar15;
        if ((bVar25 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bValidInput",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                               ,0xec1,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar26 = uVar26 + 1;
        pTVar18 = local_res20;
        piVar28 = &local_res20->ArrayNum;
        uVar23 = uVar21;
      } while ((int)uVar26 < local_res18[0]);
    }
    uVar19 = 0;
    uVar26 = 0;
    uVar24 = uVar19;
    uVar27 = uVar19;
    if (0 < (int)(uVar21 - 1)) {
      do {
        uVar23 = (uint)uVar24;
        uVar26 = 0;
        if ((int)uVar23 < local_68.ArrayNum) {
          uVar26 = ~uVar23 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar16 = *(int *)(local_68.AllocatorInstance.Data + uVar27 + 8) + -1 + (int)uVar19;
        if (*(int *)(local_68.AllocatorInstance.Data + uVar27 + 8) == 0) {
          iVar16 = (int)uVar19;
        }
        uVar26 = iVar16 + 1;
        uVar19 = (ulonglong)uVar26;
        uVar24 = (ulonglong)(uVar23 + 1);
        uVar27 = uVar27 + 0x10;
      } while ((int)(uVar23 + 1) < (int)(uVar21 - 1));
    }
    *param_1 = *param_1 + (int)uVar26;
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  return;
}

// ReleaseOverrideVertexColorsAndBlock @ 1479e3380

void __thiscall
FStaticMeshComponentLODInfo::ReleaseOverrideVertexColorsAndBlock(FStaticMeshComponentLODInfo *this)

{
  if (this->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
    CleanUp(this);
    FlushRenderingCommands();
    return;
  }
  return;
}

