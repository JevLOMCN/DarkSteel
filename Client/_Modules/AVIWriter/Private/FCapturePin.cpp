// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 10

// FCapturePin @ 14464e7b0

FCapturePin * __thiscall
FCapturePin::FCapturePin(FCapturePin *this,long *param_1,CSource *param_2,FAVIWriter *param_3)

{
  double dVar1;
  
  CSourceStream::CSourceStream((CSourceStream *)this,(wchar_t *)0x0,param_1,param_2,L"Capture");
  dVar1 = __real_416312d000000000;
  this->_padding_ = (longlong)&___7FCapturePin__6B_;
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IPin__;
  this->_padding_ = (longlong)&_vftable__for__IQualityControl__;
  this->FrameLength =
       (longlong)
       (dVar1 / ((double)(param_3->Options).CaptureFramerateNumerator /
                (double)(param_3->Options).CaptureFramerateDenominator));
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->SharedState);
  this->Writer = param_3;
  this->ImageWidth = (param_3->Options).Width;
  this->ImageHeight = (param_3->Options).Height;
  return this;
}

// ~FCapturePin @ 14464ec50

void __thiscall FCapturePin::~FCapturePin(FCapturePin *this)

{
  this->_padding_ = (longlong)&___7FCapturePin__6B_;
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IPin__;
  this->_padding_ = (longlong)&_vftable__for__IQualityControl__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SharedState);
  CSourceStream::~CSourceStream((CSourceStream *)this);
  return;
}

// CheckMediaType @ 14464fb20

undefined4 __thiscall FCapturePin::CheckMediaType(FCapturePin *this,CMediaType *param_1)

{
  uchar auVar1 [8];
  uchar auVar2 [8];
  longlong lVar3;
  int iVar4;
  
  if (param_1 == (CMediaType *)0x0) {
    return 0x80004003;
  }
  if (((((*(longlong *)param_1 == MEDIATYPE_Video._0_8_) &&
        (auVar1[0] = param_1->field_0x8, auVar1[1] = param_1->field_0x9,
        auVar1[2] = param_1->field_0xa, auVar1[3] = param_1->field_0xb,
        auVar1[4] = param_1->field_0xc, auVar1[5] = param_1->field_0xd,
        auVar1[6] = param_1->field_0xe, auVar1[7] = param_1->field_0xf,
        auVar1 == MEDIATYPE_Video.Data4)) && (*(int *)&param_1->field_0x20 != 0)) &&
      ((&param_1->field_0x10 != (undefined1 *)0x0 &&
       (*(longlong *)&param_1->field_0x10 == MEDIASUBTYPE_RGB32._0_8_)))) &&
     ((auVar2[0] = param_1->field_0x18, auVar2[1] = param_1->field_0x19,
      auVar2[2] = param_1->field_0x1a, auVar2[3] = param_1->field_0x1b,
      auVar2[4] = param_1->field_0x1c, auVar2[5] = param_1->field_0x1d,
      auVar2[6] = param_1->field_0x1e, auVar2[7] = param_1->field_0x1f,
      auVar2 == MEDIASUBTYPE_RGB32.Data4 &&
      ((lVar3 = *(longlong *)&param_1->field_0x50, lVar3 != 0 &&
       (*(int *)(lVar3 + 0x34) == *(int *)((longlong)&this->_padding_ + 4))))))) {
    iVar4 = -*(int *)(lVar3 + 0x38);
    if (-*(int *)(lVar3 + 0x38) < 0) {
      iVar4 = *(int *)(lVar3 + 0x38);
    }
    if (iVar4 == (int)this->_padding_) {
      return 0;
    }
  }
  return 0x80070057;
}

// DecideBufferSize @ 14464fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FCapturePin::DecideBufferSize
          (FCapturePin *this,IMemAllocator *param_1,_AllocatorProperties *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_1 == (IMemAllocator *)0x0) || (param_2 == (_AllocatorProperties *)0x0)) {
    iVar6 = -0x7fffbffd;
  }
  else {
    lVar1 = this->_padding_;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
    lVar2 = this->_padding_;
    param_2->cBuffers = 1;
    iVar6 = *(int *)(lVar2 + 0x44);
    param_2->cbBuffer = iVar6;
    if (iVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("pProperties->cbBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\CapturePin.cpp"
                         ,0xaa,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar6 = (**(code **)((longlong)*param_1 + 0x18))(param_1,param_2,&local_38);
    if (-1 < iVar6) {
      if (local_34 < param_2->cbBuffer) {
        iVar6 = -0x7fffbffb;
      }
      else {
        if (local_38 != 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Actual.cBuffers == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\CapturePin.cpp"
                             ,0xbc,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
        }
        iVar6 = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
  }
  return iVar6;
}

// DoBufferProcessingLoop @ 14464fe70

undefined4 __thiscall FCapturePin::DoBufferProcessingLoop(FCapturePin *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int iVar2;
  FCapturedFrames *pFVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  bool bVar8;
  ulong local_res8 [2];
  undefined4 local_res10;
  char local_res14;
  
  (**(code **)(this->_padding_ + 0x28))();
  bVar8 = false;
  bVar4 = false;
  do {
    do {
      iVar5 = CAMThread::CheckRequest((CAMThread *)this,local_res8);
      if (iVar5 != 0) {
        if ((local_res8[0] == 1) || (local_res8[0] == 2)) {
          bVar8 = local_res8[0] == 1;
          uVar6 = 0;
        }
        else {
          if (local_res8[0] == 3) goto LAB_14464fede;
          uVar6 = 0x8000ffff;
        }
        CAMThread::Reply((CAMThread *)this,uVar6);
      }
LAB_14464fede:
      if ((bVar4) || (*(int *)(this->_padding_ + 0xb8) != 0)) {
        bVar4 = true;
      }
      if ((!bVar8) && (ProcessFrames(this), uVar7 = local_res10, local_res14 != '\0'))
      goto LAB_14464ff87;
    } while (!bVar4);
    if ((bVar8) || (pFVar3 = (this->Writer->CapturedFrames).Ptr, pFVar3 == (FCapturedFrames *)0x0))
    break;
    pFVar1 = &pFVar3->InMemoryFrameMutex;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14464ffb7:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar5 = (pFVar3->InMemoryFrames).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &pFVar3->ArchiveFrameMutex;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14464ffb7;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar2 = (pFVar3->ArchivedFrames).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  } while (iVar2 + iVar5 != 0);
  uVar7 = 1;
LAB_14464ff87:
  (**(code **)(**(longlong **)(this->_padding_ + 0xb0) + 0x10))();
  return uVar7;
}

// FillBuffer @ 14464ffe0

undefined4 __thiscall FCapturePin::FillBuffer(FCapturePin *this,IMediaSample *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong _Size;
  int iVar4;
  void *local_res10;
  longlong local_res18;
  longlong local_res20;
  ulonglong local_38;
  ulonglong local_30;
  
  if (param_1 == (IMediaSample *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SharedState);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_res10);
  (**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (((*(longlong *)((longlong)&this->_padding_ + 4) != FORMAT_VideoInfo._0_8_) ||
      (*(uchar (*) [8])((longlong)&this->_padding_ + 4) != FORMAT_VideoInfo.Data4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_mt.formattype == FORMAT_VideoInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\CapturePin.cpp"
                         ,0xf3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (local_res10 != (void *)0x0) {
    iVar4 = this->ImageHeight + -1;
    if (-1 < iVar4) {
      _Size = (ulonglong)(uint)(this->ImageWidth << 2);
      do {
        memcpy(local_res10,
               (this->CurrentFrame->FrameData).AllocatorInstance.Data +
               (longlong)(iVar4 * this->ImageWidth) * 4,_Size);
        local_res10 = (void *)((longlong)local_res10 + _Size);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  local_res20 = (longlong)(this->CurrentFrame->StartTimeSeconds * __real_416312d000000000);
  local_res18 = (longlong)(this->CurrentFrame->EndTimeSeconds * __real_416312d000000000);
  (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_res20,&local_res18);
  local_30 = (ulonglong)this->CurrentFrame->FrameIndex;
  local_38 = (ulonglong)(this->CurrentFrame->FrameIndex + 1);
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_30,&local_38);
  (**(code **)((longlong)*param_1 + 0x40))(param_1,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SharedState);
  return 0;
}

// GetMediaType @ 144650620

undefined4 __thiscall FCapturePin::GetMediaType(FCapturePin *this,int param_1,CMediaType *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  LONG LVar3;
  LPRECT lprc;
  undefined4 uVar4;
  
  if (param_2 == (CMediaType *)0x0) {
    return 0x80004003;
  }
  lVar1 = this->_padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
  if (param_1 < 0) {
    uVar4 = 0x80070057;
  }
  else if (param_1 < 5) {
    lprc = (LPRECT)CMediaType::AllocFormatBuffer(param_2,0x468);
    if (lprc == (LPRECT)0x0) {
      uVar4 = 0x8007000e;
    }
    else {
      memset(lprc,0,0x468);
      lprc[3].left = 0x28;
      *(undefined2 *)((longlong)&lprc[3].bottom + 2) = 0x20;
      lprc[3].top = *(LONG *)((longlong)&this->_padding_ + 4);
      lprc[3].right = (LONG)this->_padding_;
      *(undefined2 *)&lprc[3].bottom = 1;
      LVar3 = GetBitmapSize(lprc + 3);
      lprc[4].top = LVar3;
      uVar4 = 0;
      lprc[5].top = 0;
      uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lprc[2].right = *(undefined4 *)&this->_padding_;
      lprc[2].bottom = uVar2;
      SetRectEmpty(lprc);
      SetRectEmpty(lprc + 1);
      CMediaType::SetType(param_2,(_GUID *)&MEDIATYPE_Video);
      CMediaType::SetFormatType(param_2,(_GUID *)&FORMAT_VideoInfo);
      CMediaType::SetTemporalCompression(param_2,1);
      CMediaType::SetSubtype(param_2,(_GUID *)&MEDIASUBTYPE_RGB32);
      CMediaType::SetSampleSize(param_2,lprc[4].top);
    }
  }
  else {
    uVar4 = 0x40103;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
  return uVar4;
}

// Notify @ 144651250

undefined4 __thiscall
FCapturePin::Notify(FCapturePin *this,IBaseFilter *param_1,tagQuality *param_2)

{
  return 0x80004005;
}

// ProcessFrames @ 1446512b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<long> __thiscall FCapturePin::ProcessFrames(FCapturePin *this)

{
  FEvent *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TOptional<long> TVar6;
  FStaticBasicLogRecord *pFVar7;
  TOptional<long> in_RDX;
  uint uVar8;
  longlong *local_res8;
  ulonglong in_stack_ffffffffffffffb8;
  TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> local_38;
  
  FAVIWriter::GetFrameData(this->Writer,&local_38,100);
  uVar8 = 0;
  if (0 < local_38.ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < local_38.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        in_stack_ffffffffffffffb8 = (ulonglong)(int)uVar8;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar6 = (TOptional<long>)(*pcVar2)();
          return TVar6;
        }
      }
      local_res8 = (longlong *)0x0;
      in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
      this->CurrentFrame =
           (FCapturedFrame *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30);
      iVar5 = (**(code **)(this->_padding_ + 0x80))
                        (&this->_padding_,&local_res8,0,0,in_stack_ffffffffffffffb8);
      if (iVar5 < 0) {
        if (2 < (byte)LogMovieCapture._0_1_) {
          pFVar7 = &::LOG_Static;
LAB_144651440:
          UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogMovieCapture);
        }
LAB_14465144c:
        *(undefined4 *)in_RDX = 0;
        *(undefined1 *)((longlong)in_RDX + 4) = 1;
        goto LAB_1446513f5;
      }
      iVar5 = (**(code **)(this->_padding_ + 0x10))(this,local_res8);
      if (iVar5 < 0) {
        (**(code **)(*local_res8 + 0x10))();
        if (2 < (byte)LogMovieCapture._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_144651440;
        }
        goto LAB_14465144c;
      }
      iVar5 = (**(code **)(this->_padding_ + 0x88))(&this->_padding_,local_res8);
      (**(code **)(*local_res8 + 0x10))();
      if (iVar5 != 0) {
        if (2 < (byte)LogMovieCapture._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_144651440;
        }
        goto LAB_14465144c;
      }
      pFVar1 = this->CurrentFrame->FrameProcessedEvent;
      if (pFVar1 != (FEvent *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x10))();
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_38.ArrayNum);
  }
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
LAB_1446513f5:
  DestructItems<FCapturedFrame,int>
            ((FCapturedFrame *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FCapturedFrame *)local_38.AllocatorInstance.Data != (FCapturedFrame *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return in_RDX;
}

// SetMediaType @ 1446516a0

undefined4 __thiscall FCapturePin::SetMediaType(FCapturePin *this,CMediaType *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = this->_padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
  lVar4 = CBasePin::SetMediaType((CBasePin *)this,param_1);
  if (-1 < lVar4) {
    if (this->_padding_ == 0) {
      uVar5 = 0x8000ffff;
      goto LAB_144651721;
    }
    if (*(short *)(this->_padding_ + 0x3e) == 0x20) {
      uVar5 = 0;
      goto LAB_144651721;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\CapturePin.cpp"
                     ,0xdd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar5 = 0x80070057;
LAB_144651721:
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x88));
  return uVar5;
}

