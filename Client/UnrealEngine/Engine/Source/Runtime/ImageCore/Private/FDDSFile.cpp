// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 15

// ConvertChannelOrder @ 142357de0

void __thiscall UE::DDS::FDDSFile::ConvertChannelOrder(FDDSFile *this,EChannelOrder param_1)

{
  undefined1 uVar1;
  int iVar2;
  EDXGIFormat *pEVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  EChannelOrder EVar7;
  longlong lVar8;
  undefined1 local_res18 [8];
  
  pEVar3 = DXGIFormatRGBATable;
  EVar7 = RGBA;
  do {
    if (*pEVar3 == this->DXGIFormat) {
      if ((-1 < (int)EVar7) && ((EVar7 & BGRA) != param_1)) {
        this->DXGIFormat = DXGIFormatRGBATable[(longlong)(int)EVar7 ^ 1];
        iVar2 = (this->Mips).ArrayNum;
        pFVar5 = (this->Mips).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)iVar2 * 0x30;
        while( true ) {
          if ((this->Mips).ArrayNum != iVar2) {
            `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar5 == pFVar6) break;
          puVar4 = *(undefined1 **)(pFVar5 + 0x28);
          if (0 < *(longlong *)(pFVar5 + 0x20)) {
            lVar8 = (*(longlong *)(pFVar5 + 0x20) - 1U >> 2) + 1;
            do {
              uVar1 = *puVar4;
              *puVar4 = puVar4[2];
              puVar4[2] = uVar1;
              puVar4 = puVar4 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          pFVar5 = pFVar5 + 0x30;
        }
      }
      return;
    }
    EVar7 = EVar7 + BGRA;
    pEVar3 = pEVar3 + 1;
  } while ((longlong)pEVar3 < 0x1508b8ee8);
  return;
}

// ConvertRGBXtoRGBA @ 142357ee0

void __thiscall UE::DDS::FDDSFile::ConvertRGBXtoRGBA(FDDSFile *this)

{
  EDXGIFormat EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  EVar1 = this->DXGIFormat;
  if (EVar1 == R8G8B8X8) {
    this->DXGIFormat = R8G8B8A8_UNORM_SRGB;
  }
  else if (EVar1 == B8G8R8X8_UNORM) {
    this->DXGIFormat = B8G8R8A8_UNORM;
  }
  else if (EVar1 == B8G8R8X8_UNORM_SRGB) {
    this->DXGIFormat = B8G8R8A8_UNORM_SRGB;
  }
  else {
    if (EVar1 != B8G8R8X8_TYPELESS) {
      return;
    }
    this->DXGIFormat = B8G8R8A8_TYPELESS;
  }
  pFVar3 = (this->Mips).AllocatorInstance.Data;
  iVar2 = (this->Mips).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Mips).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (0 < *(longlong *)(pFVar3 + 0x20)) {
      *(undefined1 *)(*(longlong *)(pFVar3 + 0x28) + 3) = 0xff;
    }
    pFVar3 = pFVar3 + 0x30;
  }
  return;
}

// CreateEmpty2D @ 14235ab40

/* WARNING: Enum "EDDSError": Some values do not have unique names */

FDDSFile * __cdecl
UE::DDS::FDDSFile::CreateEmpty2D
          (uint param_1,uint param_2,uint param_3,EDXGIFormat param_4,uint param_5,
          EDDSError *param_6)

{
  FDDSFile *pFVar1;
  
  pFVar1 = CreateEmpty(2,param_1,param_2,1,param_3,1,param_4,param_5,param_6);
  return pFVar1;
}

// CreateEmpty @ 14235ab90

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDDSFile * __cdecl
UE::DDS::FDDSFile::CreateEmpty
          (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          EDXGIFormat param_7,uint param_8,EDDSError *param_9)

{
  FScriptContainerElement *pFVar1;
  EDDSError EVar2;
  FDDSFile *pFVar3;
  FDXGIFormatName *pFVar4;
  FDXGIFormatInfo *pFVar5;
  byte bVar6;
  FDXGIFormatInfo *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  EDDSError *pEVar9;
  FDXGIFormatInfo *pFVar10;
  EDDSError local_28 [4];
  
  pEVar9 = local_28;
  if (param_9 != (EDDSError *)0x0) {
    pEVar9 = param_9;
  }
  pFVar3 = ::operator_new(0x48);
  if (pFVar3 == (FDDSFile *)0x0) {
    *pEVar9 = OutOfMemory;
    return (FDDSFile *)0x0;
  }
  pFVar10 = (FDXGIFormatInfo *)0x0;
  (pFVar3->Mips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Mips).ArrayNum = 0;
  (pFVar3->Mips).ArrayMax = 0;
  (pFVar3->MipRawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->MipRawData).ArrayNum = 0;
  (pFVar3->MipRawData).ArrayMax = 0;
  pFVar3->Dimension = param_1;
  pFVar3->Width = param_2;
  pFVar3->Height = param_3;
  pFVar3->Depth = param_4;
  pFVar3->MipCount = param_5;
  pFVar3->ArraySize = param_6;
  pFVar3->DXGIFormat = param_7;
  pFVar3->CreateFlags = param_8 & 0xfffffffd;
  if (param_7 != UNKNOWN) {
    pFVar7 = SupportedFormatList;
    pFVar5 = pFVar10;
    do {
      if (param_7 == pFVar7->Format) {
        if (((ulonglong)pFVar5 & 0xfffffffffffffff) != 0xfffffffeaf74711) {
          if (param_1 == 1) {
            if ((param_3 == 1) && (param_4 == 1)) goto LAB_14235ad48;
            if (2 < (byte)LogDDSFile._0_1_) {
              pFVar8 = &::LOG_Static;
              goto LAB_14235b01e;
            }
            goto LAB_14235b02a;
          }
          if (param_1 == 2) {
            if (param_4 == 1) goto LAB_14235ad48;
            if ((byte)LogDDSFile._0_1_ < 3) goto LAB_14235b02a;
            pFVar8 = &::LOG_Static;
LAB_14235b01e:
            Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogDDSFile);
          }
          else {
            if (param_1 != 3) {
              if (2 < (byte)LogDDSFile._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
              }
              *pEVar9 = BadResourceDimension;
              goto LAB_14235b030;
            }
            if (param_6 != 1) {
              if (2 < (byte)LogDDSFile._0_1_) {
                pFVar8 = &::LOG_Static;
                goto LAB_14235b01e;
              }
              goto LAB_14235b02a;
            }
LAB_14235ad48:
            if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) ||
               ((param_5 == 0 || (param_6 == 0)))) {
              if (2 < (byte)LogDDSFile._0_1_) {
                pFVar8 = &::LOG_Static;
                goto LAB_14235b01e;
              }
            }
            else if (((param_2 < 0x100000) && (param_3 < 0x100000)) && (param_4 < 0x100000)) {
              if (0x14 < param_5) {
                if (2 < (byte)LogDDSFile._0_1_) {
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                }
LAB_14235adbb:
                *pEVar9 = BadMipmapCount;
                goto LAB_14235b030;
              }
              if (param_6 < 0x100000) {
                if ((float)param_2 * (float)param_3 * (float)param_4 * (float)param_6 <=
                    __real_53800000) {
                  bVar6 = (char)param_5 - 1;
                  if (((param_2 >> (bVar6 & 0x1f) == 0) && (param_3 >> (bVar6 & 0x1f) == 0)) &&
                     (param_4 >> (bVar6 & 0x1f) == 0)) {
                    if ((byte)LogDDSFile._0_1_ < 3) goto LAB_14235adbb;
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                    *pEVar9 = BadMipmapCount;
                    goto LAB_14235b030;
                  }
                  if ((param_8 & 1) == 0) {
LAB_14235af65:
                    *pEVar9 = OK;
                    pFVar7 = SupportedFormatList;
                    pFVar5 = pFVar10;
                    goto LAB_14235af70;
                  }
                  if (param_1 == 2) {
                    if ((param_2 == param_3) && (param_4 == 1)) {
                      if ((5 < param_6) && (param_6 == (param_6 / 6) * 6)) goto LAB_14235af65;
                      if (2 < (byte)LogDDSFile._0_1_) {
                        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile)
                        ;
                        *pEVar9 = BadCubemap;
                        goto LAB_14235b030;
                      }
                    }
                    else if (2 < (byte)LogDDSFile._0_1_) {
                      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                      *pEVar9 = BadCubemap;
                      goto LAB_14235b030;
                    }
                  }
                  else if (2 < (byte)LogDDSFile._0_1_) {
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                  }
                  *pEVar9 = BadCubemap;
                  goto LAB_14235b030;
                }
                if (2 < (byte)LogDDSFile._0_1_) {
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                }
              }
              else if (2 < (byte)LogDDSFile._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
              }
            }
            else if (2 < (byte)LogDDSFile._0_1_) {
              Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Image_dimension_1508bbd30,
                         (FLogCategoryBase *)&LogDDSFile);
            }
          }
LAB_14235b02a:
          *pEVar9 = BadImageDimension;
          goto LAB_14235b030;
        }
        break;
      }
      pFVar5 = (FDXGIFormatInfo *)((longlong)&pFVar5->Format + 1);
      pFVar7 = pFVar7 + 1;
    } while (pFVar5 < (FDXGIFormatInfo *)0x65);
  }
  if (2 < (byte)LogDDSFile._0_1_) {
    pFVar4 = FormatList;
    do {
      if (pFVar4->Format == param_7) break;
      pFVar10 = (FDXGIFormatInfo *)((longlong)&pFVar10->Format + 1);
      pFVar4 = pFVar4 + 1;
    } while (pFVar10 < (FDXGIFormatInfo *)0x7a);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
  }
  *pEVar9 = BadPixelFormat;
LAB_14235b030:
  pFVar1 = (pFVar3->MipRawData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar3->Mips).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::operator_delete(pFVar3,0x48);
  return (FDDSFile *)0x0;
  while( true ) {
    pFVar5 = (FDXGIFormatInfo *)((longlong)&pFVar5->Format + 1);
    pFVar7 = pFVar7 + 1;
    if ((FDXGIFormatInfo *)&DAT_00000064 < pFVar5) break;
LAB_14235af70:
    if (param_7 == pFVar7->Format) {
      pFVar10 = SupportedFormatList + (longlong)pFVar5;
      break;
    }
  }
  EVar2 = AllocateMips(pFVar3,pFVar10,param_8);
  *pEVar9 = EVar2;
  if (EVar2 == OK) {
    return pFVar3;
  }
  goto LAB_14235b030;
}

// CreateFromDDSInMemory @ 14235b080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDDSFile * __cdecl
UE::DDS::FDDSFile::CreateFromDDSInMemory
          (uchar *param_1,long64 param_2,EDDSError *param_3,EDDSReadMipMode param_4)

{
  int iVar1;
  EDDSError EVar2;
  FDDSFile *pFVar3;
  FDDSFile *pFVar4;
  FDXGIFormatInfo *pFVar5;
  FDDSFile *pFVar6;
  uchar *_Src;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  EDDSError *pEVar9;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  EDDSError local_e4;
  FDDSHeaderDX10 local_e0;
  FDDSHeaderWithMagic local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pEVar9 = &local_e4;
  if (param_3 != (EDDSError *)0x0) {
    pEVar9 = param_3;
  }
  local_e0.misc_flag2 = 0;
  local_e0.dxgi_format = 0;
  local_e0.resource_dimension = 0;
  local_e0.misc_flag = 0;
  local_e0.array_size = 0;
  if ((ulonglong)param_2 < 0x80) {
LAB_14235b17b:
    *pEVar9 = IoError;
    pFVar3 = (FDDSFile *)0x0;
  }
  else {
    local_c8._16_8_ = *(undefined8 *)(param_1 + 0x10);
    local_c8._24_8_ = *(undefined8 *)(param_1 + 0x18);
    local_c8.reserved1._0_8_ = *(undefined8 *)(param_1 + 0x20);
    local_c8.reserved1._8_8_ = *(undefined8 *)(param_1 + 0x28);
    _Src = param_1 + 0x80;
    local_c8.Magic = *(uint *)param_1;
    local_c8.size = *(uint *)(param_1 + 4);
    local_c8.flags = *(uint *)(param_1 + 8);
    local_c8.height = *(uint *)(param_1 + 0xc);
    local_c8.ddspf._4_8_ = *(undefined8 *)(param_1 + 0x50);
    local_c8.ddspf._12_8_ = *(undefined8 *)(param_1 + 0x58);
    local_c8.reserved1._16_8_ = *(undefined8 *)(param_1 + 0x30);
    local_c8.reserved1._24_8_ = *(undefined8 *)(param_1 + 0x38);
    local_c8.reserved1._32_8_ = *(undefined8 *)(param_1 + 0x40);
    local_c8._72_8_ = *(undefined8 *)(param_1 + 0x48);
    local_c8.ddspf._20_8_ = *(undefined8 *)(param_1 + 0x60);
    local_c8._104_8_ = *(undefined8 *)(param_1 + 0x68);
    local_c8._112_8_ = *(undefined8 *)(param_1 + 0x70);
    local_c8._120_8_ = *(undefined8 *)(param_1 + 0x78);
    if (local_c8.Magic != 0x20534444) {
      *pEVar9 = NotADDS;
      return (FDDSFile *)0x0;
    }
    if (((local_c8.ddspf._4_8_ & 4) != 0) &&
       (local_c8.ddspf.fourCC = (uint)((ulonglong)local_c8.ddspf._4_8_ >> 0x20),
       local_c8.ddspf.fourCC == 0x30315844)) {
      if (param_1 + (param_2 - (longlong)_Src) < (uchar *)0x14) {
        if (3 < (byte)LogDDSFile._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
        }
        goto LAB_14235b17b;
      }
      local_e0._0_8_ = *(undefined8 *)_Src;
      local_e0._8_8_ = *(undefined8 *)(param_1 + 0x88);
      local_e0.misc_flag2 = *(uint *)(param_1 + 0x90);
      _Src = param_1 + 0x94;
    }
    pFVar4 = ::operator_new(0x48);
    pFVar6 = (FDDSFile *)0x0;
    pFVar3 = pFVar6;
    if (pFVar4 != (FDDSFile *)0x0) {
      pFVar4->Dimension = 0;
      pFVar4->Width = 0;
      pFVar4->Height = 0;
      pFVar4->Depth = 0;
      pFVar4->MipCount = 0;
      pFVar4->ArraySize = 0;
      pFVar4->DXGIFormat = UNKNOWN;
      pFVar4->CreateFlags = 0;
      (pFVar4->Mips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Mips).ArrayNum = 0;
      (pFVar4->Mips).ArrayMax = 0;
      (pFVar4->MipRawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->MipRawData).ArrayNum = 0;
      (pFVar4->MipRawData).ArrayMax = 0;
      pFVar3 = pFVar4;
    }
    EVar2 = ParseHeader(pFVar3,&local_c8,&local_e0);
    *pEVar9 = EVar2;
    if (EVar2 == OK) {
      if (param_4 == Full) {
        if (pFVar3->DXGIFormat != UNKNOWN) {
          pFVar5 = SupportedFormatList;
          pFVar4 = pFVar6;
          do {
            if (pFVar3->DXGIFormat == pFVar5->Format) {
              pFVar6 = (FDDSFile *)(SupportedFormatList + (longlong)pFVar4);
              break;
            }
            pFVar4 = (FDDSFile *)((longlong)&pFVar4->Dimension + 1);
            pFVar5 = pFVar5 + 1;
          } while (pFVar4 < (FDDSFile *)0x65);
        }
        EVar2 = AllocateMips(pFVar3,(FDXGIFormatInfo *)pFVar6,pFVar3->CreateFlags);
        if (EVar2 == OK) {
          pFVar7 = (pFVar3->Mips).AllocatorInstance.Data;
          iVar1 = (pFVar3->Mips).ArrayNum;
          pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
          while( true ) {
            if ((pFVar3->Mips).ArrayNum != iVar1) {
              `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_e8);
            }
            EVar2 = OK;
            if (pFVar7 == pFVar8) goto LAB_14235b2e5;
            if ((longlong)(param_1 + (param_2 - (longlong)_Src)) <
                (longlong)*(size_t *)(pFVar7 + 0x20)) break;
            memcpy(*(void **)(pFVar7 + 0x28),_Src,*(size_t *)(pFVar7 + 0x20));
            _Src = _Src + *(longlong *)(pFVar7 + 0x20);
            pFVar7 = pFVar7 + 0x30;
          }
          if (2 < (byte)LogDDSFile._0_1_) {
            Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Error_reading_t_1508bc208,
                       (FLogCategoryBase *)&LogDDSFile);
          }
          EVar2 = IoError;
        }
LAB_14235b2e5:
        *pEVar9 = EVar2;
      }
      else if (param_4 == HeaderWithMipInfo) {
        if (pFVar3->DXGIFormat != UNKNOWN) {
          pFVar5 = SupportedFormatList;
          pFVar4 = pFVar6;
          do {
            if (pFVar3->DXGIFormat == pFVar5->Format) {
              pFVar6 = (FDDSFile *)(SupportedFormatList + (longlong)pFVar4);
              break;
            }
            pFVar4 = (FDDSFile *)((longlong)&pFVar4->Dimension + 1);
            pFVar5 = pFVar5 + 1;
          } while (pFVar4 < (FDDSFile *)0x65);
        }
        (pFVar3->Mips).ArrayNum = 0;
        if ((pFVar3->Mips).ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&(pFVar3->Mips).AllocatorInstance,0,&(pFVar3->Mips).ArrayMax);
        }
        TArray<UE::DDS::FDDSMip,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&pFVar3->Mips,pFVar3->ArraySize * pFVar3->MipCount,Default);
        InitMips(pFVar3,(FDXGIFormatInfo *)pFVar6);
      }
    }
    if (*pEVar9 != OK) {
      if (pFVar3 != (FDDSFile *)0x0) {
        pFVar7 = (pFVar3->MipRawData).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar3->Mips).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        ::operator_delete(pFVar3,0x48);
      }
      pFVar3 = (FDDSFile *)0x0;
    }
  }
  return pFVar3;
}

// CreateFromDDSInMemory @ 14235b3e0

/* WARNING: Enum "EDDSError": Some values do not have unique names */

FDDSFile * __cdecl
UE::DDS::FDDSFile::CreateFromDDSInMemory
          (uchar *param_1,long64 param_2,EDDSError *param_3,bool param_4)

{
  FDDSFile *pFVar1;
  
  pFVar1 = CreateFromDDSInMemory(param_1,param_2,param_3,(uint)param_4);
  return pFVar1;
}

// FillMip @ 14235bf60

void __thiscall UE::DDS::FDDSFile::FillMip(FDDSFile *this,FImageView *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  long64 lVar7;
  FScriptContainerElement *pFVar8;
  
  if ((this->Mips).ArrayNum <= param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipIndex < Mips.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                       ,0x48c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = 0;
  if (param_2 < (this->Mips).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = (this->Mips).AllocatorInstance.Data + (longlong)param_2 * 0x30;
  if ((longlong)(int)param_1->_padding_ * (longlong)(int)param_1->_padding_ *
      (longlong)*(int *)((longlong)&param_1->_padding_ + 4) -
      (ulonglong)(uint)(*(int *)(pFVar8 + 4) * *(int *)pFVar8) * (ulonglong)*(uint *)(pFVar8 + 8) !=
      0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromImage.GetNumPixels() == ToMip.Width * ToMip.Height * (int64) ToMip.Depth"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                       ,0x48f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar3 = param_1->_padding_;
  lVar4 = param_1->_padding_;
  iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
  lVar7 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_1->_padding_ + 4));
  if (lVar7 * (longlong)(int)lVar4 * (longlong)(int)lVar3 * (longlong)iVar1 -
      *(longlong *)(pFVar8 + 0x20) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromImage.GetImageSizeBytes() == ToMip.DataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                       ,0x490,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memcpy(*(void **)(pFVar8 + 0x28),param_1->RawData,*(size_t *)(pFVar8 + 0x20));
  return;
}

// GetMipImage @ 14235c9a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::DDS::FDDSFile::GetMipImage(FDDSFile *this,FImageView *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FDXGIFormatRawFormatMapping *pFVar3;
  Type TVar4;
  EDXGIFormat EVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  long64 lVar11;
  FDXGIFormatRawFormatMapping *pFVar12;
  FStaticBasicLogRecord *pFVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  Type TVar18;
  FScriptContainerElement *pFVar19;
  char local_res18;
  
  if (((this->Mips).ArrayNum <= param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipIndex < Mips.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                         ,0x499,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar10 = 0;
  if (param_2 < (this->Mips).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar19 = (this->Mips).AllocatorInstance.Data + (longlong)param_2 * 0x30;
  if (((longlong)(int)param_1->_padding_ * (longlong)(int)param_1->_padding_ *
       (longlong)*(int *)((longlong)&param_1->_padding_ + 4) -
       (ulonglong)(uint)(*(int *)(pFVar19 + 4) * *(int *)pFVar19) *
       (ulonglong)*(uint *)(pFVar19 + 8) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToImage.GetNumPixels() == FromMip.Width * FromMip.Height * (int64) FromMip.Depth"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                         ,0x49c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  TVar18 = *(Type *)((longlong)&param_1->_padding_ + 4);
  if (TVar18 == BGRA8) {
    EVar5 = this->DXGIFormat;
    if (EVar5 == B8G8R8) {
      puVar15 = *(undefined1 **)(pFVar19 + 0x28);
      puVar17 = param_1->RawData;
      lVar14 = (longlong)(int)param_1->_padding_ *
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
               (longlong)(int)param_1->_padding_;
      lVar11 = ERawImageFormat::GetBytesPerPixel(BGRA8);
      if ((lVar11 * lVar14 + lVar14 * -4 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ToImage.GetImageSizeBytes() == Count*4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4a6,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((*(longlong *)(pFVar19 + 0x20) != lVar14 * 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FromMip.DataSize == Count*3",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4a7,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (lVar14 == 0) {
        return true;
      }
      do {
        puVar1 = puVar15 + 2;
        *puVar17 = *puVar15;
        puVar2 = puVar15 + 1;
        puVar15 = puVar15 + 3;
        puVar17[1] = *puVar2;
        puVar17[2] = *puVar1;
        puVar17[3] = 0xff;
        lVar14 = lVar14 + -1;
        puVar17 = puVar17 + 4;
      } while (lVar14 != 0);
      return true;
    }
    if (EVar5 == R8G8B8) {
      lVar14 = *(longlong *)(pFVar19 + 0x28);
      puVar15 = param_1->RawData;
      lVar16 = (longlong)(int)param_1->_padding_ *
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
               (longlong)(int)param_1->_padding_;
      lVar11 = ERawImageFormat::GetBytesPerPixel(BGRA8);
      if ((lVar11 * lVar16 + lVar16 * -4 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ToImage.GetImageSizeBytes() == Count*4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4b6,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((*(longlong *)(pFVar19 + 0x20) != lVar16 * 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FromMip.DataSize == Count*3",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4b7,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (lVar16 == 0) {
        return true;
      }
      puVar17 = (undefined1 *)(lVar14 + 1);
      do {
        *puVar15 = puVar17[1];
        puVar15[1] = *puVar17;
        puVar15[2] = puVar17[-1];
        puVar15[3] = 0xff;
        lVar16 = lVar16 + -1;
        puVar17 = puVar17 + 3;
        puVar15 = puVar15 + 4;
      } while (lVar16 != 0);
      return true;
    }
    if (((EVar5 == R8G8_TYPELESS) || (EVar5 - R8G8_UNORM < 3)) || (EVar5 == R8G8_SINT)) {
      puVar15 = *(undefined1 **)(pFVar19 + 0x28);
      puVar17 = param_1->RawData;
      lVar14 = (longlong)(int)param_1->_padding_ *
               (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
               (longlong)(int)param_1->_padding_;
      lVar11 = ERawImageFormat::GetBytesPerPixel(BGRA8);
      if ((lVar11 * lVar14 + lVar14 * -4 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ToImage.GetImageSizeBytes() == Count*4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4cc,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((*(longlong *)(pFVar19 + 0x20) != lVar14 * 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FromMip.DataSize == Count*2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4cd,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar17 = 0;
        puVar17[1] = puVar15[1];
        uVar9 = *puVar15;
        puVar15 = puVar15 + 2;
        puVar17[2] = uVar9;
        puVar17[3] = 0xff;
        puVar17 = puVar17 + 4;
      }
      iVar6 = *(int *)((longlong)&param_1->_padding_ + 4);
      lVar14 = param_1->_padding_;
      lVar16 = param_1->_padding_;
      lVar11 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_1->_padding_ + 4));
      if ((puVar17 !=
           (undefined1 *)
           (lVar11 * (longlong)(int)lVar14 * (longlong)iVar6 * (longlong)(int)lVar16 +
           (longlong)param_1->RawData)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ToPtr == (uint8 *)ToImage.RawData + ToImage.GetImageSizeBytes()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                             ,0x4d6,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (puVar15 == (undefined1 *)(*(longlong *)(pFVar19 + 0x20) + *(longlong *)(pFVar19 + 0x28)))
      {
        return true;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FmPtr == FromMip.Data + FromMip.DataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                         ,0x4d7,L"");
      if (!bVar8) {
        return true;
      }
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  iVar6 = *(int *)((longlong)&param_1->_padding_ + 4);
  lVar14 = param_1->_padding_;
  lVar16 = param_1->_padding_;
  lVar11 = ERawImageFormat::GetBytesPerPixel(TVar18);
  if (lVar11 * (longlong)(int)lVar14 * (longlong)iVar6 * (longlong)(int)lVar16 -
      *(longlong *)(pFVar19 + 0x20) != 0) {
    if (2 < (byte)LogDDSFile._0_1_) {
      ERawImageFormat::GetName(*(Type *)((longlong)&param_1->_padding_ + 4));
      DXGIFormatGetName(this->DXGIFormat);
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_DDS_BlitMip_DXG_1508bc5e0,
                 (FLogCategoryBase *)&LogDDSFile);
    }
    return false;
  }
  pFVar12 = DXGIRawFormatMap;
  EVar5 = DXGIRawFormatMap[0].DXGIFormat;
  while (EVar5 != UNKNOWN) {
    if (EVar5 == this->DXGIFormat) {
      local_res18 = pFVar12->bIsExactMatch;
      TVar18 = pFVar12->RawFormat;
      goto LAB_14235cdf7;
    }
    pFVar3 = pFVar12 + 1;
    pFVar12 = pFVar12 + 1;
    EVar5 = pFVar3->DXGIFormat;
  }
  TVar18 = Invalid;
LAB_14235cdf7:
  TVar4 = *(Type *)((longlong)&param_1->_padding_ + 4);
  if (TVar18 == TVar4) {
    if ((local_res18 != '\0') || ((byte)LogDDSFile._0_1_ < 3)) goto LAB_14235ce3c;
    ERawImageFormat::GetName(TVar4);
    DXGIFormatGetName(this->DXGIFormat);
    pFVar13 = &::LOG_Static;
  }
  else {
    if ((byte)LogDDSFile._0_1_ < 3) goto LAB_14235ce3c;
    ERawImageFormat::GetName(TVar4);
    DXGIFormatGetName(this->DXGIFormat);
    pFVar13 = &::LOG_Static;
  }
  Logging::Private::BasicLog<3>(pFVar13,(FLogCategoryBase *)&LogDDSFile);
LAB_14235ce3c:
  memcpy(param_1->RawData,*(void **)(pFVar19 + 0x28),*(size_t *)(pFVar19 + 0x20));
  return true;
}

// IsADDS @ 14235f540

bool __cdecl UE::DDS::FDDSFile::IsADDS(uchar *param_1,long64 param_2)

{
  int iStack_34;
  
  if (0x7f < (ulonglong)param_2) {
    if (*(int *)param_1 == 0x20534444) {
      if (((*(ulonglong *)(param_1 + 0x50) & 4) != 0) &&
         (iStack_34 = (int)(*(ulonglong *)(param_1 + 0x50) >> 0x20), iStack_34 == 0x30315844)) {
        return 0x13 < param_2 - 0x80U;
      }
      return true;
    }
  }
  return false;
}

// IsValidTexture2D @ 14235f670

/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall UE::DDS::FDDSFile::IsValidTexture2D(FDDSFile *this)

{
  EDDSError EVar1;
  
  EVar1 = Validate(this);
  if ((EVar1 == OK) && ((this->Dimension == 1 || (this->Dimension == 2)))) {
    return this->ArraySize == 1;
  }
  return false;
}

// IsValidTextureArray @ 14235f6b0

/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall UE::DDS::FDDSFile::IsValidTextureArray(FDDSFile *this)

{
  EDDSError EVar1;
  
  EVar1 = Validate(this);
  if (((EVar1 == OK) && ((this->CreateFlags & 1) == 0)) &&
     ((this->Dimension == 1 || (this->Dimension == 2)))) {
    return 1 < this->ArraySize;
  }
  return false;
}

// IsValidTextureCube @ 14235f6f0

/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall UE::DDS::FDDSFile::IsValidTextureCube(FDDSFile *this)

{
  EDDSError EVar1;
  
  EVar1 = Validate(this);
  if (EVar1 == OK) {
    return (bool)((byte)this->CreateFlags & 1);
  }
  return false;
}

// IsValidTextureVolume @ 14235f720

/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall UE::DDS::FDDSFile::IsValidTextureVolume(FDDSFile *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EDDSError EVar4;
  
  EVar4 = Validate(this);
  if ((EVar4 == OK) && (this->Dimension == 3)) {
    if (this->ArraySize != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArraySize == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                         ,0x244,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return true;
  }
  return false;
}

// Validate @ 1423626a0

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDDSError __thiscall UE::DDS::FDDSFile::Validate(FDDSFile *this)

{
  EDXGIFormat EVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FDXGIFormatName *pFVar9;
  byte bVar10;
  FDXGIFormatInfo *pFVar11;
  FStaticBasicLogRecord *pFVar12;
  ulonglong uVar13;
  
  EVar1 = this->DXGIFormat;
  uVar13 = 0;
  if (EVar1 != UNKNOWN) {
    pFVar11 = SupportedFormatList;
    uVar8 = uVar13;
    do {
      if (EVar1 == pFVar11->Format) {
        if ((uVar8 & 0xfffffffffffffff) != 0xfffffffeaf74711) {
          iVar2 = this->Dimension;
          if (iVar2 == 1) {
            if ((this->Height != 1) || (this->Depth != 1)) {
              if ((byte)LogDDSFile._0_1_ < 3) {
                return BadImageDimension;
              }
              pFVar12 = &::LOG_Static;
              goto LAB_142362a40;
            }
          }
          else if (iVar2 == 2) {
            if (this->Depth != 1) {
              if ((byte)LogDDSFile._0_1_ < 3) {
                return BadImageDimension;
              }
              pFVar12 = &::LOG_Static;
              goto LAB_142362a40;
            }
          }
          else {
            if (iVar2 != 3) {
              if (2 < (byte)LogDDSFile._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
              }
              return BadResourceDimension;
            }
            if (this->ArraySize != 1) {
              if ((byte)LogDDSFile._0_1_ < 3) {
                return BadImageDimension;
              }
              pFVar12 = &::LOG_Static;
              goto LAB_142362a40;
            }
          }
          uVar3 = this->Width;
          if (uVar3 != 0) {
            uVar4 = this->Height;
            if (uVar4 != 0) {
              uVar5 = this->Depth;
              if ((uVar5 != 0) && (uVar6 = this->MipCount, uVar6 != 0)) {
                uVar7 = this->ArraySize;
                if (uVar7 != 0) {
                  if (((0xfffff < uVar3) || (0xfffff < uVar4)) || (0xfffff < uVar5)) {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadImageDimension;
                    }
                    Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Image_dimension_1508bbd30,
                               (FLogCategoryBase *)&LogDDSFile);
                    return BadImageDimension;
                  }
                  if (0x14 < uVar6) {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadMipmapCount;
                    }
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                    return BadMipmapCount;
                  }
                  if (0xfffff < uVar7) {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadImageDimension;
                    }
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                    return BadImageDimension;
                  }
                  if (__real_53800000 < (float)uVar3 * (float)uVar4 * (float)uVar5 * (float)uVar7) {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadImageDimension;
                    }
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                    return BadImageDimension;
                  }
                  bVar10 = (char)uVar6 - 1;
                  if (((uVar3 >> (bVar10 & 0x1f) == 0) && (uVar4 >> (bVar10 & 0x1f) == 0)) &&
                     (uVar5 >> (bVar10 & 0x1f) == 0)) {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadMipmapCount;
                    }
                    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
                    return BadMipmapCount;
                  }
                  if ((this->CreateFlags & 1) == 0) {
                    return OK;
                  }
                  if (this->Dimension == 2) {
                    if ((uVar3 == uVar4) && (uVar5 == 1)) {
                      if ((5 < uVar7) && (uVar7 == (uVar7 / 6) * 6)) {
                        return OK;
                      }
                      if ((byte)LogDDSFile._0_1_ < 3) {
                        return BadCubemap;
                      }
                      pFVar12 = &::LOG_Static;
                    }
                    else {
                      if ((byte)LogDDSFile._0_1_ < 3) {
                        return BadCubemap;
                      }
                      pFVar12 = &::LOG_Static;
                    }
                  }
                  else {
                    if ((byte)LogDDSFile._0_1_ < 3) {
                      return BadCubemap;
                    }
                    pFVar12 = &::LOG_Static;
                  }
                  Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogDDSFile);
                  return BadCubemap;
                }
              }
            }
          }
          if ((byte)LogDDSFile._0_1_ < 3) {
            return BadImageDimension;
          }
          pFVar12 = &::LOG_Static;
LAB_142362a40:
          Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogDDSFile);
          return BadImageDimension;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      pFVar11 = pFVar11 + 1;
    } while (uVar8 < 0x65);
  }
  if (2 < (byte)LogDDSFile._0_1_) {
    pFVar9 = FormatList;
    do {
      if (pFVar9->Format == EVar1) break;
      uVar13 = uVar13 + 1;
      pFVar9 = pFVar9 + 1;
    } while (uVar13 < 0x7a);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
  }
  return BadPixelFormat;
}

// WriteDDS @ 142362a90

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDDSError __thiscall
UE::DDS::FDDSFile::WriteDDS
          (FDDSFile *this,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,
          EDDSFormatVersion param_2)

{
  long64 *plVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  code *pcVar3;
  bool bVar4;
  EDDSError EVar5;
  uint uVar6;
  EDXGIFormat *pEVar7;
  FDXGIFormatName *pFVar8;
  long64 lVar9;
  FBitmaskToDXGI *pFVar10;
  FBitmaskToDXGI *pFVar11;
  FScriptContainerElement *pFVar12;
  FBitmaskToDXGI *pFVar13;
  FScriptContainerElement *pFVar14;
  ulong64 uVar15;
  FBitmaskToDXGI *pFVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte local_e8 [4];
  EDDSFormatVersion local_e4;
  uint local_e0;
  uint local_dc;
  EDXGIFormat local_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_e4 = param_2;
  EVar5 = Validate(this);
  if (EVar5 != OK) {
    return EVar5;
  }
  pFVar12 = (this->Mips).AllocatorInstance.Data;
  uVar15 = 0x94;
  iVar2 = (this->Mips).ArrayNum;
  pFVar14 = pFVar12 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Mips).ArrayNum != iVar2) {
      local_e8[1] = 0;
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8 + 1);
    }
    if (pFVar12 == pFVar14) break;
    uVar15 = uVar15 + *(longlong *)(pFVar12 + 0x20);
    pFVar12 = pFVar12 + 0x30;
  }
  pFVar13 = (FBitmaskToDXGI *)0x0;
  plVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*plVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,plVar1);
  }
  if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (*plVar1 < (longlong)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar15,&param_1->AllocatorInstance,param_1->ArrayNum,plVar1);
  }
  iVar2 = this->Dimension;
  local_e8[0] = (byte)this->CreateFlags & 1;
  local_d8 = this->DXGIFormat;
  uVar19 = this->ArraySize;
  local_e0 = uVar19;
  if (local_e8[0] != 0) {
    local_e0 = uVar19 / 6;
  }
  uVar6 = 0x200000;
  if (iVar2 != 3) {
    uVar6 = 0;
  }
  local_dc = uVar6 | 0xfe00;
  if (local_e8[0] == 0) {
    local_dc = uVar6;
  }
  uVar6 = 0;
  pFVar16 = pFVar13;
  pFVar11 = pFVar13;
  uVar17 = 1;
  if (local_e4 == D3D9) {
    pEVar7 = DXGIFormatSRGBTable;
    pFVar10 = pFVar13;
    do {
      iVar18 = (int)pFVar10;
      if (*pEVar7 == local_d8) {
        uVar17 = uVar6;
        if (-1 < iVar18) {
          local_d8 = DXGIFormatSRGBTable[(longlong)iVar18 & 0xfffffffffffffffe];
        }
        break;
      }
      pFVar10 = (FBitmaskToDXGI *)(ulonglong)(iVar18 + 1);
      pEVar7 = pEVar7 + 1;
      uVar17 = 0;
    } while ((longlong)pEVar7 < 0x1508b8ec8);
  }
  do {
    if ((pFVar16[0xa845caa].Format == local_d8) && ((int)uVar17 <= pFVar16[0xa845caa].AutoD3d9)) {
      pFVar10 = BitmaskToDXGITable + (longlong)pFVar11;
      break;
    }
    pFVar16 = pFVar16 + 1;
    pFVar11 = (FBitmaskToDXGI *)((longlong)&pFVar11->Flags + 1);
    pFVar10 = pFVar13;
  } while (pFVar16 < (FBitmaskToDXGI *)0x280);
  pFVar16 = pFVar13;
  pFVar11 = pFVar13;
  do {
    if ((pFVar16[0xa845cbe].Bits == local_d8) &&
       (uVar19 = this->ArraySize, (int)uVar17 <= (int)pFVar16[0xa845cbe].RMask)) {
      uVar6 = FOURCCToDXGITable[(longlong)pFVar11].fourcc;
      break;
    }
    pFVar11 = (FBitmaskToDXGI *)((longlong)&pFVar11->Flags + 1);
    pFVar16 = (FBitmaskToDXGI *)&pFVar16->GMask;
  } while (pFVar16 < &DAT_00000108);
  iVar18 = iVar2;
  if (local_e4 == D3D9) {
    if ((pFVar10 == (FBitmaskToDXGI *)0x0) && (uVar6 == 0)) {
      if (2 < (byte)LogDDSFile._0_1_) {
        pFVar8 = FormatList;
        do {
          if (pFVar8->Format == local_d8) break;
          pFVar13 = (FBitmaskToDXGI *)((longlong)&pFVar13->Flags + 1);
          pFVar8 = pFVar8 + 1;
        } while (pFVar13 < (FBitmaskToDXGI *)0x7a);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
      }
      return BadPixelFormat;
    }
    if (uVar19 != 1) {
      if (2 < (byte)LogDDSFile._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDDSFile);
      }
      return BadImageDimension;
    }
    if (iVar2 == 1) {
      iVar18 = 2;
    }
  }
  local_b8 = 0x20534444;
  uStack_b4 = 0x7c;
  uStack_a4 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 0x21007;
  if (iVar2 == 3) {
    uStack_b0 = 0x821007;
  }
  local_88 = 0;
  uStack_80 = 0;
  pFVar16 = (FBitmaskToDXGI *)0x30315844;
  uStack_ac = this->Height;
  local_a8 = this->Width;
  uStack_a0 = this->Depth;
  uStack_9c = this->MipCount;
  local_78 = 0;
  uStack_70 = 0;
  iStack_d4 = iVar18 + 1;
  iStack_d0 = (uint)local_e8[0] << 2;
  uStack_cc = local_e0;
  uStack_6c = 0x20;
  local_68 = 4;
  uStack_64 = 0x30315844;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x401008;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_c8 = 0;
  if (((local_e4 != D3D10) && (1 < iVar18)) && (uVar19 == 1)) {
    if (pFVar10 == (FBitmaskToDXGI *)0x0) {
      pFVar16 = (FBitmaskToDXGI *)0x30315844;
      if (uVar6 != 0) {
        pFVar16 = (FBitmaskToDXGI *)(ulonglong)uVar6;
      }
      uStack_64 = SUB84(pFVar16,0);
    }
    else {
      local_68 = pFVar10->Flags;
      uStack_60 = pFVar10->Bits;
      uStack_5c = pFVar10->RMask;
      uStack_58 = pFVar10->GMask;
      uStack_54 = pFVar10->BMask;
      uStack_50 = pFVar10->AMask;
      uStack_64 = 0;
      pFVar16 = pFVar13;
    }
  }
  local_48 = local_dc;
  lVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0x80,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  pFVar12 = (param_1->AllocatorInstance).Data;
  *(ulonglong *)(pFVar12 + lVar9) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(pFVar12 + lVar9 + 8) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(pFVar12 + lVar9 + 0x10) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(pFVar12 + lVar9 + 0x10 + 8) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(pFVar12 + lVar9 + 0x20) = 0;
  *(undefined8 *)(pFVar12 + lVar9 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar12 + lVar9 + 0x30) = 0;
  *(undefined8 *)(pFVar12 + lVar9 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar12 + lVar9 + 0x40) = local_78;
  *(ulonglong *)(pFVar12 + lVar9 + 0x40 + 8) = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(pFVar12 + lVar9 + 0x50) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(pFVar12 + lVar9 + 0x50 + 8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(pFVar12 + lVar9 + 0x60) = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(pFVar12 + lVar9 + 0x60 + 8) = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(pFVar12 + lVar9 + 0x70) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar12 + lVar9 + 0x70 + 8) = CONCAT44(uStack_3c,uStack_40);
  if ((int)pFVar16 == 0x30315844) {
    if ((local_e4 == D3D9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFormatVersion != EDDSFormatVersion::D3D9",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\DDSFile.cpp"
                           ,0x42d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    lVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,0x14,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar14 + lVar9;
    *(ulonglong *)pFVar12 = CONCAT44(iStack_d4,local_d8);
    *(ulonglong *)(pFVar12 + 8) = CONCAT44(uStack_cc,iStack_d0);
    *(undefined4 *)(pFVar14 + lVar9 + 0x10) = 0;
  }
  iVar2 = (this->Mips).ArrayNum;
  pFVar12 = (this->Mips).AllocatorInstance.Data;
  pFVar14 = pFVar12 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Mips).ArrayNum != iVar2) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (pFVar12 == pFVar14) break;
    _Src = *(void **)(pFVar12 + 0x28);
    _Size = *(size_t *)(pFVar12 + 0x20);
    if (((_Src == (void *)0x0) && (_Size != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    lVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,_Size,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    if (_Size != 0) {
      memcpy((param_1->AllocatorInstance).Data + lVar9,_Src,_Size);
    }
    pFVar12 = pFVar12 + 0x30;
  }
  return OK;
}

