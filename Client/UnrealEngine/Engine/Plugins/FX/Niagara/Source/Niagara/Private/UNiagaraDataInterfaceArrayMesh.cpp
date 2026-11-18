// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 14

// StaticClass @ 148e41ea0

UClass * __cdecl UNiagaraDataInterfaceArrayMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayMesh,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayMesh>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton;
}

// UNiagaraDataInterfaceArrayMesh @ 148e54e40

UNiagaraDataInterfaceArrayMesh * __thiscall
UNiagaraDataInterfaceArrayMesh::UNiagaraDataInterfaceArrayMesh
          (UNiagaraDataInterfaceArrayMesh *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
  (this->MeshData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).ArrayNum = 0;
  (this->MeshData).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceArrayMesh @ 148e54e90

UNiagaraDataInterfaceArrayMesh * __thiscall
UNiagaraDataInterfaceArrayMesh::UNiagaraDataInterfaceArrayMesh
          (UNiagaraDataInterfaceArrayMesh *this,FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceArray::UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
  (this->MeshData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).ArrayNum = 0;
  (this->MeshData).ArrayMax = 0;
  return this;
}

// ~UNiagaraDataInterfaceArrayMesh @ 148e56860

void __thiscall
UNiagaraDataInterfaceArrayMesh::~UNiagaraDataInterfaceArrayMesh
          (UNiagaraDataInterfaceArrayMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayMesh__6B_;
  pFVar1 = (this->MeshData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraRenderableMeshArrayInterface__6B_;
  UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this);
  return;
}

// ForEachMesh @ 148e65c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceArrayMesh::ForEachMesh
          (UNiagaraDataInterfaceArrayMesh *this,FNiagaraSystemInstance *param_1,
          TFunction<void___cdecl(int)> *param_2,
          TFunction<void___cdecl(FNiagaraMeshRendererMeshProperties_const_&)> *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  PSRWLOCK pRVar10;
  PSRWLOCK SRWLock;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_d8 [8];
  undefined4 local_d0 [2];
  TFunction<void___cdecl(int)> *local_c8;
  FNiagaraMeshRendererMeshProperties local_b8;
  
  SRWLock = (PSRWLOCK)0x0;
  pRVar10 = SRWLock;
  local_c8 = param_2;
  if (param_1 != (FNiagaraSystemInstance *)0x0) {
    lVar1 = this[-1]._padding_;
    if ((lVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = param_1->ID;
    if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
      lVar12 = *(longlong *)(lVar1 + 0x60);
      if (*(longlong *)(lVar1 + 0x60) == 0) {
        lVar12 = lVar1 + 0x58;
      }
      iVar5 = *(int *)(lVar12 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                                (ulonglong)(*(int *)(lVar1 + 0x68) - 1)) * 4);
      if (iVar5 != -1) {
        do {
          lVar12 = *(longlong *)(lVar1 + 0x20) + (longlong)iVar5 * 0x18;
          if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar5 * 0x18) == uVar2) {
            if (lVar12 != 0) {
              pRVar10 = *(PSRWLOCK *)(lVar12 + 8);
              goto LAB_148e65ceb;
            }
            break;
          }
          iVar5 = *(int *)(lVar12 + 0x10);
        } while (iVar5 != -1);
      }
    }
    pRVar10 = (PSRWLOCK)0x0;
  }
LAB_148e65ceb:
  plVar9 = &this->_padding_;
  if (pRVar10 != (PSRWLOCK)0x0) {
    SRWLock = pRVar10 + 2;
    AcquireSRWLockShared(SRWLock);
    plVar9 = (longlong *)(pRVar10 + 3);
    if (*(char *)&pRVar10[1].Ptr == '\0') {
      plVar9 = &this->_padding_;
    }
  }
  local_d0[0] = (undefined4)plVar9[1];
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar3 = *(code **)param_2;
  plVar7 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_2->field_0x28;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar6,local_d0);
  FNiagaraMeshRendererMeshProperties::FNiagaraMeshRendererMeshProperties(&local_b8);
  plVar11 = (longlong *)*plVar9;
  lVar1 = plVar9[1];
  plVar7 = plVar11 + 4;
  plVar13 = plVar11 + (longlong)(int)lVar1 * 0xb;
  while( true ) {
    if ((int)plVar9[1] != (int)lVar1) {
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshPropertiesBase_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_d8);
    }
    if (plVar11 == plVar13) break;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*plVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*plVar11);
    }
    local_b8._padding_ = *plVar11;
    local_b8._padding_ = plVar7[-3];
    local_b8._padding_ = plVar7[-2];
    local_b8._padding_ = plVar7[-1];
    local_b8._padding_ = *plVar7;
    local_b8._padding_ = plVar7[1];
    local_b8._padding_ = plVar7[2];
    local_b8._padding_ = plVar7[3];
    local_b8._padding_ = plVar7[4];
    local_b8._padding_ = plVar7[5];
    local_b8._padding_._0_1_ = (undefined1)plVar7[6];
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar3 = *(code **)param_3;
    plVar8 = *(longlong **)&param_3->field_0x28;
    if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
      plVar8 = (longlong *)&param_3->field_0x10;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar6,&local_b8);
    plVar11 = plVar11 + 0xb;
    plVar7 = plVar7 + 0xb;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if (*(longlong *)local_c8 != 0) {
    plVar9 = (longlong *)&local_c8->field_0x10;
    if (*(longlong **)&local_c8->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&local_c8->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 148e6e1e0

UClass * __cdecl UNiagaraDataInterfaceArrayMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayMesh,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayMesh>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayMesh.InnerSingleton;
}

// PostInitProperties @ 148e769d0

void __thiscall
UNiagaraDataInterfaceArrayMesh::PostInitProperties(UNiagaraDataInterfaceArrayMesh *this)

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
              ___7__FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____6B_
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

// SetNiagaraArrayMesh @ 148e7c840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayMesh::SetNiagaraArrayMesh
          (UNiagaraComponent *param_1,FName param_2,
          TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh> *this;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  pUVar4 = StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 != (UNiagaraDataInterface *)0x0) {
    iVar1 = param_3->ArrayNum;
    this = (FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>
            *)(pUVar5->Proxy).Ptr;
    _Src = (param_3->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::
      SetNumUninitialized(&this->Owner->MeshData,iVar1,Default);
      memcpy((this->Owner->MeshData).AllocatorInstance.Data,_Src,(longlong)iVar1 * 0x58);
    }
    else {
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      BeginSetArrayFromBP(this,false);
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->MeshData,iVar1,Default);
      memcpy((this->Owner->MeshData).AllocatorInstance.Data,_Src,(longlong)iVar1 * 0x58);
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      EndSetArrayFromBP(this);
    }
    FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
    RecreateRenderState(this);
  }
  return;
}

// SetNiagaraArrayMeshSM @ 148e7c940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayMesh::SetNiagaraArrayMeshSM
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh> *this;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  pUVar5 = StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    iVar1 = param_3->ArrayNum;
    this = (FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>
            *)(pUVar6->Proxy).Ptr;
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::
      SetNumUninitialized(&this->Owner->MeshData,iVar1,Default);
      FNDIArrayImplHelper<FNiagaraMeshRendererMeshPropertiesBase>::CopyCpuToCpuMemory
                ((FNiagaraMeshRendererMeshPropertiesBase *)
                 (this->Owner->MeshData).AllocatorInstance.Data,(UStaticMesh **)pFVar2,iVar1);
    }
    else {
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      BeginSetArrayFromBP(this,false);
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->MeshData,iVar1,Default);
      FNDIArrayImplHelper<FNiagaraMeshRendererMeshPropertiesBase>::CopyCpuToCpuMemory
                ((FNiagaraMeshRendererMeshPropertiesBase *)
                 (this->Owner->MeshData).AllocatorInstance.Data,(UStaticMesh **)pFVar2,iVar1);
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      EndSetArrayFromBP(this);
    }
    FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
    RecreateRenderState(this);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceArrayMesh @ 148e815f0

void __cdecl
UNiagaraDataInterfaceArrayMesh::StaticRegisterNativesUNiagaraDataInterfaceArrayMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 148e867b0

UObject * __thiscall
UNiagaraDataInterfaceArrayMesh::_getUObject(UNiagaraDataInterfaceArrayMesh *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{24}' @ 148e867bc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNiagaraDataInterfaceArrayMesh::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UNiagaraDataInterfaceArrayMesh::_getUObject_adjustor_24__(UNiagaraDataInterfaceArrayMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNiagaraDataInterfaceArrayMesh *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execSetNiagaraArrayMesh @ 148e86940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayMesh::execSetNiagaraArrayMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh> *this;
  void *_Src;
  code *pcVar3;
  FName FVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  void **ppvVar9;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_res20;
  FVar4 = local_res10[0];
  ppvVar9 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar5,FVar4);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    iVar1 = *(int *)(ppvVar9 + 1);
    this = (FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>
            *)(pUVar8->Proxy).Ptr;
    _Src = *ppvVar9;
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::
      SetNumUninitialized(&this->Owner->MeshData,iVar1,Default);
      memcpy((this->Owner->MeshData).AllocatorInstance.Data,_Src,(longlong)iVar1 * 0x58);
    }
    else {
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      BeginSetArrayFromBP(this,false);
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->MeshData,iVar1,Default);
      memcpy((this->Owner->MeshData).AllocatorInstance.Data,_Src,(longlong)iVar1 * 0x58);
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      EndSetArrayFromBP(this);
    }
    FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
    RecreateRenderState(this);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayMeshSM @ 148e86b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayMesh::execSetNiagaraArrayMeshSM
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh> *this;
  UStaticMesh **ppUVar3;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    iVar1 = *(int *)(ppvVar10 + 1);
    this = (FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>
            *)(pUVar9->Proxy).Ptr;
    ppUVar3 = *ppvVar10;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::
      SetNumUninitialized(&this->Owner->MeshData,iVar1,Default);
      FNDIArrayImplHelper<FNiagaraMeshRendererMeshPropertiesBase>::CopyCpuToCpuMemory
                ((FNiagaraMeshRendererMeshPropertiesBase *)
                 (this->Owner->MeshData).AllocatorInstance.Data,ppUVar3,iVar1);
    }
    else {
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      BeginSetArrayFromBP(this,false);
      TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->MeshData,iVar1,Default);
      FNDIArrayImplHelper<FNiagaraMeshRendererMeshPropertiesBase>::CopyCpuToCpuMemory
                ((FNiagaraMeshRendererMeshPropertiesBase *)
                 (this->Owner->MeshData).AllocatorInstance.Data,ppUVar3,iVar1);
      FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
      EndSetArrayFromBP(this);
    }
    FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
    RecreateRenderState(this);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

