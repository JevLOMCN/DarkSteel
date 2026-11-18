// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// <lambda_invoker_cdecl> @ 1476775b0

void __cdecl
`ISoundParameterControllerInterface::ResetParameters'::__l8::<lambda_1>::<lambda_invoker_cdecl>
          (FActiveSound *param_1)

{
  IParameterTransmitter *pIVar1;
  
  pIVar1 = (param_1->InstanceTransmitter).Object;
  if (pIVar1 != (IParameterTransmitter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476775bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x18))();
    return;
  }
  return;
}

// operator() @ 14768c770

void __thiscall
`ISoundParameterControllerInterface::SetParameters'::__l17::<lambda_1>::operator()
          (void *this,FActiveSound *param_1)

{
  int iVar1;
  IParameterTransmitter *pIVar2;
  FAudioParameter *pFVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pIVar2 = (param_1->InstanceTransmitter).Object;
  if (pIVar2 != (IParameterTransmitter *)0x0) {
    iVar1 = *(int *)((longlong)this + 0x10);
    pFVar3 = *(FAudioParameter **)((longlong)this + 8);
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = iVar1;
    if (iVar1 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
      ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar3,iVar1);
    }
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_18);
    DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
    if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// operator() @ 14768d5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`ISoundParameterControllerInterface::SetTriggerParameter'::__l11::<lambda_1>::operator()
          (void *this,FActiveSound *param_1)

{
  IParameterTransmitter *pIVar1;
  char cVar2;
  FName local_res10 [3];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  FAudioParameter local_a8;
  
  pIVar1 = (param_1->InstanceTransmitter).Object;
  if (pIVar1 != (IParameterTransmitter *)0x0) {
    local_res10[0] = *(FName *)((longlong)this + 8);
    FAudioParameter::FAudioParameter(&local_a8,(FAudioParameter *)((longlong)this + 8));
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,1,0,&local_c8,1,&local_bc);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_c8.Data,&local_a8,1);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
               local_a8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
               local_a8.ArrayStringParam.ArrayNum);
    if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
    }
    if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
    }
    if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
    }
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&local_c8);
    if ((cVar2 == '\0') && (2 < (byte)LogAudio._0_1_)) {
      ::FName::ToString(local_res10,&local_b8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FAudioParameter,int>((FAudioParameter *)local_c8.Data,local_c0);
    if ((FAudioParameter *)local_c8.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return;
}

// ResetParameters @ 1476c45f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ISoundParameterControllerInterface::ResetParameters(ISoundParameterControllerInterface *this)

{
  char cVar1;
  FAudioDevice *this_00;
  FName *pFVar2;
  TStatId TVar3;
  ulong64 uVar4;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  this_00 = (FAudioDevice *)(**(code **)((longlong)*this + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    cVar1 = (**(code **)((longlong)*this + 0xa8))(this);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)((longlong)*this + 0xb0))(this);
      if (cVar1 == '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            if (StatPtr_STAT_AudioResetParameters ==
                (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::ResetParameters(void)_::_8_::FStat_STAT_AudioResetParameters>
                 )0x0) {
              pFVar2 = ::FName::FName(&local_res8,"STAT_AudioResetParameters");
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioResetParameters,*pFVar2,
                         L"FAudioThreadTask.SoundParameterControllerInterface.ResetParameters",
                         "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
            }
            _Init_thread_footer(&::_TSS0);
          }
        }
        TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioResetParameters;
        if (StatPtr_STAT_AudioResetParameters ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::ResetParameters(void)_::_8_::FStat_STAT_AudioResetParameters>
             )0x0) {
          pFVar2 = ::FName::FName(&local_res8,"STAT_AudioResetParameters");
          TVar3.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioResetParameters,*pFVar2,
                          L"FAudioThreadTask.SoundParameterControllerInterface.ResetParameters",
                          "STATGROUP_AudioThreadCommands","STATCAT_Advanced",
                          L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_38 = &
                   ___7__TFunction_OwnedObject_P6AXAEAUFActiveSound___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_30 = `ISoundParameterControllerInterface::ResetParameters'::__l8::<lambda_1>::
                   <lambda_invoker_cdecl>;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(FActiveSound_&),void,FActiveSound_&>::Call;
        local_20 = 0;
        uVar4 = (**(code **)((longlong)*this + 0x90))(this);
        FAudioDevice::SendCommandToActiveSounds
                  (this_00,uVar4,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar3);
      }
    }
  }
  return;
}

// SetBoolArrayParameter @ 1476c77c0

void __thiscall
ISoundParameterControllerInterface::SetBoolArrayParameter
          (ISoundParameterControllerInterface *this,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  size_t _Size;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAudioParameter local_b8;
  
  local_b8.ArrayBoolParam.ArrayNum = param_2->ArrayNum;
  _Size = (size_t)local_b8.ArrayBoolParam.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_b8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ParamName = param_1;
  if (local_b8.ArrayBoolParam.ArrayNum == 0) {
    local_b8.ArrayBoolParam.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_b8.ArrayBoolParam.ArrayNum,0,&local_b8.ArrayBoolParam.AllocatorInstance,
               local_b8.ArrayBoolParam.ArrayNum,&local_b8.ArrayBoolParam.ArrayMax);
    memcpy(local_b8.ArrayBoolParam.AllocatorInstance.Data,_Src,_Size);
  }
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = BooleanArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_c8,1,&local_bc);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_c8.Data,&local_b8,1);
  (*pcVar1)(this,&local_c8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_c8.Data,local_c0);
  if ((FAudioParameter *)local_c8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetBoolParameter @ 1476c79a0

void __thiscall
ISoundParameterControllerInterface::SetBoolParameter
          (ISoundParameterControllerInterface *this,FName param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_a8.ParamType = Boolean;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.BoolParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatArrayParameter @ 1476c7c60

void __thiscall
ISoundParameterControllerInterface::SetFloatArrayParameter
          (ISoundParameterControllerInterface *this,FName param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAudioParameter local_b8;
  
  local_b8.ArrayFloatParam.ArrayNum = param_2->ArrayNum;
  lVar2 = (longlong)local_b8.ArrayFloatParam.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_b8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ParamName = param_1;
  if (local_b8.ArrayFloatParam.ArrayNum == 0) {
    local_b8.ArrayFloatParam.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_b8.ArrayFloatParam.ArrayNum,0,&local_b8.ArrayFloatParam.AllocatorInstance,
               local_b8.ArrayFloatParam.ArrayNum,&local_b8.ArrayFloatParam.ArrayMax);
    memcpy(local_b8.ArrayFloatParam.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = FloatArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_c8,1,&local_bc);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_c8.Data,&local_b8,1);
  (*pcVar1)(this,&local_c8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_c8.Data,local_c0);
  if ((FAudioParameter *)local_c8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatParameter @ 1476c7e50

void __thiscall
ISoundParameterControllerInterface::SetFloatParameter
          (ISoundParameterControllerInterface *this,FName param_1,float param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.BoolParam = false;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_a8.ParamType = Float;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.FloatParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntArrayParameter @ 1476c8020

void __thiscall
ISoundParameterControllerInterface::SetIntArrayParameter
          (ISoundParameterControllerInterface *this,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAudioParameter local_b8;
  
  local_b8.ArrayIntParam.ArrayNum = param_2->ArrayNum;
  lVar2 = (longlong)local_b8.ArrayIntParam.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_b8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ParamName = param_1;
  if (local_b8.ArrayIntParam.ArrayNum == 0) {
    local_b8.ArrayIntParam.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_b8.ArrayIntParam.ArrayNum,0,&local_b8.ArrayIntParam.AllocatorInstance,
               local_b8.ArrayIntParam.ArrayNum,&local_b8.ArrayIntParam.ArrayMax);
    memcpy(local_b8.ArrayIntParam.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = IntegerArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_c8,1,&local_bc);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_c8.Data,&local_b8,1);
  (*pcVar1)(this,&local_c8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_c8.Data,local_c0);
  if ((FAudioParameter *)local_c8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntParameter @ 1476c8210

void __thiscall
ISoundParameterControllerInterface::SetIntParameter
          (ISoundParameterControllerInterface *this,FName param_1,int param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_a8.BoolParam = false;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_a8.ParamType = Integer;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.IntParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectArrayParameter @ 1476c88d0

void __thiscall
ISoundParameterControllerInterface::SetObjectArrayParameter
          (ISoundParameterControllerInterface *this,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectParameter @ 1476c8a40

void __thiscall
ISoundParameterControllerInterface::SetObjectParameter
          (ISoundParameterControllerInterface *this,FName param_1,UObject *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_a8.BoolParam = false;
  local_a8.IntParam = 0;
  local_a8.ParamName = param_1;
  local_a8.ObjectParam.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = Object;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParameter @ 1476c8bf0

void __thiscall
ISoundParameterControllerInterface::SetParameter
          (ISoundParameterControllerInterface *this,FAudioParameter *param_1)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)((longlong)*this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParameters @ 1476c8d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ISoundParameterControllerInterface::SetParameters
          (ISoundParameterControllerInterface *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  char cVar5;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FAudioDevice *this_00;
  longlong *plVar7;
  FName *pFVar8;
  TStatId TVar9;
  ulong64 uVar10;
  bool bVar11;
  FName local_res18 [2];
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"ISoundParameterControllerInterface::SetParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\SoundParameterControllerInterface.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  cVar5 = (**(code **)((longlong)*this + 0xa8))(this);
  if ((cVar5 == '\0') || (cVar5 = (**(code **)((longlong)*this + 0xb0))(), cVar5 != '\0')) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    pTVar6 = (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*this + 0x98))(this);
    FAudioParameter::Merge(param_1,pTVar6);
  }
  else {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    if (&local_78 != param_1) {
      DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
      iVar1 = param_1->ArrayNum;
      pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
      local_78.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_78.ArrayMax == 0)) {
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar1,local_78.ArrayMax,&local_78.AllocatorInstance,iVar1,
                   &local_78.ArrayMax);
        ConstructItems<FAudioParameter,FAudioParameter,int>
                  (local_78.AllocatorInstance.Data,pFVar2,iVar1);
      }
    }
    pTVar6 = (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*this + 0x98))(this);
    FAudioParameter::Merge(param_1,pTVar6);
    this_00 = (FAudioDevice *)(**(code **)((longlong)*this + 0x88))(this);
    if (this_00 != (FAudioDevice *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*this + 0xa0))(this);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x358))
                  (plVar7,&local_78,SoundParameterControllerInterfacePrivate::ProxyFeatureName);
      }
      if (local_78.ArrayNum != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioSetParameters ==
              (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::SetParameters(TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&&)_::_17_::FStat_STAT_AudioSetParameters>
               )0x0) {
            pFVar8 = ::FName::FName(local_res18,"STAT_AudioSetParameters");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetParameters,*pFVar8,
                       L"FAudioThreadTask.SoundParameterControllerInterface.SetParameters",
                       "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                       true,true,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetParameters;
        if (StatPtr_STAT_AudioSetParameters ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::SetParameters(TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&&)_::_17_::FStat_STAT_AudioSetParameters>
             )0x0) {
          pFVar8 = ::FName::FName(local_res18,"STAT_AudioSetParameters");
          TVar9.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetParameters,*pFVar8,
                          L"FAudioThreadTask.SoundParameterControllerInterface.SetParameters",
                          "STATGROUP_AudioThreadCommands","STATCAT_Advanced",
                          L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
        }
        FVar3.Data = local_78.AllocatorInstance.Data;
        iVar1 = local_78.ArrayNum;
        iVar4 = local_78.ArrayMax;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        local_68[0] = (code *)0x0;
        local_40 = FMemory::Malloc(0x20,8);
        local_40[1] = this_00;
        *local_40 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`ISoundParameterControllerInterface::SetParameters'::`17'::<lambda_1>,1,1>
                     ::_vftable_;
        local_40[2] = FVar3.Data;
        *(int *)(local_40 + 3) = iVar1;
        *(int *)((longlong)local_40 + 0x1c) = iVar4;
        if (local_40 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`ISoundParameterControllerInterface::SetParameters'::__l17::<lambda_1>,void,FActiveSound_&>
                        ::Call;
        }
        uVar10 = (**(code **)((longlong)*this + 0x90))(this);
        FAudioDevice::SendCommandToActiveSounds
                  (this_00,uVar10,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_68,TVar9);
        DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
      }
    }
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FAudioParameter *)local_78.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetParameters_Blueprint @ 1476c9120

void __thiscall
ISoundParameterControllerInterface::SetParameters_Blueprint
          (ISoundParameterControllerInterface *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar2,iVar1);
  }
  (**(code **)((longlong)*this + 0x80))(this,&local_18);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
  if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetStringArrayParameter @ 1476c9340

void __thiscall
ISoundParameterControllerInterface::SetStringArrayParameter
          (ISoundParameterControllerInterface *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FAudioParameter local_b8;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_b8.FloatParam = 0.0;
  pcVar3 = *(code **)((longlong)*this + 0x80);
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ParamName = param_1;
  local_b8.ArrayStringParam.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_b8.ArrayStringParam.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_b8.ArrayStringParam.AllocatorInstance,iVar1,
               &local_b8.ArrayStringParam.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_b8.ArrayStringParam.AllocatorInstance.Data,(FString *)pFVar2,iVar1);
  }
  local_b8.ParamType = StringArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_c8,1,&local_bc);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_c8.Data,&local_b8,1);
  (*pcVar3)(this,&local_c8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_c8.Data,local_c0);
  if ((FAudioParameter *)local_c8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringParameter @ 1476c9530

void __thiscall
ISoundParameterControllerInterface::SetStringParameter
          (ISoundParameterControllerInterface *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  local_a8.BoolParam = false;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.ParamName = param_1;
  ::FString::FString(&local_a8.StringParam,param_2);
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = String;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTriggerParameter @ 1476c9750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ISoundParameterControllerInterface::SetTriggerParameter
          (ISoundParameterControllerInterface *this,FName param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FAudioDevice *this_00;
  longlong *plVar5;
  FName *pFVar6;
  TStatId TVar7;
  ulong64 uVar8;
  ForAnyElementType FVar9;
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_258;
  int local_250;
  int local_24c;
  FAudioParameter local_248;
  code *local_1a8 [5];
  undefined8 *local_180;
  FAudioParameter local_178;
  FAudioDevice *local_d8;
  FAudioParameter local_d0;
  
  if (param_1 == (FName)0x0) {
    return;
  }
  cVar3 = (**(code **)((longlong)*this + 0xa8))();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = (**(code **)((longlong)*this + 0xb0))(this);
  if (cVar3 != '\0') {
    return;
  }
  this_00 = (FAudioDevice *)(**(code **)((longlong)*this + 0x88))(this);
  if (this_00 == (FAudioDevice *)0x0) {
    return;
  }
  local_248.FloatParam = 0.0;
  local_248.IntParam = 0;
  local_248.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_248.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.StringParam.Data.ArrayNum = 0;
  local_248.StringParam.Data.ArrayMax = 0;
  local_248.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayFloatParam.ArrayNum = 0;
  local_248.ArrayFloatParam.ArrayMax = 0;
  local_248.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayBoolParam.ArrayNum = 0;
  local_248.ArrayBoolParam.ArrayMax = 0;
  local_248.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayIntParam.ArrayNum = 0;
  local_248.ArrayIntParam.ArrayMax = 0;
  local_248.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayObjectParam.ArrayNum = 0;
  local_248.ArrayObjectParam.ArrayMax = 0;
  local_248.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayStringParam.ArrayNum = 0;
  local_248.ArrayStringParam.ArrayMax = 0;
  local_248.ParamType = Trigger;
  local_248.TypeName.ComparisonIndex.Value = 0;
  local_248.TypeName.Number = 0;
  local_248.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ObjectProxies.ArrayNum = 0;
  local_248.ObjectProxies.ArrayMax = 0;
  local_248.BoolParam = true;
  local_248.ParamName = param_1;
  plVar5 = (longlong *)(**(code **)((longlong)*this + 0xa0))(this);
  if (plVar5 != (longlong *)0x0) {
    FAudioParameter::FAudioParameter(&local_178,&local_248);
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,1,0,&local_258,1,&local_24c);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_258.Data,&local_178,1);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_178.ObjectProxies.AllocatorInstance.Data,
               local_178.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_178.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_178.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_178.ArrayStringParam.AllocatorInstance.Data,
               local_178.ArrayStringParam.ArrayNum);
    if (local_178.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ArrayStringParam.AllocatorInstance.Data);
    }
    if (local_178.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_178.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_178.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_178.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ArrayFloatParam.AllocatorInstance.Data);
    }
    if (local_178.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.StringParam.Data.AllocatorInstance.Data);
    }
    (**(code **)(*plVar5 + 0x358))
              (plVar5,&local_258,SoundParameterControllerInterfacePrivate::ProxyFeatureName);
    if (local_250 == 0) {
      DestructItems<FAudioParameter,int>((FAudioParameter *)local_258.Data,0);
      if ((FAudioParameter *)local_258.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_258.Data);
      }
      FVar9.Data = local_248.ObjectProxies.AllocatorInstance.Data;
      DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                ((TSharedPtr<Audio::IProxyData,1> *)local_248.ObjectProxies.AllocatorInstance.Data,
                 local_248.ObjectProxies.ArrayNum);
      goto LAB_1476c9b38;
    }
    if ((local_250 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAudioParameter::operator=(&local_248,(FAudioParameter *)local_258.Data);
    DestructItems<FAudioParameter,int>((FAudioParameter *)local_258.Data,local_250);
    if ((FAudioParameter *)local_258.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_258.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AudioExecuteTriggerParameter ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::SetTriggerParameter(FName)_::_11_::FStat_STAT_AudioExecuteTriggerParameter>
         )0x0) {
      pFVar6 = ::FName::FName(&local_res10,"STAT_AudioExecuteTriggerParameter");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioExecuteTriggerParameter,*pFVar6,
                 L"FAudioThreadTask.SoundParameterControllerInterface.ExecuteTriggerParameter",
                 "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  TVar7.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioExecuteTriggerParameter;
  if (StatPtr_STAT_AudioExecuteTriggerParameter ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ISoundParameterControllerInterface::SetTriggerParameter(FName)_::_11_::FStat_STAT_AudioExecuteTriggerParameter>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_AudioExecuteTriggerParameter");
    TVar7.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioExecuteTriggerParameter,*pFVar6,
                    L"FAudioThreadTask.SoundParameterControllerInterface.ExecuteTriggerParameter",
                    "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true
                    ,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d8 = this_00;
  FAudioParameter::FAudioParameter(&local_d0,&local_248);
  local_1a8[0] = (code *)0x0;
  local_180 = FMemory::Malloc(0xb0,8);
  puVar1 = local_180 + 1;
  *local_180 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ISoundParameterControllerInterface::SetTriggerParameter'::`11'::<lambda_1>,1,1>
                ::_vftable_;
  *puVar1 = local_d8;
  FAudioParameter::FAudioParameter((FAudioParameter *)(local_180 + 2),&local_d0);
  if (puVar1 != (undefined8 *)0x0) {
    local_1a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`ISoundParameterControllerInterface::SetTriggerParameter'::__l11::<lambda_1>,void,FActiveSound_&>
                   ::Call;
  }
  uVar8 = (**(code **)((longlong)*this + 0x90))(this);
  FAudioDevice::SendCommandToActiveSounds
            (this_00,uVar8,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_1a8,TVar7);
  FAudioParameter::~FAudioParameter(&local_d0);
  FVar9.Data = local_248.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_248.ObjectProxies.AllocatorInstance.Data,
             local_248.ObjectProxies.ArrayNum);
LAB_1476c9b38:
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar9.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  FVar9.Data = local_248.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_248.ArrayStringParam.AllocatorInstance.Data,
             local_248.ArrayStringParam.ArrayNum);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (local_248.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_248.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_248.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_248.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_248.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// ~ISoundParameterControllerInterface @ 1477f3e90

void __thiscall
ISoundParameterControllerInterface::~ISoundParameterControllerInterface
          (ISoundParameterControllerInterface *this)

{
  *this = (ISoundParameterControllerInterface)&___7IInterface__6B_;
  return;
}

// _getUObject @ 147880e00

UObject * __thiscall
ISoundParameterControllerInterface::_getUObject(ISoundParameterControllerInterface *this)

{
  return (UObject *)0x0;
}

