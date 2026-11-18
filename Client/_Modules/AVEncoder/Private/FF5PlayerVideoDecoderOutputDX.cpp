// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 14

// ~FF5PlayerVideoDecoderOutputDX @ 148d01270

void __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::~FF5PlayerVideoDecoderOutputDX
          (FF5PlayerVideoDecoderOutputDX *this)

{
  ID3D11Texture2D *pIVar1;
  ID3D11Device *pIVar2;
  IMFSample *pIVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  this->_padding_ = (longlong)&___7FF5PlayerVideoDecoderOutputDX_AVEncoder__6B_;
  if (this->OutputType != HardwareWin8Plus) goto LAB_148d0139a;
  pIVar1 = (this->SharedTexture).Reference;
  local_res10 = (longlong *)0x0;
  if ((pIVar1 == (ID3D11Texture2D *)0x0) ||
     ((**(code **)*pIVar1)(pIVar1,&_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,&local_res10),
     local_res10 == (longlong *)0x0)) goto LAB_148d0139a;
  local_res20 = 0;
  iVar4 = (**(code **)(*local_res10 + 0x40))(local_res10,&local_res20);
  if (-1 < iVar4) {
    pIVar2 = (this->D3D11Device).Reference;
    local_res18 = (longlong *)0x0;
    (**(code **)((longlong)*pIVar2 + 0xe0))
              (pIVar2,local_res20,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_res18);
    if (local_res18 != (longlong *)0x0) {
      local_res8 = (longlong *)0x0;
      (**(code **)*local_res10)(local_res10,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_res8)
      ;
      if (local_res8 != (longlong *)0x0) {
        iVar4 = (**(code **)(*local_res8 + 0x40))(local_res8,1,0);
        lVar5 = *local_res8;
        if (iVar4 < 0) {
          iVar4 = (**(code **)(lVar5 + 0x40))(local_res8,2,0);
          if (-1 < iVar4) {
            lVar5 = *local_res8;
            goto LAB_148d01360;
          }
        }
        else {
LAB_148d01360:
          (**(code **)(lVar5 + 0x48))(local_res8,0);
        }
        if (local_res8 != (longlong *)0x0) {
          (**(code **)(*local_res8 + 0x10))();
        }
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x10))();
      }
    }
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
LAB_148d0139a:
  pIVar3 = (this->MFSample).Reference;
  if (pIVar3 != (IMFSample *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar2 = (this->D3D11Device).Reference;
  if (pIVar2 != (ID3D11Device *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar1 = (this->SharedTexture).Reference;
  if (pIVar1 == (ID3D11Texture2D *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d013cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))();
  return;
}

// GetBuffer @ 148d0ae70

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(FF5PlayerVideoDecoderOutputDX *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Should not be called!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                     ,0xa2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer'::__l2::
             _dynamic_atexit_destructor_for__Buffer__);
      _Init_thread_footer(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_AVEncoder::FF5PlayerVideoDecoderOutputDX::GetBuffer(void)const___ptr64'
          ::__l2::Buffer;
}

// GetDevice @ 148d0b240

TRefCountPtr<ID3D11Device> __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetDevice(FF5PlayerVideoDecoderOutputDX *this)

{
  ID3D11Device IVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<ID3D11Device> TVar4;
  ID3D11Device *in_RDX;
  
  if ((this->OutputType != SoftwareWin8Plus) && (this->OutputType != HardwareWin8Plus)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputType == EOutputType::SoftwareWin8Plus || OutputType == EOutputType::HardwareWin8Plus"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                       ,0xb4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Reference = (ID3D11Device *)(*pcVar2)();
      return (TRefCountPtr<ID3D11Device>)TVar4.Reference;
    }
  }
  *in_RDX = (ID3D11Device)0x0;
  IVar1 = (ID3D11Device)(this->D3D11Device).Reference;
  *in_RDX = IVar1;
  if (IVar1 != (ID3D11Device)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))();
  }
  return (TRefCountPtr<ID3D11Device>)in_RDX;
}

// GetDim @ 148d0b2b0

TIntPoint<int> __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetDim(FF5PlayerVideoDecoderOutputDX *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->SampleDim).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetMFSample @ 148d0b810

TRefCountPtr<IMFSample> __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetMFSample(FF5PlayerVideoDecoderOutputDX *this)

{
  IMFSample IVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<IMFSample> TVar4;
  IMFSample *in_RDX;
  
  if ((this->OutputType != SoftwareWin8Plus) && (this->OutputType != SoftwareWin7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputType == EOutputType::SoftwareWin8Plus || OutputType == EOutputType::SoftwareWin7"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                       ,0x9c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Reference = (IMFSample *)(*pcVar2)();
      return (TRefCountPtr<IMFSample>)TVar4.Reference;
    }
  }
  *in_RDX = (IMFSample)0x0;
  IVar1 = (IMFSample)(this->MFSample).Reference;
  *in_RDX = IVar1;
  if (IVar1 != (IMFSample)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))();
  }
  return (TRefCountPtr<IMFSample>)in_RDX;
}

// GetOutputType @ 148d0bb90

EOutputType __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetOutputType(FF5PlayerVideoDecoderOutputDX *this)

{
  return this->OutputType;
}

// GetStride @ 148d0bc50

uint __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetStride(FF5PlayerVideoDecoderOutputDX *this)

{
  return this->Stride;
}

// GetTexture @ 148d0bd80

TRefCountPtr<ID3D11Texture2D> __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::GetTexture(FF5PlayerVideoDecoderOutputDX *this)

{
  ID3D11Texture2D IVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<ID3D11Texture2D> TVar4;
  ID3D11Texture2D *in_RDX;
  
  if ((this->OutputType != SoftwareWin8Plus) && (this->OutputType != HardwareWin8Plus)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputType == EOutputType::SoftwareWin8Plus || OutputType == EOutputType::HardwareWin8Plus"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                       ,0xae,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Reference = (ID3D11Texture2D *)(*pcVar2)();
      return (TRefCountPtr<ID3D11Texture2D>)TVar4.Reference;
    }
  }
  *in_RDX = (ID3D11Texture2D)0x0;
  IVar1 = (ID3D11Texture2D)(this->SharedTexture).Reference;
  *in_RDX = IVar1;
  if (IVar1 != (ID3D11Texture2D)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))();
  }
  return (TRefCountPtr<ID3D11Texture2D>)in_RDX;
}

// InitializeWithBuffer @ 148d0cb10

void __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::InitializeWithBuffer
          (FF5PlayerVideoDecoderOutputDX *this,uint param_1,TIntPoint<int> param_2)

{
  this->OutputType = HardwareDX9_DX12;
  (this->SampleDim).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  this->Stride = param_1;
  return;
}

// InitializeWithSharedTexture @ 148d0cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::InitializeWithSharedTexture
          (FF5PlayerVideoDecoderOutputDX *this,TRefCountPtr<ID3D11Device> *param_1,
          TRefCountPtr<ID3D11DeviceContext> param_2,TRefCountPtr<IMFSample> *param_3,
          TIntPoint<int> *param_4)

{
  TRefCountPtr<ID3D11Texture2D> *pTVar1;
  ID3D11Texture2D *pIVar2;
  ID3D11Device *pIVar3;
  code *pcVar4;
  ID3D11Device *pIVar5;
  int iVar6;
  FString *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  TIntPoint<int>_u_0 *local_d8;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8 [2];
  longlong *local_b0;
  FString local_a8;
  FString local_98;
  TIntPoint<int>_u_0 local_88;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  pTVar1 = &this->SharedTexture;
  this->OutputType = HardwareWin8Plus;
  pIVar2 = pTVar1->Reference;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  if (((pIVar2 == (ID3D11Texture2D *)0x0) ||
      ((this->SampleDim).field0_0x0._s_0.X != (param_4->field0_0x0)._s_0.X)) ||
     ((this->SampleDim).field0_0x0._s_0.Y != (param_4->field0_0x0)._s_0.Y)) {
    local_88._s_0 = *(TIntPoint<int>_u_0_s_0 *)&param_4->field0_0x0;
    (this->SampleDim).field0_0x0 = local_88;
    local_6c = 0;
    local_64 = 0;
    pIVar3 = param_1->Reference;
    local_80 = 1;
    local_7c = 1;
    local_78 = 0x67;
    local_74 = 1;
    local_60 = 0x100;
    pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
    if (pIVar2 != (ID3D11Texture2D *)0x0) {
      pTVar1->Reference = (ID3D11Texture2D *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    iVar6 = (*pcVar4)(pIVar3,&local_88,0,pTVar1);
    if (iVar6 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription(&local_a8,iVar6);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_148d0ce72;
    }
    pIVar3 = param_1->Reference;
    pIVar5 = (this->D3D11Device).Reference;
    if (pIVar5 != pIVar3) {
      (this->D3D11Device).Reference = pIVar3;
      if (pIVar3 != (ID3D11Device *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))();
      }
      if (pIVar5 != (ID3D11Device *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      }
    }
  }
  if (pTVar1->Reference == (ID3D11Texture2D *)0x0) {
LAB_148d0cf66:
    if (*param_2.Reference != (ID3D11DeviceContext)0x0) {
      (**(code **)(*(longlong *)*param_2.Reference + 0x10))();
    }
    return true;
  }
  local_c0 = (longlong *)0x0;
  iVar6 = (**(code **)((longlong)**(IMFSample **)local_a8.Data.AllocatorInstance.Data + 0x140))
                    (*(IMFSample **)local_a8.Data.AllocatorInstance.Data,0,&local_c0);
  if (iVar6 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription(&local_98,iVar6);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_c8 = (longlong *)0x0;
    iVar6 = (**(code **)*local_c0)(local_c0,&_GUID_e7174cfa_1c9e_48b1_8866_626226bfc258,&local_c8);
    if (iVar6 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription(&local_98,iVar6);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_b0 = (longlong *)0x0;
      iVar6 = (**(code **)(*local_c8 + 0x18))
                        (local_c8,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_b0);
      if (iVar6 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar7 = GetComErrorDescription(&local_98,iVar6);
          if ((pFVar7->Data).ArrayNum == 0) {
            pFVar8 = &::LOG_Static;
          }
          else {
            pFVar8 = &::LOG_Static;
          }
LAB_148d0ce28:
          UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_b8[0] = 0;
        iVar6 = (**(code **)(*local_c8 + 0x20))(local_c8,local_b8);
        if (-1 < iVar6) {
          local_7c = (param_4->field0_0x0)._s_0.X;
          local_78 = (param_4->field0_0x0)._s_0.Y;
          local_88 = (TIntPoint<int>_u_0)0x0;
          local_80 = 0;
          local_74 = CONCAT44(local_74._4_4_,1);
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (**(code **)*pTVar1->Reference)
                    (pTVar1->Reference,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_a8);
          if ((local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
             (iVar6 = (*(code *)(*(IMFSample **)local_a8.Data.AllocatorInstance.Data)[8])
                                (local_a8.Data.AllocatorInstance.Data,0,0), -1 < iVar6)) {
            local_d8 = &local_88;
            local_e0 = local_b8[0];
            local_e8 = local_b0;
            local_f0 = 0;
            local_f8 = 0;
            (**(code **)(*(longlong *)*param_2.Reference + 0x170))
                      (*param_2.Reference,pTVar1->Reference,0,0);
            (*(code *)(*(IMFSample **)local_a8.Data.AllocatorInstance.Data)[9])
                      (local_a8.Data.AllocatorInstance.Data,1);
          }
          (**(code **)(*(longlong *)*param_2.Reference + 0x378))();
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            (*(code *)(*(IMFSample **)local_a8.Data.AllocatorInstance.Data)[2])();
          }
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          if (local_c8 != (longlong *)0x0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 0x10))();
          }
          goto LAB_148d0cf66;
        }
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_98,iVar6);
          pFVar8 = &::LOG_Static;
          goto LAB_148d0ce28;
        }
      }
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
LAB_148d0ce72:
  if (*param_2.Reference != (ID3D11DeviceContext)0x0) {
    (**(code **)(*(longlong *)*param_2.Reference + 0x10))();
  }
  return false;
}

// InitializeWithTextureBuffer @ 148d0cfa0

void __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::InitializeWithTextureBuffer
          (FF5PlayerVideoDecoderOutputDX *this,uint param_1,TIntPoint<int> param_2)

{
  this->OutputType = SoftwareWin8Plus;
  (this->SampleDim).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  this->Stride = param_1;
  return;
}

// PreInitForSoftwareDecode @ 148d0fea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::PreInitForSoftwareDecode
          (FF5PlayerVideoDecoderOutputDX *this,TIntPoint<int> param_1,ID3D11Texture2D *param_2)

{
  ID3D11Texture2D *pIVar1;
  IMFSample *pIVar2;
  TIntPoint<int>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  EOutputType EVar6;
  HRESULT HVar7;
  FStaticBasicLogRecord *pFVar8;
  int iVar9;
  IMFMediaBuffer *local_res8;
  int local_res10;
  int iStackX_14;
  
  iVar9 = param_1.field0_0x0._0_4_;
  iVar5 = (param_1.field0_0x0._4_4_ * 3) / 2;
  EVar6 = (param_2 != (ID3D11Texture2D *)0x0) + SoftwareWin7;
  if (((((this->MFSample).Reference == (IMFSample *)0x0) ||
       ((this->SampleDim).field0_0x0._s_0.X != iVar9)) ||
      ((this->SampleDim).field0_0x0._s_0.Y != iVar5)) || (EVar6 != this->OutputType)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  this->OutputType = EVar6;
  pIVar1 = (this->SharedTexture).Reference;
  local_res10 = iVar9;
  iStackX_14 = iVar5;
  if (pIVar1 != (ID3D11Texture2D *)0x0) {
    (this->SharedTexture).Reference = (ID3D11Texture2D *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (!bVar4) {
    return true;
  }
  local_res8 = (IMFMediaBuffer *)0x0;
  if (param_2 == (ID3D11Texture2D *)0x0) {
    TVar3._s_0.Y = iStackX_14;
    TVar3._s_0.X = local_res10;
    (this->SampleDim).field0_0x0 = TVar3;
    pIVar2 = (this->MFSample).Reference;
    if (pIVar2 != (IMFSample *)0x0) {
      (this->MFSample).Reference = (IMFSample *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
      if (local_res8 != (IMFMediaBuffer *)0x0) {
        (*local_res8->lpVtbl->Release)(local_res8);
      }
    }
    HVar7 = MFCreateMemoryBuffer(iVar5 * iVar9,&local_res8);
    if (HVar7 == 0) goto LAB_148d0ffa1;
    if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d10090;
    pFVar8 = &::LOG_Static;
  }
  else {
    (**(code **)((longlong)*param_2 + 8))(param_2);
    if (local_res8 != (IMFMediaBuffer *)0x0) {
      (*local_res8->lpVtbl->Release)(local_res8);
    }
    iVar5 = MFCreateDXGISurfaceBuffer
                      (&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,param_2,0,0,&local_res8);
    if (iVar5 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      }
      (**(code **)((longlong)*param_2 + 0x10))(param_2);
      goto LAB_148d10090;
    }
    (**(code **)((longlong)*param_2 + 0x10))(param_2);
LAB_148d0ffa1:
    pIVar2 = (this->MFSample).Reference;
    if (pIVar2 != (IMFSample *)0x0) {
      (this->MFSample).Reference = (IMFSample *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    HVar7 = MFCreateSample((IMFSample **)&this->MFSample);
    if (HVar7 == 0) {
      pIVar2 = (this->MFSample).Reference;
      iVar5 = (**(code **)((longlong)*pIVar2 + 0x150))(pIVar2,local_res8);
      if (-1 < iVar5) {
        if (local_res8 != (IMFMediaBuffer *)0x0) {
          (*local_res8->lpVtbl->Release)(local_res8);
        }
        return true;
      }
      if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d10090;
      pFVar8 = &::LOG_Static;
    }
    else {
      if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d10090;
      pFVar8 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoDecoder);
LAB_148d10090:
  if (local_res8 != (IMFMediaBuffer *)0x0) {
    (*local_res8->lpVtbl->Release)(local_res8);
  }
  return false;
}

// SetOwner @ 148d128f0

void __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::SetOwner
          (FF5PlayerVideoDecoderOutputDX *this,TSharedPtr<AVEncoder::IDecoderOutputOwner,1> *param_1
          )

{
  return;
}

// ShutdownPoolable @ 148d14b10

void __thiscall
AVEncoder::FF5PlayerVideoDecoderOutputDX::ShutdownPoolable(FF5PlayerVideoDecoderOutputDX *this)

{
  ID3D11Texture2D *pIVar1;
  ID3D11Device *pIVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  if (this->OutputType != HardwareWin8Plus) {
    return;
  }
  pIVar1 = (this->SharedTexture).Reference;
  local_res10 = (longlong *)0x0;
  if (pIVar1 == (ID3D11Texture2D *)0x0) {
    return;
  }
  (**(code **)*pIVar1)(pIVar1,&_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,&local_res10);
  if (local_res10 == (longlong *)0x0) {
    return;
  }
  local_res20 = 0;
  iVar3 = (**(code **)(*local_res10 + 0x40))(local_res10,&local_res20);
  if (iVar3 < 0) goto LAB_148d14c18;
  pIVar2 = (this->D3D11Device).Reference;
  local_res18 = (longlong *)0x0;
  (**(code **)((longlong)*pIVar2 + 0xe0))
            (pIVar2,local_res20,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_res18);
  if (local_res18 == (longlong *)0x0) goto LAB_148d14c18;
  local_res8 = (longlong *)0x0;
  (**(code **)*local_res10)(local_res10,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_res8);
  if (local_res8 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_res8 + 0x40))(local_res8,1,0);
    lVar4 = *local_res8;
    if (iVar3 < 0) {
      iVar3 = (**(code **)(lVar4 + 0x40))(local_res8,2,0);
      if (-1 < iVar3) {
        lVar4 = *local_res8;
        goto LAB_148d14bf3;
      }
    }
    else {
LAB_148d14bf3:
      (**(code **)(lVar4 + 0x48))(local_res8,0);
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
LAB_148d14c18:
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  return;
}

