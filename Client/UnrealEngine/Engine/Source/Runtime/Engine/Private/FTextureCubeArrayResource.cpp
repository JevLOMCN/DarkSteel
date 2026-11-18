// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FTextureCubeArrayResource @ 14887ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

FTextureCubeArrayResource * __thiscall
FTextureCubeArrayResource::FTextureCubeArrayResource
          (FTextureCubeArrayResource *this,UTextureCubeArray *param_1)

{
  int *piVar1;
  FTexturePlatformData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FTextureCubeArrayResource *pFVar8;
  long64 lVar9;
  ulonglong uVar10;
  void *pvVar11;
  int iVar12;
  ulonglong _Size;
  FTexturePlatformData *pFVar13;
  FBulkData *this_00;
  uint uVar14;
  longlong local_res8;
  void *local_78;
  longlong local_70;
  FTexturePlatformData *local_68;
  FString local_60 [2];
  
  FTexture::FTexture((FTexture *)this);
  uVar14 = 0;
  piVar1 = &(this->MipData).ArrayMax;
  this->_padding_ = 0;
  (this->LODGroupStatName).ComparisonIndex = 0;
  (this->LODGroupStatName).Number = 0;
  (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
  (this->MipData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = 0;
  (this->MipData).ArrayNum = 0;
  *piVar1 = 0;
  this->_padding_ = (longlong)&___7FTextureCubeArrayResource__6B_;
  this->Owner = param_1;
  this->TextureSize = 0;
  this->ProxiedResource = (FTextureCubeArrayResource *)0x0;
  if ((param_1 == (UTextureCubeArray *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCubeArray.cpp"
                         ,0x2f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTextureCubeArrayResource *)(*pcVar4)();
    return pFVar8;
  }
  pFVar13 = this->Owner->PrivatePlatformData;
  if (((pFVar13 == (FTexturePlatformData *)0x0) || ((pFVar13->Mips).Array.ArrayNum < 1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->GetNumMips() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCubeArray.cpp"
                         ,0x30,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTextureCubeArrayResource *)(*pcVar4)();
    return pFVar8;
  }
  pFVar13 = param_1->PrivatePlatformData;
  uVar6 = (pFVar13->OptData).NumMipsInTail;
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  iVar12 = (pFVar13->Mips).Array.ArrayNum - uVar6;
  pFVar2 = this->Owner->PrivatePlatformData;
  if (pFVar2 != (FTexturePlatformData *)0x0) {
    uVar7 = pFVar2->PackedData & 0x1fffffff;
  }
  this->NumSlices = uVar7;
  uVar7 = (iVar12 + 1) * uVar7;
  local_68 = pFVar13;
  if (-1 < (int)uVar7) {
    (this->MipData).ArrayNum = 0;
    if (*piVar1 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar7,&(this->MipData).AllocatorInstance,0,piVar1);
    }
    local_70 = (longlong)iVar12;
    if (-1 < iVar12) {
      local_res8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar14 < (pFVar13->Mips).Array.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FTextureCubeArrayResource *)(*pcVar4)();
          return pFVar8;
        }
        this_00 = (FBulkData *)
                  (*(longlong *)((pFVar13->Mips).Array.AllocatorInstance.Data + local_res8 * 8) +
                  0x20);
        lVar9 = FBulkData::GetBulkDataSize(this_00);
        if (lVar9 < 1) {
          if (1 < (byte)LogTexture._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,local_60,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<2>
                      (&`public:___cdecl_FTextureCubeArrayResource::FTextureCubeArrayResource(UTextureCubeArray*___ptr64)___ptr64'
                        ::__l22::LOG_Static,(FLogCategoryBase *)&LogTexture);
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          lVar9 = FBulkData::GetBulkDataSize(this_00);
          this->TextureSize = this->TextureSize + (int)lVar9;
          uVar7 = this->NumSlices;
          lVar9 = FBulkData::GetBulkDataSize(this_00);
          uVar10 = lVar9 / (longlong)(ulonglong)uVar7;
          pvVar11 = FBulkData::Lock(this_00,1);
          uVar7 = 0;
          if (this->NumSlices != 0) {
            _Size = uVar10 & 0xffffffff;
            do {
              local_78 = FMemory::Malloc(_Size,0);
              memcpy(local_78,(void *)((ulonglong)(uVar7 * (int)uVar10) + (longlong)pvVar11),_Size);
              pFVar3 = (this->MipData).AllocatorInstance.Data;
              if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
                  ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FTextureCubeArrayResource *)(*pcVar4)();
                return pFVar8;
              }
              iVar12 = (this->MipData).ArrayNum;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(this->MipData).AllocatorInstance,piVar1);
              }
              uVar7 = uVar7 + 1;
              (this->MipData).ArrayNum = iVar12 + 1;
              *(void **)((this->MipData).AllocatorInstance.Data + (longlong)iVar12 * 8) = local_78;
            } while (uVar7 < this->NumSlices);
          }
          FBulkData::Unlock(this_00);
        }
        local_res8 = local_res8 + 1;
        uVar14 = uVar14 + 1;
        pFVar13 = local_68;
      } while (local_res8 <= local_70);
    }
    this->LODGroupStatName =
         FTextureResource::TextureGroupStatFNames[*(byte *)((longlong)&param_1->_padding_ + 7)];
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// GetData @ 14888d420

void __thiscall
FTextureCubeArrayResource::GetData
          (FTextureCubeArrayResource *this,uint param_1,int param_2,int param_3,void *param_4,
          uint param_5)

{
  EPixelFormat EVar1;
  int iVar2;
  FTexturePlatformData *pFVar3;
  FTexturePlatformData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long64 lVar9;
  ulong64 _Size;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  void *_Src;
  EPixelFormat EVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint local_res8;
  uint uStackX_c;
  int local_res10;
  uint local_res18;
  
  uVar7 = param_5;
  uVar17 = param_3 * this->NumSlices + param_2 + param_1 * 6;
  uVar14 = ~uVar17 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar17 < (this->MipData).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar15 = (longlong)(int)uVar17;
  if ((*(longlong *)((this->MipData).AllocatorInstance.Data + lVar15 * 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipData[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCubeArray.cpp"
                         ,0x105,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = (ulonglong)param_5;
  if (param_5 == 0) {
    pFVar3 = this->Owner->PrivatePlatformData;
    uVar7 = 0;
    if (param_3 < (pFVar3->Mips).Array.ArrayNum) {
      uVar7 = (uint)~param_3 >> 0x1f;
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
    pFVar4 = this->Owner->PrivatePlatformData;
    uVar12 = 0;
    if (pFVar4 != (FTexturePlatformData *)0x0) {
      uVar12 = (ulonglong)(pFVar4->PackedData & 0x1fffffff);
    }
    lVar9 = FBulkData::GetBulkDataSize
                      ((FBulkData *)
                       (*(longlong *)
                         ((pFVar3->Mips).Array.AllocatorInstance.Data + (longlong)param_3 * 8) +
                       0x20));
    uVar7 = 0;
    if ((int)uVar17 < (this->MipData).ArrayNum) {
      uVar7 = uVar14;
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
    memcpy(param_4,*(void **)((this->MipData).AllocatorInstance.Data + lVar15 * 8),
           lVar9 / (longlong)uVar12);
  }
  else {
    pFVar3 = this->Owner->PrivatePlatformData;
    if (pFVar3 == (FTexturePlatformData *)0x0) {
      EVar13 = PF_Unknown;
      uVar11 = 0;
      param_5 = GPixelFormats[0].BlockSizeX;
      uVar10 = 0;
      uVar8 = GPixelFormats[0].BlockSizeY;
      local_res10 = GPixelFormats[0].BlockBytes;
    }
    else {
      EVar1 = pFVar3->PixelFormat;
      uVar10 = (uint)EVar1;
      param_5 = GPixelFormats[EVar1].BlockSizeX;
      EVar13 = (EPixelFormat)pFVar3->SizeY;
      uVar11 = pFVar3->SizeX;
      uVar8 = GPixelFormats[EVar1].BlockSizeY;
      local_res10 = GPixelFormats[EVar1].BlockBytes;
    }
    CalcMipMapExtent((uint)&local_res8,uVar11,EVar13,uVar10);
    uVar8 = ((uStackX_c - 1) + uVar8) / uVar8;
    uVar11 = (((param_5 - 1) + local_res8) / param_5) * local_res10;
    local_res18 = uVar8;
    _Size = CalcTextureMipMapSize(local_res8,uStackX_c,(EPixelFormat)uVar10,0);
    iVar2 = (this->MipData).ArrayNum;
    if (uVar11 == uVar7) {
      uVar7 = 0;
      if ((int)uVar17 < iVar2) {
        uVar7 = uVar14;
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
      memcpy(param_4,*(void **)((this->MipData).AllocatorInstance.Data + lVar15 * 8),_Size);
    }
    else {
      uVar7 = 0;
      if ((int)uVar17 < iVar2) {
        uVar7 = uVar14;
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
      _Src = *(void **)((this->MipData).AllocatorInstance.Data + lVar15 * 8);
      if (uVar8 != 0) {
        uVar16 = (ulonglong)local_res18;
        do {
          memcpy(param_4,_Src,(ulonglong)uVar11);
          _Src = (void *)((longlong)_Src + (ulonglong)uVar11);
          param_4 = (void *)((longlong)param_4 + uVar12);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      uVar7 = 0;
      if ((int)uVar17 < (this->MipData).ArrayNum) {
        uVar7 = uVar14;
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
      if (((longlong)_Src -
           *(longlong *)((this->MipData).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) !=
           _Size) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(PTRINT(Src) - PTRINT(MipData[Index])) == PTRINT(MipSizeInBytes)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCubeArray.cpp"
                             ,0x12e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  uVar7 = 0;
  if ((int)uVar17 < (this->MipData).ArrayNum) {
    uVar7 = uVar14;
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
  FMemory::Free(*(void **)((this->MipData).AllocatorInstance.Data + (longlong)(int)uVar17 * 8));
  uVar7 = 0;
  if ((int)uVar17 < (this->MipData).ArrayNum) {
    uVar7 = uVar14;
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
  *(undefined8 *)((this->MipData).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) = 0;
  return;
}

// GetSizeX @ 148890790

uint __thiscall FTextureCubeArrayResource::GetSizeX(FTextureCubeArrayResource *this)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  
  if (this->ProxiedResource != (FTextureCubeArrayResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488907a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->ProxiedResource->_padding_ + 0x30))();
    return uVar2;
  }
  pFVar1 = this->Owner->PrivatePlatformData;
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    return pFVar1->SizeX;
  }
  return 0;
}

// GetSizeY @ 1488908c0

uint __thiscall FTextureCubeArrayResource::GetSizeY(FTextureCubeArrayResource *this)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  
  if (this->ProxiedResource != (FTextureCubeArrayResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488908d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->ProxiedResource->_padding_ + 0x38))();
    return uVar2;
  }
  pFVar1 = this->Owner->PrivatePlatformData;
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    return pFVar1->SizeY;
  }
  return 0;
}

// GetSizeZ @ 1488909d0

uint __thiscall FTextureCubeArrayResource::GetSizeZ(FTextureCubeArrayResource *this)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  
  if (this->ProxiedResource != (FTextureCubeArrayResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488909e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->ProxiedResource->_padding_ + 0x40))();
    return uVar2;
  }
  pFVar1 = this->Owner->PrivatePlatformData;
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    return pFVar1->PackedData & 0x1fffffff;
  }
  return 0;
}

// InitRHI @ 148893f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureCubeArrayResource::InitRHI(FTextureCubeArrayResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  FRHITexture *pFVar5;
  FRHITexture *pFVar6;
  FRHIResource *pFVar7;
  FName FVar8;
  FTexturePlatformData *pFVar9;
  UTextureCubeArray *this_00;
  code *pcVar10;
  void *pvVar11;
  uint uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  TRefCountPtr<FRHITexture> TVar20;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FRHIResource *pFVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uchar auVar25 [8];
  uint uVar26;
  uint uVar27;
  undefined1 auStackY_2c8 [32];
  FLLMScope local_260;
  FLLMScope local_25c;
  FLLMScope local_258;
  FLLMScope local_254;
  uint local_250;
  FSamplerStateInitializerRHI local_248;
  FName local_228;
  FName local_220;
  undefined8 local_218;
  undefined1 local_210 [48];
  uint local_1e0;
  uint local_1dc;
  FStatMessage local_1d8;
  FString local_1c8;
  FRHITexture *local_1b8;
  uint local_1b0;
  uint local_1ac;
  FNameEntryId local_1a8;
  FNameEntryId local_1a0;
  undefined2 local_19c;
  FRHITexture *local_198;
  uint local_190;
  uint local_18c;
  uint local_188;
  undefined4 local_180;
  undefined2 local_17c;
  longlong local_178;
  FName local_170;
  void *local_168 [2];
  uint local_158;
  FRHITextureDesc local_148;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  FScriptContainerElement *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (this->ProxiedResource == (FTextureCubeArrayResource *)0x0) {
    lVar24 = (longlong)this->TextureSize;
    if (lVar24 != 0) {
      FVar17 = StatPtr_STAT_TextureMemory;
      if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
        pFVar16 = ::FName::FName(&local_170,"STAT_TextureMemory");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar16,
                            L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                            true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar8 = *(FName *)FVar17;
      if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar18 == (FThreadStats *)0x0) {
          pFVar19 = FThreadStatsPool::Get();
          pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
        }
        local_1dc = FVar8.Number & 0xffffafff | 0xa000;
        local_228 = FVar8;
        local_210._40_8_ = lVar24;
        local_1e0 = FVar8.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar18,(FStatMessage *)(local_210 + 0x28));
        FStatsTrace::Add(&local_228,lVar24);
        if (pFVar18->ScopeCount == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
    auVar25 = (uchar  [8])(longlong)this->TextureSize;
    if (((auVar25 != (uchar  [8])0x0) && (FVar8 = this->LODGroupStatName, FVar8 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_1d8.NameAndInfo.Index = FVar8.ComparisonIndex.Value;
      local_1d8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_220 = FVar8;
      local_1d8.StatData.Pad = auVar25;
      FThreadStats::AddStatMessage(pFVar18,&local_1d8);
      FStatsTrace::Add(&local_220,(long64)auVar25);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
    uVar27 = this->NumSlices / 6;
    pFVar9 = this->Owner->PrivatePlatformData;
    local_250 = uVar27;
    if (((pFVar9 == (FTexturePlatformData *)0x0) || ((pFVar9->Mips).Array.ArrayNum < 1)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner->GetNumMips() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCubeArray.cpp"
                            ,0x82,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    this_00 = this->Owner;
    bVar2 = *(byte *)((longlong)&this_00->_padding_ + 4);
    bVar3 = *(byte *)((longlong)&this_00->_padding_ + 6);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_1c8,(UObject *)0x0);
    local_f8 = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      local_f8 = local_1c8.Data.AllocatorInstance.Data;
    }
    local_148.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_148.ClearValue._0_8_ = 1;
    local_148.ClearValue.Value._4_8_ = 0;
    local_148.ClearValue.Value.Color[3] = 0.0;
    local_148.Depth = 1;
    pFVar9 = this->Owner->PrivatePlatformData;
    local_148.NumSamples = '\x01';
    local_148.Dimension = TextureCubeArray;
    local_148.UAVFormat = PF_Unknown;
    local_148.FastVRAMPercentage = 0xff;
    local_148.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_148.AliasableFormats.ArrayNum = 0;
    local_148.AliasableFormats.ArrayMax = 1;
    local_f0 = 0;
    local_e8 = 0;
    local_148.ArraySize = (ushort)uVar27;
    if (pFVar9 == (FTexturePlatformData *)0x0) {
      local_148.Extent.field0_0x0._s_0.Y = 0;
      local_148.NumMips = '\0';
      local_148.Format = PF_Unknown;
    }
    else {
      local_148.Extent.field0_0x0._s_0.Y = pFVar9->SizeX;
      local_148.Format = pFVar9->PixelFormat;
      local_148.NumMips = (uchar)(pFVar9->Mips).Array.ArrayNum;
    }
    local_148.ExtData = (pFVar9->OptData).ExtData;
    local_148.Flags = ((ulonglong)(~(uint)(bVar2 >> 1) & 1) << 0x10 | (ulonglong)(bVar3 & 1)) << 4;
    local_148.Extent.field0_0x0._s_0.X = local_148.Extent.field0_0x0._s_0.Y;
    FLazyName::Resolve(&`public:_virtual_void___cdecl_FTextureCubeArrayResource::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                        ::__l2::ClassName);
    local_e0 = local_218;
    local_d8 = this->_padding_;
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
    local_78 = local_f8;
    local_70 = (undefined4)local_f0;
    local_6c = local_f0._4_4_;
    local_68 = local_e8;
    local_60 = local_e0;
    local_58 = local_d8;
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar20 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_210);
    pTVar1 = &this->TextureCubeRHI;
    if ((FRHITexture *)pTVar1 != TVar20.Reference) {
      pFVar5 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar20.Reference)->_padding_;
      (TVar20.Reference)->_padding_ = 0;
      if (pFVar5 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_210._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_210._0_8_);
    }
    pFVar5 = pTVar1->Reference;
    pFVar6 = (FRHITexture *)this->_padding_;
    if (pFVar6 != pFVar5) {
      this->_padding_ = (longlong)pFVar5;
      if (pFVar5 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar5);
      }
      if (pFVar6 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)this->_padding_);
    pFVar9 = this->Owner->PrivatePlatformData;
    if (pFVar9 == (FTexturePlatformData *)0x0) {
      iVar22 = 0;
    }
    else {
      iVar22 = (pFVar9->Mips).Array.ArrayNum;
    }
    uVar15 = (pFVar9->OptData).NumMipsInTail;
    uVar26 = 0;
    if ((int)uVar15 < 1) {
      uVar15 = 1;
    }
    if (-1 < (int)(iVar22 - uVar15)) {
      do {
        uVar23 = 0;
        if (uVar27 != 0) {
          do {
            uVar27 = 0;
            do {
              pFVar5 = (this->TextureCubeRHI).Reference;
              FLLMScope::FLLMScope(&local_25c,Textures,false,None,Default,true);
              FMemScope::FMemScope((FMemScope *)(local_210 + 0x10),Textures,true);
              local_19c = 0;
              local_1a0.Value = 1;
              local_1b8 = pFVar5;
              local_1b0 = uVar27;
              local_1ac = uVar23;
              local_1a8.Value = uVar26;
              FLLMScope::FLLMScope(&local_260,Textures,false,None,Default,true);
              FMemScope::FMemScope((FMemScope *)(local_210 + 8),Textures,true);
              (**(code **)(GDynamicRHI->_padding_ + 0x1e0))
                        (GDynamicRHI,local_168,0x154be5ed0,&local_1b8);
              FMemScope::~FMemScope((FMemScope *)(local_210 + 8));
              FLLMScope::~FLLMScope(&local_260);
              uVar12 = local_158;
              pvVar11 = local_168[0];
              FMemScope::~FMemScope((FMemScope *)(local_210 + 0x10));
              FLLMScope::~FLLMScope(&local_25c);
              GetData(this,uVar23,uVar27,uVar26,pvVar11,uVar12);
              pFVar5 = (this->TextureCubeRHI).Reference;
              FLLMScope::FLLMScope(&local_254,Textures,false,None,Default,true);
              FMemScope::FMemScope((FMemScope *)(local_210 + 0x20),Textures,true);
              local_17c = 0;
              local_180 = 3;
              local_198 = pFVar5;
              local_190 = uVar27;
              local_18c = uVar23;
              local_188 = uVar26;
              FLLMScope::FLLMScope(&local_258,Textures,false,None,Default,true);
              FMemScope::FMemScope((FMemScope *)(local_210 + 0x18),Textures,true);
              (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0);
              FMemScope::~FMemScope((FMemScope *)(local_210 + 0x18));
              FLLMScope::~FLLMScope(&local_258);
              FMemScope::~FMemScope((FMemScope *)(local_210 + 0x20));
              FLLMScope::~FLLMScope(&local_254);
              uVar27 = uVar27 + 1;
            } while (uVar27 < 6);
            uVar23 = uVar23 + 1;
            uVar27 = local_250;
          } while (uVar23 < local_250);
        }
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 <= (int)(iVar22 - uVar15));
    }
    this_01 = UDeviceProfileManager::Get(false);
    this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
    this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
    local_248.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_03,(UTexture *)this->Owner);
    local_248.AddressU.Value = '\x01';
    local_248.AddressV.Value = '\x01';
    local_248.AddressW.Value = '\x01';
    local_248.MipBias = 0.0;
    local_248.MinMipLevel = 0.0;
    local_248.MaxMipLevel = 3.4028235e+38;
    local_248.MaxAnisotropy = 0;
    local_248.BorderColor = 0;
    local_248.SamplerComparisonFunction.Value = '\0';
    pFVar21 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_248);
    pFVar7 = (FRHIResource *)this->_padding_;
    if (pFVar7 != pFVar21) {
      this->_padding_ = (longlong)pFVar21;
      if (pFVar21 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar21);
      }
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    cVar4 = (char)this->Owner->_padding_;
    if (((byte)(cVar4 - 3U) < 2) || ((byte)(cVar4 - 8U) < 2)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar14;
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar5 = (this->ProxiedResource->TextureCubeRHI).Reference;
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    pTVar1 = &this->TextureCubeRHI;
    if (pTVar1 != (TRefCountPtr<FRHITexture> *)&local_178) {
      pFVar6 = pTVar1->Reference;
      pTVar1->Reference = pFVar5;
      pFVar5 = pFVar6;
    }
    if (pFVar5 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
    pFVar5 = pTVar1->Reference;
    pFVar6 = (FRHITexture *)this->_padding_;
    if (pFVar6 != pFVar5) {
      this->_padding_ = (longlong)pFVar5;
      if (pFVar5 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar5);
      }
      if (pFVar6 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
    }
    pFVar7 = (FRHIResource *)this->_padding_;
    pFVar21 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar7 != pFVar21) {
      this->_padding_ = (longlong)pFVar21;
      if (pFVar21 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar21);
      }
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)this->_padding_);
  }
  return;
}

// IsProxy @ 148895cc0

bool __thiscall FTextureCubeArrayResource::IsProxy(FTextureCubeArrayResource *this)

{
  return this->ProxiedResource != (FTextureCubeArrayResource *)0x0;
}

// ReleaseRHI @ 148896d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTextureCubeArrayResource::ReleaseRHI(FTextureCubeArrayResource *this)

{
  FName FVar1;
  FRHITextureReference *pFVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_TextureMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  uchar auVar9 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_48;
  FStatMessage local_38;
  
  auVar9 = (uchar  [8])(longlong)this->TextureSize;
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_TextureMemory;
    if (StatPtr_STAT_TextureMemory == (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)0x0) {
      pFVar5 = ::FName::FName(local_res18,"STAT_TextureMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_TextureMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory,*pFVar5,
                         L"Texture Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                         ,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_48.StatData.Pad = auVar9;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_48);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  auVar9 = (uchar  [8])(longlong)this->TextureSize;
  if (((auVar9 != (uchar  [8])0x0) && (FVar1 = this->LODGroupStatName, FVar1 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Index = FVar1.ComparisonIndex.Value;
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res10 = FVar1;
    local_38.StatData.Pad = auVar9;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Add(&local_res10,-(longlong)auVar9);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  pFVar2 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar2,(FRHITexture *)0x0)
  ;
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

