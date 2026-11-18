// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 24

// GetMovieName @ 146c7cb80

FString * __thiscall
FNullGameMoviePlayer::GetMovieName(FNullGameMoviePlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// HasEarlyStartupMovie @ 146c7d360

bool __thiscall FNullGameMoviePlayer::HasEarlyStartupMovie(FNullGameMoviePlayer *this)

{
  return false;
}

// Initialize @ 146c7ee30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FNullGameMoviePlayer::Initialize
          (FNullGameMoviePlayer *this,FSlateRenderer *param_1,TSharedPtr<SWindow,1> *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// IsInitialized @ 146c7ef50

bool __thiscall FNullGameMoviePlayer::IsInitialized(FNullGameMoviePlayer *this)

{
  return false;
}

// IsLastMovieInPlaylist @ 146c7ef80

bool __thiscall FNullGameMoviePlayer::IsLastMovieInPlaylist(FNullGameMoviePlayer *this)

{
  return false;
}

// IsLoadingFinished @ 146c7efb0

bool __thiscall FNullGameMoviePlayer::IsLoadingFinished(FNullGameMoviePlayer *this)

{
  return true;
}

// IsMovieCurrentlyPlaying @ 146c7efe0

bool __thiscall FNullGameMoviePlayer::IsMovieCurrentlyPlaying(FNullGameMoviePlayer *this)

{
  return false;
}

// LoadingScreenIsPrepared @ 146c7f2a0

bool __thiscall FNullGameMoviePlayer::LoadingScreenIsPrepared(FNullGameMoviePlayer *this)

{
  return false;
}

// OnMovieClipFinished @ 146c7f6d0

FOnMovieClipFinished * __thiscall
FNullGameMoviePlayer::OnMovieClipFinished(FNullGameMoviePlayer *this)

{
  return &this->OnMovieClipFinishedDelegate;
}

// OnMoviePlaybackFinished @ 146c7f6f0

FOnMoviePlaybackFinished * __thiscall
FNullGameMoviePlayer::OnMoviePlaybackFinished(FNullGameMoviePlayer *this)

{
  return &this->OnMoviePlaybackFinishedDelegate;
}

// OnMoviePlaybackStarted @ 146c7f710

FOnMoviePlaybackStarted * __thiscall
FNullGameMoviePlayer::OnMoviePlaybackStarted(FNullGameMoviePlayer *this)

{
  return &this->OnMoviePlaybackStartedDelegate;
}

// OnMoviePlaybackTick @ 146c7f730

FOnMoviePlaybackTick * __thiscall
FNullGameMoviePlayer::OnMoviePlaybackTick(FNullGameMoviePlayer *this)

{
  return &this->OnMoviePlaybackTickDelegate;
}

// OnPrepareLoadingScreen @ 146c7f840

FOnPrepareLoadingScreen * __thiscall
FNullGameMoviePlayer::OnPrepareLoadingScreen(FNullGameMoviePlayer *this)

{
  return &this->OnPrepareLoadingScreenDelegate;
}

// PassLoadingScreenWindowBackToGame @ 146c7f940

void __thiscall FNullGameMoviePlayer::PassLoadingScreenWindowBackToGame(FNullGameMoviePlayer *this)

{
  return;
}

// PlayEarlyStartupMovies @ 146c7f980

bool __thiscall FNullGameMoviePlayer::PlayEarlyStartupMovies(FNullGameMoviePlayer *this)

{
  return false;
}

// PlayMovie @ 146c800c0

bool __thiscall FNullGameMoviePlayer::PlayMovie(FNullGameMoviePlayer *this)

{
  return false;
}

// RegisterMovieStreamer @ 146c80250

void __thiscall
FNullGameMoviePlayer::RegisterMovieStreamer
          (FNullGameMoviePlayer *this,TSharedPtr<IMovieStreamer,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSlateOverlayWidget @ 146c80420

void __thiscall
FNullGameMoviePlayer::SetSlateOverlayWidget
          (FNullGameMoviePlayer *this,TSharedPtr<SWidget,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetupLoadingScreen @ 146c806c0

void __thiscall
FNullGameMoviePlayer::SetupLoadingScreen
          (FNullGameMoviePlayer *this,FLoadingScreenAttributes *param_1)

{
  return;
}

// SetupLoadingScreenFromIni @ 146c80b20

void __thiscall FNullGameMoviePlayer::SetupLoadingScreenFromIni(FNullGameMoviePlayer *this)

{
  return;
}

// Shutdown @ 146c80fa0

void __thiscall FNullGameMoviePlayer::Shutdown(FNullGameMoviePlayer *this)

{
  return;
}

// StopMovie @ 146c81340

void __thiscall FNullGameMoviePlayer::StopMovie(FNullGameMoviePlayer *this)

{
  return;
}

// WaitForMovieToFinish @ 146c82070

void __thiscall FNullGameMoviePlayer::WaitForMovieToFinish(FNullGameMoviePlayer *this,bool param_1)

{
  return;
}

// WillAutoCompleteWhenLoadFinishes @ 146c820c0

bool __thiscall FNullGameMoviePlayer::WillAutoCompleteWhenLoadFinishes(FNullGameMoviePlayer *this)

{
  return false;
}

