// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 3

// DropFrames @ 14464ffd0

void __thiscall FAVIWriterWin::DropFrames(FAVIWriterWin *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + param_1;
  return;
}

// Finalize @ 144650190

void __thiscall FAVIWriterWin::Finalize(FAVIWriterWin *this)

{
  FCaptureSource *pFVar1;
  FEvent *pFVar2;
  IBaseFilter *pIVar3;
  
  if ((int)this->_padding_ != 0) {
    pFVar1 = this->CaptureFilter;
    LOCK();
    pFVar1->bShutdownRequested = (FThreadSafeBool)0x1;
    UNLOCK();
    pFVar2 = pFVar1->ShutdownEvent;
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
    (**(code **)((longlong)*this->Control + 0x48))();
    LOCK();
    *(undefined4 *)&this->_padding_ = 0;
    UNLOCK();
    pIVar3 = this->EncodingFilter;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    if (pIVar3 != (IBaseFilter *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
      this->EncodingFilter = (IBaseFilter *)0x0;
    }
    pFVar1 = this->CaptureFilter;
    if (pFVar1 != (FCaptureSource *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(&pFVar1->_padding_);
      this->CaptureFilter = (FCaptureSource *)0x0;
    }
    if (this->Capture != (ICaptureGraphBuilder2 *)0x0) {
      (**(code **)((longlong)*this->Capture + 0x10))();
      this->Capture = (ICaptureGraphBuilder2 *)0x0;
    }
    if (this->Control != (IMediaControl *)0x0) {
      (**(code **)((longlong)*this->Control + 0x10))();
      this->Control = (IMediaControl *)0x0;
    }
    if (this->Graph != (IGraphBuilder *)0x0) {
      (**(code **)((longlong)*this->Graph + 0x10))();
      this->Graph = (IGraphBuilder *)0x0;
    }
    FWindowsPlatformMisc::CoUninitialize();
  }
  return;
}

// Initialize @ 1446508c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAVIWriterWin::Initialize(FAVIWriterWin *this)

{
  IGraphBuilder **ppv;
  IBaseFilter **ppv_00;
  uint uVar1;
  code *pcVar2;
  IGraphBuilder *pIVar3;
  IGraphBuilder IVar4;
  bool bVar5;
  HRESULT HVar6;
  int iVar7;
  FCaptureSource *pFVar8;
  CSourceStream *this_00;
  FEvent *pFVar9;
  IBaseFilter *pIVar10;
  IPin *pIVar11;
  IPin *pIVar12;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar13;
  FStaticBasicLogRecord *pFVar14;
  FCaptureSource *pFVar15;
  int iVar16;
  ForAnyElementType FVar17;
  FCaptureSource *pFVar18;
  wchar_t *pwVar19;
  byte bVar20;
  double dVar21;
  int *local_res10;
  longlong *local_res18;
  IBaseFilter *local_res20;
  longlong *local_a8;
  longlong *local_a0;
  IBaseFilter *local_98;
  longlong *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  _GUID local_48;
  
  pFVar18 = (FCaptureSource *)0x0;
  local_res10 = (int *)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
  if (!bVar5) {
    if ((byte)LogAVIWriter._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
    return;
  }
  ppv = &this->Graph;
  HVar6 = CoCreateInstance((IID *)&CLSID_FilterGraph,(LPUNKNOWN)0x0,1,(IID *)&IID_IGraphBuilder,ppv)
  ;
  if (HVar6 < 0) {
    if ((byte)LogAVIWriter._0_1_ < 2) goto LAB_1446509d2;
    pFVar14 = &`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::__l27::
               LOG_Static;
  }
  else {
    HVar6 = CoCreateInstance((IID *)&CLSID_CaptureGraphBuilder2,(LPUNKNOWN)0x0,3,
                             (IID *)&IID_ICaptureGraphBuilder2,&this->Capture);
    if (HVar6 < 0) {
      if ((byte)LogAVIWriter._0_1_ < 2) goto LAB_1446509d2;
      pFVar14 = &`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::__l48::
                 LOG_Static;
    }
    else {
      iVar7 = (**(code **)((longlong)*this->Capture + 0x18))();
      if (-1 < iVar7) {
        pFVar8 = ::operator_new(0xc0);
        pFVar15 = pFVar18;
        if (pFVar8 != (FCaptureSource *)0x0) {
          local_48 = CLSID_ViewportCaptureSource;
          CSource::CSource((CSource *)pFVar8,(wchar_t *)0x0,(IUnknown *)0x0,(_GUID *)&local_48);
          pFVar8->_padding_ = (longlong)&FCaptureSource::_vftable__for__CUnknown__;
          pFVar8->_padding_ = (longlong)&FCaptureSource::_vftable__for__IBaseFilter__;
          pFVar8->_padding_ = (longlong)&FCaptureSource::_vftable__for__IAMovieSetup__;
          pFVar8->bShutdownRequested = (FThreadSafeBool)0x0;
          this_00 = ::operator_new(0x1b0);
          if (this_00 != (CSourceStream *)0x0) {
            CSourceStream::CSourceStream
                      (this_00,(wchar_t *)0x0,(long *)&local_res10,(CSource *)pFVar8,L"Capture");
            dVar21 = __real_416312d000000000;
            this_00->_padding_ = (longlong)&___7FCapturePin__6B_;
            this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__CUnknown__;
            this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__IPin__;
            this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__IQualityControl__;
            this_00[1]._padding_ =
                 (longlong)
                 (dVar21 / ((double)(int)this->_padding_ /
                           (double)*(int *)((longlong)&this->_padding_ + 4)));
            InitializeCriticalSection((LPCRITICAL_SECTION)&this_00[1]._padding_);
            this_00[1]._padding_ = (longlong)this;
            *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) =
                 *(undefined4 *)((longlong)&this->_padding_ + 4);
            *(int *)&this_00[1]._padding_ = (int)this->_padding_;
          }
          pFVar9 = FGenericPlatformProcess::GetSynchEventFromPool(false);
          pFVar8->ShutdownEvent = pFVar9;
          LOCK();
          pFVar8->bShutdownRequested = (FThreadSafeBool)0x0;
          UNLOCK();
          pFVar15 = pFVar8;
        }
        this->CaptureFilter = pFVar15;
        (**(code **)(pFVar15->_padding_ + 8))();
        pFVar15 = (FCaptureSource *)&this->CaptureFilter->_padding_;
        if (this->CaptureFilter == (FCaptureSource *)0x0) {
          pFVar15 = pFVar18;
        }
        iVar7 = (**(code **)((longlong)**ppv + 0x18))(*ppv,pFVar15,L"Capture");
        if (iVar7 < 0) {
          if (1 < (byte)LogAVIWriter._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                        __l111::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
          }
          (**(code **)(this->CaptureFilter->_padding_ + 0x10))();
          (**(code **)((longlong)**ppv + 0x10))();
          FWindowsPlatformMisc::CoUninitialize();
          return;
        }
        pwVar19 = L"";
        if (1 < (int)this->_padding_) {
          pIVar10 = FindEncodingFilter((FString *)&this->_padding_);
          this->EncodingFilter = pIVar10;
          if (pIVar10 == (IBaseFilter *)0x0) {
            if (2 < (byte)LogAVIWriter._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)
                         &`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::J
                          ::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
            }
          }
          else {
            (**(code **)((longlong)*pIVar10 + 8))(pIVar10);
            (**(code **)((longlong)**ppv + 0x18))(*ppv,this->EncodingFilter,L"Encoder");
          }
        }
        if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
          ppv_00 = &this->EncodingFilter;
          if (this->EncodingFilter == (IBaseFilter *)0x0) {
            CoCreateInstance((IID *)&CLSID_MJPGEnc,(LPUNKNOWN)0x0,3,(IID *)&IID_IBaseFilter,ppv_00);
            (**(code **)((longlong)**ppv + 0x18))(*ppv,*ppv_00,L"Encoder");
          }
          pIVar10 = *ppv_00;
          local_res18 = (longlong *)0x0;
          if (pIVar10 != (IBaseFilter *)0x0) {
            local_a0 = (longlong *)0x0;
            local_a8 = (longlong *)0x0;
            (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,&local_a0);
            iVar7 = (**(code **)(*local_a0 + 0x18))(local_a0,1,&local_a8,0);
            while (iVar7 == 0) {
              iVar7 = (**(code **)*local_a8)(local_a8,&IID_IAMVideoCompression,&local_res18);
              (**(code **)(*local_a8 + 0x10))();
              if (-1 < iVar7) break;
              iVar7 = (**(code **)(*local_a0 + 0x18))(local_a0,1,&local_a8,0);
            }
            (**(code **)(*local_a0 + 0x10))();
            if (local_res18 != (longlong *)0x0) {
              pcVar2 = *(code **)(*local_res18 + 0x38);
              if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(local_res18,(double)*(float *)&this->_padding_);
              (**(code **)(*local_res18 + 0x10))();
            }
          }
        }
        CoCreateInstance((IID *)&CLSID_AviDest,(LPUNKNOWN)0x0,3,(IID *)&IID_IBaseFilter,&local_res20
                        );
        iVar7 = (**(code **)((longlong)**ppv + 0x18))(*ppv,local_res20,L"AVI Mux");
        if (iVar7 < 0) {
          if (1 < (byte)LogAVIWriter._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                        __l175::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
          }
          (**(code **)((longlong)**ppv + 0x10))();
          FWindowsPlatformMisc::CoUninitialize();
          return;
        }
        CoCreateInstance((IID *)&CLSID_FileWriter,(LPUNKNOWN)0x0,3,(IID *)&IID_IBaseFilter,&local_98
                        );
        iVar7 = (**(code **)((longlong)**ppv + 0x18))(*ppv,local_98,L"File Writer");
        if (iVar7 < 0) {
          if (1 < (byte)LogAVIWriter._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                        __l196::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
          }
          (**(code **)((longlong)**ppv + 0x10))();
          FWindowsPlatformMisc::CoUninitialize();
          return;
        }
        local_90 = (longlong *)0x0;
        iVar7 = (**(code **)*local_98)(local_98,&IID_IFileSinkFilter,&local_90);
        if (-1 < iVar7) {
          if ((int)this->_padding_ != 0) {
            pwVar19 = (wchar_t *)this->_padding_;
          }
          (**(code **)(*local_90 + 0x18))(local_90,pwVar19,0);
        }
        pIVar3 = *ppv;
        IVar4 = *pIVar3;
        if (this->EncodingFilter == (IBaseFilter *)0x0) {
          pIVar11 = GetPin(local_res20,PINDIR_INPUT);
          pFVar15 = (FCaptureSource *)&this->CaptureFilter->_padding_;
          if (this->CaptureFilter == (FCaptureSource *)0x0) {
            pFVar15 = pFVar18;
          }
          pIVar12 = GetPin((IBaseFilter *)pFVar15,PINDIR_OUTPUT);
          iVar7 = (**(code **)((longlong)IVar4 + 0x58))(pIVar3,pIVar12,pIVar11);
          if (iVar7 < 0) {
            if (1 < (byte)LogAVIWriter._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                          __l267::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
            }
            (**(code **)((longlong)**ppv + 0x10))();
            FWindowsPlatformMisc::CoUninitialize();
            return;
          }
        }
        else {
          pIVar11 = GetPin(this->EncodingFilter,PINDIR_INPUT);
          pFVar15 = (FCaptureSource *)&this->CaptureFilter->_padding_;
          if (this->CaptureFilter == (FCaptureSource *)0x0) {
            pFVar15 = pFVar18;
          }
          pIVar12 = GetPin((IBaseFilter *)pFVar15,PINDIR_OUTPUT);
          iVar7 = (**(code **)((longlong)IVar4 + 0x58))(pIVar3,pIVar12,pIVar11);
          if (iVar7 < 0) {
            if (1 < (byte)LogAVIWriter._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                          __l223::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
            }
            (**(code **)((longlong)**ppv + 0x10))();
            FWindowsPlatformMisc::CoUninitialize();
            return;
          }
          pIVar3 = *ppv;
          pcVar2 = *(code **)((longlong)*pIVar3 + 0x58);
          pIVar11 = GetPin(local_res20,PINDIR_INPUT);
          pIVar12 = GetPin(this->EncodingFilter,PINDIR_OUTPUT);
          iVar7 = (*pcVar2)(pIVar3,pIVar12,pIVar11);
          if (iVar7 < 0) {
            if (1 < (byte)LogAVIWriter._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::
                          __l244::LOG_Static,(FLogCategoryBase *)&LogAVIWriter);
            }
            (**(code **)((longlong)**ppv + 0x10))();
            FWindowsPlatformMisc::CoUninitialize();
            return;
          }
        }
        pIVar3 = *ppv;
        pcVar2 = *(code **)((longlong)*pIVar3 + 0x58);
        pIVar11 = GetPin(local_98,PINDIR_INPUT);
        pIVar12 = GetPin(local_res20,PINDIR_OUTPUT);
        (*pcVar2)(pIVar3,pIVar12,pIVar11);
        iVar7 = (**(code **)**ppv)(*ppv,&IID_IMediaControl,&this->Control);
        if (-1 < iVar7) {
          ::FString::FString(&local_88,(FString *)&this->_padding_);
          FPaths::GetExtension(&local_58,&local_88,true);
          dVar21 = (double)(int)this->_padding_;
          dVar21 = (dVar21 + dVar21) / (double)*(int *)((longlong)&this->_padding_ + 4) +
                   __real_3fe0000000000000;
          pFVar8 = ::operator_new(0xb0);
          pFVar15 = pFVar18;
          if (pFVar8 != (FCaptureSource *)0x0) {
            pwVar19 = L"";
            iVar7 = local_88.Data.ArrayNum + -1;
            if (local_88.Data.ArrayNum == 0) {
              iVar7 = 0;
            }
            iVar16 = local_58.Data.ArrayNum + -1;
            if (local_58.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            if (iVar7 - iVar16 < iVar7) {
              iVar7 = iVar7 - iVar16;
            }
            iVar16 = 0;
            if (0 < iVar7) {
              iVar16 = iVar7;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_88.Data.ArrayNum != 0) {
              FVar17.Data = local_88.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_68,(wchar_t *)FVar17.Data,iVar16);
            ::FString::ConcatFC(&local_78,&local_68,L"_tmp");
            ::FString::FString((FString *)pFVar8,&local_78);
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar8->_padding_,4000);
            (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
            AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            pFVar8->_padding_ = 0;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar8->_padding_,4000);
            (((TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
            AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            *(int *)&(((CCritSec *)&pFVar8->_padding_)->m_CritSec).DebugInfo = 0;
            local_res10 = (int *)((longlong)&(((CCritSec *)&pFVar8->_padding_)->m_CritSec).DebugInfo
                                 + 4);
            *local_res10 = 0;
            *(int *)&pFVar8->_padding_ = ((int)ROUND(dVar21) >> 1) * 3;
            *(bool *)&pFVar8->_padding_ = false;
            pFVar9 = FGenericPlatformProcess::GetSynchEventFromPool(false);
            pFVar8->_padding_ = (longlong)pFVar9;
            this_01 = FPlatformFileManager::Get();
            pIVar13 = FPlatformFileManager::GetPlatformFile(this_01);
            if ((int)pFVar8->_padding_ != 0) {
              pwVar19 = (wchar_t *)(((FString *)&pFVar8->_padding_)->Data).AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar13 + 0x1f8))(pIVar13,pwVar19);
            uVar1 = (uint)pFVar8->_padding_;
            *(uint *)&pFVar8->_padding_ = 0;
            if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
            }
            if (*local_res10 < (int)uVar1) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,uVar1,(ForAnyElementType *)&pFVar8->_padding_,
                         *(int *)&(((CCritSec *)&pFVar8->_padding_)->m_CritSec).DebugInfo,
                         local_res10);
            }
            pFVar18 = pFVar8;
            pFVar15 = (FCaptureSource *)&DAT_00000003;
          }
          bVar20 = (byte)pFVar15;
          pFVar8 = (FCaptureSource *)this->_padding_;
          if (pFVar8 != pFVar18) {
            this->_padding_ = (longlong)pFVar18;
            TDefaultDelete<FCapturedFrames>::operator()
                      ((TDefaultDelete<FCapturedFrames> *)&this->_padding_,(FCapturedFrames *)pFVar8
                      );
          }
          if ((((ulonglong)pFVar15 & 2) != 0) &&
             (bVar20 = bVar20 & 0xfd,
             local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (((bVar20 & 1) != 0) &&
             (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          (**(code **)((longlong)*this->Control + 0x38))();
          LOCK();
          *(undefined4 *)&this->_padding_ = 1;
          UNLOCK();
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)((longlong)*local_res20 + 0x10))();
        return;
      }
      if ((byte)LogAVIWriter._0_1_ < 2) goto LAB_1446509d2;
      pFVar14 = &`public:_virtual_void___cdecl_FAVIWriterWin::Initialize(void)___ptr64'::__l69::
                 LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar14,(FLogCategoryBase *)&LogAVIWriter);
LAB_1446509d2:
  FWindowsPlatformMisc::CoUninitialize();
  return;
}

