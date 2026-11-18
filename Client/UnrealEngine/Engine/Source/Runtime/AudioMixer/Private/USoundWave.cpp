// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 11

// GeneratePCMData @ 146554d50

int __thiscall USoundWave::GeneratePCMData(USoundWave *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7061353171553090288>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundWave.h"
                     ,0x510,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetCurveData @ 1465561d0

UCurveTable * __thiscall USoundWave::GetCurveData(USoundWave *this)

{
  return (this->Curves).field0_0x0.DebugPtr;
}

// GetGeneratedPCMDataFormat @ 1465583b0

Type __thiscall USoundWave::GetGeneratedPCMDataFormat(USoundWave *this)

{
  return Int16;
}

// IsProcedurallyGenerated @ 1465613a0

bool __thiscall USoundWave::IsProcedurallyGenerated(USoundWave *this)

{
  return this->bProcedural;
}

// OnBeginGenerate @ 146562e70

void __thiscall USoundWave::OnBeginGenerate(USoundWave *this)

{
  return;
}

// OnEndGenerate @ 146563100

void __thiscall USoundWave::OnEndGenerate(USoundWave *this,TSharedPtr<ISoundGenerator,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnEndGenerate @ 146563110

void __thiscall USoundWave::OnEndGenerate(USoundWave *this)

{
  return;
}

// StaticClass @ 146577890

UClass * __cdecl USoundWave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundWave.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWave",&Z_Registration_Info_UClass_USoundWave.InnerSingleton,
               StaticRegisterNativesUSoundWave,0x408,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundWave>,InternalVTableHelperCtorCaller<USoundWave>,
               aFStackX_8,USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWave.InnerSingleton;
}

// _getUObject @ 14657e260

UObject * __thiscall USoundWave::_getUObject(USoundWave *this)

{
  return (UObject *)&this[-1].CompressedDataGuid.C;
}

// _getUObject`adjustor{8}' @ 14657e26c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USoundWave::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall USoundWave::_getUObject_adjustor_8__(USoundWave *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USoundWave *)&this[-1].SoundWaveDataPtr.SharedReferenceCount);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{352}' @ 14657e27c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USoundWave::_getUObject`adjustor{352}'
   (void)const __ptr64 */

UObject * __thiscall USoundWave::_getUObject_adjustor_352__(USoundWave *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USoundWave *)&this[-1].ModulationSettings._padding_);
  return (UObject *)pUVar1;
}

