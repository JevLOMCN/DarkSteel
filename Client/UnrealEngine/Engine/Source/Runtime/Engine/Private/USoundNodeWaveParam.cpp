// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14867b4b0

UClass * __cdecl USoundNodeWaveParam::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWaveParam",
               &Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton,
               StaticRegisterNativesUSoundNodeWaveParam,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeWaveParam>,
               InternalVTableHelperCtorCaller<USoundNodeWaveParam>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton;
}

// USoundNodeWaveParam @ 148697d00

USoundNodeWaveParam * __thiscall
USoundNodeWaveParam::USoundNodeWaveParam(USoundNodeWaveParam *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeWaveParam__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WaveParameterName).ComparisonIndex = 0;
  (this->WaveParameterName).Number = 0;
  return this;
}

// USoundNodeWaveParam @ 148697d40

USoundNodeWaveParam * __thiscall
USoundNodeWaveParam::USoundNodeWaveParam(USoundNodeWaveParam *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeWaveParam__6B_;
  (this->WaveParameterName).ComparisonIndex = 0;
  (this->WaveParameterName).Number = 0;
  return this;
}

// ~USoundNodeWaveParam @ 14869be00

void __thiscall USoundNodeWaveParam::~USoundNodeWaveParam(USoundNodeWaveParam *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDuration @ 1486be070

float __thiscall USoundNodeWaveParam::GetDuration(USoundNodeWaveParam *this)

{
  return __real_461c4000;
}

// GetPrivateStaticClass @ 1486c56b0

UClass * __cdecl USoundNodeWaveParam::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWaveParam",
               &Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton,
               StaticRegisterNativesUSoundNodeWaveParam,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeWaveParam>,
               InternalVTableHelperCtorCaller<USoundNodeWaveParam>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton;
}

// ParseNodes @ 1486df020

void __thiscall
USoundNodeWaveParam::ParseNodes
          (USoundNodeWaveParam *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  IParameterTransmitter *pIVar1;
  USoundBase *pUVar2;
  FSoundCueParameterTransmitter *this_01;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  UClass *pUVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  ulong64 local_res18 [2];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  FObjectPtr_u_0 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FString *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  TSharedPtr<Audio::IProxyData,1> *local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  FScriptContainerElement *local_78;
  ulong64 *local_70;
  uint *local_68;
  FParameterTransmitterInitParams local_60;
  
  pIVar1 = (param_3->InstanceTransmitter).Object;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_110.Handle = (UObject *)0x0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (FString *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
  local_90 = 0;
  local_res18[0] = param_2;
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,this->WaveParameterName,&local_128);
  if ((USoundBase *)local_110.Handle != (USoundBase *)0x0) {
    pUVar6 = USoundWave::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_110,pUVar6);
    FVar4 = local_110;
    if ((bVar5) && ((USoundBase *)local_110.Handle != (USoundBase *)0x0)) {
      puVar7 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
               ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                       *)&param_3->SoundNodeOffsetMap,local_res18[0]);
      this_00 = &param_3->SoundNodeData;
      if (puVar7 == (uint *)0x0) {
        local_res8[0] = TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,0xc);
        local_70 = local_res18;
        local_68 = local_res8;
        TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    *)&param_3->SoundNodeOffsetMap,
                   (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)
                   (local_res18 + 1),(bool *)&local_70);
        lVar11 = (longlong)(int)local_res8[0];
        uVar8 = 0;
        if ((int)local_res8[0] < (param_3->SoundNodeData).ArrayNum) {
          uVar8 = ~local_res8[0] >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        *(undefined4 *)((this_00->AllocatorInstance).Data + lVar11) = 1;
      }
      else {
        uVar8 = 0;
        if ((int)*puVar7 < (param_3->SoundNodeData).ArrayNum) {
          uVar8 = ~*puVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_res8[0] = *puVar7;
      }
      uVar10 = local_res8[0] + 4;
      uVar8 = 0;
      if ((int)uVar10 < (param_3->SoundNodeData).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      local_res8[0] = uVar10;
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_78 = (this_00->AllocatorInstance).Data;
      uVar8 = ((uint)((ulonglong)FVar4.Handle >> 0x14) & 0xffff ^
              (uint)((ulonglong)FVar4.Handle >> 4)) * -0x7a143595;
      uVar9 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar9 = uVar9 >> 0x10 ^ uVar9;
      uVar8 = ((uint)(local_res18[0] >> 0x14) & 0xffff ^ (uint)(local_res18[0] >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      local_88 = (ulonglong)uVar8;
      pUVar2 = *(USoundBase **)(local_78 + (int)uVar10);
      uVar12 = (ulonglong)
               ((uVar8 >> 2) + 0x9e3779b9 +
                ((uVar9 >> 2) + uVar9 * 0x40 + -0x61c88647 ^ uVar9) + uVar8 * 0x40 ^ uVar8);
      if (pUVar2 != (USoundBase *)FVar4.Handle) {
        this_01 = (FSoundCueParameterTransmitter *)(param_3->InstanceTransmitter).Object;
        if (this_01 != (FSoundCueParameterTransmitter *)0x0) {
          uVar9 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          uVar9 = uVar9 >> 0x10 ^ uVar9;
          uVar8 = ((uVar9 >> 2) + uVar9 * 0x40 + -0x61c88647 ^ uVar9) + (uVar8 >> 2) +
                  uVar8 * 0x40 + -0x61c88647 ^ uVar8;
          bVar5 = IsInAudioThread();
          if (!bVar5) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInAudioThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundCue.cpp"
                               ,0x404,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_80 = (ulonglong)uVar8;
          if (*(int *)&(this_01->Transmitters).field_0x8 !=
              *(int *)&(this_01->Transmitters).field_0x34) {
            TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned___int64>
                      ((TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
                        *)&this_01->Transmitters,uVar8,&local_80);
          }
          local_60.InstanceID =
               Audio::GetTransmitterID(param_3->AudioComponentID,uVar12,param_3->PlayOrder);
          local_60.SampleRate = (float)param_1->SampleRate;
          local_60.DefaultParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_60.DefaultParams.ArrayNum = 0;
          local_60.DefaultParams.ArrayMax = 0;
          local_60.AudioDeviceID = param_1->DeviceID;
          FSoundCueParameterTransmitter::CreateChildTransmitter
                    (this_01,uVar12,(USoundBase *)FVar4.Handle,&local_60);
          DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
        }
        ((FObjectPtr_u_0 *)(local_78 + (int)uVar10))->Handle = (UObject *)FVar4;
      }
      (**(code **)(*(longlong *)FVar4.Handle + 0x328))
                (FVar4.Handle,param_1,uVar12,param_3,param_4,param_5);
      goto LAB_1486df490;
    }
  }
  USoundNode::ParseNodes((USoundNode *)this,param_1,local_res18[0],param_3,param_4,param_5);
LAB_1486df490:
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_98,(int)local_90);
  if (local_98 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FString,int>(local_b8,(int)local_b0);
  if (local_b8 != (FString *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// StaticRegisterNativesUSoundNodeWaveParam @ 1486f1a10

void __cdecl USoundNodeWaveParam::StaticRegisterNativesUSoundNodeWaveParam(void)

{
  return;
}

