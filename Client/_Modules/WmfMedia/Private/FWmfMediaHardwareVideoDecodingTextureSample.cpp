// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 6

// Convert @ 14eaa2dd0

bool __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::Convert
          (FWmfMediaHardwareVideoDecodingTextureSample *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> *param_2,FConversionHints *param_3)

{
  FRHITexture *local_res8;
  
  local_res8 = param_2->Reference;
  if (local_res8 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_res8);
  }
  FWmfMediaHardwareVideoDecodingParameters::ConvertTextureFormat_RenderThread
            (param_1,(FWmfMediaHardwareVideoDecodingTextureSample *)&this[-1]._padding_,
             (FRHITexture *)&local_res8);
  return true;
}

// GetMediaTextureSampleConverter @ 14eaadc20

IMediaTextureSampleConverter * __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::GetMediaTextureSampleConverter
          (FWmfMediaHardwareVideoDecodingTextureSample *this)

{
  bool bVar1;
  IMediaTextureSampleConverter *pIVar2;
  
  bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
  if (bVar1) {
    if ((((this->SourceTexture).RawPointer == (ID3D11Texture2D *)0x0) &&
        ((this->DestinationTexture).Reference == (FRHITexture *)0x0)) &&
       ((char)this->_padding_ == '\0')) {
      this = (FWmfMediaHardwareVideoDecodingTextureSample *)0x0;
    }
    pIVar2 = (IMediaTextureSampleConverter *)&this->_padding_;
    if (this == (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) {
      pIVar2 = (IMediaTextureSampleConverter *)0x0;
    }
    return pIVar2;
  }
  return (IMediaTextureSampleConverter *)0x0;
}

// GetOrCreateDestinationAlphaTexture @ 14eaae1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::GetOrCreateDestinationAlphaTexture
          (FWmfMediaHardwareVideoDecodingTextureSample *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  FRHITextureCreateDesc *pFVar4;
  TRefCountPtr<FRHITexture> TVar5;
  FRHICommandListBase *in_R8;
  undefined1 auStack_168 [32];
  undefined1 local_148 [80];
  wchar_t *local_f8;
  FResourceBulkDataInterface *local_e8;
  FNameEntryId local_e0;
  ERHITextureInitAction local_dc;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar1 = &this->DestinationAlphaTexture;
  local_148._0_8_ = param_1;
  if (((pTVar1->Reference != (FRHITexture *)0x0) &&
      (lVar3 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
      *(int *)(lVar3 + 0x24) == (int)this->_padding_)) &&
     (lVar3 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
     *(int *)(lVar3 + 0x28) == *(int *)((longlong)&this->_padding_ + 4))) {
    (param_1->MemManager).Top = (uchar *)0x0;
    pFVar2 = pTVar1->Reference;
    (param_1->MemManager).Top = (uchar *)pFVar2;
    if (pFVar2 == (FRHITexture *)0x0) {
      return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
    }
    FRHIResource::AddRef((FRHIResource *)pFVar2);
    return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
  }
  pFVar4 = FRHITextureCreateDesc::Create2D
                     (&local_b8,
                      L"FWmfMediaHardwareVideoDecodingTextureSample_DestinationAlphaTexture",
                      (TIntPoint<int>)this->_padding_,this->AlphaFormat);
  pFVar4->_padding_ = 0x8000;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)(local_148 + 0x10),(FRHITextureDesc *)pFVar4);
  local_e8 = (FResourceBulkDataInterface *)pFVar4->DebugName;
  local_e0.Value = pFVar4->InitialState;
  local_dc = pFVar4->InitAction;
  local_d8 = (FName)pFVar4->BulkData;
  local_d0 = pFVar4->ClassName;
  local_c8 = pFVar4->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  TVar5 = FRHICommandListBase::CreateTexture(in_R8,(FRHITextureCreateDesc *)local_148);
  if ((FRHITexture *)pTVar1 != TVar5.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHICommandListBase *)local_148._0_8_ != (FRHICommandListBase *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148._0_8_);
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  pFVar2 = pTVar1->Reference;
  (param_1->MemManager).Top = (uchar *)pFVar2;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// GetOrCreateDestinationTexture @ 14eaae360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::GetOrCreateDestinationTexture
          (FWmfMediaHardwareVideoDecodingTextureSample *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  byte *pbVar4;
  FRHITextureCreateDesc *pFVar5;
  TRefCountPtr<FRHITexture> TVar6;
  FRHICommandListBase *in_R8;
  undefined1 auStack_168 [32];
  undefined1 local_148 [80];
  wchar_t *local_f8;
  FResourceBulkDataInterface *local_e8;
  FNameEntryId local_e0;
  ERHITextureInitAction local_dc;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar1 = &this->DestinationTexture;
  local_148._0_8_ = param_1;
  if ((((pTVar1->Reference != (FRHITexture *)0x0) &&
       (lVar3 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
       *(int *)(lVar3 + 0x24) == (int)this->_padding_)) &&
      (lVar3 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
      *(int *)(lVar3 + 0x28) == *(int *)((longlong)&this->_padding_ + 4))) &&
     (pbVar4 = (byte *)(**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
     (bool)(*pbVar4 >> 4 & 1) == this->bIsDestinationTextureSRGB)) {
    (param_1->MemManager).Top = (uchar *)0x0;
    pFVar2 = pTVar1->Reference;
    (param_1->MemManager).Top = (uchar *)pFVar2;
    if (pFVar2 == (FRHITexture *)0x0) {
      return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
    }
    FRHIResource::AddRef((FRHIResource *)pFVar2);
    return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
  }
  pFVar5 = FRHITextureCreateDesc::Create2D
                     (&local_b8,L"FWmfMediaHardwareVideoDecodingTextureSample_DestinationTexture",
                      (TIntPoint<int>)this->_padding_,this->Format);
  pFVar5->_padding_ = 0x8000;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)(local_148 + 0x10),(FRHITextureDesc *)pFVar5);
  local_e8 = (FResourceBulkDataInterface *)pFVar5->DebugName;
  local_e0.Value = pFVar5->InitialState;
  local_dc = pFVar5->InitAction;
  local_d8 = (FName)pFVar5->BulkData;
  local_d0 = pFVar5->ClassName;
  local_c8 = pFVar5->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  if (this->bIsDestinationTextureSRGB != false) {
    local_148._16_8_ = local_148._16_8_ | 0x10;
  }
  TVar6 = FRHICommandListBase::CreateTexture(in_R8,(FRHITextureCreateDesc *)local_148);
  if ((FRHITexture *)pTVar1 != TVar6.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHICommandListBase *)local_148._0_8_ != (FRHICommandListBase *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148._0_8_);
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  pFVar2 = pTVar1->Reference;
  (param_1->MemManager).Top = (uchar *)pFVar2;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// InitializeSourceTexture @ 14eab4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ID3D11Texture2D * __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::InitializeSourceTexture
          (FWmfMediaHardwareVideoDecodingTextureSample *this,TRefCountPtr<ID3D11Device> *param_1,
          FMediaTimeStamp *param_2,FTimespan param_3,TIntPoint<int> *param_4,EPixelFormat param_5,
          EMediaTextureSampleFormat param_6)

{
  uint uVar1;
  ID3D11Texture2D *pIVar2;
  ID3D11Device *pIVar3;
  ID3D11Device *pIVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  TIntPoint<int>_u_0_s_0 TVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58;
  int local_54;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar5 = *(undefined4 *)((longlong)&(param_2->Time).Ticks + 4);
  iVar7 = param_2->SequenceIndex;
  iVar6 = param_2->LoopIndex;
  *(int *)&this->_padding_ = (int)(param_2->Time).Ticks;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(int *)&this->_padding_ = iVar7;
  *(int *)((longlong)&this->_padding_ + 4) = iVar6;
  TVar8 = (param_4->field0_0x0)._s_0;
  this->_padding_ = (longlong)TVar8;
  this->_padding_ = (longlong)param_4->field0_0x0;
  *(EMediaTextureSampleFormat *)&this->_padding_ = param_6;
  this->_padding_ = param_3.Ticks;
  this->Format = param_5;
  pIVar2 = (this->SourceTexture).RawPointer;
  if (pIVar2 != (ID3D11Texture2D *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,&local_58);
    uVar1 = (uint)this->_padding_;
    TVar8.Y = 0;
    TVar8.X = uVar1;
    if ((local_58 == uVar1) && (local_54 == *(int *)((longlong)&this->_padding_ + 4)))
    goto LAB_14eab4755;
  }
  local_84 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_88 = TVar8.X;
  local_80 = 1;
  local_7c = 1;
  local_74 = 1;
  local_6c = 0;
  local_64 = 0;
  local_78 = GPixelFormats[param_5].PlatformFormat;
  pIVar2 = (this->SourceTexture).RawPointer;
  local_60 = 0x100;
  if (pIVar2 != (ID3D11Texture2D *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
    (this->SourceTexture).RawPointer = (ID3D11Texture2D *)0x0;
  }
  iVar7 = (**(code **)((longlong)*param_1->Reference + 0x28))
                    (param_1->Reference,&local_88,0,&this->SourceTexture);
  if ((iVar7 != 0) && (2 < (byte)LogWmfMedia._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  pIVar3 = param_1->Reference;
  pIVar4 = (this->D3D11Device).Reference;
  if (pIVar4 != pIVar3) {
    (this->D3D11Device).Reference = pIVar3;
    if (pIVar3 != (ID3D11Device *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))();
    }
    if (pIVar4 != (ID3D11Device *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
LAB_14eab4755:
  return (this->SourceTexture).RawPointer;
}

// ShutdownPoolable @ 14eabe7b0

void __thiscall
FWmfMediaHardwareVideoDecodingTextureSample::ShutdownPoolable
          (FWmfMediaHardwareVideoDecodingTextureSample *this)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ID3D11Texture2D *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<unsigned_char_*,WmfMediaDecoder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>_>
  *pTVar8;
  ulonglong *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  if ((char)this->_padding_ != '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)WmfMediaDecoder::GetMapBufferCriticalSection();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    pTVar8 = WmfMediaDecoder::GetMapBufferToDecoder();
    uVar2 = this->_padding_;
    uVar10 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (*(int *)&pTVar8->field_0x8 != *(int *)&pTVar8->field_0x34) {
      puVar11 = *(undefined1 **)&pTVar8->field_0x40;
      if (*(undefined1 **)&pTVar8->field_0x40 == (undefined1 *)0x0) {
        puVar11 = &pTVar8->field_0x38;
      }
      iVar7 = *(int *)(puVar11 +
                      (ulonglong)(*(int *)&pTVar8->field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4)
      ;
      if (iVar7 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)pTVar8 + (longlong)iVar7 * 0x18);
          if (*puVar1 == uVar2) {
            puVar9 = puVar1 + 1;
            if (puVar1 == (ulonglong *)0x0) {
              puVar9 = (ulonglong *)0x0;
            }
            if ((puVar9 != (ulonglong *)0x0) &&
               ((WmfMediaDecoder *)*puVar9 != (WmfMediaDecoder *)0x0)) {
              WmfMediaDecoder::ReturnExternalBufferInternal
                        ((WmfMediaDecoder *)*puVar9,
                         (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
            }
            break;
          }
          iVar7 = (int)puVar1[2];
        } while (iVar7 != -1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    *(undefined1 *)&this->_padding_ = 0;
  }
  local_res10 = (longlong *)0x0;
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 == (undefined8 *)0x0) ||
     ((**(code **)*puVar3)(puVar3,&_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,&local_res10),
     local_res10 == (longlong *)0x0)) goto LAB_14eabea2d;
  local_res20 = 0;
  iVar7 = (**(code **)(*local_res10 + 0x40))(local_res10,&local_res20);
  if (iVar7 != 0) goto LAB_14eabea2d;
  local_res18 = (longlong *)0x0;
  pIVar4 = (this->SourceTexture).RawPointer;
  (**(code **)((longlong)*pIVar4 + 0xe0))
            (pIVar4,local_res20,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_res18);
  if (local_res18 != (longlong *)0x0) {
    local_res8 = (longlong *)0x0;
    if ((local_res10 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)*local_res10)(local_res10,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      iVar7 = (**(code **)(*local_res8 + 0x40))(local_res8,1,0);
      if (iVar7 != 0) {
        if ((local_res8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (**(code **)(*local_res8 + 0x40))(local_res8,2,0);
        if (iVar7 != 0) goto LAB_14eabea0d;
      }
      if ((local_res8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*local_res8 + 0x48))(local_res8,0);
    }
LAB_14eabea0d:
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
LAB_14eabea2d:
  *(undefined2 *)((longlong)&(this->DestinationAlphaTexture).Reference + 1) = 0;
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  return;
}

