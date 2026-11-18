// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 10

// operator()<TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>_const_> @ 148cff610

FString * __thiscall
`AVEncoder::RegisterDefaultFactories'::__l3::<lambda_1>::
operator()<TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>_const_>
          (void *this,FString *__return_storage_ptr__,
          TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString *local_48;
  int local_40;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  uVar2 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)uVar2;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar10 + uVar6 * 8;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<AVEncoder::FAudioEncoderFactory_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar1) break;
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)pFVar10 + 0x10))(*(longlong **)pFVar10,&local_48);
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    bVar3 = true;
    lVar4 = plVar5[1];
    puVar7 = (undefined8 *)*plVar5;
    puVar8 = puVar7 + (longlong)(int)lVar4 * 2;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar4) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar7 == puVar8) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_78,L"/",1);
      }
      iVar9 = *(int *)(puVar7 + 1) + -1;
      if (*(int *)(puVar7 + 1) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_78,(wchar_t *)*puVar7,iVar9);
      puVar7 = puVar7 + 2;
    }
    (**(code **)(**(longlong **)pFVar10 + 8))();
    ::FString::PrintfImpl(&local_58,L", %s(%s) ");
    iVar9 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar9);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>(local_48,local_40);
    if (local_48 != (FString *)0x0) {
      FMemory::Free(local_48);
    }
    uVar6 = (ulonglong)uVar2;
    pFVar10 = pFVar10 + 8;
  }
  if (local_68.Data.ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,L"None");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
    (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
  }
  return __return_storage_ptr__;
}

// Actives @ 148d03220

TMap<void_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>_> *
__cdecl AVEncoder::Actives(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`AVEncoder::Actives'::__l2::_dynamic_atexit_destructor_for__a__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &a;
}

// CloneMediaBuffer @ 148d04110

TRefCountPtr<IMFMediaBuffer> __cdecl
AVEncoder::`anonymous_namespace'::CloneMediaBuffer(TRefCountPtr<IMFMediaBuffer> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  HRESULT HVar4;
  TRefCountPtr<IMFMediaBuffer> TVar5;
  undefined8 *in_RDX;
  DWORD local_res8 [2];
  undefined4 local_res10 [2];
  void *local_res18;
  void *local_res20;
  
  local_res18 = (void *)0x0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  iVar3 = (**(code **)(*(longlong *)*in_RDX + 0x18))
                    ((longlong *)*in_RDX,&local_res18,local_res10,local_res8);
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Src->Lock(&SrcByteBuffer, &SrcMaxLen, &SrcCurrLen))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  param_1->Reference = (IMFMediaBuffer *)0x0;
  HVar4 = MFCreateMemoryBuffer(local_res8[0],(IMFMediaBuffer **)param_1);
  if (HVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(MFCreateMemoryBuffer(SrcCurrLen, Dest.GetInitReference()))) >= 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  local_res20 = (void *)0x0;
  iVar3 = (**(code **)((longlong)*param_1->Reference + 0x18))(param_1->Reference,&local_res20,0,0);
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Dest->Lock(&DestByteBuffer, nullptr, nullptr))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  memcpy(local_res20,local_res18,(ulonglong)local_res8[0]);
  iVar3 = (**(code **)((longlong)*param_1->Reference + 0x20))();
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Dest->Unlock())) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  iVar3 = (**(code **)(*(longlong *)*in_RDX + 0x20))();
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Src->Unlock())) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  iVar3 = (**(code **)((longlong)*param_1->Reference + 0x30))(param_1->Reference,local_res8[0]);
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Dest->SetCurrentLength(SrcCurrLen))) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.Reference = (IMFMediaBuffer *)(*pcVar1)();
      return (TRefCountPtr<IMFMediaBuffer>)TVar5.Reference;
    }
  }
  return (TRefCountPtr<IMFMediaBuffer>)(IMFMediaBuffer *)param_1;
}

// CopyI420ToNV12 @ 148d04980

void __cdecl
AVEncoder::CopyI420ToNV12(FVideoDecoderAllocFrameBufferResult *param_1,VIDImage *param_2)

{
  uchar uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  void *_Dst;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  uchar *puVar17;
  ulonglong uVar18;
  
  sVar2 = param_2->width;
  sVar3 = param_2->height;
  puVar17 = param_2->y;
  puVar13 = param_2->u;
  puVar14 = param_2->v;
  if ((param_1->AllocatedPlanesNum != 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuf->AllocatedPlanesNum == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                         ,0x173,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvVar6 = param_1->AllocatedBuffer;
  if ((param_1->AllocatedPlaneDesc[0].BytesPerPixel != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuf->AllocatedPlaneDesc[0].BytesPerPixel == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                         ,0x177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->AllocatedPlaneDesc[0].ByteOffsetBetweenPixels != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuf->AllocatedPlaneDesc[0].ByteOffsetBetweenPixels == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                         ,0x178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  _Dst = (void *)((longlong)param_1->AllocatedPlaneDesc[0].ByteOffsetToFirstPixel + (longlong)pvVar6
                 );
  if (0 < sVar3) {
    uVar18 = (ulonglong)(uint)(int)sVar3;
    do {
      memcpy(_Dst,puVar17,(longlong)(int)sVar2);
      puVar17 = puVar17 + param_2->texWidth;
      _Dst = (void *)((longlong)_Dst +
                     (longlong)param_1->AllocatedPlaneDesc[0].ByteOffsetBetweenRows);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if ((param_1->AllocatedPlaneDesc[1].BytesPerPixel != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuf->AllocatedPlaneDesc[1].BytesPerPixel == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                         ,0x189,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->AllocatedPlaneDesc[2].BytesPerPixel != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuf->AllocatedPlaneDesc[2].BytesPerPixel == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderMpeg4.cpp"
                         ,0x18a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = param_1->AllocatedPlaneDesc[1].ByteOffsetBetweenPixels;
  iVar5 = param_1->AllocatedPlaneDesc[2].ByteOffsetBetweenPixels;
  puVar16 = (uchar *)((longlong)param_1->AllocatedPlaneDesc[1].ByteOffsetToFirstPixel +
                     (longlong)pvVar6);
  uVar9 = (int)sVar3 / 2;
  puVar17 = (uchar *)((longlong)param_1->AllocatedPlaneDesc[2].ByteOffsetToFirstPixel +
                     (longlong)pvVar6);
  if (0 < (int)uVar9) {
    uVar18 = (ulonglong)uVar9;
    uVar9 = (int)sVar2 / 2;
    do {
      if (0 < (int)uVar9) {
        puVar11 = puVar16;
        puVar12 = puVar17;
        uVar15 = (ulonglong)uVar9;
        do {
          uVar1 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar11 = uVar1;
          puVar11 = puVar11 + iVar4;
          uVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar12 = uVar1;
          puVar12 = puVar12 + iVar5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar10 = ((int)param_2->texWidth - (int)param_2->width) / 2;
      puVar13 = puVar13 + iVar10;
      puVar16 = puVar16 + param_1->AllocatedPlaneDesc[1].ByteOffsetBetweenRows;
      puVar14 = puVar14 + iVar10;
      puVar17 = puVar17 + param_1->AllocatedPlaneDesc[2].ByteOffsetBetweenRows;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}

// DebugSetD3D11ObjectName @ 148d080b0

void __cdecl AVEncoder::DebugSetD3D11ObjectName(ID3D11DeviceChild *param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_1 != (ID3D11DeviceChild *)0x0) {
    sVar1 = strlen(param_2);
    (**(code **)((longlong)*param_1 + 0x28))
              (param_1,&_D3DDebugObjectName,sVar1 & 0xffffffff,param_2);
  }
  return;
}

// DoDefaultRegistration @ 148d09870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AVEncoder::DoDefaultRegistration(void)

{
  ForAnyElementType _Src;
  longlong lVar1;
  FWmfAudioEncoderFactory *local_res8;
  TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (!GDefaultFactoriesRegistered) {
    GDefaultFactoriesRegistered = true;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      WmfAudioEncoderFactory = (FWmfAudioEncoderFactory)&___7FWmfAudioEncoderFactory_AVEncoder__6B_;
      atexit(`AVEncoder::RegisterDefaultFactories'::__l2::
             _dynamic_atexit_destructor_for__WmfAudioEncoderFactory__);
      _Init_thread_footer(&::_TSS0);
    }
    DoDefaultRegistration();
    local_res8 = &WmfAudioEncoderFactory;
    TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<AVEncoder::FAudioEncoderFactory_*>
              (&FAudioEncoderFactory::Factories,(FAudioEncoderFactory **)&local_res8);
    if (4 < (byte)LogAVEncoder._0_1_) {
      DoDefaultRegistration();
      _Src = FAudioEncoderFactory::Factories.AllocatorInstance;
      lVar1 = (longlong)FAudioEncoderFactory::Factories.ArrayNum;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = FAudioEncoderFactory::Factories.ArrayNum;
      if (FAudioEncoderFactory::Factories.ArrayNum == 0) {
        local_28.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,FAudioEncoderFactory::Factories.ArrayNum,0,&local_28.AllocatorInstance,
                   FAudioEncoderFactory::Factories.ArrayNum,&local_28.ArrayMax);
        memcpy(local_28.AllocatorInstance.Data,_Src.Data,lVar1 << 3);
      }
      `AVEncoder::RegisterDefaultFactories'::__l3::<lambda_1>::
      operator()<TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>_const_>
                (&local_res8,&local_18,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetComErrorDescription @ 148d0afa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl AVEncoder::GetComErrorDescription(FString *__return_storage_ptr__,DWORD param_1)

{
  DWORD DVar1;
  wchar_t *pwVar2;
  undefined1 auStackY_2058 [32];
  WCHAR local_2018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x148d0afac;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2058;
  DVar1 = FormatMessageW(0x1000,(LPCVOID)0x0,param_1,0,local_2018,0x1000,(va_list *)0x0);
  pwVar2 = local_2018;
  if (DVar1 == 0) {
    pwVar2 = L"[cannot find error description]";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// IsWindows7Plus @ 148d0d4d0

bool __cdecl AVEncoder::Electra::IsWindows7Plus(void)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(6,1,0);
  return bVar1;
}

// IsWindows8Plus @ 148d0d4f0

bool __cdecl AVEncoder::Electra::IsWindows8Plus(void)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
  return bVar1;
}

// RegisterDefaultFactories @ 148d11350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AVEncoder::RegisterDefaultFactories(void)

{
  ForAnyElementType _Src;
  longlong lVar1;
  FWmfAudioEncoderFactory *local_res8;
  TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  GDefaultFactoriesRegistered = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      WmfAudioEncoderFactory = (FWmfAudioEncoderFactory)&___7FWmfAudioEncoderFactory_AVEncoder__6B_;
      atexit(`AVEncoder::RegisterDefaultFactories'::__l2::
             _dynamic_atexit_destructor_for__WmfAudioEncoderFactory__);
      _Init_thread_footer(&::_TSS0);
    }
    if (GDefaultFactoriesRegistered == false) {
      RegisterDefaultFactories();
    }
  }
  local_res8 = &WmfAudioEncoderFactory;
  TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<AVEncoder::FAudioEncoderFactory_*>
            (&FAudioEncoderFactory::Factories,(FAudioEncoderFactory **)&local_res8);
  if (4 < (byte)LogAVEncoder._0_1_) {
    if (GDefaultFactoriesRegistered == false) {
      RegisterDefaultFactories();
    }
    _Src.Data = FAudioEncoderFactory::Factories.AllocatorInstance.Data;
    lVar1 = (longlong)FAudioEncoderFactory::Factories.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = FAudioEncoderFactory::Factories.ArrayNum;
    if (FAudioEncoderFactory::Factories.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,FAudioEncoderFactory::Factories.ArrayNum,0,&local_28.AllocatorInstance,
                 FAudioEncoderFactory::Factories.ArrayNum,&local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,_Src.Data,lVar1 << 3);
    }
    `AVEncoder::RegisterDefaultFactories'::__l3::<lambda_1>::
    operator()<TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>_const_>
              (&local_res8,&local_18,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

