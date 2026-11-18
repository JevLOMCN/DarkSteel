// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147269e20

UClass * __cdecl UBookmarkBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookmarkBase",
               &Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton,
               StaticRegisterNativesUBookmarkBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBookmarkBase>,
               InternalVTableHelperCtorCaller<UBookmarkBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton;
}

// UBookmarkBase @ 14726ca00

UBookmarkBase * __thiscall UBookmarkBase::UBookmarkBase(UBookmarkBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBookmarkBase__6B_;
  return this;
}

// UBookmarkBase @ 14726ca30

UBookmarkBase * __thiscall
UBookmarkBase::UBookmarkBase(UBookmarkBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBookmarkBase__6B_;
  return this;
}

// ~UBookmarkBase @ 14726d2c0

void __thiscall UBookmarkBase::~UBookmarkBase(UBookmarkBase *this)

{
  *(undefined ***)this = &___7UBookmarkBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726efe0

UClass * __cdecl UBookmarkBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookmarkBase",
               &Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton,
               StaticRegisterNativesUBookmarkBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBookmarkBase>,
               InternalVTableHelperCtorCaller<UBookmarkBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookmarkBase.InnerSingleton;
}

// OnCleared @ 147270590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBookmarkBase::OnCleared(UBookmarkBase *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRooted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0xb8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  do {
    lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((uVar5 >> 0x15 & 1) != 0) break;
    if (((ulonglong)pFVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (pFVar4->field0_0x0).FlagsAndRefCount =
           (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
    }
    UNLOCK();
  } while (!bVar3);
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  FUObjectItem::ClearRootFlags(pFVar4,Async);
  return;
}

// StaticRegisterNativesUBookmarkBase @ 147270970

void __cdecl UBookmarkBase::StaticRegisterNativesUBookmarkBase(void)

{
  return;
}

