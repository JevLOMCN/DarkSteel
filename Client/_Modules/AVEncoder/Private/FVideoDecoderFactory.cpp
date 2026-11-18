// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 8

// FVideoDecoderFactory @ 148cfffc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVideoDecoderFactory * __thiscall
AVEncoder::FVideoDecoderFactory::FVideoDecoderFactory(FVideoDecoderFactory *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FVideoDecoderInfo local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  (this->CreateDecoders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateDecoders).ArrayNum = 0;
  (this->CreateDecoders).ArrayMax = 0;
  (this->AvailableDecoders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableDecoders).ArrayNum = 0;
  (this->AvailableDecoders).ArrayMax = 0;
  if (bDebugDontRegisterDefaultCodecs == false) {
    local_58.ID = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58.CodecType = H264;
    local_30 = `AVEncoder::FVideoDecoderH264_Windows::Register'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_58.MaxWidth = 0x780;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                  ::Call;
    local_58.MaxHeight = 0x440;
    local_20 = (undefined ***)0x0;
    Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_58.ID = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58.CodecType = MPEG4;
    local_30 = `AVEncoder::FVideoDecoderMPEG4::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_58.MaxWidth = 0x780;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                  ::Call;
    local_58.MaxHeight = 0x440;
    local_20 = (undefined ***)0x0;
    Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_58.ID = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58.CodecType = H264;
    local_30 = `AVEncoder::FVideoDecoderH264_Dummy::Register'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_58.MaxWidth = 0x780;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                  ::Call;
    local_58.MaxHeight = 0x440;
    local_20 = (undefined ***)0x0;
    Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  return this;
}

// ~FVideoDecoderFactory @ 148d014a0

void __thiscall AVEncoder::FVideoDecoderFactory::~FVideoDecoderFactory(FVideoDecoderFactory *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  piVar1 = &(this->AvailableDecoders).ArrayMax;
  (this->AvailableDecoders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->AvailableDecoders).AllocatorInstance,0,piVar1);
  }
  DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int>
            ((TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)
             (this->CreateDecoders).AllocatorInstance.Data,(this->CreateDecoders).ArrayNum);
  piVar1 = &(this->CreateDecoders).ArrayMax;
  (this->CreateDecoders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->AvailableDecoders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)>,int>
            ((TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)
             (this->CreateDecoders).AllocatorInstance.Data,(this->CreateDecoders).ArrayNum);
  pFVar2 = (this->CreateDecoders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Create @ 148d05560

FVideoDecoder * __thiscall
AVEncoder::FVideoDecoderFactory::Create(FVideoDecoderFactory *this,uint param_1,FInit *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  FVideoDecoder *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  uVar8 = 0;
  if ((this->AvailableDecoders).ArrayNum < 1) {
    return (FVideoDecoder *)0x0;
  }
  lVar10 = 0;
  while( true ) {
    uVar4 = 0;
    if ((int)uVar8 < (this->AvailableDecoders).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVideoDecoder *)(*pcVar1)();
      return pFVar5;
    }
    if (*(uint *)((this->AvailableDecoders).AllocatorInstance.Data + lVar10) == param_1) break;
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 0x10;
    if ((this->AvailableDecoders).ArrayNum <= (int)uVar8) {
      return (FVideoDecoder *)0x0;
    }
  }
  uVar4 = 0;
  if ((int)uVar8 < (this->CreateDecoders).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FVideoDecoder *)(*pcVar1)();
    return pFVar5;
  }
  pFVar9 = (this->CreateDecoders).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30;
  UE::Core::Private::Function::CheckCallable(*(void **)pFVar9);
  pcVar1 = *(code **)pFVar9;
  pFVar7 = pFVar9 + 0x10;
  if (*(FScriptContainerElement **)(pFVar9 + 0x28) != (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar9 + 0x28);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  pFVar5 = (FVideoDecoder *)(*pcVar1)(uVar6);
  if (pFVar5 != (FVideoDecoder *)0x0) {
    cVar3 = (*(code *)**(undefined8 **)pFVar5)(pFVar5,param_2);
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      return (FVideoDecoder *)0x0;
    }
    return pFVar5;
  }
  return (FVideoDecoder *)0x0;
}

// Debug_SetDontRegisterDefaultCodecs @ 148d08100

void __cdecl AVEncoder::FVideoDecoderFactory::Debug_SetDontRegisterDefaultCodecs(void)

{
  bDebugDontRegisterDefaultCodecs = true;
  return;
}

// Get @ 148d0aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVideoDecoderFactory * __cdecl AVEncoder::FVideoDecoderFactory::Get(void)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FVideoDecoderInfo local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (bDebugDontRegisterDefaultCodecs == false) {
      local_38 = &
                 ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_58.CodecType = H264;
      local_30 = `AVEncoder::FVideoDecoderH264_Windows::Register'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
      local_58.MaxWidth = 0x780;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                    ::Call;
      local_58.ID = 0;
      local_58.MaxHeight = 0x440;
      local_20 = (undefined ***)0x0;
      Register(&::Singleton,&local_58,
               (TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar1 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar1 = local_20;
        }
        (*(code *)(*pppuVar1)[2])();
      }
      local_58.ID = 0;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_58.CodecType = MPEG4;
      local_30 = `AVEncoder::FVideoDecoderMPEG4::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>
      ;
      local_58.MaxWidth = 0x780;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                    ::Call;
      local_58.MaxHeight = 0x440;
      local_20 = (undefined ***)0x0;
      Register(&::Singleton,&local_58,
               (TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar1 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar1 = local_20;
        }
        (*(code *)(*pppuVar1)[2])();
      }
      local_58.ID = 0;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_58.CodecType = H264;
      local_30 = `AVEncoder::FVideoDecoderH264_Dummy::Register'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
      local_58.MaxWidth = 0x780;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                    ::Call;
      local_58.MaxHeight = 0x440;
      local_20 = (undefined ***)0x0;
      Register(&::Singleton,&local_58,
               (TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar1 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar1 = local_20;
        }
        (*(code *)(*pppuVar1)[2])();
      }
    }
    atexit(`AVEncoder::FVideoDecoderFactory::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__
          );
    _Init_thread_footer(&::_TSS0);
  }
  return &::Singleton;
}

// GetInfo @ 148d0b440

bool __thiscall
AVEncoder::FVideoDecoderFactory::GetInfo
          (FVideoDecoderFactory *this,uint param_1,FVideoDecoderInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->AvailableDecoders).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->AvailableDecoders).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (*(uint *)((this->AvailableDecoders).AllocatorInstance.Data + lVar9) == param_1) {
        uVar7 = 0;
        if ((int)uVar8 < (this->AvailableDecoders).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        pFVar1 = (this->AvailableDecoders).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        uVar3 = *(undefined8 *)pFVar1;
        uVar4 = *(undefined8 *)(pFVar1 + 8);
        param_2->ID = (int)uVar3;
        param_2->MaxWidth = (int)((ulonglong)uVar3 >> 0x20);
        param_2->MaxHeight = (int)uVar4;
        param_2->CodecType = (int)((ulonglong)uVar4 >> 0x20);
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->AvailableDecoders).ArrayNum);
  }
  return false;
}

// Register @ 148d10b40

void __thiscall
AVEncoder::FVideoDecoderFactory::Register
          (FVideoDecoderFactory *this,FVideoDecoderInfo *param_1,
          TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *param_2)

{
  int *piVar1;
  FVideoDecoderInfo *pFVar2;
  TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *pTVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  
  pFVar2 = (FVideoDecoderInfo *)(this->AvailableDecoders).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->AvailableDecoders).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->AvailableDecoders).ArrayNum;
  piVar1 = &(this->AvailableDecoders).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->AvailableDecoders).AllocatorInstance,piVar1);
  }
  (this->AvailableDecoders).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)&param_1->MaxHeight;
  pFVar13 = (this->AvailableDecoders).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar13 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar13 + 8) = uVar6;
  LOCK();
  iVar5 = NextID.Counter + 1;
  UNLOCK();
  iVar8 = (this->AvailableDecoders).ArrayNum;
  iVar12 = NextID.Counter + 1;
  uVar11 = iVar8 - 1;
  uVar9 = 0;
  if ((int)uVar11 < iVar8) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  NextID.Counter = iVar5;
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(int *)((this->AvailableDecoders).AllocatorInstance.Data +
          (longlong)(this->AvailableDecoders).ArrayNum * 0x10 + -0x10) = iVar12;
  pTVar3 = (TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)
           (this->CreateDecoders).AllocatorInstance.Data;
  if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->CreateDecoders).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->CreateDecoders).ArrayNum;
  piVar1 = &(this->CreateDecoders).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,(ForAnyElementType *)this,piVar1);
  }
  (this->CreateDecoders).ArrayNum = iVar8 + 1;
  pFVar13 = (this->CreateDecoders).AllocatorInstance.Data + (longlong)iVar8 * 0x30;
  *(longlong *)pFVar13 = *(longlong *)param_2;
  *(longlong *)(pFVar13 + 0x28) = 0;
  if (*(longlong *)pFVar13 != 0) {
    puVar10 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar10)();
  }
  return;
}

// RegisterDefaultCodecs @ 148d111c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall AVEncoder::FVideoDecoderFactory::RegisterDefaultCodecs(FVideoDecoderFactory *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FVideoDecoderInfo local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.CodecType = H264;
  local_38 = &
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58.MaxWidth = 0x780;
  local_30 = `AVEncoder::FVideoDecoderH264_Windows::Register'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_58.MaxHeight = 0x440;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                ::Call;
  local_58.ID = 0;
  local_20 = (undefined ***)0x0;
  Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58.ID = 0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58.CodecType = MPEG4;
  local_30 = `AVEncoder::FVideoDecoderMPEG4::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_58.MaxWidth = 0x780;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                ::Call;
  local_58.MaxHeight = 0x440;
  local_20 = (undefined ***)0x0;
  Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58.ID = 0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58.CodecType = H264;
  local_30 = `AVEncoder::FVideoDecoderH264_Dummy::Register'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_58.MaxWidth = 0x780;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                ::Call;
  local_58.MaxHeight = 0x440;
  local_20 = (undefined ***)0x0;
  Register(this,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

