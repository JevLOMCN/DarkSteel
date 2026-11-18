// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 46

// StaticClass @ 14907b890

UClass * __cdecl UNiagaraDataChannelReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelReader",
               &Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelReader,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelReader>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton;
}

// ReadData<int> @ 1490a5d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<int>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,int *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<int>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<double> @ 1490a5e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<double>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,double *param_3
          )

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<double>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<UE::Math::TQuat<double>_> @ 1490a5ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<UE::Math::TQuat<double>_>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          TQuat<double> *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TQuat<double>_>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<UE::Math::TVector2<double>_> @ 1490a5f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<UE::Math::TVector2<double>_>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          TVector2<double> *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector2<double>_>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<UE::Math::TVector4<double>_> @ 1490a6000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<UE::Math::TVector4<double>_>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          TVector4<double> *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector4<double>_>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<UE::Math::TVector<double>_> @ 1490a60a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<UE::Math::TVector<double>_>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          TVector<double> *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector<double>_>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<FLinearColor> @ 1490a6140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<FLinearColor>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          FLinearColor *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<FLinearColor>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<FNiagaraBool> @ 1490a61e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<FNiagaraBool>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          FNiagaraBool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<FNiagaraBool>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<FNiagaraID> @ 1490a6280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<FNiagaraID>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          FNiagaraID *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,param_1);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<FNiagaraID>
                        (this_00,param_2,param_3,this->bReadingPreviousFrame);
      return bVar3;
    }
  }
  return false;
}

// ReadData<FNiagaraSpawnInfo> @ 1490a6320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadData<FNiagaraSpawnInfo>
          (UNiagaraDataChannelReader *this,FNiagaraVariableBase *param_1,int param_2,
          FNiagaraSpawnInfo *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  
  pFVar2 = (this->Data).Object;
  if (pFVar2 == (FNiagaraDataChannelData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar2->GameData).Object,param_1);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar6 = this->bReadingPreviousFrame;
      if ((pFVar10->Size != 0x10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(T) == Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                             ,0x42,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (bVar6 == false) {
        iVar9 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar9 = (pFVar10->PrevData).ArrayNum;
      }
      if ((-1 < param_2) && (param_2 < iVar9 / pFVar10->Size)) {
        if (bVar6 != false) {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar1 = (pFVar10->Data).AllocatorInstance.Data + (longlong)param_2 * 0x10;
        uVar4 = *(undefined8 *)pFVar1;
        uVar5 = *(undefined8 *)(pFVar1 + 8);
        param_3->Count = (int)uVar4;
        param_3->InterpStartDt = (float)(int)((ulonglong)uVar4 >> 0x20);
        param_3->IntervalDt = (float)(int)uVar5;
        param_3->SpawnGroup = (int)((ulonglong)uVar5 >> 0x20);
        return true;
      }
      param_3->Count = 0;
      param_3->InterpStartDt = 0.0;
      param_3->IntervalDt = 1.0;
      param_3->SpawnGroup = 0;
      return false;
    }
  }
  return false;
}

// UNiagaraDataChannelReader @ 1490b2aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __thiscall
UNiagaraDataChannelReader::UNiagaraDataChannelReader
          (UNiagaraDataChannelReader *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelReader__6B_;
  (this->Data).Object = (FNiagaraDataChannelData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bReadingPreviousFrame = false;
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler *)0x0;
  return this;
}

// UNiagaraDataChannelReader @ 1490b2ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __thiscall
UNiagaraDataChannelReader::UNiagaraDataChannelReader
          (UNiagaraDataChannelReader *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataChannelReader__6B_;
  (this->Data).Object = (FNiagaraDataChannelData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bReadingPreviousFrame = false;
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler *)0x0;
  return this;
}

// ~UNiagaraDataChannelReader @ 1490b87e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelReader::~UNiagaraDataChannelReader(UNiagaraDataChannelReader *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataChannelReader__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginRead @ 1490ce760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::BeginRead
          (UNiagaraDataChannelReader *this,FNDCAccessContextInst *param_1,bool param_2)

{
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar1;
  UNiagaraDataChannelHandler *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->Data;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_28) {
    pTVar1->Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pUVar2 = (this->Owner).field0_0x0.DebugPtr;
  this->bReadingPreviousFrame = param_2;
  if ((pUVar2 == (UNiagaraDataChannelHandler *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                         ,0x36,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pUVar2 = (this->Owner).field0_0x0.DebugPtr;
  puVar6 = (undefined8 *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,local_18,param_1,0);
  if (pTVar1 != (TSharedPtr<FNiagaraDataChannelData,1> *)puVar6) {
    pTVar1->Object = (FNiagaraDataChannelData *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pTVar1->Object != (FNiagaraDataChannelData *)0x0;
}

// Cleanup @ 1490d3790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraDataChannelReader::Cleanup(UNiagaraDataChannelReader *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// GetPrivateStaticClass @ 149108600

UClass * __cdecl UNiagaraDataChannelReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelReader",
               &Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelReader,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelReader>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelReader.InnerSingleton;
}

// InitAccess @ 149114380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::InitAccess
          (UNiagaraDataChannelReader *this,FNiagaraDataChannelSearchParameters *param_1,bool param_2
          )

{
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar1;
  UNiagaraDataChannelHandler *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TObjectPtr<USceneComponent>_u_0 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  uint local_18;
  
  pTVar1 = &this->Data;
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_58) {
    pTVar1->Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  pUVar2 = (this->Owner).field0_0x0.DebugPtr;
  this->bReadingPreviousFrame = param_2;
  if (pUVar2 == (UNiagaraDataChannelHandler *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x2c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pUVar2 = (this->Owner).field0_0x0.DebugPtr;
  local_38 = (TObjectPtr<USceneComponent>_u_0)(param_1->OwningComponent).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2e0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  local_30 = *(undefined4 *)&(param_1->Location).field0_0x0;
  uStack_2c = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4);
  uStack_28 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8);
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc);
  local_20 = (param_1->Location).field0_0x0._s_0.Z;
  local_18 = local_18 ^ (local_18 ^ param_1->bOverrideLocation) & 1;
  puVar6 = (undefined8 *)(*pcVar3)(pUVar2,local_48,&local_38,0);
  if (pTVar1 != (TSharedPtr<FNiagaraDataChannelData,1> *)puVar6) {
    pTVar1->Object = (FNiagaraDataChannelData *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return (this->Data).Object != (FNiagaraDataChannelData *)0x0;
}

// Num @ 149119520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __thiscall UNiagaraDataChannelReader::Num(UNiagaraDataChannelReader *this)

{
  FNiagaraDataChannelData *pFVar1;
  FNiagaraDataChannelGameData *pFVar2;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    return 0;
  }
  pFVar2 = (pFVar1->GameData).Object;
  if (this->bReadingPreviousFrame != false) {
    return pFVar2->PrevNumElements;
  }
  return pFVar2->NumElements;
}

// ReadBool @ 149125d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelReader::ReadBool
          (UNiagaraDataChannelReader *this,FName param_1,int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  FNiagaraDataChannelVariableBuffer *pFVar7;
  int iVar8;
  FNiagaraVariableBase local_18;
  
  iVar8 = 0;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    pFVar7 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (pFVar7 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = this->bReadingPreviousFrame;
      if (pFVar7->Size != 4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (bVar3 == false) {
        iVar6 = (pFVar7->Data).ArrayNum;
      }
      else {
        iVar6 = (pFVar7->PrevData).ArrayNum;
      }
      if ((-1 < param_2) && (param_2 < iVar6 / pFVar7->Size)) {
        if (bVar3 != false) {
          pFVar7 = (FNiagaraDataChannelVariableBuffer *)&pFVar7->PrevData;
        }
        bVar3 = true;
        iVar8 = *(int *)((pFVar7->Data).AllocatorInstance.Data + (longlong)param_2 * 4);
        goto LAB_149125d97;
      }
    }
  }
  bVar3 = false;
LAB_149125d97:
  *param_3 = bVar3;
  return iVar8 != 0;
}

// ReadEnum @ 149125e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

uchar __thiscall
UNiagaraDataChannelReader::ReadEnum
          (UNiagaraDataChannelReader *this,FName param_1,int param_2,bool *param_3)

{
  undefined4 uVar1;
  FNiagaraDataChannelData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  bool bVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  FNiagaraVariableBase FStack_18;
  
  FStack_18.Name = param_1;
  FStack_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&FStack_18.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
  pFVar2 = (this->Data).Object;
  if (pFVar2 == (FNiagaraDataChannelData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar2->GameData).Object,&FStack_18);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar4 = this->bReadingPreviousFrame;
      if ((pFVar8->Size != 4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(T) == Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                             ,0x42,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      if (bVar4 == false) {
        iVar7 = (pFVar8->Data).ArrayNum;
      }
      else {
        iVar7 = (pFVar8->PrevData).ArrayNum;
      }
      if ((-1 < param_2) && (param_2 < iVar7 / pFVar8->Size)) {
        if (bVar4 != false) {
          pFVar8 = (FNiagaraDataChannelVariableBuffer *)&pFVar8->PrevData;
        }
        uVar1 = *(undefined4 *)((pFVar8->Data).AllocatorInstance.Data + (longlong)param_2 * 4);
        *param_3 = true;
        return (uchar)uVar1;
      }
      *param_3 = false;
      return '\0';
    }
  }
  *param_3 = false;
  return '\0';
}

// ReadFloat @ 149125e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

double __thiscall
UNiagaraDataChannelReader::ReadFloat
          (UNiagaraDataChannelReader *this,FName param_1,int param_2,bool *param_3)

{
  undefined8 uVar1;
  FNiagaraDataChannelData *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FNiagaraVariableBase local_28 [2];
  
  local_28[0].Name = param_1;
  local_28[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28[0].TypeDefHandle,&FNiagaraTypeHelper::DoubleDef);
  pFVar2 = (this->Data).Object;
  if (pFVar2 == (FNiagaraDataChannelData *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar4 = (double)(*pcVar3)();
      return dVar4;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar2->GameData).Object,local_28);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar5 = this->bReadingPreviousFrame;
      if (pFVar8->Size != 8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          dVar4 = (double)(*pcVar3)();
          return dVar4;
        }
      }
      if (bVar5 == false) {
        iVar7 = (pFVar8->Data).ArrayNum;
      }
      else {
        iVar7 = (pFVar8->PrevData).ArrayNum;
      }
      if ((param_2 < 0) || (iVar7 / pFVar8->Size <= param_2)) {
        uVar9 = 0;
        uVar10 = 0;
        *param_3 = false;
      }
      else {
        if (bVar5 != false) {
          pFVar8 = (FNiagaraDataChannelVariableBuffer *)&pFVar8->PrevData;
        }
        uVar1 = *(undefined8 *)((pFVar8->Data).AllocatorInstance.Data + (longlong)param_2 * 8);
        uVar9 = (undefined4)uVar1;
        uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *param_3 = true;
      }
      goto LAB_149125ecd;
    }
  }
  *param_3 = false;
  uVar9 = 0;
  uVar10 = 0;
LAB_149125ecd:
  return (double)CONCAT44(uVar10,uVar9);
}

// ReadID @ 149126050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraID __thiscall
UNiagaraDataChannelReader::ReadID
          (UNiagaraDataChannelReader *this,FName param_1,int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraID FVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  uint in_register_00000084;
  undefined1 *in_stack_00000028;
  FNiagaraVariableBase local_18;
  
  local_18.Name.Number = in_register_00000084;
  local_18.Name.ComparisonIndex.Value = param_2;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::IDDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FNiagaraID)(*pcVar2)();
      return FVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<FNiagaraID>
                        (this_00,(int)param_3,(FNiagaraID *)param_1,this->bReadingPreviousFrame);
      *in_stack_00000028 = bVar3;
      return (FNiagaraID)param_1;
    }
  }
  *in_stack_00000028 = 0;
  return (FNiagaraID)param_1;
}

// ReadInt @ 149126120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __thiscall
UNiagaraDataChannelReader::ReadInt
          (UNiagaraDataChannelReader *this,FName param_1,int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FNiagaraDataChannelVariableBuffer *pFVar6;
  FNiagaraVariableBase local_18;
  
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  else {
    pFVar6 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (pFVar6 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = this->bReadingPreviousFrame;
      if ((pFVar6->Size != 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(T) == Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                             ,0x42,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (bVar3 == false) {
        iVar5 = (pFVar6->Data).ArrayNum;
      }
      else {
        iVar5 = (pFVar6->PrevData).ArrayNum;
      }
      if ((-1 < param_2) && (param_2 < iVar5 / pFVar6->Size)) {
        if (bVar3 != false) {
          pFVar6 = (FNiagaraDataChannelVariableBuffer *)&pFVar6->PrevData;
        }
        iVar5 = *(int *)((pFVar6->Data).AllocatorInstance.Data + (longlong)param_2 * 4);
        *param_3 = true;
        return iVar5;
      }
      *param_3 = false;
      return 0;
    }
  }
  *param_3 = false;
  return 0;
}

// ReadLinearColor @ 149126240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FLinearColor * __thiscall
UNiagaraDataChannelReader::ReadLinearColor
          (UNiagaraDataChannelReader *this,FLinearColor *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  FNiagaraVariableBase local_18;
  
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::ColorDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<FLinearColor>
                        (this_00,param_2,__return_storage_ptr__,this->bReadingPreviousFrame);
      *param_3 = bVar3;
      return __return_storage_ptr__;
    }
  }
  *param_3 = false;
  return __return_storage_ptr__;
}

// ReadPosition @ 149126320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __thiscall
UNiagaraDataChannelReader::ReadPosition
          (UNiagaraDataChannelReader *this,TVector<double> *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  FNiagaraVariableBase local_18;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  bVar2 = ReadData<UE::Math::TVector<double>_>(this,&local_18,param_2,__return_storage_ptr__);
  *param_3 = bVar2;
  return __return_storage_ptr__;
}

// ReadQuat @ 1491263a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TQuat<double> * __thiscall
UNiagaraDataChannelReader::ReadQuat
          (UNiagaraDataChannelReader *this,TQuat<double> *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  FNiagaraDataChannelVariableBuffer *this_00;
  FNiagaraVariableBase local_18;
  
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar3;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_18.TypeDefHandle,&FNiagaraTypeHelper::QuatDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TQuat<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar4 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TQuat<double>_>
                        (this_00,param_2,__return_storage_ptr__,this->bReadingPreviousFrame);
      *param_3 = bVar4;
      return __return_storage_ptr__;
    }
  }
  *param_3 = false;
  return __return_storage_ptr__;
}

// ReadSpawnInfo @ 149126480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSpawnInfo * __thiscall
UNiagaraDataChannelReader::ReadSpawnInfo
          (UNiagaraDataChannelReader *this,FNiagaraSpawnInfo *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FNiagaraSpawnInfo *pFVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10;
  FNiagaraVariableBase local_48;
  TObjectPtr<UObject>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined4 local_24;
  
  __return_storage_ptr__->Count = 0;
  __return_storage_ptr__->InterpStartDt = 0.0;
  __return_storage_ptr__->IntervalDt = 1.0;
  __return_storage_ptr__->SpawnGroup = 0;
  local_res8.DebugPtr = (UObject *)FNiagaraSpawnInfo::StaticStruct();
  local_38.DebugPtr = local_res8.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_2e = 0;
  local_30 = 2;
  local_2c = 0xffffffffffffffff;
  local_24 = 0xffffffff;
  bVar6 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
  if (!bVar6) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_48.Name = param_1;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  pFVar2 = (this->Data).Object;
  if (pFVar2 == (FNiagaraDataChannelData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FNiagaraSpawnInfo *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar2->GameData).Object,&local_48);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar6 = this->bReadingPreviousFrame;
      if ((pFVar10->Size != 0x10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(T) == Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                             ,0x42,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FNiagaraSpawnInfo *)(*pcVar3)();
        return pFVar9;
      }
      if (bVar6 == false) {
        iVar8 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar8 = (pFVar10->PrevData).ArrayNum;
      }
      if ((-1 < param_2) && (param_2 < iVar8 / pFVar10->Size)) {
        if (bVar6 != false) {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar1 = (pFVar10->Data).AllocatorInstance.Data + (longlong)param_2 * 0x10;
        uVar4 = *(undefined8 *)pFVar1;
        uVar5 = *(undefined8 *)(pFVar1 + 8);
        __return_storage_ptr__->Count = (int)uVar4;
        __return_storage_ptr__->InterpStartDt = (float)(int)((ulonglong)uVar4 >> 0x20);
        __return_storage_ptr__->IntervalDt = (float)(int)uVar5;
        __return_storage_ptr__->SpawnGroup = (int)((ulonglong)uVar5 >> 0x20);
        *param_3 = true;
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->Count = 0;
      __return_storage_ptr__->InterpStartDt = 0.0;
      __return_storage_ptr__->IntervalDt = 1.0;
      __return_storage_ptr__->SpawnGroup = 0;
      *param_3 = false;
      return __return_storage_ptr__;
    }
  }
  *param_3 = false;
  return __return_storage_ptr__;
}

// ReadVector2D @ 149126650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector2<double> * __thiscall
UNiagaraDataChannelReader::ReadVector2D
          (UNiagaraDataChannelReader *this,TVector2<double> *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  FNiagaraVariableBase local_18;
  
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::Vector2DDef);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector2<double>_>
                        (this_00,param_2,__return_storage_ptr__,this->bReadingPreviousFrame);
      *param_3 = bVar3;
      return __return_storage_ptr__;
    }
  }
  *param_3 = false;
  return __return_storage_ptr__;
}

// ReadVector4 @ 149126730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector4<double> * __thiscall
UNiagaraDataChannelReader::ReadVector4
          (UNiagaraDataChannelReader *this,TVector4<double> *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  FNiagaraDataChannelData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<double> *pTVar4;
  FNiagaraDataChannelVariableBuffer *this_00;
  FNiagaraVariableBase local_18;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::Vector4Def);
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  else {
    this_00 = FNiagaraDataChannelGameData::FindVariableBuffer((pFVar1->GameData).Object,&local_18);
    if (this_00 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      bVar3 = FNiagaraDataChannelVariableBuffer::Read<UE::Math::TVector4<double>_>
                        (this_00,param_2,__return_storage_ptr__,this->bReadingPreviousFrame);
      *param_3 = bVar3;
      return __return_storage_ptr__;
    }
  }
  *param_3 = false;
  return __return_storage_ptr__;
}

// ReadVector @ 149126820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __thiscall
UNiagaraDataChannelReader::ReadVector
          (UNiagaraDataChannelReader *this,TVector<double> *__return_storage_ptr__,FName param_1,
          int param_2,bool *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  FNiagaraVariableBase local_18;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::VectorDef);
  bVar2 = ReadData<UE::Math::TVector<double>_>(this,&local_18,param_2,__return_storage_ptr__);
  *param_3 = bVar2;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUNiagaraDataChannelReader @ 149139d60

void __cdecl UNiagaraDataChannelReader::StaticRegisterNativesUNiagaraDataChannelReader(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInitAccess @ 149151360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelReader::execInitAccess(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  USceneComponent *local_68;
  double local_60;
  double dStack_58;
  double local_50;
  uint local_48;
  TObjectPtr<USceneComponent>_u_0 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  uint local_20;
  
  local_48 = local_48 & 0xfffffffe;
  local_68 = (USceneComponent *)0x0;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_40.DebugPtr = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  local_20 = local_20 & 0xfffffffe | local_48 & 1;
  local_38 = local_60;
  dStack_30 = dStack_58;
  local_28 = local_50;
  bVar2 = InitAccess((UNiagaraDataChannelReader *)param_1,
                     (FNiagaraDataChannelSearchParameters *)&local_40.ObjectPtr,bVar2);
  *(bool *)param_3 = bVar2;
  return;
}

// execNum @ 149151c30

void __cdecl UNiagaraDataChannelReader::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 1) + 0x10);
  if (param_1[1].field_0x10 != '\0') {
    *(undefined4 *)param_3 = *(undefined4 *)(lVar1 + 0x28);
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(lVar1 + 0x20);
  return;
}

// execReadBool @ 149151e00

void __cdecl UNiagaraDataChannelReader::execReadBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uchar uVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  longlong lVar9;
  int iVar10;
  uchar *puVar11;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FNiagaraVariableBase local_38;
  
  iVar10 = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res10[0];
  lVar9 = (longlong)local_res10[0];
  puVar11 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Name = local_res18;
  local_38.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_38.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                        &local_38);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar1 = param_1[1].field_0x10;
      if (pFVar8->Size != 4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (cVar1 == '\0') {
        iVar7 = (pFVar8->Data).ArrayNum;
      }
      else {
        iVar7 = (pFVar8->PrevData).ArrayNum;
      }
      if ((-1 < iVar4) && (iVar4 < iVar7 / pFVar8->Size)) {
        if (cVar1 != '\0') {
          pFVar8 = (FNiagaraDataChannelVariableBuffer *)&pFVar8->PrevData;
        }
        iVar10 = *(int *)((pFVar8->Data).AllocatorInstance.Data + lVar9 * 4);
        uVar6 = '\x01';
        goto LAB_149151f66;
      }
    }
  }
  uVar6 = '\0';
LAB_149151f66:
  *puVar11 = uVar6;
  *(bool *)param_3 = iVar10 != 0;
  return;
}

// execReadEnum @ 149152000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraDataChannelReader::execReadEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = ReadInt((UNiagaraDataChannelReader *)param_1,local_res20,local_res18[0],pbVar3);
  *(char *)param_3 = (char)iVar2;
  return;
}

// execReadFloat @ 149152120

void __cdecl
UNiagaraDataChannelReader::execReadFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  char cVar2;
  FProperty *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  longlong lVar9;
  uchar *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18 [2];
  FNiagaraVariableBase local_48 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  uVar11 = 0;
  uVar12 = 0;
  puVar10 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)local_res10[0];
  local_48[0].Name = local_res18[0];
  local_48[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48[0].TypeDefHandle,&FNiagaraTypeHelper::DoubleDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                        local_48);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar8->Size != 8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar7 = (pFVar8->Data).ArrayNum;
      }
      else {
        iVar7 = (pFVar8->PrevData).ArrayNum;
      }
      if ((iVar5 < 0) || (iVar7 / pFVar8->Size <= iVar5)) {
        *puVar10 = '\0';
      }
      else {
        if (cVar2 != '\0') {
          pFVar8 = (FNiagaraDataChannelVariableBuffer *)&pFVar8->PrevData;
        }
        uVar1 = *(undefined8 *)((pFVar8->Data).AllocatorInstance.Data + lVar9 * 8);
        uVar11 = (undefined4)uVar1;
        uVar12 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *puVar10 = '\x01';
      }
      goto LAB_1491522a1;
    }
  }
  *puVar10 = '\0';
LAB_1491522a1:
  *(ulonglong *)param_3 = CONCAT44(uVar12,uVar11);
  return;
}

// execReadID @ 149152a60

void __cdecl UNiagaraDataChannelReader::execReadID(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  longlong lVar9;
  uchar *puVar10;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18 [2];
  FNiagaraVariableBase local_40 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  puVar10 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)local_res10[0];
  local_40[0].Name = local_res18[0];
  local_40[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_40[0].TypeDefHandle,&FNiagaraTypeDefinition::IDDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                        local_40);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar1 = param_1[1].field_0x10;
      if (pFVar8->Size != 8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (cVar1 == '\0') {
        iVar7 = (pFVar8->Data).ArrayNum;
      }
      else {
        iVar7 = (pFVar8->PrevData).ArrayNum;
      }
      if ((-1 < iVar5) && (iVar5 < iVar7 / pFVar8->Size)) {
        if (cVar1 != '\0') {
          pFVar8 = (FNiagaraDataChannelVariableBuffer *)&pFVar8->PrevData;
        }
        uVar3 = *(undefined8 *)((pFVar8->Data).AllocatorInstance.Data + lVar9 * 8);
        *puVar10 = '\x01';
        *(undefined8 *)param_3 = uVar3;
        return;
      }
      *puVar10 = '\0';
      *(undefined8 *)param_3 = 0xffffffffffffffff;
      return;
    }
  }
  *puVar10 = '\0';
  *(undefined8 *)param_3 = 0xffffffffffffffff;
  return;
}

// execReadInt @ 149152cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl UNiagaraDataChannelReader::execReadInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = ReadInt((UNiagaraDataChannelReader *)param_1,local_res20,local_res18[0],pbVar3);
  *(int *)param_3 = iVar2;
  return;
}

// execReadLinearColor @ 149152dd0

void __cdecl
UNiagaraDataChannelReader::execReadLinearColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  FNiagaraDataChannelVariableBuffer *pFVar9;
  longlong lVar10;
  uchar *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FNiagaraVariableBase local_48 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  lVar10 = (longlong)local_res10[0];
  puVar11 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar12 = FLinearColor::White.field0_0x0._0_4_;
  uVar13 = FLinearColor::White.field0_0x0._4_4_;
  uVar14 = FLinearColor::White.field0_0x0._8_4_;
  uVar15 = FLinearColor::White.field0_0x0._12_4_;
  local_48[0].Name = local_res18;
  local_48[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48[0].TypeDefHandle,&FNiagaraTypeDefinition::ColorDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar9 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                        local_48);
    if (pFVar9 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar9->Size != 0x10) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar8 = (pFVar9->Data).ArrayNum;
      }
      else {
        iVar8 = (pFVar9->PrevData).ArrayNum;
      }
      if ((-1 < iVar5) && (iVar5 < iVar8 / pFVar9->Size)) {
        if (cVar2 != '\0') {
          pFVar9 = (FNiagaraDataChannelVariableBuffer *)&pFVar9->PrevData;
        }
        pFVar1 = (pFVar9->Data).AllocatorInstance.Data + lVar10 * 0x10;
        uVar12 = *(undefined4 *)pFVar1;
        uVar13 = *(undefined4 *)(pFVar1 + 4);
        uVar14 = *(undefined4 *)(pFVar1 + 8);
        uVar15 = *(undefined4 *)(pFVar1 + 0xc);
        uVar7 = '\x01';
        goto LAB_149152fda;
      }
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
    }
  }
  uVar7 = '\0';
LAB_149152fda:
  *puVar11 = uVar7;
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  return;
}

// execReadPosition @ 149153000

void __cdecl
UNiagaraDataChannelReader::execReadPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  longlong lVar11;
  uchar *puVar12;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  double local_res20;
  FNiagaraVariableBase local_78;
  double local_68;
  double dStack_60;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res10[0];
  lVar11 = (longlong)local_res10[0];
  puVar12 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.Name = local_res18;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_78.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer
                        (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                         &local_78);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar10->Size != 0x18) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar9 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar9 = (pFVar10->PrevData).ArrayNum;
      }
      if ((iVar6 < 0) || (iVar9 / pFVar10->Size <= iVar6)) {
        uVar8 = '\0';
        local_68 = 0.0;
        dStack_60 = 0.0;
        local_res20 = 0.0;
      }
      else {
        if (cVar2 != '\0') {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar11 * 0x18;
        local_68 = *(double *)pFVar1;
        dStack_60 = *(double *)(pFVar1 + 8);
        local_res20 = *(double *)(pFVar4 + lVar11 * 0x18 + 0x10);
        uVar8 = '\x01';
      }
      goto LAB_149153196;
    }
  }
  uVar8 = '\0';
LAB_149153196:
  *puVar12 = uVar8;
  *(double *)param_3 = local_68;
  *(double *)((longlong)param_3 + 8) = dStack_60;
  *(double *)((longlong)param_3 + 0x10) = local_res20;
  return;
}

// execReadQuat @ 149153280

void __cdecl UNiagaraDataChannelReader::execReadQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  longlong lVar11;
  uchar *puVar12;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FNiagaraVariableBase local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res10[0];
  lVar11 = (longlong)local_res10[0];
  puVar12 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = UE::Math::TQuat<double>::Identity.X;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_58.Name = local_res18;
  local_58.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_58.TypeDefHandle,&FNiagaraTypeHelper::QuatDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer
                        (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                         &local_58);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar10->Size != 0x20) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar9 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar9 = (pFVar10->PrevData).ArrayNum;
      }
      if ((-1 < iVar6) && (iVar6 < iVar9 / pFVar10->Size)) {
        if (cVar2 != '\0') {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar11 * 0x20;
        local_48 = *(double *)pFVar1;
        dStack_40 = *(double *)(pFVar1 + 8);
        pFVar4 = pFVar4 + lVar11 * 0x20 + 0x10;
        local_38 = *(double *)pFVar4;
        dStack_30 = *(double *)(pFVar4 + 8);
        uVar8 = '\x01';
        goto LAB_1491534b7;
      }
      local_48 = 0.0;
      dStack_40 = 0.0;
      local_38 = 0.0;
      dStack_30 = 0.0;
    }
  }
  uVar8 = '\0';
LAB_1491534b7:
  *puVar12 = uVar8;
  *(double *)param_3 = local_48;
  *(double *)((longlong)param_3 + 8) = dStack_40;
  *(double *)((longlong)param_3 + 0x10) = local_38;
  *(double *)((longlong)param_3 + 0x18) = dStack_30;
  return;
}

// execReadSpawnInfo @ 1491534f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelReader::execReadSpawnInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FNiagaraSpawnInfo *pFVar3;
  bool *pbVar4;
  bool local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FNiagaraSpawnInfo local_28;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = ReadSpawnInfo((UNiagaraDataChannelReader *)param_1,&local_28,local_res20,local_res18[0],
                         pbVar4);
  uVar2 = *(undefined8 *)&pFVar3->IntervalDt;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execReadVector2D @ 149153620

void __cdecl
UNiagaraDataChannelReader::execReadVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  FNiagaraDataChannelVariableBuffer *pFVar9;
  longlong lVar10;
  uchar *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FNiagaraVariableBase local_48 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar5 = local_res10[0];
  lVar10 = (longlong)local_res10[0];
  puVar11 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uVar14 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_48[0].Name = local_res18;
  local_48[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48[0].TypeDefHandle,&FNiagaraTypeHelper::Vector2DDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar9 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                        local_48);
    if (pFVar9 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar9->Size != 0x10) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar8 = (pFVar9->Data).ArrayNum;
      }
      else {
        iVar8 = (pFVar9->PrevData).ArrayNum;
      }
      if ((-1 < iVar5) && (iVar5 < iVar8 / pFVar9->Size)) {
        if (cVar2 != '\0') {
          pFVar9 = (FNiagaraDataChannelVariableBuffer *)&pFVar9->PrevData;
        }
        pFVar1 = (pFVar9->Data).AllocatorInstance.Data + lVar10 * 0x10;
        uVar12 = *(undefined4 *)pFVar1;
        uVar13 = *(undefined4 *)(pFVar1 + 4);
        uVar14 = *(undefined4 *)(pFVar1 + 8);
        uVar15 = *(undefined4 *)(pFVar1 + 0xc);
        uVar7 = '\x01';
        goto LAB_14915382a;
      }
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
    }
  }
  uVar7 = '\0';
LAB_14915382a:
  *puVar11 = uVar7;
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  return;
}

// execReadVector4 @ 149153850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UNiagaraDataChannelReader::execReadVector4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  longlong lVar11;
  uchar *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FNiagaraVariableBase local_58 [4];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res10[0];
  uVar18 = _UNK_15061cbc8;
  uVar17 = ___xmm_3ff00000000000000000000000000000;
  lVar11 = (longlong)local_res10[0];
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  puVar12 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  local_58[0].Name = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_58[0].TypeDefHandle,&FNiagaraTypeHelper::Vector4Def);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer
                        (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                         local_58);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar10->Size != 0x20) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar9 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar9 = (pFVar10->PrevData).ArrayNum;
      }
      if ((-1 < iVar6) && (iVar6 < iVar9 / pFVar10->Size)) {
        if (cVar2 != '\0') {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar11 * 0x20;
        uVar13 = *(undefined4 *)pFVar1;
        uVar14 = *(undefined4 *)(pFVar1 + 4);
        uVar15 = *(undefined4 *)(pFVar1 + 8);
        uVar16 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar4 = pFVar4 + lVar11 * 0x20 + 0x10;
        uVar17 = *(undefined8 *)pFVar4;
        uVar18 = *(undefined8 *)(pFVar4 + 8);
        uVar8 = '\x01';
        goto LAB_1491539dd;
      }
    }
  }
  uVar8 = '\0';
LAB_1491539dd:
  *puVar12 = uVar8;
  *(undefined4 *)param_3 = uVar13;
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(undefined4 *)((longlong)param_3 + 8) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar18;
  return;
}

// execReadVector @ 149153aa0

void __cdecl
UNiagaraDataChannelReader::execReadVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  longlong lVar11;
  uchar *puVar12;
  uchar local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  double local_res20;
  FNiagaraVariableBase local_78;
  double local_68;
  double dStack_60;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res10[0];
  lVar11 = (longlong)local_res10[0];
  puVar12 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.Name = local_res18;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_78.TypeDefHandle,&FNiagaraTypeHelper::VectorDef);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7421803714844819384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                       ,0x48,"Data.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer
                        (*(FNiagaraDataChannelGameData **)(*(longlong *)(param_1 + 1) + 0x10),
                         &local_78);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      cVar2 = param_1[1].field_0x10;
      if (pFVar10->Size != 0x18) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x42,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cVar2 == '\0') {
        iVar9 = (pFVar10->Data).ArrayNum;
      }
      else {
        iVar9 = (pFVar10->PrevData).ArrayNum;
      }
      if ((iVar6 < 0) || (iVar9 / pFVar10->Size <= iVar6)) {
        uVar8 = '\0';
        local_68 = 0.0;
        dStack_60 = 0.0;
        local_res20 = 0.0;
      }
      else {
        if (cVar2 != '\0') {
          pFVar10 = (FNiagaraDataChannelVariableBuffer *)&pFVar10->PrevData;
        }
        pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar11 * 0x18;
        local_68 = *(double *)pFVar1;
        dStack_60 = *(double *)(pFVar1 + 8);
        local_res20 = *(double *)(pFVar4 + lVar11 * 0x18 + 0x10);
        uVar8 = '\x01';
      }
      goto LAB_149153c36;
    }
  }
  uVar8 = '\0';
LAB_149153c36:
  *puVar12 = uVar8;
  *(double *)param_3 = local_68;
  *(double *)((longlong)param_3 + 8) = dStack_60;
  *(double *)((longlong)param_3 + 0x10) = local_res20;
  return;
}

