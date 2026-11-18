// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 57

// StaticClass @ 14aeace90

UClass * __cdecl UMetasoundParameterPack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetasoundParameterPack",
               &Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton,
               StaticRegisterNativesUMetasoundParameterPack,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetasoundParameterPack>,
               InternalVTableHelperCtorCaller<UMetasoundParameterPack>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton;
}

// AddParameter<int> @ 14aef0be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMetasoundParameterPack::AddParameter<int>
          (UMetasoundParameterPack *this,FName *param_1,FName *param_2,int *param_3)

{
  int iVar1;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  uint uVar8;
  FMetasoundParameterPackStorage *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FMetasoundParameterPackStorage *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar2 = &this->ParameterStorage;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
    FStack_30.ReferenceController = ::operator_new(0x28);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FMetasoundParameterPackStorage *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar9 = (FMetasoundParameterPackStorage *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMetasoundParameterPackStorage___00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[2]._padding_ = 0;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar9 == (FMetasoundParameterPackStorage *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = FStack_30.ReferenceController;
      local_38 = pFVar9;
    }
    if (pTVar2 != (TSharedPtr<FMetasoundParameterPackStorage,1> *)&local_38) {
      pTVar2->Object = pFVar9;
      local_38 = (FMetasoundParameterPackStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ParameterStorage).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pFVar9 = pTVar2->Object;
  iVar4 = (pFVar9->Storage).ArrayNum;
  piVar3 = &(pFVar9->Storage).ArrayNum;
  uVar8 = pFVar9->StorageBytesInUse + 7U & 0xfffffff8;
  iVar1 = uVar8 + 0x18;
  if (iVar4 < iVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1 - iVar4,(ForAnyElementType *)pFVar9,piVar3,&(pFVar9->Storage).ArrayMax);
  }
  uVar10 = 0;
  if ((int)uVar8 < *piVar3) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = (FName *)((pFVar9->Storage).AllocatorInstance.Data + (int)uVar8);
  *pFVar7 = *param_1;
  pFVar7[1] = *param_2;
  pFVar7[2].ComparisonIndex.Value = 0x140018;
  pFVar7[2].Number = *param_3;
  pFVar9->StorageBytesInUse = iVar1;
  return;
}

// AddParameter<float> @ 14aef0df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMetasoundParameterPack::AddParameter<float>
          (UMetasoundParameterPack *this,FName *param_1,FName *param_2,float *param_3)

{
  int iVar1;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FMetasoundParameterPackStorage *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FMetasoundParameterPackStorage *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar2 = &this->ParameterStorage;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
    FStack_30.ReferenceController = ::operator_new(0x28);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FMetasoundParameterPackStorage *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar9 = (FMetasoundParameterPackStorage *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMetasoundParameterPackStorage___00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[2]._padding_ = 0;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar9 == (FMetasoundParameterPackStorage *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = FStack_30.ReferenceController;
      local_38 = pFVar9;
    }
    if (pTVar2 != (TSharedPtr<FMetasoundParameterPackStorage,1> *)&local_38) {
      pTVar2->Object = pFVar9;
      local_38 = (FMetasoundParameterPackStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ParameterStorage).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  pFVar9 = pTVar2->Object;
  iVar4 = (pFVar9->Storage).ArrayNum;
  piVar3 = &(pFVar9->Storage).ArrayNum;
  uVar8 = pFVar9->StorageBytesInUse + 7U & 0xfffffff8;
  iVar1 = uVar8 + 0x18;
  if (iVar4 < iVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1 - iVar4,(ForAnyElementType *)pFVar9,piVar3,&(pFVar9->Storage).ArrayMax);
  }
  uVar10 = 0;
  if ((int)uVar8 < *piVar3) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pFVar9->Storage).AllocatorInstance.Data;
  *(FName *)(pFVar5 + (int)uVar8) = *param_1;
  *(FName *)(pFVar5 + (longlong)(int)uVar8 + 8) = *param_2;
  *(undefined4 *)(pFVar5 + (longlong)(int)uVar8 + 0x10) = 0x140018;
  *(float *)(pFVar5 + (longlong)(int)uVar8 + 0x14) = *param_3;
  pFVar9->StorageBytesInUse = iVar1;
  return;
}

// AddParameter<FString> @ 14aef1000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMetasoundParameterPack::AddParameter<FString>
          (UMetasoundParameterPack *this,FName *param_1,FName *param_2,FString *param_3)

{
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FMetasoundParameterPackStorage *pFVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  FMetasoundParameterPackStorage *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar1 = &this->ParameterStorage;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1->Object == (FMetasoundParameterPackStorage *)0x0) {
    FStack_30.ReferenceController = ::operator_new(0x28);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FMetasoundParameterPackStorage *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar7 = (FMetasoundParameterPackStorage *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMetasoundParameterPackStorage___00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[2]._padding_ = 0;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar7 == (FMetasoundParameterPackStorage *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = FStack_30.ReferenceController;
      local_38 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FMetasoundParameterPackStorage,1> *)&local_38) {
      pTVar1->Object = pFVar7;
      local_38 = (FMetasoundParameterPackStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ParameterStorage).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar1->Object == (FMetasoundParameterPackStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pFVar7 = pTVar1->Object;
  iVar3 = (pFVar7->Storage).ArrayNum;
  piVar2 = &(pFVar7->Storage).ArrayNum;
  uVar10 = pFVar7->StorageBytesInUse + 7U & 0xfffffff8;
  if (iVar3 < (int)(uVar10 + 0x28)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(uVar10 + 0x28) - iVar3,(ForAnyElementType *)pFVar7,piVar2,
               &(pFVar7->Storage).ArrayMax);
  }
  uVar8 = 0;
  if ((int)uVar10 < *piVar2) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = (FName *)((pFVar7->Storage).AllocatorInstance.Data + (int)uVar10);
  *pFVar6 = *param_1;
  pFVar6[1] = *param_2;
  pFVar6[2].ComparisonIndex.Value = 0x180028;
  ::FString::FString((FString *)(pFVar6 + 3),param_3);
  pFVar7->StorageBytesInUse = (ushort)pFVar6[2].ComparisonIndex.Value + uVar10;
  return;
}

// AddParameter<bool> @ 14aef1220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMetasoundParameterPack::AddParameter<bool>
          (UMetasoundParameterPack *this,FName *param_1,FName *param_2,bool *param_3)

{
  int iVar1;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  uint uVar8;
  FMetasoundParameterPackStorage *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FMetasoundParameterPackStorage *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar2 = &this->ParameterStorage;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
    FStack_30.ReferenceController = ::operator_new(0x28);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FMetasoundParameterPackStorage *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar9 = (FMetasoundParameterPackStorage *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMetasoundParameterPackStorage___00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[2]._padding_ = 0;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar9 == (FMetasoundParameterPackStorage *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = FStack_30.ReferenceController;
      local_38 = pFVar9;
    }
    if (pTVar2 != (TSharedPtr<FMetasoundParameterPackStorage,1> *)&local_38) {
      pTVar2->Object = pFVar9;
      local_38 = (FMetasoundParameterPackStorage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ParameterStorage).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (pTVar2->Object == (FMetasoundParameterPackStorage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pFVar9 = pTVar2->Object;
  iVar4 = (pFVar9->Storage).ArrayNum;
  piVar3 = &(pFVar9->Storage).ArrayNum;
  uVar8 = pFVar9->StorageBytesInUse + 7U & 0xfffffff8;
  iVar1 = uVar8 + 0x18;
  if (iVar4 < iVar1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1 - iVar4,(ForAnyElementType *)pFVar9,piVar3,&(pFVar9->Storage).ArrayMax);
  }
  uVar10 = 0;
  if ((int)uVar8 < *piVar3) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = (FName *)((pFVar9->Storage).AllocatorInstance.Data + (int)uVar8);
  *pFVar7 = *param_1;
  pFVar7[1] = *param_2;
  pFVar7[2].ComparisonIndex.Value = 0x140018;
  *(bool *)&pFVar7[2].Number = *param_3;
  pFVar9->StorageBytesInUse = iVar1;
  return;
}

// UMetasoundParameterPack @ 14af3d8a0

UMetasoundParameterPack * __thiscall
UMetasoundParameterPack::UMetasoundParameterPack
          (UMetasoundParameterPack *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  (this->ParameterStorage).Object = (FMetasoundParameterPackStorage *)0x0;
  (this->ParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMetasoundParameterPack @ 14af3d8e0

UMetasoundParameterPack * __thiscall
UMetasoundParameterPack::UMetasoundParameterPack
          (UMetasoundParameterPack *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  (this->ParameterStorage).Object = (FMetasoundParameterPackStorage *)0x0;
  (this->ParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMetasoundParameterPack @ 14af42f20

void __thiscall UMetasoundParameterPack::~UMetasoundParameterPack(UMetasoundParameterPack *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParameterStorage).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// AddBoolParameter @ 14af4f7c0

void __thiscall
UMetasoundParameterPack::AddBoolParameter(UMetasoundParameterPack *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  FName local_res10;
  bool local_res18 [16];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  AddParameter<bool>(this,&local_res10,pFVar1,local_res18);
  return;
}

// AddFloatParameter @ 14af4f800

void __thiscall
UMetasoundParameterPack::AddFloatParameter
          (UMetasoundParameterPack *this,FName param_1,float param_2)

{
  FName *pFVar1;
  FName local_res10;
  float local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  AddParameter<float>(this,&local_res10,pFVar1,local_res18);
  return;
}

// AddIntParameter @ 14af4f840

void __thiscall
UMetasoundParameterPack::AddIntParameter(UMetasoundParameterPack *this,FName param_1,int param_2)

{
  FName *pFVar1;
  FName local_res10;
  int local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  AddParameter<int>(this,&local_res10,pFVar1,local_res18);
  return;
}

// AddStringParameter @ 14af4f880

void __thiscall
UMetasoundParameterPack::AddStringParameter
          (UMetasoundParameterPack *this,FName param_1,FString *param_2)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  AddParameter<FString>(this,local_res10,pFVar1,param_2);
  return;
}

// AddTriggerParameter @ 14af4f8c0

void __thiscall
UMetasoundParameterPack::AddTriggerParameter
          (UMetasoundParameterPack *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  FName local_res10;
  bool local_res18 [16];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  AddParameter<bool>(this,&local_res10,pFVar1,local_res18);
  return;
}

// CreateProxyData @ 14af767d0

TSharedPtr<Audio::IProxyData,1> * __thiscall
UMetasoundParameterPack::CreateProxyData
          (UMetasoundParameterPack *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<Audio::IProxyData,1> *pTVar7;
  
  pTVar6 = ::operator_new(0x30);
  pvVar4 = ThreadLocalStoragePointer;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IProxyData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetasoundParameterPackProxy___00_SharedPointerInternals__6B_
    ;
    if (*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) <
        `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                        ::__l2::MyClassName,"FMetasoundParameterPackProxy");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    uVar3 = `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
            ::__l2::MyClassName.Number;
    pTVar6[1].SharedReferenceCount =
         (atomic<int>)
         `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
         ::__l2::MyClassName.ComparisonIndex.Value;
    pTVar6[1].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar6[1]._padding_ = (longlong)&___7FMetasoundParameterPackProxy__6B_;
    pTVar6[2]._padding_ = this->_padding_;
    lVar1 = this->_padding_;
    pTVar6[2].SharedReferenceCount = (atomic<int>)(int)lVar1;
    pTVar6[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar1 >> 0x20);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (IProxyData *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// CreateSendAddressFromEnvironment @ 14af76b70

FSendAddress * __cdecl
UMetasoundParameterPack::CreateSendAddressFromEnvironment
          (FSendAddress *__return_storage_ptr__,FMetasoundEnvironment *param_1)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  Metasound::FMetaSoundParameterTransmitter::CreateSendAddressFromEnvironment
            (__return_storage_ptr__,param_1,&MetasoundParameterPack::RoutingName,pFVar1);
  return __return_storage_ptr__;
}

// GetBool @ 14af94a50

bool __thiscall
UMetasoundParameterPack::GetBool
          (UMetasoundParameterPack *this,FName param_1,ESetParamResult *param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar2->Value != (bool *)0x0)) {
      *param_2 = Succeeded;
      return pFVar2->Value;
    }
  }
  *param_2 = Failed;
  return false;
}

// GetBoolParameterPtr @ 14af94ac0

bool * __thiscall
UMetasoundParameterPack::GetBoolParameterPtr(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
    if (pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) {
      return &pFVar2->Value;
    }
  }
  return (bool *)0x0;
}

// GetClassInput @ 14af94bf0

FMetasoundFrontendClassInput * __cdecl
UMetasoundParameterPack::GetClassInput(FMetasoundFrontendClassInput *__return_storage_ptr__)

{
  FGuid FVar1;
  FName *pFVar2;
  FMetasoundFrontendLiteral *this;
  FAudioParameter local_108;
  FMetasoundFrontendLiteral local_68;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(FGuid *)&__return_storage_ptr__->_padding_ = FVar1;
  (__return_storage_ptr__->Defaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Defaults).ArrayNum = 0;
  (__return_storage_ptr__->Defaults).ArrayMax = 0;
  __return_storage_ptr__->_padding_ = (longlong)MetasoundParameterPack::RoutingName;
  pFVar2 = Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  local_108.FloatParam = 0.0;
  local_108.BoolParam = false;
  local_108.IntParam = 0;
  __return_storage_ptr__->_padding_ = (longlong)*pFVar2;
  local_108.ParamName = MetasoundParameterPack::RoutingName;
  local_108.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_108.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.StringParam.Data.ArrayNum = 0;
  local_108.StringParam.Data.ArrayMax = 0;
  local_108.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayFloatParam.ArrayNum = 0;
  local_108.ArrayFloatParam.ArrayMax = 0;
  local_108.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayBoolParam.ArrayNum = 0;
  local_108.ArrayBoolParam.ArrayMax = 0;
  local_108.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayIntParam.ArrayNum = 0;
  local_108.ArrayIntParam.ArrayMax = 0;
  local_108.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayObjectParam.ArrayNum = 0;
  local_108.ArrayObjectParam.ArrayMax = 0;
  local_108.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayStringParam.ArrayNum = 0;
  local_108.ArrayStringParam.ArrayMax = 0;
  local_108.ParamType = Object;
  local_108.TypeName.ComparisonIndex.Value = 0;
  local_108.TypeName.Number = 0;
  local_108.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectProxies.ArrayNum = 0;
  local_108.ObjectProxies.ArrayMax = 0;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,&local_108);
  this = FMetasoundFrontendClassInput::InitDefault(__return_storage_ptr__);
  FMetasoundFrontendLiteral::operator=(this,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data,
             local_108.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_108.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_108.ArrayStringParam.AllocatorInstance.Data,
             local_108.ArrayStringParam.ArrayNum);
  if (local_108.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_108.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringParam.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCopyOfParameterStorage @ 14af94e50

TSharedPtr<FMetasoundParameterPackStorage,1> * __thiscall
UMetasoundParameterPack::GetCopyOfParameterStorage
          (UMetasoundParameterPack *this,
          TSharedPtr<FMetasoundParameterPackStorage,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  FMetasoundParameterPackStorage *pFVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar2 = (this->ParameterStorage).Object;
  if (pFVar2 == (FMetasoundParameterPackStorage *)0x0) {
    __return_storage_ptr__->Object = (FMetasoundParameterPackStorage *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar5 = ::operator_new(0x28);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMetasoundParameterPackStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMetasoundParameterPackStorage___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    aVar1 = (atomic<int>)(pFVar2->Storage).ArrayNum;
    _Src = (pFVar2->Storage).AllocatorInstance.Data;
    pTVar5[1].SharedReferenceCount = aVar1;
    if (aVar1 == (atomic<int>)0x0) {
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)aVar1,0,(ForAnyElementType *)(pTVar5 + 1),(int)aVar1,
                 (int *)&pTVar5[1].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar5[1]._padding_,_Src,(longlong)(int)aVar1);
    }
    *(int *)&pTVar5[2]._padding_ = pFVar2->StorageBytesInUse;
    if ((FMetasoundParameterPackStorage *)(pTVar5 + 1) == (FMetasoundParameterPackStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FMetasoundParameterPackStorage,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (FMetasoundParameterPackStorage *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetFloat @ 14af9a800

float __thiscall
UMetasoundParameterPack::GetFloat
          (UMetasoundParameterPack *this,FName param_1,ESetParamResult *param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<float,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<float,0>(this_00,local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<float,0> *)0x0) && (&pFVar2->Value != (float *)0x0))
    {
      *param_2 = Succeeded;
      return pFVar2->Value;
    }
  }
  *param_2 = Failed;
  return 0.0;
}

// GetFloatParameterPtr @ 14af9a870

float * __thiscall
UMetasoundParameterPack::GetFloatParameterPtr(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<float,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<float,0>(this_00,local_res10,pFVar1);
    if (pFVar2 != (FMetasoundParameterPackItem<float,0> *)0x0) {
      return &pFVar2->Value;
    }
  }
  return (float *)0x0;
}

// GetInt @ 14af9b300

int __thiscall
UMetasoundParameterPack::GetInt
          (UMetasoundParameterPack *this,FName param_1,ESetParamResult *param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<int,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<int,0>(this_00,local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<int,0> *)0x0) && (&pFVar2->Value != (int *)0x0)) {
      *param_2 = Succeeded;
      return pFVar2->Value;
    }
  }
  *param_2 = Failed;
  return 0;
}

// GetIntParameterPtr @ 14af9b370

int * __thiscall
UMetasoundParameterPack::GetIntParameterPtr(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<int,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<int,0>(this_00,local_res10,pFVar1);
    if (pFVar2 != (FMetasoundParameterPackItem<int,0> *)0x0) {
      return &pFVar2->Value;
    }
  }
  return (int *)0x0;
}

// GetParameterStorage @ 14afa6be0

TSharedPtr<FMetasoundParameterPackStorage,1> * __thiscall
UMetasoundParameterPack::GetParameterStorage
          (UMetasoundParameterPack *this,
          TSharedPtr<FMetasoundParameterPackStorage,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ParameterStorage).Object;
  pTVar1 = (this->ParameterStorage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14afa6c10

UClass * __cdecl UMetasoundParameterPack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetasoundParameterPack",
               &Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton,
               StaticRegisterNativesUMetasoundParameterPack,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetasoundParameterPack>,
               InternalVTableHelperCtorCaller<UMetasoundParameterPack>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundParameterPack.InnerSingleton;
}

// GetString @ 14afa8200

FString * __thiscall
UMetasoundParameterPack::GetString
          (UMetasoundParameterPack *this,FString *__return_storage_ptr__,FName param_1,
          ESetParamResult *param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<FString,0> *pFVar2;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<FString,0>(this_00,local_res18,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<FString,0> *)0x0) &&
       (&pFVar2->Value != (FString *)0x0)) {
      *param_2 = Succeeded;
      ::FString::FString(__return_storage_ptr__,&pFVar2->Value);
      return __return_storage_ptr__;
    }
  }
  *param_2 = Failed;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStringParameterPtr @ 14afa8290

FString * __thiscall
UMetasoundParameterPack::GetStringParameterPtr(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<FString,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<FString,0>(this_00,local_res10,pFVar1);
    if (pFVar2 != (FMetasoundParameterPackItem<FString,0> *)0x0) {
      return &pFVar2->Value;
    }
  }
  return (FString *)0x0;
}

// GetTrigger @ 14afa82e0

bool __thiscall
UMetasoundParameterPack::GetTrigger
          (UMetasoundParameterPack *this,FName param_1,ESetParamResult *param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar2->Value != (bool *)0x0)) {
      *param_2 = Succeeded;
      return pFVar2->Value;
    }
  }
  *param_2 = Failed;
  return false;
}

// GetTriggerParameterPtr @ 14afa8350

bool * __thiscall
UMetasoundParameterPack::GetTriggerParameterPtr(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
    if (pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) {
      return &pFVar2->Value;
    }
  }
  return (bool *)0x0;
}

// HasBool @ 14afa9b00

bool __thiscall UMetasoundParameterPack::HasBool(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 == (FMetasoundParameterPackStorage *)0x0) {
    return false;
  }
  pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
  return pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0;
}

// HasFloat @ 14afa9b50

bool __thiscall UMetasoundParameterPack::HasFloat(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<float,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 == (FMetasoundParameterPackStorage *)0x0) {
    return false;
  }
  pFVar2 = FMetasoundParameterPackStorage::FindParameter<float,0>(this_00,local_res10,pFVar1);
  return pFVar2 != (FMetasoundParameterPackItem<float,0> *)0x0;
}

// HasInt @ 14afa9ba0

bool __thiscall UMetasoundParameterPack::HasInt(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<int,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 == (FMetasoundParameterPackStorage *)0x0) {
    return false;
  }
  pFVar2 = FMetasoundParameterPackStorage::FindParameter<int,0>(this_00,local_res10,pFVar1);
  return pFVar2 != (FMetasoundParameterPackItem<int,0> *)0x0;
}

// HasString @ 14afa9bf0

bool __thiscall UMetasoundParameterPack::HasString(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<FString,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 == (FMetasoundParameterPackStorage *)0x0) {
    return false;
  }
  pFVar2 = FMetasoundParameterPackStorage::FindParameter<FString,0>(this_00,local_res10,pFVar1);
  return pFVar2 != (FMetasoundParameterPackItem<FString,0> *)0x0;
}

// HasTrigger @ 14afa9c40

bool __thiscall UMetasoundParameterPack::HasTrigger(UMetasoundParameterPack *this,FName param_1)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 == (FMetasoundParameterPackStorage *)0x0) {
    return false;
  }
  pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,local_res10,pFVar1);
  return pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0;
}

// MakeMetasoundParameterPack @ 14afb0490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetasoundParameterPack * __cdecl UMetasoundParameterPack::MakeMetasoundParameterPack(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMetasoundParameterPack *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMetasoundParameterPack *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// SetBool @ 14afbd630

ESetParamResult __thiscall
UMetasoundParameterPack::SetBool
          (UMetasoundParameterPack *this,FName param_1,bool param_2,bool param_3)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  FName local_res10;
  bool local_res18 [16];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,&local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar2->Value != (bool *)0x0)) {
      pFVar2->Value = param_2;
      return Succeeded;
    }
  }
  if (!param_3) {
    AddParameter<bool>(this,&local_res10,pFVar1,local_res18);
    return Succeeded;
  }
  return Failed;
}

// SetFloat @ 14afbd8d0

ESetParamResult __thiscall
UMetasoundParameterPack::SetFloat
          (UMetasoundParameterPack *this,FName param_1,float param_2,bool param_3)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<float,0> *pFVar2;
  FName local_res10;
  float local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  this_00 = (this->ParameterStorage).Object;
  if (((this_00 != (FMetasoundParameterPackStorage *)0x0) &&
      (pFVar2 = FMetasoundParameterPackStorage::FindParameter<float,0>(this_00,&local_res10,pFVar1),
      pFVar2 != (FMetasoundParameterPackItem<float,0> *)0x0)) && (&pFVar2->Value != (float *)0x0)) {
    pFVar2->Value = param_2;
    return Succeeded;
  }
  if (!param_3) {
    AddParameter<float>(this,&local_res10,pFVar1,local_res18);
  }
  return param_3;
}

// SetInt @ 14afbd970

ESetParamResult __thiscall
UMetasoundParameterPack::SetInt
          (UMetasoundParameterPack *this,FName param_1,int param_2,bool param_3)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<int,0> *pFVar2;
  FName local_res10;
  int local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<int,0>(this_00,&local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<int,0> *)0x0) && (&pFVar2->Value != (int *)0x0)) {
      pFVar2->Value = param_2;
      return Succeeded;
    }
  }
  if (!param_3) {
    AddParameter<int>(this,&local_res10,pFVar1,local_res18);
    return Succeeded;
  }
  return Failed;
}

// SetString @ 14afbe100

ESetParamResult __thiscall
UMetasoundParameterPack::SetString
          (UMetasoundParameterPack *this,FName param_1,FString *param_2,bool param_3)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<FString,0> *pFVar2;
  FName local_res10;
  
  local_res10 = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  this_00 = (this->ParameterStorage).Object;
  if (((this_00 != (FMetasoundParameterPackStorage *)0x0) &&
      (pFVar2 = FMetasoundParameterPackStorage::FindParameter<FString,0>
                          (this_00,&local_res10,pFVar1),
      pFVar2 != (FMetasoundParameterPackItem<FString,0> *)0x0)) &&
     (&pFVar2->Value != (FString *)0x0)) {
    ::FString::operator=(&pFVar2->Value,param_2);
    return Succeeded;
  }
  if (!param_3) {
    AddParameter<FString>(this,&local_res10,pFVar1,param_2);
  }
  return param_3;
}

// SetTrigger @ 14afbe1a0

ESetParamResult __thiscall
UMetasoundParameterPack::SetTrigger(UMetasoundParameterPack *this,FName param_1,bool param_2)

{
  FMetasoundParameterPackStorage *this_00;
  FName *pFVar1;
  FMetasoundParameterPackItem<bool,0> *pFVar2;
  bool local_res8 [8];
  FName local_res10;
  
  local_res8[0] = true;
  local_res10 = param_1;
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  this_00 = (this->ParameterStorage).Object;
  if (this_00 != (FMetasoundParameterPackStorage *)0x0) {
    pFVar2 = FMetasoundParameterPackStorage::FindParameter<bool,0>(this_00,&local_res10,pFVar1);
    if ((pFVar2 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar2->Value != (bool *)0x0)) {
      pFVar2->Value = true;
      return Succeeded;
    }
  }
  if (!param_2) {
    AddParameter<bool>(this,&local_res10,pFVar1,local_res8);
    return Succeeded;
  }
  return Failed;
}

// StaticRegisterNativesUMetasoundParameterPack @ 14afbf260

void __cdecl UMetasoundParameterPack::StaticRegisterNativesUMetasoundParameterPack(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UMetasoundParameterPack_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBool @ 14afc0a00

void __cdecl UMetasoundParameterPack::execGetBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_res18,pFVar2
                       );
    if ((pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar3->Value != (bool *)0x0)) {
      *puVar4 = '\0';
      *(bool *)param_3 = pFVar3->Value;
      return;
    }
  }
  *puVar4 = '\x01';
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetFloat @ 14afc0b20

void __cdecl UMetasoundParameterPack::execGetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<float,0> *pFVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<float>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<float,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_res18,pFVar2
                       );
    if ((pFVar3 != (FMetasoundParameterPackItem<float,0> *)0x0) && (&pFVar3->Value != (float *)0x0))
    {
      *puVar4 = '\0';
      *(float *)param_3 = pFVar3->Value;
      return;
    }
  }
  *puVar4 = '\x01';
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInt @ 14afc0c40

void __cdecl UMetasoundParameterPack::execGetInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<int,0> *pFVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<int>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<int,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_res18,pFVar2
                       );
    if ((pFVar3 != (FMetasoundParameterPackItem<int,0> *)0x0) && (&pFVar3->Value != (int *)0x0)) {
      *puVar4 = '\0';
      *(int *)param_3 = pFVar3->Value;
      return;
    }
  }
  *puVar4 = '\x01';
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetString @ 14afc0d60

void __cdecl UMetasoundParameterPack::execGetString(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  FName *pFVar3;
  FMetasoundParameterPackItem<FString,0> *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
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
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = Metasound::GetMetasoundDataTypeName<FString>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar4 = FMetasoundParameterPackStorage::FindParameter<FString,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res18,
                        pFVar3);
    if ((pFVar4 != (FMetasoundParameterPackItem<FString,0> *)0x0) &&
       (&pFVar4->Value != (FString *)0x0)) {
      *puVar5 = '\0';
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar4->Value).Data.ArrayNum;
      _Src = (pFVar4->Value).Data.AllocatorInstance.Data;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      if (iVar1 == 0) {
        local_30 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
        memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_14afc0eb6;
    }
  }
  *puVar5 = '\x01';
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
LAB_14afc0eb6:
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_30;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetTrigger @ 14afc0f20

void __cdecl UMetasoundParameterPack::execGetTrigger(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_res18,pFVar2
                       );
    if ((pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar3->Value != (bool *)0x0)) {
      *puVar4 = '\0';
      *(bool *)param_3 = pFVar3->Value;
      return;
    }
  }
  *puVar4 = '\x01';
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasBool @ 14afc1040

void __cdecl UMetasoundParameterPack::execHasBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 ==
      (FMetasoundParameterPackStorage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                     (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res10,pFVar2)
  ;
  *(bool *)param_3 = pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0;
  return;
}

// execHasFloat @ 14afc1100

void __cdecl UMetasoundParameterPack::execHasFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<float,0> *pFVar3;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<float>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 ==
      (FMetasoundParameterPackStorage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FMetasoundParameterPackStorage::FindParameter<float,0>
                     (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res10,pFVar2)
  ;
  *(bool *)param_3 = pFVar3 != (FMetasoundParameterPackItem<float,0> *)0x0;
  return;
}

// execHasInt @ 14afc11c0

void __cdecl UMetasoundParameterPack::execHasInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<int,0> *pFVar3;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<int>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 ==
      (FMetasoundParameterPackStorage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FMetasoundParameterPackStorage::FindParameter<int,0>
                     (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res10,pFVar2)
  ;
  *(bool *)param_3 = pFVar3 != (FMetasoundParameterPackItem<int,0> *)0x0;
  return;
}

// execHasString @ 14afc1280

void __cdecl UMetasoundParameterPack::execHasString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<FString,0> *pFVar3;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<FString>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 ==
      (FMetasoundParameterPackStorage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FMetasoundParameterPackStorage::FindParameter<FString,0>
                     (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res10,pFVar2)
  ;
  *(bool *)param_3 = pFVar3 != (FMetasoundParameterPackItem<FString,0> *)0x0;
  return;
}

// execHasTrigger @ 14afc1340

void __cdecl UMetasoundParameterPack::execHasTrigger(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 ==
      (FMetasoundParameterPackStorage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                     (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res10,pFVar2)
  ;
  *(bool *)param_3 = pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0;
  return;
}

// execMakeMetasoundParameterPack @ 14afc1400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMetasoundParameterPack::execMakeMetasoundParameterPack
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execSetBool @ 14afc14c0

void __cdecl UMetasoundParameterPack::execSetBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  bool bVar4;
  bool bVar5;
  bool local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FName local_48 [3];
  
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
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] == 0;
  local_48[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8[0] = bVar4;
  pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_48,pFVar2);
    if ((pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar3->Value != (bool *)0x0)) {
      pFVar3->Value = bVar4;
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  if (bVar5) {
    AddParameter<bool>((UMetasoundParameterPack *)param_1,local_48,pFVar2,local_res8);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetFloat @ 14afc1660

void __cdecl UMetasoundParameterPack::execSetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName *pFVar3;
  FMetasoundParameterPackItem<float,0> *pFVar4;
  bool bVar5;
  int local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  FName local_48 [4];
  
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
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar2 = local_res10[0];
  bVar5 = local_res8[0] == 0;
  local_res18[0] = local_res10[0];
  local_48[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = Metasound::GetMetasoundDataTypeName<float>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar4 = FMetasoundParameterPackStorage::FindParameter<float,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_48,pFVar3);
    if ((pFVar4 != (FMetasoundParameterPackItem<float,0> *)0x0) && (&pFVar4->Value != (float *)0x0))
    {
      pFVar4->Value = fVar2;
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  if (bVar5) {
    AddParameter<float>((UMetasoundParameterPack *)param_1,local_48,pFVar3,local_res18);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetInt @ 14afc1810

void __cdecl UMetasoundParameterPack::execSetInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  FMetasoundParameterPackItem<int,0> *pFVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FName local_38 [2];
  
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res10[0];
  bVar5 = local_res8[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  local_38[0] = local_res20;
  pFVar3 = Metasound::GetMetasoundDataTypeName<int>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar4 = FMetasoundParameterPackStorage::FindParameter<int,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,local_38,pFVar3);
    if ((pFVar4 != (FMetasoundParameterPackItem<int,0> *)0x0) && (&pFVar4->Value != (int *)0x0)) {
      pFVar4->Value = iVar2;
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  if (bVar5) {
    AddParameter<int>((UMetasoundParameterPack *)param_1,local_38,pFVar3,local_res18);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetString @ 14afc1990

void __cdecl UMetasoundParameterPack::execSetString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FProperty *pFVar4;
  ForAnyElementType _Src;
  int iVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FMetasoundParameterPackItem<FString,0> *pFVar8;
  longlong lVar9;
  bool bVar10;
  int local_res8 [2];
  FName local_res10;
  FName local_res18;
  FString local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar10 = local_res8[0] == 0;
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = Metasound::GetMetasoundDataTypeName<FString>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar8 = FMetasoundParameterPackStorage::FindParameter<FString,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res18,
                        pFVar7);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    if ((pFVar8 != (FMetasoundParameterPackItem<FString,0> *)0x0) &&
       (pFVar1 = &pFVar8->Value, pFVar1 != (FString *)0x0)) {
      if (pFVar1 != &local_38) {
        iVar5 = local_38.Data.ArrayNum;
        lVar9 = (longlong)local_38.Data.ArrayNum;
        piVar2 = &(pFVar8->Value).Data.ArrayMax;
        iVar3 = *piVar2;
        (pFVar8->Value).Data.ArrayNum = local_38.Data.ArrayNum;
        if ((local_38.Data.ArrayNum == 0) && (iVar3 == 0)) {
          *piVar2 = 0;
          uVar6 = 0;
          goto LAB_14afc1b6a;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar1,
                   local_38.Data.ArrayNum,piVar2);
        if (iVar5 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,lVar9 * 2);
        }
      }
      uVar6 = 0;
      goto LAB_14afc1b6a;
    }
  }
  if (bVar10) {
    AddParameter<FString>((UMetasoundParameterPack *)param_1,&local_res18,pFVar7,&local_38);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
LAB_14afc1b6a:
  *(undefined1 *)param_3 = uVar6;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTrigger @ 14afc1ba0

void __cdecl UMetasoundParameterPack::execSetTrigger(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FMetasoundParameterPackItem<bool,0> *pFVar3;
  bool bVar4;
  bool local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
  bVar4 = local_res10[0] == 0;
  local_res8[0] = true;
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  if (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8 !=
      (FMetasoundParameterPackStorage *)0x0) {
    pFVar3 = FMetasoundParameterPackStorage::FindParameter<bool,0>
                       (*(FMetasoundParameterPackStorage **)&param_1[1].field_0x8,&local_res20,
                        pFVar2);
    if ((pFVar3 != (FMetasoundParameterPackItem<bool,0> *)0x0) && (&pFVar3->Value != (bool *)0x0)) {
      pFVar3->Value = true;
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  if (bVar4) {
    AddParameter<bool>((UMetasoundParameterPack *)param_1,&local_res20,pFVar2,local_res8);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

