// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// StaticClass @ 146063c80

UClass * __cdecl UMovieSceneDecorationContainerObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDecorationContainerObject",
               &Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecorationContainerObject,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDecorationContainerObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecorationContainerObject>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton;
}

// FindDecoration<UMovieSceneTimeWarpDecoration> @ 146075f80

UMovieSceneTimeWarpDecoration * __thiscall
UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneTimeWarpDecoration>
          (UMovieSceneDecorationContainerObject *this)

{
  int iVar1;
  UMovieSceneTimeWarpDecoration *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  FString local_28;
  FString local_18;
  
  local_res8.DebugPtr = UMovieSceneTimeWarpDecoration::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pUVar2 = (UMovieSceneTimeWarpDecoration *)
           FMovieSceneDecorationContainer::FindDecoration
                     (&this->Decorations,(TSubclassOf<UObject> *)&local_res8.ObjectPtr);
  if (pUVar2 == (UMovieSceneTimeWarpDecoration *)0x0) {
    pUVar2 = (UMovieSceneTimeWarpDecoration *)0x0;
  }
  else {
    pUVar3 = UMovieSceneTimeWarpDecoration::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneTimeWarpDecoration>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// UMovieSceneDecorationContainerObject @ 146095570

UMovieSceneDecorationContainerObject * __thiscall
UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
          (UMovieSceneDecorationContainerObject *this,FVTableHelper *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
  (this->Decorations).Decorations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Decorations).Decorations.ArrayNum = 0;
  (this->Decorations).Decorations.ArrayMax = 0;
  return this;
}

// UMovieSceneDecorationContainerObject @ 1460955b0

UMovieSceneDecorationContainerObject * __thiscall
UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
          (UMovieSceneDecorationContainerObject *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
  (this->Decorations).Decorations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Decorations).Decorations.ArrayNum = 0;
  (this->Decorations).Decorations.ArrayMax = 0;
  return this;
}

// ~UMovieSceneDecorationContainerObject @ 1460984d0

void __thiscall
UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
          (UMovieSceneDecorationContainerObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
  pFVar1 = (this->Decorations).Decorations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  return;
}

// AddDecoration @ 1460a6a60

void __thiscall
UMovieSceneDecorationContainerObject::AddDecoration
          (UMovieSceneDecorationContainerObject *this,UObject *param_1)

{
  UMovieSceneDecorationContainerObject *local_res8 [4];
  code *local_18;
  UMovieSceneDecorationContainerObject **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMovieSceneDecorationContainerObject::AddDecoration'::__l2::<lambda_1>,void,UObject_*>
             ::Call;
  local_res8[0] = this;
  FMovieSceneDecorationContainer::AddDecoration
            (&this->Decorations,param_1,(UObject *)this,
             (TFunctionRef<void___cdecl(UObject_*)> *)&local_18);
  return;
}

// GetCompatibleUserDecorationsImpl @ 1460c9580

void __thiscall
UMovieSceneDecorationContainerObject::GetCompatibleUserDecorationsImpl
          (UMovieSceneDecorationContainerObject *this,
          TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// GetOrCreateDecoration @ 1460ce7b0

UObject * __thiscall
UMovieSceneDecorationContainerObject::GetOrCreateDecoration
          (UMovieSceneDecorationContainerObject *this,TSubclassOf<UObject> *param_1)

{
  UObject *pUVar1;
  UMovieSceneDecorationContainerObject *local_res8 [4];
  code *local_18;
  UMovieSceneDecorationContainerObject **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMovieSceneDecorationContainerObject::GetOrCreateDecoration'::__l2::<lambda_1>,void,UObject_*>
             ::Call;
  local_res8[0] = this;
  pUVar1 = FMovieSceneDecorationContainer::GetOrCreateDecoration
                     (&this->Decorations,param_1,(UObject *)this,
                      (TFunctionRef<void___cdecl(UObject_*)> *)&local_18);
  return pUVar1;
}

// GetPrivateStaticClass @ 1460cf6b0

UClass * __cdecl UMovieSceneDecorationContainerObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDecorationContainerObject",
               &Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecorationContainerObject,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDecorationContainerObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecorationContainerObject>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton;
}

// OnDecorationAdded @ 1460dadb0

void __thiscall
UMovieSceneDecorationContainerObject::OnDecorationAdded
          (UMovieSceneDecorationContainerObject *this,UObject *param_1)

{
  return;
}

// OnDecorationRemoved @ 1460daf50

void __thiscall
UMovieSceneDecorationContainerObject::OnDecorationRemoved
          (UMovieSceneDecorationContainerObject *this,UObject *param_1)

{
  return;
}

// RemoveDecoration @ 1460e8630

void __thiscall
UMovieSceneDecorationContainerObject::RemoveDecoration
          (UMovieSceneDecorationContainerObject *this,TSubclassOf<UObject> *param_1)

{
  UMovieSceneDecorationContainerObject *local_res8 [4];
  code *local_18;
  UMovieSceneDecorationContainerObject **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMovieSceneDecorationContainerObject::RemoveDecoration'::__l2::<lambda_1>,void,UObject_*>
             ::Call;
  local_res8[0] = this;
  FMovieSceneDecorationContainer::RemoveDecoration
            (&this->Decorations,param_1,(TFunctionRef<void___cdecl(UObject_*)> *)&local_18);
  return;
}

// Serialize @ 1460f3db0

void __thiscall
UMovieSceneDecorationContainerObject::Serialize
          (UMovieSceneDecorationContainerObject *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong local_38 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  pFVar2 = (this->Decorations).Decorations.AllocatorInstance.Data;
  local_38[0] = 0;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->Decorations).Decorations.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Decorations).Decorations.ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Decorations).Decorations.AllocatorInstance.Data;
    bVar4 = *(longlong *)pFVar2 != local_38[0];
    lVar6 = 0;
    lVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(longlong *)(pFVar2 + lVar6 * 8) != lVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          lVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Decorations).Decorations.ArrayNum = iVar9;
  }
  return;
}

// Serialize @ 1460f3f30

void __thiscall
UMovieSceneDecorationContainerObject::Serialize
          (UMovieSceneDecorationContainerObject *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FSlotBase local_res8;
  longlong local_38 [2];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar5);
  pFVar2 = (this->Decorations).Decorations.AllocatorInstance.Data;
  local_38[0] = 0;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->Decorations).Decorations.ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Decorations).Decorations.ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->Decorations).Decorations.AllocatorInstance.Data;
    bVar4 = *(longlong *)pFVar2 != local_38[0];
    lVar7 = 0;
    lVar6 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(longlong *)(pFVar2 + lVar7 * 8) != lVar6));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          lVar6 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->Decorations).Decorations.ArrayNum = iVar10;
  }
  return;
}

// StaticRegisterNativesUMovieSceneDecorationContainerObject @ 1460fa250

void __cdecl
UMovieSceneDecorationContainerObject::StaticRegisterNativesUMovieSceneDecorationContainerObject
          (void)

{
  return;
}

