// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1482cae70

UClass * __cdecl UPhysicalMaterialMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalMaterialMask",
               &Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton,
               StaticRegisterNativesUPhysicalMaterialMask,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicalMaterialMask>,
               InternalVTableHelperCtorCaller<UPhysicalMaterialMask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton;
}

// UPhysicalMaterialMask @ 1482db6c0

UPhysicalMaterialMask * __thiscall
UPhysicalMaterialMask::UPhysicalMaterialMask(UPhysicalMaterialMask *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicalMaterialMask__6B_;
  (this->MaterialMaskHandle).Ptr = (FMaterialMaskHandle *)0x0;
  return this;
}

// UPhysicalMaterialMask @ 1482db6f0

UPhysicalMaterialMask * __thiscall
UPhysicalMaterialMask::UPhysicalMaterialMask
          (UPhysicalMaterialMask *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicalMaterialMask__6B_;
  this->UVChannelIndex = 0;
  (this->MaterialMaskHandle).Ptr = (FMaterialMaskHandle *)0x0;
  return this;
}

// ~UPhysicalMaterialMask @ 1482ddfe0

void __thiscall UPhysicalMaterialMask::~UPhysicalMaterialMask(UPhysicalMaterialMask *this)

{
  this->_padding_ = (longlong)&___7UPhysicalMaterialMask__6B_;
  ::operator_delete((this->MaterialMaskHandle).Ptr,4);
  UObject::~UObject((UObject *)this);
  return;
}

// FinishDestroy @ 1483037c0

void __thiscall UPhysicalMaterialMask::FinishDestroy(UPhysicalMaterialMask *this)

{
  FMaterialMaskHandle *pFVar1;
  
  pFVar1 = (this->MaterialMaskHandle).Ptr;
  if (pFVar1 != (FMaterialMaskHandle *)0x0) {
    FChaosEngineInterface::ReleaseMaterialMask(pFVar1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GenerateMaskData @ 148304b20

void __thiscall
UPhysicalMaterialMask::GenerateMaskData
          (UPhysicalMaterialMask *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,int *param_3)

{
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (param_1->ArrayNum == 0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

// GetPhysMatIndex @ 14830b550

uint __cdecl
UPhysicalMaterialMask::GetPhysMatIndex
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,
          int param_4,int param_5,float param_6,float param_7)

{
  code *pcVar1;
  bool bVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  float local_res10 [2];
  
  if (param_4 == 1) {
    fVar8 = param_6;
    if (__real_3f800000 <= param_6) {
      fVar8 = __real_3f800000;
    }
    fVar7 = param_7;
    if (__real_3f800000 <= param_7) {
      fVar7 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  else if (param_4 == 0) {
    iVar4 = (int)param_6;
    fVar8 = param_6;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != param_6)) {
      auVar9._4_4_ = param_6;
      auVar9._0_4_ = param_6;
      auVar9._8_8_ = 0;
      uVar5 = movmskps(in_EAX,auVar9);
      in_EAX = uVar5 & 1;
      fVar8 = (float)(int)(iVar4 - in_EAX);
    }
    fVar8 = param_6 - fVar8;
    iVar4 = (int)param_7;
    fVar10 = param_7;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
      auVar11._4_4_ = param_7;
      auVar11._0_4_ = param_7;
      auVar11._8_8_ = 0;
      uVar5 = movmskps(in_EAX,auVar11);
      fVar10 = (float)(int)(iVar4 - (uVar5 & 1));
    }
    fVar7 = param_7 - fVar10;
  }
  else {
    fVar8 = modff(param_6,local_res10);
    fVar10 = __real_3f800000;
    uVar5 = (int)local_res10[0] & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (0 < (int)uVar5) {
      fVar8 = __real_3f800000 - fVar8;
    }
    fVar7 = modff(param_7,&param_6);
    uVar5 = (int)param_6 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (0 < (int)uVar5) {
      fVar7 = fVar10 - fVar7;
    }
  }
  uVar5 = (int)ROUND((fVar8 + fVar8) * (float)param_2 - __real_3f000000) >> 1;
  uVar6 = ((int)((param_2 >> 0x1f & 7U) + param_2) >> 3) *
          ((int)ROUND((fVar7 + fVar7) * (float)param_3 - __real_3f000000) >> 1) + (uVar5 >> 3);
  if ((uint)param_1->ArrayNum <= uVar6) {
    return INVALID_MASK_INDEX;
  }
  uVar3 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  return *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) >>
         (sbyte)((uVar5 & 7) << 2) & 0xf;
}

// GetPhysicsMaterialMask @ 14830b880

FMaterialMaskHandle * __thiscall
UPhysicalMaterialMask::GetPhysicsMaterialMask(UPhysicalMaterialMask *this)

{
  TUniquePtr<Chaos::FMaterialMaskHandle,TDefaultDelete<Chaos::FMaterialMaskHandle>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FMaterialMaskHandle FVar4;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *pTVar5;
  FChaosPhysicsMaterialMask *pFVar6;
  FMaterialMaskHandle *pFVar7;
  undefined8 local_18 [2];
  
  pTVar1 = &this->MaterialMaskHandle;
  if ((this->MaterialMaskHandle).Ptr == (FMaterialMaskHandle *)0x0) {
    pTVar5 = ::operator_new(4);
    if (pTVar5 == (THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)0x0) {
      pTVar5 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)0x0;
    }
    else {
      *pTVar5 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)0x0;
    }
    if (pTVar1 != (TUniquePtr<Chaos::FMaterialMaskHandle,TDefaultDelete<Chaos::FMaterialMaskHandle>_>
                   *)local_18) {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = (FMaterialMaskHandle *)pTVar5;
      pTVar5 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)0x0;
      ::operator_delete(pFVar7,4);
    }
    ::operator_delete(pTVar5,4);
  }
  pFVar6 = Chaos::FMaterialMaskHandle::Get(pTVar1->Ptr);
  if (pFVar6 == (FChaosPhysicsMaterialMask *)0x0) {
    FVar4 = FPhysInterface_Chaos::CreateMaterialMask(this);
    pTVar1->Ptr->InnerHandle = FVar4.InnerHandle;
    pFVar6 = Chaos::FMaterialMaskHandle::Get(pTVar1->Ptr);
    if (pFVar6 == (FChaosPhysicsMaterialMask *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialMaskHandle->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalMaterialMask.cpp"
                         ,0xee,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FMaterialMaskHandle *)(*pcVar2)();
        return pFVar7;
      }
    }
    FPhysInterface_Chaos::UpdateMaterialMask(pTVar1->Ptr,this);
  }
  return pTVar1->Ptr;
}

// GetPrivateStaticClass @ 14830c2c0

UClass * __cdecl UPhysicalMaterialMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalMaterialMask",
               &Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton,
               StaticRegisterNativesUPhysicalMaterialMask,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicalMaterialMask>,
               InternalVTableHelperCtorCaller<UPhysicalMaterialMask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterialMask.InnerSingleton;
}

// PostInitProperties @ 148317e80

void __thiscall UPhysicalMaterialMask::PostInitProperties(UPhysicalMaterialMask *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UPhysicalMaterialMask *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UPhysicalMaterialMask **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UPhysicalMaterialMask **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 148318010

void __thiscall UPhysicalMaterialMask::PostLoad(UPhysicalMaterialMask *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPhysicalMaterialMask **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUPhysicalMaterialMask @ 148323ae0

void __cdecl UPhysicalMaterialMask::StaticRegisterNativesUPhysicalMaterialMask(void)

{
  return;
}

