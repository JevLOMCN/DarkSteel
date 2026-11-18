// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 14907a690

UClass * __cdecl UNiagaraDataInterfaceArrayPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayPosition",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayPosition,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayPosition>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayPosition>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton;
}

// UNiagaraDataInterfaceArrayPosition @ 1490b39c0

UNiagaraDataInterfaceArrayPosition * __thiscall
UNiagaraDataInterfaceArrayPosition::UNiagaraDataInterfaceArrayPosition
          (UNiagaraDataInterfaceArrayPosition *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->PositionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionData).ArrayNum = 0;
  (this->PositionData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// UNiagaraDataInterfaceArrayPosition @ 1490b3a10

UNiagaraDataInterfaceArrayPosition * __thiscall
UNiagaraDataInterfaceArrayPosition::UNiagaraDataInterfaceArrayPosition
          (UNiagaraDataInterfaceArrayPosition *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->PositionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionData).ArrayNum = 0;
  (this->PositionData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UNiagaraDataInterfaceArrayPosition @ 1490b8f10

void __thiscall
UNiagaraDataInterfaceArrayPosition::~UNiagaraDataInterfaceArrayPosition
          (UNiagaraDataInterfaceArrayPosition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  pFVar1 = (this->PositionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this);
  return;
}

// DrawDebugHud @ 1490eedf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceArrayPosition::DrawDebugHud
          (UNiagaraDataInterfaceArrayPosition *this,FNDIDrawDebugHudContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UCanvas *this_00;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FNiagaraPosition local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  FNiagaraLWCConverter local_68;
  TVector<double> local_50 [2];
  
  plVar3 = (longlong *)this->_padding_;
  if ((plVar3 == (longlong *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*plVar3 + 0x80))(plVar3,param_1);
  if (param_1->bVerbose != false) {
    this_00 = param_1->Canvas;
    FNiagaraSystemInstance::GetLWCConverter(param_1->SystemInstance,&local_68,false);
    fVar5 = GNDIArrayPositionDebugRadius;
    iVar2 = (this->PositionData).ArrayNum;
    pFVar7 = (this->PositionData).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((this->PositionData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraPosition_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      local_b8._0_8_ = *(undefined8 *)pFVar7;
      local_b8._8_4_ = *(undefined4 *)(pFVar7 + 8);
      FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                (&local_68,(TVector<double> *)&local_a8._s_0,&local_b8);
      local_88._s_0.X = local_a8._s_0.X;
      local_88._s_0.Y = local_a8._s_0.Y;
      local_88._s_0.Z = local_a8._s_0.Z;
      UCanvas::Project(this_00,local_50,(TVector<double> *)&local_88._s_0,false);
      if (0.0 < (double)local_50[0].field0_0x0._16_8_) {
        DrawDebugCanvasWireSphere(this_00,(TVector<double> *)&local_a8._s_0,FColor::Red,fVar5,0x10);
      }
      pFVar7 = pFVar7 + 0xc;
    }
  }
  return;
}

// GetPrivateStaticClass @ 149109420

UClass * __cdecl UNiagaraDataInterfaceArrayPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayPosition",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayPosition,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayPosition>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayPosition>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.InnerSingleton;
}

// PostInitProperties @ 149120230

void __thiscall
UNiagaraDataInterfaceArrayPosition::PostInitProperties(UNiagaraDataInterfaceArrayPosition *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  puVar4 = ::operator_new(0xc0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    puVar4[2] = this;
    *(undefined2 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    *puVar4 = &
              ___7__FNDIArrayProxyImpl_UFNiagaraPosition__VUNiagaraDataInterfaceArrayPosition____6B_
    ;
    *(undefined4 *)(puVar4 + 9) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80;
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x80;
    *(undefined4 *)(puVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0xa4) = 0;
    puVar4[0x16] = 0;
    *(undefined4 *)(puVar4 + 0x17) = 0;
    lVar1 = puVar4[2];
    if ((*(char *)(lVar1 + 0x48) == '\x03') || (*(char *)(lVar1 + 0x48) == '\x01')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(puVar4 + 3) = uVar3;
    if (((*(char *)(lVar1 + 0x48) == '\x03') || (*(char *)(lVar1 + 0x48) == '\x02')) &&
       ((*(uint *)(lVar1 + 0x30) >> 1 & 1) != 0)) {
      *(undefined1 *)((longlong)puVar4 + 0x19) = 1;
    }
    else {
      *(undefined1 *)((longlong)puVar4 + 0x19) = 0;
    }
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  UNiagaraDataInterfaceArray::PostInitProperties((UNiagaraDataInterfaceArray *)this);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceArrayPosition @ 149139f20

void __cdecl
UNiagaraDataInterfaceArrayPosition::StaticRegisterNativesUNiagaraDataInterfaceArrayPosition(void)

{
  return;
}

