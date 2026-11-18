// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// operator() @ 145f049b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)(*(longlong *)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Readback->bCancel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)this != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Readback->PendingRenderThreadCommands == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(*(longlong *)this + 5) == '\0') {
    if (*(longlong *)(*(longlong *)this + 8) != 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3222009247696945306>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x9a,"!Readback->AsyncReadback.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (2 < (byte)LogLandscape._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
      TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
                ((TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *)
                 (*(longlong *)this + 8),(FRHIGPUTextureReadback *)0x0);
    }
  }
  else {
    if (*(char *)(*(longlong *)this + 6) == '\0') {
      FLandscapeAsyncTextureReadback::FinishReadback_RenderThread
                (*(FLandscapeAsyncTextureReadback **)this);
    }
    if (*(char *)(*(longlong *)this + 6) == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Readback->bFinishedOnRenderThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x95,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (*(FLandscapeAsyncTextureReadback **)this != (FLandscapeAsyncTextureReadback *)0x0) {
    FLandscapeAsyncTextureReadback::_scalar_deleting_destructor_
              (*(FLandscapeAsyncTextureReadback **)this,1);
    return;
  }
  return;
}

// operator() @ 145f04b80

void __thiscall
`FLandscapeAsyncTextureReadback::CheckAndUpdate'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FLandscapeAsyncTextureReadback *this_00;
  FRHIGPUTextureReadback *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  
  this_00 = *(FLandscapeAsyncTextureReadback **)this;
  cVar5 = *(char *)((longlong)this + 8);
  if (this_00->bStartedOnRenderThread == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bStartedOnRenderThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x1a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this_00->bFinishedOnRenderThread != (atomic<bool>)0x0) goto LAB_145f04c2e;
  if ((this_00->AsyncReadback).Ptr == (FRHIGPUTextureReadback *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncReadback.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x20,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (cVar5 == '\0') {
    pFVar1 = (this_00->AsyncReadback).Ptr;
    lVar2 = pFVar1->_padding_;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) goto LAB_145f04c2e;
      cVar5 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar5 == '\0') goto LAB_145f04c2e;
    }
  }
  FLandscapeAsyncTextureReadback::FinishReadback_RenderThread(this_00);
LAB_145f04c2e:
  LOCK();
  **(int **)this = **(int **)this + -1;
  UNLOCK();
  return;
}

// CancelAndSelfDestruct @ 145f097a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(FLandscapeAsyncTextureReadback *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeAsyncTextureReadback *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeAsyncTextureReadback *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  LOCK();
  this->bCancel = (atomic<bool>)0x1;
  UNLOCK();
  LOCK();
  this->PendingRenderThreadCommands = (atomic<int>)((int)this->PendingRenderThreadCommands + 1);
  UNLOCK();
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct_::__l2::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::__l2::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// CheckAndUpdate @ 145f09af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLandscapeAsyncTextureReadback::CheckAndUpdate
          (FLandscapeAsyncTextureReadback *this,bool *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeAsyncTextureReadback *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeAsyncTextureReadback *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->bFinishedOnRenderThread == (atomic<bool>)0x0) {
    LOCK();
    this->PendingRenderThreadCommands = (atomic<int>)((int)this->PendingRenderThreadCommands + 1);
    UNLOCK();
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLandscapeAsyncTextureReadback::CheckAndUpdate'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_67 = auStack_b8._41_4_;
    uStack_63 = auStack_b8._45_2_;
    uStack_61 = auStack_b8[0x2f];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLandscapeAsyncTextureReadback::CheckAndUpdate'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    local_68 = param_2;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FLandscapeAsyncTextureReadback::CheckAndUpdate_::__l2::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_38._1_4_ = uStack_67;
      local_38._0_1_ = local_68;
      local_38._5_2_ = uStack_63;
      local_38._7_1_ = uStack_61;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FLandscapeAsyncTextureReadback::CheckAndUpdate'::__l2::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    *param_1 = true;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// CheckAndUpdate_RenderThread @ 145f09c90

void __thiscall
FLandscapeAsyncTextureReadback::CheckAndUpdate_RenderThread
          (FLandscapeAsyncTextureReadback *this,bool param_1)

{
  FRHIGPUTextureReadback *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  
  if ((this->bStartedOnRenderThread == (atomic<bool>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStartedOnRenderThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x1a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bFinishedOnRenderThread != (atomic<bool>)0x0) {
    return;
  }
  if (((this->AsyncReadback).Ptr == (FRHIGPUTextureReadback *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncReadback.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x20,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (!param_1) {
    pFVar1 = (this->AsyncReadback).Ptr;
    lVar2 = pFVar1->_padding_;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        return;
      }
      cVar5 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar5 == '\0') {
        return;
      }
    }
  }
  FinishReadback_RenderThread(this);
  return;
}

// FinishReadback_RenderThread @ 145f0d550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLandscapeAsyncTextureReadback::FinishReadback_RenderThread(FLandscapeAsyncTextureReadback *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  int iVar6;
  size_t _Size;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  int local_res8 [2];
  int local_res10 [2];
  
  if (((this->bStartedOnRenderThread == (atomic<bool>)0x0) ||
      ((this->AsyncReadback).Ptr == (FRHIGPUTextureReadback *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStartedOnRenderThread && AsyncReadback.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x29,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = 0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  _Src = FRHIGPUTextureReadback::Lock((this->AsyncReadback).Ptr,local_res8,local_res10);
  if ((_Src == (FScriptContainerElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x30,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_res8[0] < this->TextureWidth) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RowPitchInPixels >= TextureWidth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x31,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_res10[0] < this->TextureHeight) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferHeight >= TextureHeight",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x32,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bCancel == (atomic<bool>)0x0) {
    piVar1 = &(this->ReadbackResults).ArrayNum;
    uVar7 = this->TextureHeight * this->TextureWidth;
    iVar5 = *piVar1;
    if (iVar5 < (int)uVar7) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7 - iVar5,&(this->ReadbackResults).AllocatorInstance,piVar1,
                 &(this->ReadbackResults).ArrayMax);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar5) {
        uVar11 = iVar5 - uVar7;
        if (((int)(uVar11 | uVar7) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar11 != 0) {
          pFVar9 = (this->ReadbackResults).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
          iVar5 = ((this->ReadbackResults).ArrayNum - uVar11) - uVar7;
          if (iVar5 != 0) {
            memmove(pFVar9,pFVar9 + (longlong)(int)uVar11 * 4,(longlong)iVar5 << 2);
          }
          iVar5 = (this->ReadbackResults).ArrayNum - uVar11;
          (this->ReadbackResults).ArrayNum = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(this->ReadbackResults).AllocatorInstance,iVar5,
                     &(this->ReadbackResults).ArrayMax);
        }
      }
    }
    uVar8 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xc1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].Language == LANGUAGE_OpenGL;
    if ((bVar4) || (this->TextureWidth != local_res8[0])) {
      pFVar9 = (this->ReadbackResults).AllocatorInstance.Data;
      if (bVar4) {
        iVar10 = 0;
        if (0 < this->TextureHeight) {
          iVar5 = this->TextureWidth;
          do {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                iVar6 = iVar6 + 1;
                *pFVar9 = _Src[2];
                pFVar9[1] = _Src[1];
                pFVar9[2] = *_Src;
                pFVar2 = _Src + 3;
                _Src = _Src + 4;
                pFVar9[3] = *pFVar2;
                pFVar9 = pFVar9 + 4;
                iVar5 = this->TextureWidth;
              } while (iVar6 < iVar5);
            }
            iVar10 = iVar10 + 1;
            _Src = _Src + (longlong)(local_res8[0] - iVar5) * 4;
          } while (iVar10 < this->TextureHeight);
        }
      }
      else if (0 < this->TextureHeight) {
        _Size = (longlong)this->TextureWidth << 2;
        do {
          memcpy(pFVar9,_Src,_Size);
          iVar10 = iVar10 + 1;
          _Size = (longlong)this->TextureWidth * 4;
          pFVar9 = pFVar9 + _Size;
          _Src = _Src + (longlong)local_res8[0] * 4;
        } while (iVar10 < this->TextureHeight);
      }
    }
    else {
      memcpy((this->ReadbackResults).AllocatorInstance.Data,_Src,
             (longlong)(this->TextureWidth * this->TextureHeight) << 2);
    }
  }
  FRHIGPUTextureReadback::Unlock((this->AsyncReadback).Ptr);
  TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
            (&this->AsyncReadback,(FRHIGPUTextureReadback *)0x0);
  LOCK();
  this->bFinishedOnRenderThread = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// QueueDeletionFromGameThread @ 145f17f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(FLandscapeAsyncTextureReadback *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeAsyncTextureReadback *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeAsyncTextureReadback *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bFinishedOnRenderThread == (atomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinishedOnRenderThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  this->PendingRenderThreadCommands = (atomic<int>)((int)this->PendingRenderThreadCommands + 1);
  UNLOCK();
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread_::__l2::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread'::__l2::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// StartReadback_RenderThread @ 145f1e750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeAsyncTextureReadback::StartReadback_RenderThread
          (FLandscapeAsyncTextureReadback *this,FRDGBuilder *param_1,FRDGTexture *param_2)

{
  TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *pTVar1;
  short sVar2;
  int iVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIGPUTextureReadback *pFVar7;
  FName *pFVar8;
  FRHIGPUTextureReadback *pFVar9;
  longlong lVar10;
  FName local_res8;
  undefined8 local_38 [2];
  FResolveRect local_28;
  
  if (((this->bStartedOnRenderThread != (atomic<bool>)0x0) ||
      ((this->AsyncReadback).Ptr != (FRHIGPUTextureReadback *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bStartedOnRenderThread && !AsyncReadback",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0xb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_2->Desc).field_0x33 != '\x02') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RDGTexture->Desc.Format == PF_B8G8R8A8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0xc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = ::operator_new(0x58);
  if (pFVar7 == (FRHIGPUTextureReadback *)0x0) {
    pFVar7 = (FRHIGPUTextureReadback *)0x0;
  }
  else {
    pFVar8 = ::FName::FName(&local_res8,L"LandscapeGrassReadback");
    pFVar7 = FRHIGPUTextureReadback::FRHIGPUTextureReadback(pFVar7,*pFVar8);
  }
  pTVar1 = &this->AsyncReadback;
  if (pTVar1 == (TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *)
                local_38) {
LAB_145f1e877:
    pFVar9 = pFVar7;
    if (pFVar9 == (FRHIGPUTextureReadback *)0x0) goto LAB_145f1e8d3;
    pFVar7 = pFVar9 + 1;
    lVar10 = 8;
    do {
      pFVar4 = pFVar7[-1].DestinationStagingTextures[7].Reference;
      pFVar7 = (FRHIGPUTextureReadback *)(pFVar7[-1].DestinationStagingTextures + 7);
      lVar10 = lVar10 + -1;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    } while (lVar10 != 0);
    pFVar9->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar9->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9->_padding_);
    }
  }
  else {
    pFVar9 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    pFVar7 = (FRHIGPUTextureReadback *)0x0;
    if (pFVar9 == (FRHIGPUTextureReadback *)0x0) goto LAB_145f1e877;
    pFVar7 = pFVar9 + 1;
    lVar10 = 8;
    do {
      pFVar4 = pFVar7[-1].DestinationStagingTextures[7].Reference;
      pFVar7 = (FRHIGPUTextureReadback *)(pFVar7[-1].DestinationStagingTextures + 7);
      lVar10 = lVar10 + -1;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    } while (lVar10 != 0);
    pFVar9->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar9->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9->_padding_);
    }
  }
  ::operator_delete(pFVar9,0x58);
LAB_145f1e8d3:
  local_28.X1 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_28.Y1 = _UNK_15060db24;
  local_28.X2 = _UNK_15060db28;
  local_28.Y2 = _UNK_15060db2c;
  AddEnqueueCopyPass(param_1,(this->AsyncReadback).Ptr,param_2,&local_28,0);
  sVar2 = *(short *)&(param_2->Desc).field_0x2c;
  iVar3 = *(int *)&(param_2->Desc).field_0x28;
  this->TextureWidth = *(int *)&(param_2->Desc).field_0x24;
  this->TextureHeight = iVar3;
  if ((sVar2 != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size.Z == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x12,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  this->bStartedOnRenderThread = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

