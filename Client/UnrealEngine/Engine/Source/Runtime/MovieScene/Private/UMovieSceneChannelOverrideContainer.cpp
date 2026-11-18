// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticClass @ 146067340

UClass * __cdecl UMovieSceneChannelOverrideContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOverrideContainer",
               &Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOverrideContainer,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOverrideContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton;
}

// UMovieSceneChannelOverrideContainer @ 146094d90

UMovieSceneChannelOverrideContainer * __thiscall
UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
          (UMovieSceneChannelOverrideContainer *this,FVTableHelper *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOverrideContainer__6B_;
  return this;
}

// UMovieSceneChannelOverrideContainer @ 146094dc0

UMovieSceneChannelOverrideContainer * __thiscall
UMovieSceneChannelOverrideContainer::UMovieSceneChannelOverrideContainer
          (UMovieSceneChannelOverrideContainer *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOverrideContainer__6B_;
  return this;
}

// ~UMovieSceneChannelOverrideContainer @ 1460982e0

void __thiscall
UMovieSceneChannelOverrideContainer::~UMovieSceneChannelOverrideContainer
          (UMovieSceneChannelOverrideContainer *this)

{
  *(undefined ***)this = &___7UMovieSceneChannelOverrideContainer__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  return;
}

// AddChannelProxy @ 1460a6410

void __thiscall
UMovieSceneChannelOverrideContainer::AddChannelProxy
          (UMovieSceneChannelOverrideContainer *this,FName param_1,
          FMovieSceneChannelProxyData *param_2)

{
  return;
}

// GetChannel @ 1460c9430

FMovieSceneChannel * __thiscall
UMovieSceneChannelOverrideContainer::GetChannel(UMovieSceneChannelOverrideContainer *this)

{
  return (FMovieSceneChannel *)0x0;
}

// GetChannel @ 1460c9440

FMovieSceneChannel * __thiscall
UMovieSceneChannelOverrideContainer::GetChannel(UMovieSceneChannelOverrideContainer *this)

{
  return (FMovieSceneChannel *)0x0;
}

// GetOverrideCandidates @ 1460ce830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMovieSceneChannelOverrideContainer::GetOverrideCandidates
          (FName param_1,
          TArray<TSubclassOf<UMovieSceneChannelOverrideContainer>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  UObject *pUVar2;
  ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_> FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_> FVar11;
  longlong lVar12;
  uint uVar13;
  FUObjectCppClassStaticFunctions local_res18;
  UObject *local_48;
  TObjectIterator<UClass> local_40;
  
  local_40.Index = 0xffffffff;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar10,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  do {
    lVar12 = (longlong)local_40.Index;
    if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) {
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar13 = 0;
    uVar8 = uVar13;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_40.Index >> 0x1f;
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
    lVar12 = *(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    iVar9 = local_40.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton ==
        (UClass *)0x0) {
      local_res18.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/MovieScene",L"MovieSceneChannelOverrideContainer",
                 &Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton,
                 StaticRegisterNativesUMovieSceneChannelOverrideContainer,0x60,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UMovieSceneChannelOverrideContainer>,
                 InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer>,&local_res18,
                 UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
      iVar9 = local_40.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton !=
          (UClass *)0x0) goto LAB_1460ce9c8;
    }
    else {
LAB_1460ce9c8:
      iVar1 = (int)(Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton)->
                   _padding_;
      if ((*(int *)(lVar12 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton)->
           _padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar12 = (longlong)local_40.Index;
        uVar8 = uVar13;
        if (local_40.Index < iVar9) {
          uVar8 = (uint)~local_40.Index >> 0x1f;
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
          iVar9 = local_40.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                      0xd4) & 0x82000001) == 0) {
          lVar12 = (longlong)local_40.Index;
          if (local_40.Index < iVar9) {
            uVar13 = (uint)~local_40.Index >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar10 = *(UClass **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
          if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar10);
          }
          pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar10 = StaticClass();
          iVar9 = (int)pUVar10->_padding_;
          if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
               &pUVar10->_padding_)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar6 = (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,param_1);
          if (cVar6 != '\0') {
            lVar12 = (longlong)local_40.Index;
            uVar8 = 0;
            if (local_40.Index < local_40.ObjectArray.ArrayNum) {
              uVar8 = (uint)~local_40.Index >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_48 = *(UObject **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_48);
            }
            FVar3 = (param_2->AllocatorInstance).SecondaryData;
            FVar11 = (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)param_2;
            if (FVar3 != (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)0x0) {
              FVar11 = FVar3;
            }
            if ((ulonglong)FVar11 <= &local_48) {
              FVar11 = (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)param_2;
              if (FVar3 != (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)0x0) {
                FVar11 = FVar3;
              }
              if ((&local_48 < (UObject **)((longlong)FVar11 + (longlong)param_2->ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>_>
                                (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            FVar3 = (param_2->AllocatorInstance).SecondaryData;
            FVar11 = (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)param_2;
            if (FVar3 != (ForElementType<TSubclassOf<UMovieSceneChannelOverrideContainer>_>)0x0) {
              FVar11 = FVar3;
            }
            *(UObject **)((longlong)FVar11 + (longlong)iVar9 * 8) = local_48;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_48);
            }
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_40);
  } while( true );
}

// GetPrivateStaticClass @ 1460cf3d0

UClass * __cdecl UMovieSceneChannelOverrideContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOverrideContainer",
               &Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOverrideContainer,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOverrideContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton;
}

// ImportEntityImpl @ 1460d1dc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneChannelOverrideContainer::ImportEntityImpl
          (UMovieSceneChannelOverrideContainer *this,FChannelOverrideEntityImportParams *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  return;
}

// InitializeOverride @ 1460d5ff0

void __thiscall
UMovieSceneChannelOverrideContainer::InitializeOverride
          (UMovieSceneChannelOverrideContainer *this,FMovieSceneChannel *param_1)

{
  return;
}

// StaticRegisterNativesUMovieSceneChannelOverrideContainer @ 1460fa1e0

void __cdecl
UMovieSceneChannelOverrideContainer::StaticRegisterNativesUMovieSceneChannelOverrideContainer(void)

{
  return;
}

// SupportsOverride @ 1460fa340

bool __thiscall
UMovieSceneChannelOverrideContainer::SupportsOverride
          (UMovieSceneChannelOverrideContainer *this,FName param_1)

{
  return false;
}

