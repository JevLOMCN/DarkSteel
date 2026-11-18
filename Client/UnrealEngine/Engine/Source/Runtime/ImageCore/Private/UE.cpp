// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 16

// Construct<FSharedImageConstRefBlueprint> @ 142348be0

void __cdecl UE::CoreUObject::Private::Construct<FSharedImageConstRefBlueprint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FSharedImageConstRefBlueprint> @ 142348d50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSharedImageConstRefBlueprint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FSharedImageConstRefBlueprint> @ 142348d60

void __cdecl UE::CoreUObject::Private::Destruct<FSharedImageConstRefBlueprint>(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142348d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Copy<FSharedImageConstRefBlueprint> @ 142348da0

bool __cdecl
UE::CoreUObject::Private::Copy<FSharedImageConstRefBlueprint>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = param_1;
    do {
      puVar3 = *(undefined8 **)((longlong)plVar5 + ((longlong)param_2 - (longlong)param_1));
      puVar4 = (undefined8 *)*plVar5;
      if (puVar4 != puVar3) {
        *plVar5 = (longlong)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
        }
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      param_3 = param_3 + -1;
      plVar5 = plVar5 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// AllocateMips @ 142355e80

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EDDSError __cdecl UE::DDS::AllocateMips(FDDSFile *param_1,FDXGIFormatInfo *param_2,uint param_3)

{
  TArray<UE::DDS::FDDSMip,TSizedDefaultAllocator<32>_> *this;
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  long64 *plVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  EDDSError EVar8;
  ulong64 uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  size_t _Size;
  undefined1 local_res18 [8];
  
  this = &param_1->Mips;
  piVar1 = &(param_1->Mips).ArrayMax;
  (param_1->Mips).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&this->AllocatorInstance,0,piVar1);
  }
  TArray<UE::DDS::FDDSMip,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (this,param_1->ArraySize * param_1->MipCount,Default);
  if ((param_3 & 2) == 0) {
    uVar9 = InitMips(param_1,param_2);
    pTVar2 = &param_1->MipRawData;
    lVar11 = (param_1->MipRawData).ArrayNum;
    plVar3 = &(param_1->MipRawData).ArrayNum;
    if (lVar11 < (longlong)uVar9) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar9 - lVar11,&pTVar2->AllocatorInstance,plVar3,
                 &(param_1->MipRawData).ArrayMax);
    }
    else {
      if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar9);
      }
      if ((longlong)uVar9 < lVar11) {
        lVar11 = lVar11 - uVar9;
        if ((((uint)(uVar9 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar11 >> 0x3f) ^ 1)) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            EVar8 = (*pcVar5)();
            return EVar8;
          }
        }
        if (lVar11 != 0) {
          pFVar14 = (pTVar2->AllocatorInstance).Data + uVar9;
          _Size = (*plVar3 - lVar11) - uVar9;
          if (_Size != 0) {
            memmove(pFVar14,pFVar14 + lVar11,_Size);
          }
          *plVar3 = *plVar3 - lVar11;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,&pTVar2->AllocatorInstance,*plVar3,&(param_1->MipRawData).ArrayMax);
        }
      }
    }
    pFVar14 = (this->AllocatorInstance).Data;
    uVar12 = 0;
    iVar4 = (param_1->Mips).ArrayNum;
    pFVar13 = pFVar14 + (longlong)iVar4 * 0x30;
    while( true ) {
      if ((param_1->Mips).ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar14 == pFVar13) break;
      uVar7 = 0;
      if ((longlong)uVar12 < *plVar3) {
        uVar7 = (uint)(uVar12 >> 0x3f) ^ 1;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
      }
      pFVar10 = (pTVar2->AllocatorInstance).Data + uVar12;
      uVar12 = uVar12 + *(longlong *)(pFVar14 + 0x20);
      *(FScriptContainerElement **)(pFVar14 + 0x28) = pFVar10;
      pFVar14 = pFVar14 + 0x30;
    }
    if (uVar12 != uVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentOffset == AllMipsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                         ,0x262,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar8 = (*pcVar5)();
        return EVar8;
      }
    }
  }
  return OK;
}

// DXGIFormatAddSRGB @ 14235b3f0

EDXGIFormat __cdecl UE::DDS::DXGIFormatAddSRGB(EDXGIFormat param_1)

{
  EDXGIFormat *pEVar1;
  int iVar2;
  
  iVar2 = 0;
  pEVar1 = DXGIFormatSRGBTable;
  do {
    if (*pEVar1 == param_1) {
      if (iVar2 < 0) {
        return param_1;
      }
      return DXGIFormatSRGBTable[(longlong)iVar2 | 1];
    }
    iVar2 = iVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while ((longlong)pEVar1 < 0x1508b8ec8);
  return param_1;
}

// DXGIFormatFromRawFormat @ 14235b430

EDXGIFormat __cdecl UE::DDS::DXGIFormatFromRawFormat(Type param_1,EGammaSpace param_2)

{
  switch(param_1) {
  case G8:
    return R8_UNORM;
  case BGRA8:
    if (param_2 != Linear) {
      return B8G8R8A8_UNORM_SRGB;
    }
switchD_14235b44a_caseD_2:
    return B8G8R8A8_UNORM;
  case BGRE8:
    goto switchD_14235b44a_caseD_2;
  case RGBA16:
    return R16G16B16A16_UNORM;
  case RGBA16F:
    return R16G16B16A16_FLOAT;
  case RGBA32F:
    return R32G32B32A32_FLOAT;
  case G16:
    return R16_UNORM;
  case R16F:
    return R16_FLOAT;
  case R32F:
    return R32_FLOAT;
  default:
    return UNKNOWN;
  }
}

// DXGIFormatGetClosestRawFormat @ 14235b4c0

Type __cdecl UE::DDS::DXGIFormatGetClosestRawFormat(EDXGIFormat param_1,bool *param_2)

{
  EDXGIFormat EVar1;
  FDXGIFormatRawFormatMapping *pFVar2;
  
  pFVar2 = DXGIRawFormatMap;
  EVar1 = DXGIRawFormatMap[0].DXGIFormat;
  while( true ) {
    if (EVar1 == UNKNOWN) {
      return Invalid;
    }
    if (EVar1 == param_1) break;
    EVar1 = pFVar2[1].DXGIFormat;
    pFVar2 = pFVar2 + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = pFVar2->bIsExactMatch;
  }
  return pFVar2->RawFormat;
}

// DXGIFormatGetName @ 14235b500

wchar_t * __cdecl UE::DDS::DXGIFormatGetName(EDXGIFormat param_1)

{
  ulonglong uVar1;
  FDXGIFormatName *pFVar2;
  
  uVar1 = 0;
  pFVar2 = FormatList;
  do {
    if (pFVar2->Format == param_1) {
      return FormatList[uVar1].Name;
    }
    uVar1 = uVar1 + 1;
    pFVar2 = pFVar2 + 1;
  } while (uVar1 < 0x7a);
  return FormatList[0].Name;
}

// DXGIFormatHasLinearAndSRGBForm @ 14235b540

bool __cdecl UE::DDS::DXGIFormatHasLinearAndSRGBForm(EDXGIFormat param_1)

{
  EDXGIFormat *pEVar1;
  int iVar2;
  
  iVar2 = 0;
  pEVar1 = DXGIFormatSRGBTable;
  do {
    if (*pEVar1 == param_1) goto LAB_14235b564;
    iVar2 = iVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while ((longlong)pEVar1 < 0x1508b8ec8);
  iVar2 = -1;
LAB_14235b564:
  return (bool)((byte)((uint)iVar2 >> 0x1f) ^ 1);
}

// DXGIFormatIsSRGB @ 14235b580

bool __cdecl UE::DDS::DXGIFormatIsSRGB(EDXGIFormat param_1)

{
  EDXGIFormat *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  pEVar1 = DXGIFormatSRGBTable;
  while (*pEVar1 != param_1) {
    uVar2 = uVar2 + 1;
    pEVar1 = pEVar1 + 1;
    if (0x1508b8ec7 < (longlong)pEVar1) {
      return false;
    }
  }
  if ((int)uVar2 < 0) {
    return false;
  }
  if ((uVar2 & 1) == 0) {
    return false;
  }
  return true;
}

// DXGIFormatRemoveSRGB @ 14235b5c0

EDXGIFormat __cdecl UE::DDS::DXGIFormatRemoveSRGB(EDXGIFormat param_1)

{
  EDXGIFormat *pEVar1;
  int iVar2;
  
  iVar2 = 0;
  pEVar1 = DXGIFormatSRGBTable;
  do {
    if (*pEVar1 == param_1) {
      if (iVar2 < 0) {
        return param_1;
      }
      return DXGIFormatSRGBTable[(longlong)iVar2 & 0xfffffffffffffffe];
    }
    iVar2 = iVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while ((longlong)pEVar1 < 0x1508b8ec8);
  return param_1;
}

// GetDDSHeaderMaximalSize @ 14235c410

long64 __cdecl UE::DDS::GetDDSHeaderMaximalSize(void)

{
  return 0x94;
}

// GetDDSHeaderMinimalSize @ 14235c420

long64 __cdecl UE::DDS::GetDDSHeaderMinimalSize(void)

{
  return 0x80;
}

// InitMips @ 14235f2c0

long64 __cdecl UE::DDS::InitMips(FDDSFile *param_1,FDXGIFormatInfo *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong local_res8;
  
  uVar14 = 0;
  lVar6 = 0;
  local_res8 = 0;
  if (param_1->ArraySize != 0) {
    do {
      uVar5 = param_1->MipCount;
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          uVar8 = uVar5 * uVar14 + uVar9;
          uVar5 = 0;
          if ((int)uVar8 < (param_1->Mips).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            lVar6 = (*pcVar3)();
            return lVar6;
          }
          uVar5 = param_1->Width;
          pFVar15 = (param_1->Mips).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30;
          if ((0x14 < uVar9) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("level <= FDDSFile::MAX_MIPS_SUPPORTED",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                                 ,0x161,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            lVar6 = (*pcVar3)();
            return lVar6;
          }
          uVar8 = param_1->Height;
          bVar7 = (byte)uVar9;
          uVar13 = 1;
          if (uVar5 >> (bVar7 & 0x1f) != 0) {
            uVar13 = uVar5 >> (bVar7 & 0x1f);
          }
          if ((0x14 < uVar9) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("level <= FDDSFile::MAX_MIPS_SUPPORTED",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                                 ,0x161,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            lVar6 = (*pcVar3)();
            return lVar6;
          }
          uVar5 = 1;
          if (uVar8 >> (bVar7 & 0x1f) != 0) {
            uVar5 = uVar8 >> (bVar7 & 0x1f);
          }
          uVar8 = param_1->Depth;
          if ((0x14 < uVar9) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("level <= FDDSFile::MAX_MIPS_SUPPORTED",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                                 ,0x161,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            lVar6 = (*pcVar3)();
            return lVar6;
          }
          uVar1 = param_2->UnitWidth;
          uVar11 = 1;
          if (uVar8 >> (bVar7 & 0x1f) != 0) {
            uVar11 = (ulonglong)(uVar8 >> (bVar7 & 0x1f));
          }
          uVar8 = param_2->UnitHeight;
          *(int *)(pFVar15 + 8) = (int)uVar11;
          uVar9 = uVar9 + 1;
          *(uint *)pFVar15 = uVar13;
          *(uint *)(pFVar15 + 4) = uVar5;
          lVar10 = ((ulonglong)((uVar1 - 1) + uVar13) / (ulonglong)uVar1) *
                   (ulonglong)param_2->UnitBytes;
          *(undefined8 *)(pFVar15 + 0x28) = 0;
          *(longlong *)(pFVar15 + 0x10) = lVar10;
          uVar2 = (ulonglong)((uVar8 - 1) + uVar5) / (ulonglong)uVar8;
          lVar12 = uVar11 * uVar2 * lVar10;
          *(ulonglong *)(pFVar15 + 0x18) = uVar2 * lVar10;
          lVar6 = local_res8 + lVar12;
          *(longlong *)(pFVar15 + 0x20) = lVar12;
          uVar5 = param_1->MipCount;
          local_res8 = lVar6;
        } while (uVar9 < uVar5);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_1->ArraySize);
  }
  return lVar6;
}

// ParseHeader @ 142360bb0

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDDSError __cdecl
UE::DDS::ParseHeader(FDDSFile *param_1,FDDSHeaderWithMagic *param_2,FDDSHeaderDX10 *param_3)

{
  bool bVar1;
  uint uVar2;
  EDDSError EVar3;
  ulonglong uVar4;
  byte bVar5;
  EDXGIFormat EVar6;
  ulonglong uVar7;
  bool bVar8;
  
  bVar1 = false;
  uVar4 = 0;
  if ((((param_2->ddspf).flags & 4) == 0) || ((param_2->ddspf).fourCC != 0x30315844)) {
    param_1->Dimension = (param_2->caps2 & 0x200000 | 0x400000) >> 0x15;
    uVar2 = (param_2->ddspf).flags;
    if ((uVar2 & 4) == 0) {
      do {
        if (((((uVar2 & 0xa0042) == *(uint *)((longlong)&BitmaskToDXGITable[0].Flags + uVar4)) &&
             ((param_2->ddspf).RGBBitCount ==
              *(uint *)((longlong)&BitmaskToDXGITable[0].Bits + uVar4))) &&
            ((param_2->ddspf).RBitMask == *(uint *)((longlong)&BitmaskToDXGITable[0].RMask + uVar4))
            ) && ((((param_2->ddspf).GBitMask ==
                    *(uint *)((longlong)&BitmaskToDXGITable[0].GMask + uVar4) &&
                   ((param_2->ddspf).BBitMask ==
                    *(uint *)((longlong)&BitmaskToDXGITable[0].BMask + uVar4))) &&
                  ((param_2->ddspf).ABitMask ==
                   *(uint *)((longlong)&BitmaskToDXGITable[0].AMask + uVar4))))) {
          EVar6 = *(EDXGIFormat *)((longlong)&BitmaskToDXGITable[0].Format + uVar4);
          goto LAB_142360c6e;
        }
        uVar4 = uVar4 + 0x20;
      } while (uVar4 < 0x280);
    }
    else {
      uVar7 = uVar4;
      do {
        if ((param_2->ddspf).fourCC == *(uint *)((longlong)&FOURCCToDXGITable[0].fourcc + uVar4)) {
          EVar6 = FOURCCToDXGITable[uVar7].Format;
          goto LAB_142360c6e;
        }
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 0xc;
      } while (uVar4 < 0x108);
    }
    EVar6 = UNKNOWN;
LAB_142360c6e:
    param_1->DXGIFormat = EVar6;
    bVar5 = (byte)(param_2->caps2 >> 9);
  }
  else {
    if (2 < param_3->resource_dimension - 2) {
      if (2 < (byte)LogDDSFile._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
      }
      return BadResourceDimension;
    }
    bVar1 = true;
    param_1->Dimension = param_3->resource_dimension - 1;
    param_1->DXGIFormat = param_3->dxgi_format;
    bVar5 = (byte)(param_3->misc_flag >> 2);
  }
  param_1->Width = param_2->width;
  param_1->Height = param_2->height;
  if (param_1->Dimension == 3) {
    uVar2 = param_2->depth;
  }
  else {
    uVar2 = 1;
  }
  param_1->Depth = uVar2;
  if ((param_2->caps & 0x400000) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_2->num_mips;
  }
  param_1->MipCount = uVar2;
  if (bVar1) {
    uVar2 = param_3->array_size;
  }
  else {
    uVar2 = 1;
  }
  param_1->ArraySize = uVar2;
  param_1->CreateFlags = 0;
  bVar8 = (bVar5 & 1) != 0;
  if (bVar8) {
    param_1->CreateFlags = 1;
    param_1->ArraySize = uVar2 * 6;
  }
  if (!bVar1) {
    param_1->CreateFlags = bVar8 | 4;
  }
  EVar3 = FDDSFile::Validate(param_1);
  return EVar3;
}

