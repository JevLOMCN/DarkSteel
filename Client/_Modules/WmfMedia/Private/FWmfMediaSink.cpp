// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 34

// FWmfMediaSink @ 14ea957b0

FWmfMediaSink * __thiscall FWmfMediaSink::FWmfMediaSink(FWmfMediaSink *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMFClockStateSink__;
  this->_padding_ = (longlong)&_vftable__for__IMFGetService__;
  this->_padding_ = (longlong)&_vftable__for__IMFMediaSink__;
  this->_padding_ = (longlong)&_vftable__for__IMFRateSupport__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->RefCount = 0;
  (this->PresentationClock).RawPointer = (IMFPresentationClock *)0x0;
  (this->StreamSink).RawPointer = (FWmfMediaStreamSink *)0x0;
  (this->DXGIManager).RawPointer = (IMFDXGIDeviceManager *)0x0;
  (this->D3D11Device).RawPointer = (ID3D11Device *)0x0;
  (this->D3DImmediateContext).RawPointer = (ID3D11DeviceContext *)0x0;
  return this;
}

// ~FWmfMediaSink @ 14ea97af0

void __thiscall FWmfMediaSink::~FWmfMediaSink(FWmfMediaSink *this)

{
  FWmfMediaStreamSink *pFVar1;
  ID3D11DeviceContext *pIVar2;
  ID3D11Device *pIVar3;
  IMFDXGIDeviceManager *pIVar4;
  IMFPresentationClock *pIVar5;
  code *pcVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&_vftable__for__IMFClockStateSink__;
  this->_padding_ = (longlong)&_vftable__for__IMFGetService__;
  this->_padding_ = (longlong)&_vftable__for__IMFMediaSink__;
  this->_padding_ = (longlong)&_vftable__for__IMFRateSupport__;
  pFVar1 = (this->StreamSink).RawPointer;
  if (pFVar1 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x10))();
    (this->StreamSink).RawPointer = (FWmfMediaStreamSink *)0x0;
  }
  if (this->RefCount != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSink.cpp"
                       ,0x25,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar2 = (this->D3DImmediateContext).RawPointer;
  if (pIVar2 != (ID3D11DeviceContext *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->D3D11Device).RawPointer;
  if (pIVar3 != (ID3D11Device *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->DXGIManager).RawPointer;
  if (pIVar4 != (IMFDXGIDeviceManager *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pFVar1 = (this->StreamSink).RawPointer;
  if (pFVar1 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x10))();
  }
  pIVar5 = (this->PresentationClock).RawPointer;
  if (pIVar5 != (IMFPresentationClock *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ea97bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// AddRef @ 14ea9b410

ulong __thiscall FWmfMediaSink::AddRef(FWmfMediaSink *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// AddRef`adjustor{8}' @ 14ea9b424

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::AddRef`adjustor{8}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::AddRef_adjustor_8__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaSink *)&this[-1].D3DImmediateContext);
  return uVar1;
}

// AddRef`adjustor{16}' @ 14ea9b434

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::AddRef`adjustor{16}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::AddRef_adjustor_16__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaSink *)&this[-1].D3D11Device);
  return uVar1;
}

// AddRef`adjustor{24}' @ 14ea9b444

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::AddRef`adjustor{24}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::AddRef_adjustor_24__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaSink *)&this[-1].DXGIManager);
  return uVar1;
}

// AddStreamSink @ 14ea9b4c0

undefined4 __thiscall
FWmfMediaSink::AddStreamSink
          (FWmfMediaSink *this,ulong param_1,IMFMediaType *param_2,IMFStreamSink **param_3)

{
  return 0xc00d4a3b;
}

// CreateDXGIManagerAndDevice @ 14eaa5e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaSink::CreateDXGIManagerAndDevice(FWmfMediaSink *this)

{
  TComPtr<ID3D11Device> *pTVar1;
  IMFDXGIDeviceManager *pIVar2;
  ID3D11Device *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res8[0] = 0;
  if ((this->DXGIManager).RawPointer != (IMFDXGIDeviceManager *)0x0) {
    return true;
  }
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    if (1 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    return false;
  }
  local_res20 = (longlong *)0x0;
  iVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar9 == 2) {
    iVar9 = MFCreateDXGIDeviceManager(local_res8,&this->DXGIManager);
    if (iVar9 < 0) {
      if (1 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_70,iVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = false;
      goto LAB_14eaa61cb;
    }
    puVar10 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
    local_res18 = (longlong *)0x0;
    (**(code **)*puVar10)(puVar10,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_res18);
    if ((local_res18 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    plVar6 = local_res20;
    plVar5 = local_res18;
    pcVar4 = *(code **)(*local_res18 + 0x38);
    if (local_res20 != (longlong *)0x0) {
      local_res20 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
    }
    (*pcVar4)(plVar5,&local_res20);
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    pwVar11 = FCommandLine::Get();
    bVar7 = FParse::Param(pwVar11,L"d3ddebug");
    pTVar1 = &this->D3D11Device;
    iVar9 = D3D11CreateDevice(local_res20,0,0,bVar7 * '\x02',0,0,7,pTVar1,local_res10,
                              &this->D3DImmediateContext);
    if (iVar9 < 0) {
      if (1 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_60,iVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = false;
      goto LAB_14eaa61cb;
    }
    if (local_res10[0] < 0x9300) {
      if (1 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        bVar7 = false;
        goto LAB_14eaa61cb;
      }
    }
    else {
      if (((this->DXGIManager).RawPointer == (IMFDXGIDeviceManager *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pIVar2 = (this->DXGIManager).RawPointer;
      iVar9 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,pTVar1->RawPointer,local_res8[0]);
      if (iVar9 < 0) {
        if (1 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_50,iVar9);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        bVar7 = false;
        goto LAB_14eaa61cb;
      }
      local_78 = (longlong *)0x0;
      if ((pTVar1->RawPointer == (ID3D11Device *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      (**(code **)*pTVar1->RawPointer)
                (pTVar1->RawPointer,&_GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0,&local_78);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x28))(local_78,1);
        (**(code **)(*local_78 + 0x10))();
        if (5 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        goto LAB_14eaa61c9;
      }
      if (1 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Unable_to_activ_152fff288,
                   (FLogCategoryBase *)&LogWmfMedia);
      }
    }
    bVar7 = false;
  }
  else {
    pIVar2 = (this->DXGIManager).RawPointer;
    if (pIVar2 != (IMFDXGIDeviceManager *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (this->DXGIManager).RawPointer = (IMFDXGIDeviceManager *)0x0;
    }
    pIVar3 = (this->D3D11Device).RawPointer;
    if (pIVar3 != (ID3D11Device *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
      (this->D3D11Device).RawPointer = (ID3D11Device *)0x0;
    }
    if (5 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
LAB_14eaa61c9:
    bVar7 = true;
  }
LAB_14eaa61cb:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  return bVar7;
}

// GetCharacteristics @ 14eaacd70

undefined4 __thiscall FWmfMediaSink::GetCharacteristics(FWmfMediaSink *this,ulong *param_1)

{
  if (param_1 == (ulong *)0x0) {
    return 0x80004003;
  }
  if (*(longlong *)&this->RefCount == 0) {
    return 0xc00d3e85;
  }
  *param_1 = 5;
  return 0;
}

// GetFastestRate @ 14eaad560

undefined4 __thiscall
FWmfMediaSink::GetFastestRate
          (FWmfMediaSink *this,_MFRATE_DIRECTION param_1,int param_2,float *param_3)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    fVar2 = __real_00800000;
    if (param_1 == MFRATE_FORWARD) {
      fVar2 = __real_7f7fffff;
    }
    *param_3 = fVar2;
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar1;
}

// GetPresentationClock @ 14eaaec50

undefined4 __thiscall
FWmfMediaSink::GetPresentationClock(FWmfMediaSink *this,IMFPresentationClock **param_1)

{
  longlong *lpCriticalSection;
  IMFPresentationClock *pIVar1;
  undefined4 uVar2;
  
  if (param_1 == (IMFPresentationClock **)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)&this->RefCount == 0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      pIVar1 = (this->CriticalSection).CriticalSection.Opaque3[2];
      if (pIVar1 == (IMFPresentationClock *)0x0) {
        uVar2 = 0xc00d36d7;
      }
      else {
        *param_1 = pIVar1;
        (**(code **)((longlong)*pIVar1 + 8))();
        uVar2 = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetService @ 14eaaf130

undefined4 __thiscall
FWmfMediaSink::GetService(FWmfMediaSink *this,_GUID *param_1,_GUID *param_2,void **param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FWmfMediaStreamSink *pFVar4;
  undefined4 uVar5;
  
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if ((lVar1 == MF_RATE_CONTROL_SERVICE._0_8_) &&
     (*&param_1->Data4 == MF_RATE_CONTROL_SERVICE.Data4)) {
                    /* WARNING: Could not recover jumptable at 0x00014eaaf162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)*this[-1].D3DImmediateContext.RawPointer)
                      (&this[-1].D3DImmediateContext,param_2,param_3);
    return uVar5;
  }
  lVar2._0_4_ = param_1->Data1;
  lVar2._4_2_ = param_1->Data2;
  lVar2._6_2_ = param_1->Data3;
  if ((lVar2 == MR_VIDEO_ACCELERATION_SERVICE._0_8_) &&
     (*&param_1->Data4 == MR_VIDEO_ACCELERATION_SERVICE.Data4)) {
    lVar3._0_4_ = param_2->Data1;
    lVar3._4_2_ = param_2->Data2;
    lVar3._6_2_ = param_2->Data3;
    if (((lVar3 == _GUID_eb533d5d_2db6_40f8_97a9_494692014f07._0_8_) &&
        (*(longlong *)param_2->Data4 == _GUID_eb533d5d_2db6_40f8_97a9_494692014f07._8_8_)) &&
       (pFVar4 = (this->StreamSink).RawPointer, pFVar4 != (FWmfMediaStreamSink *)0x0)) {
      *param_3 = pFVar4;
      (**(code **)(*(longlong *)pFVar4 + 8))();
      return 0;
    }
    return 0x80004002;
  }
  return 0xc00d36ba;
}

// GetSlowestRate @ 14eaaf270

undefined4 __thiscall
FWmfMediaSink::GetSlowestRate
          (FWmfMediaSink *this,_MFRATE_DIRECTION param_1,int param_2,float *param_3)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  
  if (param_3 == (float *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      uVar1 = 0;
      *param_3 = 0.0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStreamSinkById @ 14eab00d0

undefined4 __thiscall
FWmfMediaSink::GetStreamSinkById(FWmfMediaSink *this,ulong param_1,IMFStreamSink **param_2)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  IMFStreamSink *pIVar4;
  ulong local_res18 [2];
  longlong *local_res20;
  
  if (param_2 == (IMFStreamSink **)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    lpCriticalSection = &this->_padding_;
    if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_res20 = lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)&this->RefCount == 0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      uVar1 = 0;
      local_res18[0] = 0;
      plVar3 = (longlong *)(*(longlong *)&this->RefCount + 0x10);
      iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      if ((iVar2 < 0) || (local_res18[0] != param_1)) {
        uVar1 = 0xc00d36b3;
      }
      else {
        pIVar4 = (IMFStreamSink *)(*(longlong *)&this->RefCount + 0x10);
        if (*(longlong *)&this->RefCount == 0) {
          pIVar4 = (IMFStreamSink *)0x0;
        }
        *param_2 = pIVar4;
        (**(code **)((longlong)*pIVar4 + 8))();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return uVar1;
}

// GetStreamSinkByIndex @ 14eab0190

undefined4 __thiscall
FWmfMediaSink::GetStreamSinkByIndex(FWmfMediaSink *this,ulong param_1,IMFStreamSink **param_2)

{
  longlong *lpCriticalSection;
  IMFStreamSink *pIVar1;
  undefined4 uVar2;
  
  if (param_2 == (IMFStreamSink **)0x0) {
    return 0x80004003;
  }
  if (param_1 != 0) {
    return 0xc00d36bf;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)&this->RefCount == 0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      pIVar1 = (IMFStreamSink *)(*(longlong *)&this->RefCount + 0x10);
      *param_2 = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))();
      uVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStreamSinkCount @ 14eab0240

undefined4 __thiscall FWmfMediaSink::GetStreamSinkCount(FWmfMediaSink *this,ulong *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  
  if (param_1 == (ulong *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)&this->RefCount == 0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      *param_1 = 1;
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 14eab37f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaSink::Initialize(FWmfMediaSink *this,TComPtr<FWmfMediaStreamSink> param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar1;
  FWmfMediaStreamSink *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  HRESULT HVar6;
  FString local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    if ((*(longlong *)param_1.RawPointer == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar1 = *(longlong *)param_1.RawPointer;
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar1 + 0x18);
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection_00);
    HVar6 = MFCreateEventQueue((IMFMediaEventQueue **)(lVar1 + 0x40));
    if (-1 < HVar6) {
      if (*(FWmfMediaSink **)(lVar1 + 0x50) != this) {
        if (this != (FWmfMediaSink *)0x0) {
          (**(code **)(this->_padding_ + 8))(this);
        }
        if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x10))();
        }
        *(FWmfMediaSink **)(lVar1 + 0x50) = this;
      }
      LeaveCriticalSection(lpCriticalSection_00);
                    /* WARNING: Load size is inaccurate */
      pFVar2 = *param_1.RawPointer;
      if ((this->StreamSink).RawPointer != pFVar2) {
        if (pFVar2 != (FWmfMediaStreamSink *)0x0) {
          (**(code **)(*(longlong *)pFVar2 + 8))();
        }
        pFVar2 = (this->StreamSink).RawPointer;
        if (pFVar2 != (FWmfMediaStreamSink *)0x0) {
          (**(code **)(*(longlong *)pFVar2 + 0x10))();
        }
                    /* WARNING: Load size is inaccurate */
        (this->StreamSink).RawPointer = *param_1.RawPointer;
      }
      bVar4 = CreateDXGIManagerAndDevice(this);
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if (*(longlong **)param_1.RawPointer != (longlong *)0x0) {
        (**(code **)(**(longlong **)param_1.RawPointer + 0x10))();
      }
      return bVar4;
    }
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_38,HVar6);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (*(longlong **)param_1.RawPointer != (longlong *)0x0) {
    (**(code **)(**(longlong **)param_1.RawPointer + 0x10))();
  }
  return false;
}

// IsRateSupported @ 14eab6500

undefined4 __thiscall
FWmfMediaSink::IsRateSupported(FWmfMediaSink *this,int param_1,float param_2,float *param_3)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = 0xc00d3e85;
    if ((this->CriticalSection).CriticalSection.Opaque3[2] != (void *)0x0) {
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnClockPause @ 14eab7b40

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FWmfMediaSink::OnClockPause(FWmfMediaSink *this,long64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FWmfMediaStreamSink *pFVar1;
  undefined4 uVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->StreamSink).RawPointer;
  if (pFVar1 == (FWmfMediaStreamSink *)0x0) {
    uVar2 = 0xc00d3e85;
  }
  else {
    lpCriticalSection_00 = &pFVar1->CriticalSection;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    uVar2 = (**(code **)(*(longlong *)&pFVar1->field_0x10 + 0x30))
                      (&pFVar1->field_0x10,0x12f,&GUID_NULL,0,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar2;
}

// OnClockRestart @ 14eab7c30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FWmfMediaSink::OnClockRestart(FWmfMediaSink *this,long64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  FWmfMediaStreamSink *pFVar2;
  int iVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->StreamSink).RawPointer;
    if (pFVar2 == (FWmfMediaStreamSink *)0x0) {
      iVar3 = -0x3ff2c17b;
    }
    else {
      puVar1 = &pFVar2->field_0x10;
      iVar3 = (**(code **)(*(longlong *)puVar1 + 0x30))(puVar1,0x12d,&GUID_NULL,0,0);
      if (-1 < iVar3) {
        if (6 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        iVar3 = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnClockSetRate @ 14eab7cf0

undefined4 __thiscall
FWmfMediaSink::OnClockSetRate(FWmfMediaSink *this,long64 param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaStreamSink *this_00;
  undefined4 uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (this->StreamSink).RawPointer;
    if (this_00 == (FWmfMediaStreamSink *)0x0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      FWmfMediaStreamSink::SetClockRate(this_00,param_2);
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnClockStart @ 14eab7d80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FWmfMediaSink::OnClockStart(FWmfMediaSink *this,long64 param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FWmfMediaStreamSink *pFVar1;
  bool bVar2;
  int iVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->StreamSink).RawPointer;
  if (pFVar1 == (FWmfMediaStreamSink *)0x0) {
    iVar3 = -0x3ff2c17b;
  }
  else {
    lpCriticalSection_00 = &pFVar1->CriticalSection;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    bVar2 = pFVar1->ClockRate == 0.0;
    pFVar1->bScrubbingInProgress = bVar2;
    pFVar1->bSystemIsScrubbing = bVar2;
    iVar3 = (**(code **)(*(longlong *)&pFVar1->field_0x10 + 0x30))
                      (&pFVar1->field_0x10,0x12d,&GUID_NULL,0,0);
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    else {
      if (6 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      pFVar1->bSegmentEnded = false;
      pFVar1->bSeekInProgress = false;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar3 = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar3;
}

// OnClockStop @ 14eab7eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FWmfMediaSink::OnClockStop(FWmfMediaSink *this,long64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FWmfMediaStreamSink *pFVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  FWindowsRecursiveMutex *local_58;
  FWindowsRecursiveMutex *local_50;
  code *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_58 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->StreamSink).RawPointer;
  if (pFVar1 == (FWmfMediaStreamSink *)0x0) {
    uVar6 = 0xc00d3e85;
  }
  else {
    local_48 = (code *)0x0;
    plStack_20 = (longlong *)0x0;
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    lpCriticalSection_00 = &pFVar1->CriticalSection;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_50 = lpCriticalSection_00;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    pFVar1->NumRequestsInFlight =
         pFVar1->NumRequestsInFlight - pFVar1->NumRequestsInFlightWithSystem;
    pFVar1->NumRequestsInFlightWithSystem = 0;
    local_68 = 0;
    uVar6 = (**(code **)(*(longlong *)&pFVar1->field_0x10 + 0x30))
                      (&pFVar1->field_0x10,0x12e,&GUID_NULL,0);
    if ((pFVar1->NumRequestsInFlight == 0) && (*(longlong *)&pFVar1->OnIdleAction != 0)) {
      uVar5 = CONCAT44(uStack_24,local_28);
      pcVar2 = *(code **)&pFVar1->OnIdleAction;
      uVar7 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x8;
      lVar3 = *(longlong *)&(pFVar1->OnIdleAction).field_0x10;
      uVar4 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x18;
      local_28 = *(undefined4 *)&(pFVar1->OnIdleAction).field_0x20;
      uStack_24 = *(undefined4 *)&(pFVar1->OnIdleAction).field_0x24;
      plVar8 = *(longlong **)&(pFVar1->OnIdleAction).field_0x28;
      *(code **)&pFVar1->OnIdleAction = local_48;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x8 = uStack_40;
      *(longlong *)&(pFVar1->OnIdleAction).field_0x10 = local_38;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x18 = uStack_30;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x20 = uVar5;
      *(longlong **)&(pFVar1->OnIdleAction).field_0x28 = plStack_20;
      local_48 = pcVar2;
      uStack_40 = uVar7;
      local_38 = lVar3;
      uStack_30 = uVar4;
      plStack_20 = plVar8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar2 = local_48;
      plVar8 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar8 = plStack_20;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar7);
    }
    if (local_48 != (code *)0x0) {
      plVar8 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar8 = plStack_20;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// QueryInterface @ 14eab92d0

HRESULT __thiscall FWmfMediaSink::QueryInterface(FWmfMediaSink *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// QueryInterface`adjustor{8}' @ 14eab92e8

/* [thunk]:public: virtual long __cdecl FWmfMediaSink::QueryInterface`adjustor{8}' (struct _GUID
   const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaSink::QueryInterface_adjustor_8__(FWmfMediaSink *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaSink *)&this[-1].D3DImmediateContext,(_GUID *)param_1,param_2);
  return lVar1;
}

// QueryInterface`adjustor{16}' @ 14eab92f8

/* [thunk]:public: virtual long __cdecl FWmfMediaSink::QueryInterface`adjustor{16}' (struct _GUID
   const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaSink::QueryInterface_adjustor_16__(FWmfMediaSink *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaSink *)&this[-1].D3D11Device,(_GUID *)param_1,param_2);
  return lVar1;
}

// QueryInterface`adjustor{24}' @ 14eab9308

/* [thunk]:public: virtual long __cdecl FWmfMediaSink::QueryInterface`adjustor{24}' (struct _GUID
   const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaSink::QueryInterface_adjustor_24__(FWmfMediaSink *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaSink *)&this[-1].DXGIManager,(_GUID *)param_1,param_2);
  return lVar1;
}

// Release @ 14eab9b30

ulong __thiscall FWmfMediaSink::Release(FWmfMediaSink *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaSink *)0x0)) {
    (**(code **)(this->_padding_ + 0x40))(this,1);
  }
  return iVar2 - 1U;
}

// Release`adjustor{8}' @ 14eab9b68

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::Release`adjustor{8}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::Release_adjustor_8__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaSink *)&this[-1].D3DImmediateContext);
  return uVar1;
}

// Release`adjustor{16}' @ 14eab9b78

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::Release`adjustor{16}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::Release_adjustor_16__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaSink *)&this[-1].D3D11Device);
  return uVar1;
}

// Release`adjustor{24}' @ 14eab9b88

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaSink::Release`adjustor{24}' (void) __ptr64
    */

ulong __thiscall FWmfMediaSink::Release_adjustor_24__(FWmfMediaSink *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaSink *)&this[-1].DXGIManager);
  return uVar1;
}

// RemoveStreamSink @ 14eaba080

undefined4 __thiscall FWmfMediaSink::RemoveStreamSink(FWmfMediaSink *this,ulong param_1)

{
  return 0xc00d4a3b;
}

// SetPresentationClock @ 14eabd2b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWmfMediaSink::SetPresentationClock(FWmfMediaSink *this,IMFPresentationClock *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  FWmfMediaStreamSink *pFVar6;
  void **ppvVar7;
  float local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_res20 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&this->RefCount == 0) {
    iVar4 = -0x3ff2c17b;
    goto LAB_14eabd57e;
  }
  plVar1 = (this->CriticalSection).CriticalSection.Opaque3[2];
  if ((plVar1 != (longlong *)0x0) &&
     (iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,&this[-1].D3D11Device), iVar4 < 0)) {
    if (1 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_68,iVar4);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14eabd57e;
  }
  if (param_1 == (IMFPresentationClock *)0x0) {
    pFVar6 = TComPtr<FWmfMediaStreamSink>::operator->
                       ((TComPtr<FWmfMediaStreamSink> *)&this->RefCount);
    FWmfMediaStreamSink::SetClockRate(pFVar6,__real_bf800000);
LAB_14eabd558:
    ppvVar7 = (this->CriticalSection).CriticalSection.Opaque3 + 2;
    if (*ppvVar7 != param_1) {
      if (param_1 != (IMFPresentationClock *)0x0) {
        (**(code **)((longlong)*param_1 + 8))(param_1);
      }
      if (*ppvVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*ppvVar7 + 0x10))();
      }
      *ppvVar7 = param_1;
    }
    iVar4 = 0;
  }
  else {
    local_res18 = (longlong *)0x0;
    iVar4 = (**(code **)*param_1)(param_1,&_GUID_88ddcd21_03c3_4275_91ed_55ee3929328f,&local_res18);
    if (iVar4 < 0) {
      if (1 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_58,iVar4);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((local_res18 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      iVar4 = (**(code **)(*local_res18 + 0x20))(local_res18,0,local_res8);
      if (iVar4 < 0) {
        if (1 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_48,iVar4);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar6 = TComPtr<FWmfMediaStreamSink>::operator->
                           ((TComPtr<FWmfMediaStreamSink> *)&this->RefCount);
        FWmfMediaStreamSink::SetClockRate(pFVar6,local_res8[0]);
        iVar4 = (**(code **)((longlong)*param_1 + 0x58))(param_1,&this[-1].D3D11Device);
        if (-1 < iVar4) {
          if (local_res18 != (longlong *)0x0) {
            (**(code **)(*local_res18 + 0x10))();
          }
          goto LAB_14eabd558;
        }
        if (1 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_38,iVar4);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
  }
LAB_14eabd57e:
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar4;
}

// Shutdown @ 14eabe3a0

undefined4 __thiscall FWmfMediaSink::Shutdown(FWmfMediaSink *this)

{
  longlong *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar1;
  longlong *plVar2;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&this->RefCount != 0) {
    lVar1 = *(longlong *)&this->RefCount;
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar1 + 0x18);
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection_00);
    if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x48))();
      if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x10))();
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
    }
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x10))();
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    LeaveCriticalSection(lpCriticalSection_00);
    if (*(longlong **)&this->RefCount != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->RefCount + 0x10))();
      *(undefined8 *)&this->RefCount = 0;
    }
  }
  plVar2 = (this->CriticalSection).CriticalSection.Opaque3[2];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&this[-1].D3D11Device);
    plVar2 = (this->CriticalSection).CriticalSection.Opaque3[2];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      (this->CriticalSection).CriticalSection.Opaque3[2] = (void *)0x0;
    }
  }
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0xc00d3e85;
}

