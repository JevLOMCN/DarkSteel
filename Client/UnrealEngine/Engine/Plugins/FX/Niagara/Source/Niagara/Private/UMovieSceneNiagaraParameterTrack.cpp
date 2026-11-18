// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 148ee3670

UClass * __cdecl UMovieSceneNiagaraParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraParameterTrack,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNiagaraParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraParameterTrack>,local_res8,
               UMovieSceneNiagaraTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton;
}

// SetChannelDefault<FMovieSceneFloatChannel,float> @ 148f43da0

void __cdecl
UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
          (FMovieSceneChannelProxy *param_1,FMovieSceneFloatChannel *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  
  pUVar4 = FMovieSceneFloatChannel::StaticStruct();
  iVar3 = FMovieSceneChannelProxy::FindIndex
                    (param_1,(FName)pUVar4->_padding_,(FMovieSceneChannel *)param_2);
  if (iVar3 != -1) {
    pUVar4 = FMovieSceneFloatChannel::StaticStruct();
    pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
    lVar7 = 0;
    if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
      pFVar8 = (FScriptContainerElement *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (pFVar5->Channels).ArrayNum;
      pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
      if (iVar6 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if ((-1 < iVar3) && (iVar3 < iVar6)) {
      if (iVar3 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar7 = *(longlong *)(pFVar8 + (longlong)iVar3 * 8);
    }
    if (lVar7 != 0) {
      *(float *)(lVar7 + 0x90) = param_3;
      *(undefined1 *)(lVar7 + 0x94) = 1;
    }
  }
  return;
}

// UMovieSceneNiagaraParameterTrack @ 148f80860

UMovieSceneNiagaraParameterTrack * __thiscall
UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
          (UMovieSceneNiagaraParameterTrack *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  (this->Parameter)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->Parameter)._padding_ = iVar1;
  (this->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameter).VarData.ArrayNum = 0;
  (this->Parameter).VarData.ArrayMax = 0;
  return this;
}

// UMovieSceneNiagaraParameterTrack @ 148f808f0

UMovieSceneNiagaraParameterTrack * __thiscall
UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
          (UMovieSceneNiagaraParameterTrack *this,FObjectInitializer *param_1)

{
  int iVar1;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  (this->Parameter)._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->Parameter)._padding_ = iVar1;
  (this->Parameter).VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameter).VarData.ArrayNum = 0;
  (this->Parameter).VarData.ArrayMax = 0;
  return this;
}

// ~UMovieSceneNiagaraParameterTrack @ 148f81f60

void __thiscall
UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack
          (UMovieSceneNiagaraParameterTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Parameter).VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&UMovieSceneNiagaraTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneNiagaraTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// GetParameter @ 148fb5940

FNiagaraVariable * __thiscall
UMovieSceneNiagaraParameterTrack::GetParameter(UMovieSceneNiagaraParameterTrack *this)

{
  return &this->Parameter;
}

// GetPrivateStaticClass @ 148fb6600

UClass * __cdecl UMovieSceneNiagaraParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraParameterTrack,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNiagaraParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraParameterTrack>,local_res8,
               UMovieSceneNiagaraTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.InnerSingleton;
}

// SetParameter @ 148fcbb40

void __thiscall
UMovieSceneNiagaraParameterTrack::SetParameter
          (UMovieSceneNiagaraParameterTrack *this,FNiagaraVariable *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Parameter)._padding_ = param_1->_padding_;
  *(int *)&(this->Parameter)._padding_ = (int)param_1->_padding_;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Parameter).VarData,&param_1->VarData);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SetSectionChannelDefaults @ 148fcbf80

void __thiscall
UMovieSceneNiagaraParameterTrack::SetSectionChannelDefaults
          (UMovieSceneNiagaraParameterTrack *this,UMovieSceneSection *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraParameterTrack @ 148fcdc80

void __cdecl
UMovieSceneNiagaraParameterTrack::StaticRegisterNativesUMovieSceneNiagaraParameterTrack(void)

{
  return;
}

